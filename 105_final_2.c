#include<stdio.h>
int main()
{
    int n,a,b,i,max=0;

    scanf("%d",&n);

    int A[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        if(A[i]>max)
            {
                a=i+1;
                max=A[i];
            }

    }

    printf("%d",a);



}
