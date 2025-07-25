NAME = libftprintf.a

SRCS = 
	
LIBFT = ./libft/libft.a


OBJCS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJCS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJCS)

$(LIBFT) :
	make -C ./libft

clean:
	$(RM) $(OBJCS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

party:
	curl parrot.live

.PHONY: all clean fclean re party

# Linux and Mac