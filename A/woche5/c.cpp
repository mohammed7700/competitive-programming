#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void input(char c1[][2],char c2[][2])
{
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			cin>>c1[i][j];
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			cin>>c2[i][j];
}

void run() {

	char c1[2][2],c2[2][2];
	input(c1,c2);

	string str1,str2;
	for(int i=0;i<2;i++) {
		if(c1[0][i]!='X')
			str1+=c1[0][i];
    }
	for(int i=1;i>=0;i--) {
		if(c1[1][i]!='X')
			str1+=c1[1][i];
    }
	for(int i=0;i<2;i++) {
		if(c2[0][i]!='X')
			str2+=c2[0][i];
    }
	for(int i=1;i>=0;i--) {
		if(c2[1][i]!='X')
			str2+=c2[1][i];
    }

	str2+=str2;
	int index=str2.find(str1);

	if(index==-1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    run();
}