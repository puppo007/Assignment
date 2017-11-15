#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
#include<stdbool.h>
int sum=0;
int main()
{
	int pid=0,tsum=0;
	int sum1=0,sum2=0,sum3=0,sum4=0,c1=0,c2=0,c3=0;
	for(int j=1;j<=25;j++)
		{
			sum1+=j;
		}
	printf("Sum calculated by Parent : %d\n",sum1);
	sum=sum+sum1;
	c1=fork();
 	if(c1>0)
	{
		tsum=tsum+sum;
		c2=fork();
		if(c2>0)
		{
			tsum=tsum+sum;
			c3=fork();
			if(c3>0)
			{
				tsum=tsum+sum;
				
			}
			else if(c3==0)
			{
				for(int k=76;k<=100;k++)
				{
					sum4+=k;
				}
				sum=sum+sum4;
				printf("Sum calculated by Child 3 : %d\n",sum4);
				printf("Total Sum : %d\n",sum);
			}
		}
		else if(c2==0)
		{
			for(int k=51;k<=75;k++)
			{
				sum3+=k;
			}
			sum=sum+sum3;
			printf("Sum calculated by Child 2 : %d\n",sum3);
			
			
				
		}			
	}
	else if(c1==0)
	{
		for(int k=26;k<=50;k++)
		{
			sum2+=k;
		}
		sum=sum+sum2;
		printf("Sum calculated by Child 1 : %d\n",sum2);
		
		

	}
	
	
		
}
