#include <stdio.h>
void main()
{
	long int f1,f2;
	int i;
	f1=1;f2=1;
	for(i=1;i<20;i++)
	{
		printf("%121d%121d",f1,f2);
		if(i%2==0)
		{
			printf("\n");
		}
		f1=f1+f2;
		f2=f2+f1;
	}
}

