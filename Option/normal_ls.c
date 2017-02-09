/*
** normal_ls.c for normal_ls.c in /home/tang/my_ls
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 10:20:16 2017 Tang Gustin
** Last update Wed Feb  8 01:47:44 2017 TANG Gustin
*/

#include "../Hfile/my.h"
#include "../Hfile/Struct.h"

void	verif_open(DIR *rep)
{
  if (rep == '\0')
    my_putstr("My_ls : Permission denied \n");
}

void	verif_close(DIR *rep)
{
  if (rep == '\0')
    my_putstr("My_ls : Close directory failed \n");
}

void    normal_ls()
{
  rep = opendir(".");
  verif_open(rep);
  while ((fichier = readdir(rep)))
    {
      if (fichier->d_name[0] == '.')
	{
	  my_putchar('\0');
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

void    normal_ls2(int argc, char **argv)
{
  e = 1;
  while ((e != argc) && (argv[e][0] != '-'))
    {
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
	    if (fichier->d_name[0] == '.')
	      my_putchar('\0');
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
    }
}
