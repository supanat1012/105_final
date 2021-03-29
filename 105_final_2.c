#include<stdio.h>
int main()
{
    int n,a,b,i,j,max=0;

    scanf("%d",&n);

    int A[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        if(A[i]>max)
            max=i+1;

    }

    printf("%d",max);



}
