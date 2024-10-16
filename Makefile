NAME = libft.a

SRC = *.c
OBJS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) *.h
	ar rcs $(NAME) *.o

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
