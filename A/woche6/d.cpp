#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run() {

    int cases;
	cin>>cases;
	while(cases--)
	{
		int n,m;cin>>n>>m;
		int sum=0;
		int a[n+1]={0};
		for(int i=0;i<m;i++)
		{
			int x,y;cin>>x>>y;
			a[x]++;a[y]++;
		} 
		for(int i=1;i<=n;i++)if(a[i]==1)sum++;
		cout<<m-sum<<' '<<sum/(m-sum)<<endl;
	}
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();

    return 0;
}