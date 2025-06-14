
NAME = libft.a

CFLAGS= -Wall -Wextra -Werror

CC = cc
 
SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \

OBJS = $(SRCS:.c=.o)

BONUS =

BNSOBJ = $(BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rsc $(NAME) $(OBJS)

bonus : $(NAME) $(BNSOBJ)
	ar rsc $(NAME) $(OBJS) $(BNSOBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(BNSOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
