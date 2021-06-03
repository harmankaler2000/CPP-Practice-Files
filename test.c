#include <stdio.h>
int array[5][5]={0,0,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,1,0,0,1,1,1,1,1};	
void disp_function(int m,int n)
{
	if((m+1)<5)
	{
		if(array[m+1][n]==1)
		{
			printf("%d",array[m+1][n]);
			disp_function(m+1,n);
		}
	}
	if((n+1)<5)
	{
		if(array[m][n+1]==1)
		{
			printf("%d",array[m][n+1]);
			disp_function(m,n+1);
		}
	}
	printf("\n");
	
}

int main()
{
	
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(array[i][j]==1)
			{
				printf("%d",array[i][j]);
				disp_function(i,j);
				
			}
		}
	}
	return 0;
}