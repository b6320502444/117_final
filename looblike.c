#include<stdio.h>
int main()
{
    int n,i,y=0,max=0;
    scanf("%d",&n);
    int a[n],x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            x=i+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        {
            max=a[i];
            x=i+1;
            printf("%d ",x);
        }
    }
return 0;
}
