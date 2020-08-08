#include <stdio.h>

int main()
{
    int array[100];
    int i, n, index;


    printf("Please Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element index to delete : ");
    scanf("%d", &index);


    if(index < 0 || index > n)
    {
        printf("Invalid position! Please enter position between 1 to %d",n);
    }
    else
    {
        for(i=index-1; i<n-1; i++)
        {
            array[i] = array[i + 1];
        }

        n--;
    }

    printf("\nElements of array after delete are : \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
