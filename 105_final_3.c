#include<stdio.h>
int main()
{
    int n[3],a,i,j,dia1=0,dia2=0,row[1000]= {0},colum[1000]= {0},k;

    for(i=0;i<3;i++)
    scanf("%d",&n[i]);

    int A[n[0]][n[0]],B[n[1]][n[1]],C[n[2]][n[2]];

    for(k=0; k<3; k++)
    {
        for(i=0; i<n[k]; i++)
        {
            for(j=0; j<n[k]; j++)
            {
                if(k==0)
                     scanf("%d",&A[i][j]);
                else if(k==1)
                     scanf("%d",&B[i][j]);
                else if(k==2)
                     scanf("%d",&C[i][j]);
            }
        }
        printf("\n");
    }

    for(i=0; i<n[0]; i++)
    {
        for(j=0; j<n[0]; j++)
        {
            row[i]=A[i][j]+row[i];
            colum[i]=A[j][i]+colum[i];
            if(i==0)
            {
                dia1=A[i+j][j+i]+dia1;
                dia2=A[n[0]-j][j]+dia2;
            }

        }

    }

    for(i=0; i<n[0]-1; i++)
    {
        if(row[i]!=row[i+1])
        {
            printf("yes");
            break;
        }

        if(colum[i]!=colum[i+1])
        {
            printf("yes");
            break;
        }

    }



    /*for(i=0;i<n1;i++)
     {
                  printf("%d,%d\n",row[i],colum[i]);
     }*/




}
