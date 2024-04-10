/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:51:08 by rohidalg          #+#    #+#             */
/*   Updated: 2024/04/10 17:35:37 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# define PLAYER "imag/player60.xpm"
# define WALL "imag/wall60.xpm"
# define OBJECT "imag/object60.xpm"
# define FLOOR "imag/floor60.xpm"
# define EXIT "imag/exit60.xpm"
# define WIN "imag/win60.xpm"
# define MONSTER "imag/monster60.xpm"
# define PA1 "imag/player/playera1.xpm"
# define PA2 "imag/player/playera2.xpm"
# define PA3 "imag/player/playera3.xpm"
# define PA4 "imag/player/playera4.xpm"
# define PA5 "imag/player/playera5.xpm"
# define PA6 "imag/player/playera6.xpm"
# define PA7 "imag/player/playera7.xpm"
# define PD1 "imag/player/playerd1.xpm"
# define PD2 "imag/player/playerd2.xpm"
# define PD3 "imag/player/playerd3.xpm"
# define PD4 "imag/player/playerd4.xpm"
# define PD5 "imag/player/playerd5.xpm"
# define PD6 "imag/player/playerd6.xpm"
# define PD7 "imag/player/playerd7.xpm"


# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2

# include "get_next_line/get_next_line.h"
# include "mlx/mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_images
{
	int				*player;
	int				*wall;
	int				*object;
	int				*floor;
	int				*exit;
	int				*win;
	int 			*monster;
	int 			*pa1;
	int 			*pa2;
	int 			*pa3;
	int 			*pa4;
	int 			*pa5;
	int 			*pa6;
	int 			*pa7;
	int 			*pd1;
	int 			*pd2;
	int 			*pd3;
	int 			*pd4;
	int 			*pd5;
	int 			*pd6;
	int 			*pd7;
}					t_images;

typedef struct s_map
{
	int				hight;
	int				width;
	int				x;
	int				y;
	int				player;
	int				count;
	int 			end;
	int				finish;
	int 			monster;
	unsigned int	move;
	unsigned int 	frame;
	char			*txt;
	char			**map;
	void			*mlx;
	void			*win;
	t_images		*images;
}					t_map;

typedef struct s_checker
{
	int				**map;
	int				coins_treasure;
}					t_checker;

void				ft_map_size(t_map *data);
void				ft_maplloc(t_map *data);
void				ft_move_w(t_map *data);
void				ft_move_a(t_map *data);
void				ft_move_s(t_map *data);
void				ft_move_d(t_map *data);
int					ft_press(int keycode, t_map *data);
int					ft_strcmp(char *s1, char *s2);
void				ft_itoa(unsigned int n);
void				ft_write(unsigned int n);
int					ft_exit(t_map *data);
void				ft_finish(t_map *data);
void 				ft_dead(t_map *data);
void				ft_player_image(t_map *data, int *i, int *j);
void				ft_draw(t_map *data);
void				ft_check_outline(t_map *data);
void				ft_check_ber(t_map *data);
void				ft_check_char(t_map *data);
void				ft_check_double(t_map *data);
void				ft_check_countchar(t_map *data);
void				ft_malloc_map(t_checker *c, t_map *data);
void				ft_free_checker(t_checker *c, int hight);
void				ft_char_hunter(t_checker *c, t_map *data, int i, int j);
void				ft_is_posible(t_map *data, int i, int j, int treasure);
void ft_frame_left(t_map *data, int *j, int *i);
void ft_frame_right(t_map *data, int *j, int *i);

#endif
