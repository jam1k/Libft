#The Target Binary Program
NAME	:= libft.a

#The Directories, Source, Includes, Objects, Binary and Resources
SRCDIR	:= ./srcs/
INCDIR	:= ./includes/
OBJDIR	:= ./obj/

#Flags, Libraries and Includes
CC		:= gcc
FLAGS	:= -Wall -Wextra -Werror
INC		:= -c -I .h

SRC		:= *.c
OBJ 	:= *.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INC) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)