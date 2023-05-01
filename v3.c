#include <stdio.h>
//dsfssfsfsf
int main() 
{
    int arr[4][3] = {{2, 3, 1}, {19, 12, 7}, {10, 9, 8}, {3, 11, 5}};
	for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 3; j++)
		{
            printf("%d ",arr[i][j]);    
        }
        printf("\n");
    }
	return 0;
}
