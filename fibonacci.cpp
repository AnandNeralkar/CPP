#include <cassert>
#include <iostream>


int main()
{

int sum=1,sum1=1,n=0;

for(int i=1;i<=11;i++)
{
    printf("%d",sum);
    sum1=sum;
    sum=sum+n;
    n=sum1;
}

int ans=n%10;
printf("---%d--",ans);

}
