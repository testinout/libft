SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c
INC = libft.h
OBJ = $(SRC:.c=.o)
NAME = libft.a
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
LIBR = ranlib

.c.o:
	cc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean:	clean
	${RM} ${NAME}

re: fclean all