#include <stdio.h>
#include <stdlib.h>

void reverse(int *array, int length)
{
        int ndx;
        int tmp;

        for (ndx = 0; ndx < length >> 1; ndx++)
        {
                tmp = array[ndx];
                array[ndx] = array[length - 1 - ndx];
                array[length - 1 - ndx] = tmp;
        }
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    reverse(arr, num);
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
