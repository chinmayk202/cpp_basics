#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

/*bool check(string x,string y){
	int f = x.length();
	int g = y.length();
	for(int i =0;i<f;i++){
		for(int j =0;j<g;j++){
			if(x[i] == y[j]) break;
			else if(j==g-1) return 0;
		}
	}
	return 1;
}

bool chkc(string x,char y){
	long long f = x.length();
	for(int i =0;i<f;i++){
		if(x[i] == y) break;
		else if(i==f-1) return 0;
	}
	return 1;
}*/

long long fate(string x,string y){
	//string z="";
	long long C =0,i=0,l,k=0,t,v;
  	l = x.length();
	t = y.length();
	/*for(int i=0;i<t;i++){
		if(chkc(x,y[i])) z.push_back(y[i]);
	}*/
	//t = z.length();
	//cout << z << endl;
	while(i<l){
		v = i;
		for(k =0;k<t;k++){
			if(y[k] == x[i]) i++;

		}
		C++;
		if(v==i) return -1;

	}
	return C;
}

int main(){
	long long C =0,i=0;
	string X,Y;
	cin >> X >> Y;
	printf("%lld\n",fate(X,Y));
	return 0;
}
