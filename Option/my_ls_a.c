/*
** my_ls_a.c for my_ls_a.c in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 10:20:16 2017 Tang Gustin
** Last update Wed Feb  8 02:13:39 2017 TANG Gustin
*/

#include "../Hfile/my.h"
#include "../Hfile/Struct.h"

int	condition(char **argv, int e)
{
  while (argv[e][0] == '-')
    {
      e = e + 1;
    }
  return e;
}

void    my_ls_a2()
{
  n = 0;
  
  rep = opendir(".");
  verif_open(rep);
  while ((fichier = readdir(rep)))
    {
      tab[n] = my_putstr(fichier->d_name);
      my_putstr(" ");
    }
  my_putchar('\n');
  verif_close(rep);
}

int    my_ls_a(int argc, char **argv, int e, int n)
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
