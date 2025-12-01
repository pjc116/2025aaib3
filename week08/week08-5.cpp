///week08-5.cpp
#include <iostream>
using namespace std;
int MYPOWER(int n, int m)
{
	int ans = 1;
	for(int i=1; i<=m; i++)
	{
		ans = ans*n;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
