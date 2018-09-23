#include "libft.h"
void printdlist(stat_dlist *dl)
{
  stat_node *tmp;
  tmp = dl->head;
  if(dl != NULL || dl->head != NULL)
  {
    while (tmp != NULL)
    {
      printf("inode: %llu and the name %s\n", tmp->stat_info->st_ino, tmp->sname);
      tmp = tmp->next;
    }
  }
}
