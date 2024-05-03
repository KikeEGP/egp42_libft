# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 17:15:51 by enrgil-p          #+#    #+#              #
#    Updated: 2024/05/03 20:40:55 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#BONUS_NAME = .bonus #HACEMOS ESTO PARA QUE NO DE RELINK AL EJECUTAR BONUS
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	   ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c\
	   ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c\
	   ft_strdup.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
	   ft_strrchr.c ft_strncmp.c ft_substr.c ft_tolower.c ft_toupper.c\
	   

#						Is libft.h needed here?
#						No, because a make clean would destroy it
OBJS = $(SRCS:.c=.o)

#BONUS =
#BONUS_OBJS =


CFLAGS = -Wall -Wextra -Werror
CC = gcc 
RM = rm -f

all: $(NAME)
#					remember --> target: prerequisites
#								 	(tab)		recipe

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS) 	
#							REVIEW ar, PLEASE!!!!!!!!!!
	$(info CREATED $(NAME))


#					RULE PATTERN 
%.o: %.c 
	$(CC) -c $(CFLAGS) $< -o $@
	$(info CREATED $@)
	
#			First time I had put an -MD before $(CFLAGS, above). 
#			This modifier creates *.d, which explains a file dependencies	
	#gcc $(CFLAGS) $(OBJS) -o $(NAME)

#bonus: $(BONUS_NAME) 		CHECK THIS!!!!!!

clean:
	$(RM) $(OBJS)

#						fclean executes clean +  fclean recipe
fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

#$(BONUS_NAME) REVISA BIEN ESTO!!!!!!!!!!!!!!!

#								Special target .phony
.PHONY: all clean fclean re 
#								add Bonus
