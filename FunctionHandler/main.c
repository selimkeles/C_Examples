#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include "trk_message.h"
#include <syslog.h>
#include <signal.h>

void myFunction(union sigval sv) {
    trk_Message(msg_1msTimer, NULL, msg_ProcessInstant);
}

void init_log()
{
    setlogmask(LOG_UPTO(LOG_NOTICE));
    openlog("testd",LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
}

unsigned long denemefunc () {
  syslog(LOG_NOTICE, "Merhaba!!");
  return msg_ProcessAfter2s;
}

unsigned long denemefunc2 () {
  syslog(LOG_NOTICE, "Merhaba2!!");
  return msg_ProcessAfter1s;
}

int main (int argc, char* argv[]) {
  init_log();

  struct sigevent sev;
  timer_t timerid;
  struct itimerspec its;

  // Set up the timer event
  sev.sigev_notify = SIGEV_THREAD;
  sev.sigev_notify_function = myFunction;
  sev.sigev_value.sival_ptr = NULL;

  // Create the timer
  if (timer_create(CLOCK_MONOTONIC, &sev, &timerid) == -1) {
      perror("timer_create");
      exit(EXIT_FAILURE);
  }

  // Set the timer interval to 1 millisecond
  its.it_value.tv_sec = 0;
  its.it_value.tv_nsec = 1000000; // 1 millisecond
  its.it_interval = its.it_value;

  // Start the timer
  if (timer_settime(timerid, 0, &its, NULL) == -1) {
      perror("timer_settime");
      exit(EXIT_FAILURE);
  }

  trk_MessageInit();
  trk_PushMessage2secNullUserData(&denemefunc);
  trk_PushMessage1secNullUserData(&denemefunc2);
  trk_Message(msg_ProcessMessages, NULL, msg_ProcessForever);
  
  timer_delete(timerid);
  closelog();

  return 1;
}