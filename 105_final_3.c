#include<stdio.h>
int main()
{
    int n1,n2,n3,a,i,j;

    scanf("%d %d %d",&n1,&n2,&n3);

    int A[n1][n1],B[n2][n2],C[n3][n3],sum[1000]={0},row[1000]={0},colum[1000]={0};

    for(i=0;i<n1;i++)
     {
         for(j=0;j<n1;j++)
            {
                scanf("%d",&A[i][j]);
            }
     }
     for(i=0;i<n1;i++)
     {
         for(j=0;j<n1;j++)
            {

                row[i]=A[i][j]+row[i];
                colum[i]=A[j][i]+colum[i];
            }
     }

    for(i=0;i<n1;i++)
     {


                  printf("%d,%d\n",row[i],colum[i]);




     }




}
