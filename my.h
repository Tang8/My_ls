/*
** my.h for my.h in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 06:09:01 2017 Tang Gustin
** Last update Tue Feb  7 10:21:09 2017 Tang Gustin
*/


#ifndef MY_H
#define MY_H

#include "lib/affichage.c"
#include "normal_ls.c"
#include <stdlib.h>
#include <dirent.h>

void	my_putchar(char c);
void	my_putstr(char *str);
int     my_strcmp(char *s1, char *s2);
void    my_swap(char *a, char *b);
void    normal_ls();
void	normal_ls2(int argc, char **argv);

#endif
