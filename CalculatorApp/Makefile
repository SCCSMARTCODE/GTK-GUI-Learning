CC = gcc  

CFLAGS = -Wall -Werror -Wextra `pkg-config --cflags gtk+-3.0`  
LDFLAGS = `pkg-config --libs gtk+-3.0`  

SRC = src/main.c src/callbacks.c src/utils.c  
HEADERS = src/callbacks.h  
TARGET = build/CalculatorApp  

all: $(TARGET)  

$(TARGET): $(SRC) $(HEADERS)  
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)  

clean:  
	rm -f $(TARGET)