##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/my_hunter.c	\
		src/window/window.c	\
		src/ressources_initialiazing/initializing.c	\
		src/managing_linked_list/add_prinnies.c	\
		src/managing_prinnies/moving_prinnies.c	\
		src/managing_prinnies/printing_prinnies.c	\
		src/managing_prinnies/spinning_prinnies.c	\
		src/managing_prinnies/replace_prinnies.c	\
		src/managing_prinnies/adding_prinny.c	\
		src/random_float/random_float.c	\
		src/managing_prinnies/inverse_speed_prinnies.c	\
		src/managing_linked_list/define_prinny_essence.c	\
		src/managing_prinnies/killing_prinny.c	\
		src/managing_score/drawing_score.c	\
		src/int_to_str/int_to_str.c	\
		src/managing_music/managing_music.c	\
		src/managing_health_bar/displaying_health.c	\
		src/managing_health_bar/changing_sprite_health.c	\
		src/managing_menu/managing_menu.c	\
		src/managing_game_over/managing_game_over.c	\
		src/managing_environment/managing_environment.c	\
		src/managing_flag_h/managing_flag_h.c	\

OBJ	=	$(SRC:.c:.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C lib/my
	@gcc -o $(NAME) $(SRC) -lcsfml-graphics -lcsfml-system -L./lib -lmy \
	-I./include -lcsfml-audio

debug:
	@make -C lib/my
	@gcc -g -o debug $(SRC) -lcsfml-graphics -lcsfml-system  -L./lib -lmy \
	-I./include

clean:
	@make -C lib/my fclean
	@rm -f debug
	@rm -f lib/libmy.a

fclean:	clean
	@rm -f lib/libmy.a
	@rm -f $(NAME)

re:	fclean	all