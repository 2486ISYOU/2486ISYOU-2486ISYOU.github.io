//week03-4.cpp soit106_base_006
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		if(a>c)
			printf("%d\n",a);
	if(b>a)
		if(b>c)
			printf("%d\n",b);
	if(c>a)
		if(c>b)
			printf("%d\n",c);
}
