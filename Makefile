CC = gcc
# CFLAGS = -Wall -Wextra -Werror

vpath %.c . atint data_parser validators illegal_operations printer
SRC = $(wildcard *.c) $(wildcard atint/*.c) $(wildcard data_parser/*.c)  $(wildcard validators/*.c) $(wildcard illegal_operations/*.c)  $(wildcard printer/*.c) 

OBJ = $(SRC:.c=.o)

TARGET = push_swap

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c g_header.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re