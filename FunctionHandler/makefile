CC = gcc
CFLAGS = -std=c++17 -g -Wall
DEPS = ata_message.h trk_message.h trk_messageDefinitions.h trk_messageFunctions.h
OBJ = ata_message.o trk_message.o main.o trk_messageFunctions.o
LIBS = -lpthread -lrt

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

FunctionHandler: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o FunctionHandler
