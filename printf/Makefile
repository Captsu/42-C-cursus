NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC =	libft/ft_strlen.c \
		libft/ft_strchr.c \
 		libft/ft_putchar_fd.c \
 		libft/ft_putstr_fd.c \
 		libft/ft_putnbr_fd.c \
 		libft/ft_putnbr_unsigned.c \
		check_error.c \
		ft_printf.c \
		printer_adresse.c \
		printer_char.c \
		printer_decider.c \
		printer_dig.c \
		printer_hexa.c \
		printer_pourcentage.c \
		printer_string.c \
		numlen.c \
		printer_unsigned_int.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all