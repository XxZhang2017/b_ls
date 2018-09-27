#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>

int	main()
{
	DIR	*d;
	struct dirent	*dir;
	struct stat	info;

	d = opendir("/nfs/2018/x/xinzhang/mylocation/cadet_exe");
	if (d == NULL)
		printf("open error\n");
	else
	{
		while ((dir = readdir(d)) != NULL)
		{
			printf("%s\n", dir->d_name);
			lstat(dir->d_name, &info);
		}
	}
	closedir(d);
	return (0);
}
