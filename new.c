#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
	int sum1=0,sum2=0,sum3=0,sum4=0,a=1,b=26,c=51,d=76,f1,f2,cn2=0,cn1;


	for(int i=1;i<=25;i++)
	{ 
		sum1=sum1+a;
		a++;
	}
	printf("Sum By Parent %d\n",sum1);
	f1=fork();
	f2=fork();
	
	if(f2==0 && cn1==0)
	{
		for(int i=26;i<=50;i++)
		{ 
			sum3=sum3+i;
		}
		
		printf("Sum By Child1 %d\n",sum3);
		cn2=1;
		cn1=5;

	}

	if(f1==0 && cn2==1)
	{
		for(int i=51;i<=75;i++)
		{ 
			sum2=sum2+i;
		}
		
		printf("Sum By Child2 %d\n",sum2);
		cn2=5;


	}
	if(cn2==5)
	{
		for(int i=76;i<=100;i++)
		{ 
			sum4=sum4+i;
		}
		
		printf("Sum By Child3 %d\n",sum4);
		cn2=1;
		cn1=5;

	}
	printf("Sum : %d\n",sum1+sum2+sum3+sum4);

	
}
