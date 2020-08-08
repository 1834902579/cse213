#include <stdio.h>

int main()
{
    int array[100], n, i,*p;
    int max1, max2;

    p = &array[0];

    printf("Please Enter size of the array : ");
    scanf("%d", &n);


    printf("Please Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", (p+i));
    }

    max1 = max2 = NULL;

    for(i=0; i<n; i++)
    {
        if(*(p+i) > max1)
        {
            max2 = max1;
            max1 = *(p+i);
        }
        else if(*(p+i) > max2 && *(p+i) < max1)
        {
            max2 = *(p+i);
        }
    }

    printf("Second largest = %d", max2);

    return 0;
}

