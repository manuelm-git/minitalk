# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 14:49:43 by manumart          #+#    #+#              #
#    Updated: 2023/07/13 14:49:45 by manumart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strchr ft_strrchr\
ft_strnstr ft_strncmp  ft_isalpha ft_isdigit ft_isalnum\
ft_isascii ft_isprint ft_strlcat ft_toupper ft_tolower ft_atoi ft_strdup ft_calloc \
 ft_substr ft_strjoin ft_strtrim ft_split  ft_itoa ft_strmapi ft_striteri ft_putstr_fd ft_putchar_fd \
 ft_putendl_fd ft_putnbr_fd 

CC =cc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra 

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear\
ft_lstiter ft_lstmap\

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
bonus:	$(SRC:=.o)	$(BONUS:=.o)
		ar rc $(NAME) $(SRC:=.o)	$(BONUS:=.o)