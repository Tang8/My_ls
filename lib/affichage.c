/*
** affichage.c for affichage.c in /home/tang/my_ls/lib
** 
** Made by Tang Gustin
** Login   <Tang_g@etna-alternance.net>
** 
** Started on  Tue Feb  7 06:18:28 2017 Tang Gustin
** Last update Tue Feb  7 12:18:05 2017 Tang Gustin
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
