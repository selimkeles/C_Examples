#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int x = 0;
pthread_mutex_t mutex;

void *routine() {
  for (int i = 0; i < 1000000; i++)
  {
    pthread_mutex_lock(&mutex);
    x++;
    pthread_mutex_unlock(&mutex);
  }
}
void *routine2() {
  for (int i = 0; i < 1000000; i++)
  {
    pthread_mutex_lock(&mutex);
    x++;
    pthread_mutex_unlock(&mutex);
  }
}

int main (int argc, char* argv[]) {
  pthread_t t1, t2;
  pthread_mutex_init(&mutex, NULL);
  if (pthread_create(&t1, NULL, &routine, NULL) != 0)
    return 1;
  if (pthread_create(&t2, NULL, &routine2, NULL) != 0)
    return 2;
  if (pthread_join(t1, NULL) != 0)
    return 3;
  if (pthread_join(t2, NULL) != 0)
    return 4;

  pthread_mutex_destroy(&mutex);
  printf("x size: %d\n", x);
  return 0;
}