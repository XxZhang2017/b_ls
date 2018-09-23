#include "libft.h"
void printdlist(stat_dlist *dl)
{
  stat_node *tmp;
  tmp = dl->head;
  if(dl != NULL || dl->head != NULL)
  {
    while (tmp != NULL)
    {
      if(tmp->sname[0] != '.')
	printf("%s\n", tmp->sname);
      tmp = tmp->next;
    }
  }
}
