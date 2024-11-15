NAME = tester
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = *.c

$(NAME): 
	@echo "Compiling..."
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Program ready!"

all: $(NAME)

clean:
	rm -f $(NAME)

re: clean all
