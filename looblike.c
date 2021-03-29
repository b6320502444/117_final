#include<stdio.h>
int main()
{
    int n,i,max=0,x=0;
    scanf("%d",&n);
    int a[n];
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
    printf("%d",x);
return 0;
}
