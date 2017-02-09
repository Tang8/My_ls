/*
** main.c for main.c in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 06:04:02 2017 Tang Gustin
** Last update Tue Feb  7 18:56:39 2017 Tang Gustin
*/

#include "Hfile/func.h"
#include "Hfile/my.h"

void    verif3(int argc, char **argv, int n)
{
  fc2 = init2();
  t = 0;

  while (fc2[t].flags != NULL && my_strcmp(fc2[t].flags, argv[n]) != 0)
    {
      t = t + 1;
    }
  fc2[t].funct();
}

void	verif2(int argc, char **argv, int e, int n)
{
  fc = init();
  t = 0;

  while (e != argc)
    {
      while (argv[n][0] == '-' && fc[t].flags != NULL  && my_strcmp(fc[t].flags, argv[n]) != 0)
	{
	  t = t + 1;
	}
      e = fc[t].funct(argc, argv, e, n);
      n = n + 1;
    }
}

int	main(int argc, char **argv)
{
  n = 1;
  e = 1;

  if (argc != 1)
    {
      if (argv[n][0] != '-')
	{
	  normal_ls2(argc, argv);
	}
      else
	{
	  if (argc == 2)
	    {
	      verif3(argc, argv, n);
	    }
	  else
	    {
	      verif2(argc, argv, e, n);
	    }
	}
    }
  else
    {
      normal_ls();
      }
   return 0;
}
