/*
** my_ls_l.c for my_ls_l.c in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 10:20:16 2017 Tang Gustin
** Last update Wed Feb  8 02:13:39 2017 TANG Gustin
*/

#include "../Hfile/my.h"
#include "../Hfile/Struct.h"

void    my_ls_l2()
{
  rep = opendir(".");
  verif_open(rep);
  while ((fichier = readdir(rep)))
    {
      my_putstr(fichier->d_name);
      my_putstr(" ");
      my_putchar('\n');
    }
  my_putchar('\n');
  verif_close(rep);
}

int    my_ls_l(int argc, char **argv, int e, int n)
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
	my_putstr(fichier->d_name);
	my_putstr("  ");
      }
    my_putchar('\n');
    verif_close(rep);
    e = e + 1;
  }
  return e;
}
