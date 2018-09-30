#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/dir.h>
#include <stdio.h>

int	main()
{
	DIR *d;
	struct dirent *dr;
	struct stat s;
	
	tm  *mytime;
    char buff[30];

	d = opendir("/nfs/2018/x/xinzhang/mylocation/cadet_exe/b_ls/updatelen.c");
	if (d)
	{
		while ((dr = readdir(d)) != NULL)
		{
			stat(dr->d_name, &s);
			
			mytime = localtime(&(tmp->stat_info->st_atime));
            strftime(buff, 30, "%b %d %H:%M", mytime);
            printf("%s  ", buff);
            printf("%s\n", tmp->sname);
	
	
			printf("%s : the time %lu\n",dr->d_name, s.st_mtime);
		}
	}
	return (0);
}
