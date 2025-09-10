/// week01-4a.cpp 使用C語言
#include <stdio.h>
int main()
{
	int s, e, ans=0;
	scanf("%d%d", &s, &e);
	for(int i=s; i<=e; i++)
	{
		if(i%3==0) ans=ans+i;
	}
	printf("%d", ans);
}
