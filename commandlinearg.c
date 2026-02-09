#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]) 
{
    if(argc != 5)
	{
		printf("\n usage %s:<name><marks1><marks2><marks3>",argv[0]);
		return 1;
	}
	
	char* name = argv[1];
    int m1 = atoi(argv[2]);
    int m2 = atoi(argv[3]);
    int m3 = atoi(argv[4]);
    int total = m1+m2+m3;
    printf("name= %s\n",argv[1]);
    printf("marks = %d %d %d\n",m1,m2,m3);
    printf("total = %d",total);
    
    
    return 0;
}
