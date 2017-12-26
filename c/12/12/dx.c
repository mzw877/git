#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int sj[20]={};
	int jl[4]={};
	srand(getpid());
	for(int i=0;i<20;i++)
	{
		sj[i]=rand() % 1000;
		printf("sj[%d]:%d\n",i,sj[i]);
	}
	printf("\n");
	jl[2]=jl[0]=sj[0];
	for(int i=0;i<20;i++)
	{
		if(sj[i]>jl[0])
		{
			jl[0]=sj[i];
			jl[1]=i;
		}
		if(sj[i]<jl[2])
		{
			jl[2]=sj[i];
			jl[3]=i;
		}
	}
	printf("MAX:sj[%d]=%d,MIN:sj[%d]=%d\nnow:\n",jl[1],jl[0],jl[3],jl[2]);
	sj[jl[3]]=jl[0];
	sj[jl[1]]=jl[2];
	for(int i=0;i<20;i++)
	{
		printf("sj[%d]:%d\n",i,sj[i]);
	}


	exit (0);
}
