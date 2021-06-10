#include<stdio.h>
int main()
{
    int arr[10],n,i,j,temp,min,max;
    printf("Enter how many Element you want to insert : \n");
    scanf("%d",&n);
    printf("Enter your Element  : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Selection sorting Start
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {

            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min]= temp;
    }
        printf("Accending Order : \n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {

            if(arr[max]< arr[j])
            {
                max = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max]= temp;
    }
        printf("Decending Order : \n");

    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}
