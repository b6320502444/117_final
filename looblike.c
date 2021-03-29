#include<stdio.h>
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int a[n],x[n];
    for(i=0;i<n;i++)
    {
        x[i]=0;
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            x[0]=i+1;
        }
    }
    for(i=0;i<n;i++)
    {
            if(max==a[i])
            {
                max=a[i];
                x[1]=i+1;
            }
    }
    for(i=0;i<n;i++)
    printf("%d",x[n]);
return 0;
}
