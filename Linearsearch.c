#include<stdio.h>
int main()
{
    int a[20],i,x,n;
    printf("how many elements:");
    scanf("%d",&a[i]);
    printf("enter array elements:n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("n element t search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    if(a[i]==x)
    break;
    if(i<n)
    printf("element found at index %d",i);
    else
    printf("element not found");
    return 0;
}