/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_hunter prototypes
*/

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>

typedef struct prinny_s {
    sfSprite *sprite;
    sfClock *clock;
    sfVector2f speed;
} prinny_t;

typedef struct list_prinny_s {
    prinny_t prinny;
    struct list_prinny_s *next;
    struct list_prinny_s *prev;
} list_prinny_t;

typedef struct game_struct_s {
    sfRenderWindow *window;
    sfVideoMode mode;
    int status;
    int nbr_score;
    int life_point;
    int arrow_location;
    struct {
        sfClock *speed_clock;
        sfClock *prinnies_clock;
        sfClock *music_clock;
    } clocks;
    struct {
        sfTexture *prinny_texture;
        sfTexture *bg_texture;
        sfTexture *menu_texture;
        sfTexture *health_bar_texture;
        sfTexture *arrow_texture;
    } textures;
    struct {
        sfFont *font;
        sfSprite *bg_sprite;
        sfSprite *menu_sprite;
        sfSprite *health_bar;
        sfSprite *arrow_sprite;
        sfText *score;
        sfText *game_over;
        sfMusic *music;
        list_prinny_t *prinnies;
    } entities;
} game_struct_t;

int my_hunter(void);
char *int_to_str(int nb);
int add_prinnies(game_struct_t *game, int n_prinny);
int initialize_game_resources(game_struct_t *game);
int add_prinnies(game_struct_t *game, int n_prinny);
void printing_prinnies(game_struct_t *game);
void moving_prinnies(game_struct_t *game);
void spinning_prinnies(game_struct_t *game);
void replacing_prinnies(game_struct_t *game);
void adding_prinny(game_struct_t *game);
float random_float(int min, int max);
void inverse_y(game_struct_t *game);
void define_prinny_essence(list_prinny_t *new, game_struct_t *game);
void killing_prinny(game_struct_t *game, sfMouseButtonEvent click);
void drawing_score(game_struct_t *game);
void check_music_restart(game_struct_t *game);
void rect_health_bar(game_struct_t *game);
void changing_sprite_health(game_struct_t *game);
void displaying_health(game_struct_t *game);
void event_menu(game_struct_t *game);
void managing_game_over(game_struct_t *game);
int managing_environment(char **env);
void managing_h_flag(char **argv, int argc);

#endif /* !MY_HUNTER_H_ */
