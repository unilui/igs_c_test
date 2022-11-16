EX01_SRCS		=	ex_01/palindrome.c\
					ex_01/load_file.c\
					ex_01/ft_split.c\
					ex_01/ft_strjoin.c\
					ex_01/search.c

EX01_OBJS		=	${EX01_SRCS:%.c=$(OBJS_DIR)%.o}
EX01_NAME		=	palindrome

#=============================================================================#

EX02_SRCS		=	ex_02/number_converter.c\
					ex_02/roman.c\
					ex_02/rules.c\
					ex_02/utils.c

EX02_OBJS		=	${EX02_SRCS:%.c=$(OBJS_DIR)%.o}
EX02_NAME		=	number_converter

#=============================================================================#

EX03_SRCS		=	ex_03/color_steps.c\
					ex_03/print_steps.c\
					ex_03/validation.c\
					ex_03/utils.c

EX03_OBJS		=	${EX03_SRCS:%.c=$(OBJS_DIR)%.o}
EX03_NAME		=	color_steps

#=============================================================================#

EX04_SRCS		=	ex_04/list_merge.c\
					ex_04/int_arr_join.c\
					ex_04/ft_sort_int_tab.c\
					ex_04/linked_list.c\
					ex_04/merge_k_list.c

EX04_OBJS		=	${EX04_SRCS:%.c=$(OBJS_DIR)%.o}
EX04_NAME		=	list_merge

#=============================================================================#

EX05_SRCS		=	ex_05/slot.c\

EX05_OBJS		=	${EX05_SRCS:%.c=$(OBJS_DIR)%.o}
EX05_NAME		=	slot

#=============================================================================#

OBJS_DIR		=	objects/
CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf

$(OBJS_DIR)%.o:	%.c
			@mkdir -p $(dir $@)
			@$(CC) $(CFLAGS) -c $< -o $@ -I includes

all:		$(EX01_NAME) $(EX02_NAME) $(EX03_NAME) $(EX04_NAME) $(EX05_NAME)

$(EX01_NAME):	$(EX01_OBJS)
				@$(CC) $(EX01_OBJS) -o $(EX01_NAME)

$(EX02_NAME):	$(EX02_OBJS)
				@$(CC) $(EX02_OBJS) -o $(EX02_NAME)

$(EX03_NAME):	$(EX03_OBJS)
				@$(CC) $(EX03_OBJS) -o $(EX03_NAME)

$(EX04_NAME):	$(EX04_OBJS)
				@$(CC) $(EX04_OBJS) -o $(EX04_NAME)

$(EX05_NAME):	$(EX05_OBJS)
				@$(CC) $(EX05_OBJS) -o $(EX05_NAME)

clean:
			@$(RM) $(OBJS_DIR)

fclean:		clean
			@$(RM) $(EX01_NAME)
			@$(RM) $(EX02_NAME)
			@$(RM) $(EX03_NAME)
			@$(RM) $(EX04_NAME)
			@$(RM) $(EX05_NAME)

re:			fclean all

.PHONY:		all clean fclean re run libft
