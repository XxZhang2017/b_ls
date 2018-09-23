#include "libft.h"
void stat_info_a(stat_dlist *dlist, char *fn)
{
  DIR *d;
  struct dirent *dir;
  stat_dlist sdlist;
  s_stat **infoptr;
  char *dname;

  infoptr = (s_stat **)malloc(sizeof(s_stat *));
  *infoptr = (s_stat *)malloc(sizeof(s_stat));
  d = opendir(fn);
  if (d)
  {
    while ((dir = readdir(d)) != NULL)
    {
      *infoptr = (s_stat *)malloc(sizeof(struct stat));
      dname = strdup(dir->d_name);
      stat(dir->d_name, *infoptr);
//      printf("the name %s\n", dir->d_name);
      dlist = appendnode(dlist, *infoptr, dname);
    }
    closedir(d);
  }
}
