# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awahib <awahib@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 04:34:45 by awahib            #+#    #+#              #
#    Updated: 2023/11/16 22:31:24 by awahib           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compiler and flags

CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

# Directories

SRCS	:=  ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_itoa.c\


BNS	:= 	   ft_lstnew_bonus.c\
		   ft_lstsize_bonus.c\
		   ft_lstmap_bonus.c\
		   ft_lstadd_front_bonus.c\
		   ft_lstadd_back_bonus.c\
		   ft_lstclear_bonus.c\
		   ft_lstiter_bonus.c\
		   ft_lstlast_bonus.c\
		   ft_lstdelone_bonus.c\


OBJS	:= ${SRCS:.c=.o}

BNSOBJS	:= ${BNS:.c=.o}

# Target library name

NAME	:= libft.a

# Commands

AR	:= ar -rc
RM	:= rm -f

# Targets

.PHONY: all clean fclean re bonus

all: ${NAME}

${NAME}: ${OBJS}
	${AR} $@ $^

clean:
	${RM} ${OBJS} ${BNSOBJS} 

fclean: clean
	${RM} ${NAME}
	
re: fclean all

${BNSOBJS}: ${BNS}
		${CC} ${CFLAGS} -c ${BNS}
		${AR} ${NAME} ${BNSOBJS}

bonus:	${BNSOBJS}
