#include<stdio.h>
int main()
{
    int n1,n2,n3,a,i,j;

    scanf("%d %d %d",&n1,&n2,&n3);

    int A[n1][n1],B[n2][n2],C[n3][n3],sum[1000]={0},row,colum;

    for(i=0;i<n1;i++)
     {
         for(j=0;j<n1;j++)
            {
                scanf("%d",&A[i][j]);
                sum[i]=A[i][j]+sum[i];
            }
     }

    for(i=0;i<6;i++)
     {

        printf("%d ",sum[i]);


     }




}
