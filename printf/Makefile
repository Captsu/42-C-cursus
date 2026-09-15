NAME = ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC =	Libft/ft_strlen.c \
		Libft/ft_strchr.c \
 		Libft/ft_putchar_fd.c \
 		Libft/ft_putstr_fd.c \
 		Libft/ft_putnbr_fd.c \
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