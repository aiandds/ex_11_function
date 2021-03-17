#include<stdio.h>
#include<stdlib.h>

int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int divi(int a,int b);

int main()
{

while(1)
{
    int n,a,b,ans;
    printf("-----------------------------------------------\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.Exit");
    printf("\n\nEnter the Choice :");
    scanf("%d",&n);
    printf("\n-----------------------------------------------\n");
if(n!=0)
{
    printf("Enter the First Number :");
    scanf("%d",&a);
    printf("Enter the Second Number :");
    scanf("%d",&b);
}
    

switch(n)
{
    case 0:
        exit(0);

    case 1:
        ans=add(a,b);
        printf("The Addition is %d \n",ans);
        break;
    case 2:
        ans=sub(a,b);
        printf("The Subtraction is %d \n",ans);
        break;
    case 3:
    
        ans=multi(a,b);
        printf("The Multiplication is %d \n",ans);
    break;
    case 4:
    
        ans=divi(a,b);
        printf("The Division is %d \n",ans);
        break;

}
}
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int multi(int a,int b)
{
    return a*b;
}

int divi(int a,int b)
{
    return a/b;
}


