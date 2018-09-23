#include "libft.h"
stat_dlist *appendnode(stat_dlist *dlist, s_stat *data, char *name)
{
  if (dlist == NULL)
  {
     stat_dlist *dlist;

     dlist = (stat_dlist*)malloc(sizeof(stat_dlist));
     stat_node *tmp = (stat_node *)malloc(sizeof(stat_node));
     dlist->head = tmp;
     dlist->tail = tmp;
     dlist->head->sname = name;
     dlist->head->stat_info = data;
     dlist->tail->stat_info = data ;
     dlist->head->sname = name;
     dlist->tail->sname = name;
     tmp->next = NULL;
  }
  else if (dlist->head == NULL && dlist->tail == NULL)
  {
     stat_node *tmp = (stat_node *)malloc(sizeof(stat_node));  
     
     dlist->head = tmp;
     dlist->tail = tmp;
     dlist->head->stat_info = data;
     dlist->head->sname = name;
     dlist->tail->stat_info = data;
     dlist->head->sname = name;
     tmp->next = NULL;
  }
  else
  {
    stat_node *ptr = (stat_node *)malloc(sizeof(stat_node));  
    
    ptr->stat_info = data;
    ptr->sname = name;
    ptr->next = NULL;
    dlist->tail->next = ptr;
    dlist->tail = ptr;
  }
  return (dlist);
}
