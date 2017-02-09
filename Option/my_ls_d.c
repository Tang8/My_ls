/*
** my_ls_d.c for my_ls_d.c in /home/tang/tang_g/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 16:42:30 2017 Tang Gustin
** Last update Tue Feb  7 19:05:57 2017 Tang Gustin
*/

#include "../Hfile/my.h"

void    my_ls_d2()
{
  if (opendir(".") == NULL)
    {
      my_putstr("My_LS : Permission denied \n");
    }
  else
    my_putstr(". \n");
}

int	my_ls_d(int argc, char **argv, int e, int n)
{
  e = e + 1;
  while (e != argc)
    {
      if (opendir(argv[e]) == NULL)
	{
	  my_putstr(argv[e]);
	  my_putstr(": \n No such file or directory \n");
	}
      else
	{
	  my_putstr(argv[e]);
	  my_putstr("\n");
	}
      e = e + 1;
    }
  return e;
}

void    invalid_arg2()
{
  my_putstr("My_LS: Invalid Argument \n");
}

int	invalid_arg(int argc, char **argv, int e, int n)
{
  my_putstr(argv[n]);
  my_putstr(" : \n Invalid Argument \n");
  e = e + 1;
  return e;
}
