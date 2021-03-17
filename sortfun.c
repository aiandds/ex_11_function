#include<stdio.h>

int sr(int ary[],int n);

int main()
{
    int arr[100],n;
    printf("Enter the Number of Elements in the Array :");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    sr(arr,n);
    return 0;
}

int sr(int ary[],int n)
{
    int  i, j, swap;
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < n-i-1; j++)
        {
            if(ary[j] > ary[j+1])
            {
                swap=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=swap;
            }
        }
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", ary[i]);
    }
    
    return 0;
}
