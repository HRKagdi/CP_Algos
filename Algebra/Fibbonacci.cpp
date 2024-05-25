#include<bits/stdc++.h>
using namespace std;
// Fibonacci Series using Binary Exponentiation.

vector<vector<long long>> matmul(vector<vector<long long>> &a, vector<vector<long long>>&b){
	vector<vector<long long>> res(a.size(), vector<long long>(b[0].size(), 0));
	
	for(int i=0;i<2; i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++)
			{
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return res;
}

int main(){
	vector<vector<long long>> mat;
	mat.push_back({0, 1});
	mat.push_back({1, 1});
	int n; cin>>n;
	
	vector<vector<long long>> ide;
	ide.push_back({0,1});
	ide.push_back({1,0});
	
	while(n>0){
		if(n&1) {
			ide = matmul(ide, mat);
		}
		mat = matmul(mat, mat);
		n/=2;
	}
	cout<<"Fib[n-1] "<<mat[0][0]<<" Fib[n] "<<mat[1][0]<<endl;
	return 0;
}
