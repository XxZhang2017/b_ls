#include "libft.h"
int main()
{
  stat_dlist *dl;

  dl = (stat_dlist *)malloc(sizeof(stat_dlist));
//  dl->head = (stat_node *)malloc(sizeof(stat_node));
  dl->tail = NULL;
  dl->head = NULL;
//  dl->head->stat_info = (s_stat *)malloc(sizeof(s_stat));
//  dl->head->next = NULL;
  stat_info(dl, ".");
  printdlist(dl);
}
