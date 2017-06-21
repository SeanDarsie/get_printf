NAME = libftprintf.a

FILES = ft_printf.c

OBJ = ft_printf.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	gcc -c $(FILES)

