#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

const int scale_N = 2e3;
const int scale_K = 1e3;
const int MAXN = 1e9;

signed main() {
	int N, K;
	srand(time(NULL));
	N = scale_N;
	//N = rand() % scale_N + 1;
	K = scale_K;
	//K = (rand() % N) % scale_K  + 1;
	cout<<N<<' '<<K<<'\n';
	int range = scale_K / 2;
	for(int i=0;i<N;i++) {
		int num = i % K;
		cout<<num<<' ';
	}
}
