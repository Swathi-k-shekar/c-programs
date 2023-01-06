
# include <stdio.h>
int main()
{

    int i,j,n,k;
    // Right side pyramid
    scanf("%d",&n);
    printf("Right side pyramid");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    // left side pyrimid
    printf("Left side pyramid");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        for(j=0;j<=2*(n-i);j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("* ");
        printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=2*(n-i);j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("* ");
        printf("\n");
    }

    return 0;
}