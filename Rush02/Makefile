NAME = rush-02

SRCS = cut.c \
	ft_zero.c \
	main.c \
	print.c \
	utils.c \
	dict_verif.c \
	utils2.c \
	dict_convert.c \
	dict_verif_utils.c \

CFLAGS += -Wall -Wextra -Werror

CC = cc

OBJS = $(SRCS:.c=.o)

$NAME: $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
