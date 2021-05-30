# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/30 14:54:43 by pvanderl          #+#    #+#              #
#    Updated: 2021/05/30 21:22:43 by pvanderl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(addprefix ft_, $(addsuffix .asm,\
				strlen strcpy strcmp write read))
OBJS		=	$(SRCS:.asm=.o)

SRCS_BONUS	=	$(addprefix ft_, $(addsuffix _bonus.asm,\
				atoi_base list_push_front list_size list_sort list_remove_if))
OBJS_BONUS	=	$(SRCS_BONUS:.asm=.o)

NA			=	nasm
NA_FLAGS	=	-f macho64
FLAGS		=	-Wall -Wextra -Werror
NAME		=	libasm.a
TEST		=	test

%.o:			%.asm
				$(NA) $(NA_FLAGS) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME) $(TEST)

re:				fclean $(NAME)

test:			$(NAME)
				gcc $(FLAGS) -L. -lasm -o $(TEST) main.c
				./$(TEST) < Makefile

.PHONY:			clean fclean re test
