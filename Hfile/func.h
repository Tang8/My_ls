/*
** func.h for func.h in /home/tang/tang_g/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 16:07:26 2017 Tang Gustin
** Last update Tue Feb  7 18:44:56 2017 Tang Gustin
*/

#ifndef FUNC_H
#define FUNC_H

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct	s_func
{
  char	*flags;
  int	(*funct)(int argc, char **argv, int e, int n);
}	t_func;

t_func	*init()
{
  t_func	*fc;

  if ((fc = malloc(sizeof(t_func) * 4)))
    {
      fc[0].flags = "-d";
      fc[0].funct = &my_ls_d;
      fc[1].flags = "-a";
      fc[1].funct = &my_ls_a;
      fc[2].flags = "-A";
      fc[2].funct = &my_ls_A;
      fc[3].flags = NULL;
      fc[3].funct = &invalid_arg;
    }
  return (fc);
}

typedef struct  s_func2
{
  char  *flags;
  void  (*funct)();
}       t_func2;

t_func2  *init2()
{
  t_func2        *fc2;

  if ((fc2 = malloc(sizeof(t_func2) * 4)))
    {
      fc2[0].flags = "-d";
      fc2[0].funct = &my_ls_d2;
      fc2[1].flags = "-a";
      fc2[1].funct = &my_ls_a2;
      fc2[2].flags = "-A";
      fc2[2].funct = &my_ls_A2;
      fc2[3].flags = NULL;
      fc2[3].funct = &invalid_arg2;
    }
  return (fc2);
}

int 	t;
int     e;
int	n;
t_func  *fc;
t_func2	*fc2;

#endif
