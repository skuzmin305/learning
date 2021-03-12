#include <stdio.h>

int main(void)
{
	int my_list[] = {5, 12, 4, 32, 188, 16, 78, 1, 41, 75};
	int len_list = (sizeof(my_list) / sizeof(int));
	for(int i = 0; i != len_list; i++)
	{
		printf("%d ", my_list[i]);
	}
	printf("\n\n\n");
	for(int i = 0; i != len_list; i++)
	{
		for(int q = 0; q != len_list - 1 - i; q++)
		{
			if(my_list[q] > my_list[q + 1])
			{
				int tmp = my_list[q];
				my_list[q] = my_list[q + 1];
				my_list[q + 1] = tmp;
			}
		}
	}
	for(int i = 0; i != len_list; i++)
	{
		printf("%d ", my_list[i]);
	}
	printf("\n");
	return 0;
}
