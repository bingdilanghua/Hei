/*************************************************************************
    > File Name: b.c
    > Author: 
    > Mail:  
    > Created Time: Sat 16 Sep 2017 04:13:55 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

	int i = 0;
	i++;
	printf("i = %d\n",i);
	 i = 1;
	i ++ ;
	printf("i = %d\n",i);
	return 0;

}
