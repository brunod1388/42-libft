CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft

TEST	= test

RM		= rm -f

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(TEST):	$(OBJS)
			$(CC) $(CFLAGS) -o $(TEST) $(OBJS) libft_test.c

all:		$(NAME)

re:			fclean $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

retest:	fclean $(TEST)

.PHONY:		all re clean fclean bin
