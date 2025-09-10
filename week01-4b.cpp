/// week01-4b.cpp ¨Ï¥ÎC++»y¨¥
#include <iostream>
using namespace std;
int main()
{
	int s, e, ans=0;
	cin >> s >> e;
	for(int i=s; i<=e; i++)
	{
		if(i%3==0) ans=ans+i;
	}
	cout << ans;
}

