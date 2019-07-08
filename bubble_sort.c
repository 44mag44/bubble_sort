#include <stdio.h>

int length(char *array)
{
	int i;
	for(i=0; i<array[i]; i++)
	{
	}
	return i;
}

void bubble_sort(char *array)
{
	int len;
	len = length(array);
	int i, j;
	for(i=len-1; i >= 1; i--)
	{
		for(j=0; j < i; j++) 
		{
			if(array[j]>array[j+1])
			{
				int tmp;
				tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
}

int main()
{
	char array[] = "9182736450";
	bubble_sort(array);
	printf("%s\n", array);

	return 0;
}
