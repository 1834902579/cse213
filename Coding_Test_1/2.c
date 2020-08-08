#include<stdio.h>
int main()
{
    int array[100];
    int n,i;
    printf("Please Enter the size of Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        printf("\n%d\n",array[i]);
    }




    return 0;
}
