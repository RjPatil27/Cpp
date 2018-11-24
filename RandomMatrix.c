//Printing 9*9 matrix with random numbers: 2D matric concept, rand() function.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void PrintRandoms(int lower,int upper,int count)
{
  int i,j,k;
  int mat[9][9],num=0;
	
        for(j=0;j<9;j++)
	{
		for(k=0;k<9;k++)
		{
			num = (rand() % (upper-lower+1))+lower;
			//printf("%d\n",num);
			if(num == mat[j][k])
			{
				mat[j][k]=num;
			}
			
		}
	}


        for(j=0;j<9;j++)
	{
		for(k=0;k<9;k++)
		{
			printf("%d\t",mat[j][k]);
		}
                printf("\n");
	}

}


int main()
{
   int lower=1,upper=81,count=81;
   PrintRandoms(lower,upper,count); 

 return 0;
}
