#include<stdio.h>
int main()
{
    int n,a,b=0,i,max=0;

    scanf("%d",&n);
    if(n>=2&&n<=1000)
    {
        int A[n];

        for(i=0; i<n; i++)
        {
            scanf("%d",&A[i]);
        }

        for(i=0; i<n; i++)
        {
            if(A[i]>max)
            {
                a=i+1;
                max=A[i];
            }
            else if(A[i]==max)
            {
                b=1;
            }

        }

        if(b==1)
            printf("%d",max);

        printf("%d",a);

    }



}
