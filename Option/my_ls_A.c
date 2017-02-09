/*
** my_ls_A.c for my_ls_A.c in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 10:20:16 2017 Tang Gustin
** Last update Tue Feb  7 17:26:20 2017 Tang Gustin
*/

#include "../Hfile/my.h"
#include "../Hfile/Struct.h"

void    my_ls_A2()
{
  rep = opendir(".");
  verif_open(rep);
  while ((fichier = readdir(rep)))
    {
      if (my_strcmp(fichier->d_name, ".") == 0 || my_strcmp(fichier->d_name, "..") == 0)
	{
	  my_putstr("\0");
	}
      else
	{
	  my_putstr(fichier->d_name);
	  my_putstr("  ");
	}
    }
  my_putchar('\n');
  verif_close(rep);
}

int    my_ls_A(int argc, char **argv, int e, int n)
{
  e = condition(argv, e);
  my_putstr(argv[e]);
  my_putstr(" : \n");
  if ((rep = opendir(argv[e])) == NULL)
    {
      my_putstr("My_ls : Permission denied or no such directory \n");
      e = e + 1;
    }
  else {
    while ((fichier = readdir(rep)))
      {
	if (my_strcmp(fichier->d_name, ".") == 0 || my_strcmp(fichier->d_name, "..") == 0)
	  {
	    my_putstr("\0");
	  }
	else
	  {
	    my_putstr(fichier->d_name);
	    my_putstr("  ");
	  }
      }
    my_putchar('\n');
    verif_close(rep);
    e = e + 1;
  }
  return e;
}
