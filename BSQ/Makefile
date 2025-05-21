SRC_DIR = ./srcs/

CC = cc

CFLAGS = -g -Wall -Wextra -Werror -I./includes/

SRCS = ft/ft_atoi.c \
	   ft/ft_strcpy.c \
	   ft/ft_strlen.c \
	   ft/ft_is_printable.c \
	   read_map.c \
	   write_map.c \
	   square_finder.c \
	   map_init.c \
	   main.c

SRC_FILES = $(addprefix $(SRC_DIR), $(SRCS))

OBJS = $(SRC_FILES:.c=.o)

NAME = bsq

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: fclean clean
