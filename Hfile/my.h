/*
** my.h for my.h in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 06:09:01 2017 Tang Gustin
** Last update Wed Feb  8 01:45:17 2017 TANG Gustin
*/


#ifndef MY_H
#define MY_H

#include "Struct.h"
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c);
void	my_putstr(char *str);
int     my_strcmp(char *s1, char *s2);
char    *my_strcat(char *str1, char *str2);
void    normal_ls();
void    verif_open(DIR *rep);
void    verif_close(DIR *rep);
void	normal_ls2(int argc, char **argv);
int     my_ls_d(int argc, char **argv, int e, int n);
void    my_ls_d2();
int	my_ls_a(int argc, char **argv, int e, int n);
void    my_ls_a2();
int     my_ls_A(int argc, char **argv, int e, int n);
void    my_ls_A2();
void    invalid_arg2();
int	invalid_arg(int argc, char **argv, int e, int n);
int     condition(char **argv, int e);
char**	my_sort_in_tab(char **tab, int size);

#endif
