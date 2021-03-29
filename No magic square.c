#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d %d %d",&a,&b,&c);
    int x[a][a],y[b][b],z[c][c];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
}
