# include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    //  inverted pyramid
    for(i=n;i>=0;i--)
    {
      for(j=0;j<2*(n-i);j++)
      printf(" ");
     for(k=1;k<=(2*i)-1;k++)  
     printf("* ");
     printf("\n");
    }
    // Pyramid
    printf("Pyramid\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=0;j<2*(n-i);j++)
      printf(" ");
     for(k=1;k<=(2*i)-1;k++)  
     printf("* ");
     printf("\n");
    }

    return 0;
}