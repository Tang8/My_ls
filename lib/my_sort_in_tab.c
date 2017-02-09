/*
** my_sort_in_tab.c for my_sort_in_tab in /home/tang_g/my_ls
** 
** Made by TANG Gustin
** Login   <tang_g@etna-alternance.net>
** 
** Started on  Thu Feb  9 02:47:09 2017 TANG Gustin
** Last update Wed Feb  8 02:07:27 2017 TANG Gustin
*/

char**    my_sort_in_tab(char **tab, int size)
{
  int   e;
  int   g;
  char*  swap;

  g = 0;
  e =  0;
  while (e < size)
    {
      g = 0;
      while (g < size)
	{
	  if (tab[e][0] < tab[g][0])
	    {
	      swap = tab[e];
	      tab[e] = tab[g];
	      tab[g] = swap;
	    }
	  e++;;
	}
      g++;
    }
  return (tab);
}
