#include<stdio.h>
int main()
{
    int n[3],a[3]={0,0,0},i,j,dia1[5]={0},dia2[5]={0},row[5][1000]= {0},colum[5][1000]= {0},k;

    for(i=0; i<3; i++)
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

    for(k=0; k<3; k++)
    {
        for(i=0; i<n[k]; i++)
        {
            for(j=0; j<n[k]; j++)
            {
                if(k==0)
                {
                    row[k][i]=A[i][j]+row[k][i];
                    colum[k][i]=A[j][i]+colum[k][i];
                    if(i==0)
                    {
                        dia1[k]=A[i+j][j+i]+dia1[k];
                        dia2[k]=A[n[k]-j][j]+dia2[k];
                    }
                }
                else if(k==1)
                {
                    row[k][i]=B[i][j]+row[k][i];
                    colum[k][i]=B[j][i]+colum[k][i];
                    if(i==0)
                    {
                        dia1[k]=B[i+j][j+i]+dia1[k];
                        dia2[k]=B[n[k]-j][j]+dia2[k];
                    }
                }
                else if(k==3)
                {
                    row[k][i]=C[i][j]+row[k][i];
                    colum[k][i]=C[j][i]+colum[k][i];
                    if(i==0)
                    {
                        dia1[k]=C[i+j][j+i]+dia1[k];
                        dia2[k]=C[n[k]-j][j]+dia2[k];
                    }
                }

            }

        }
    }
    for(k=0; k<3; k++)
    {
        for(i=0; i<n[k]-1; i++)
        {
            if(row[k][i]!=row[k][i+1])
            {
                a[k]=1;
                break;

            }

            if(colum[k][i]!=colum[k][i+1])
            {
                a[k]=1;
                break;
            }

            if(dia1[k]!=dia2[k])
            {
                a[k]=1;
                break;
            }
        }
    }




    for(i=0;i<3;i++)
     {
        if(a[i]==0)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
     }




}
