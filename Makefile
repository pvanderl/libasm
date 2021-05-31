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
				strlen strcpy strcmp write read strdup))
OBJS		=	$(SRCS:.asm=.o)

BONUS_SRCS	=	$(addprefix ft_, $(addsuffix _bonus.asm,\
				atoi_base list_push_front list_size list_sort list_remove_if))
BONUS_OBJS	=	$(BONUS_SRCS:.asm=.o)

NA			=	nasm
NA_FLAGS	=	-f macho64
FLAGS		=	-Wall -Wextra -Werror
NAME		=	libasm.a
TEST		=	test
BONUS_TEST	=	test_bonus

%.o:			%.asm
				$(NA) $(NA_FLAGS) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS) $(BONUS_OBJS)

fclean:			clean
				rm -rf $(NAME) $(BONUS) $(TEST) $(TEST_BONUS)

re:				fclean $(NAME)

test:			$(NAME)
				gcc $(FLAGS) -L. -lasm -o $(TEST) main.c
				./$(TEST) < Makefile

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

test_bonus:		bonus
				gcc $(FLAGS) -L. -lasm -o $(BONUS_TEST) main_bonus.c mains_bonus.c mains_bonus.c main_utils_bonus.c
				./$(BONUS_TEST)

.PHONY:			clean fclean re test bonus test_bonus
