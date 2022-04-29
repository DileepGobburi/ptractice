#include<stdio.h>
int main()
{
show();
show();
}
void show()
{
auto int i=0;
register j=0;
static int k=0;
i++;
j++;
k++;
printf("%d %d %d\n",i,j,k);
}

