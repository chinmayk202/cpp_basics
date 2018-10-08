#include<iostream>
using namespace std;

void bubble_sort(long int *a,int n){
        int temp; 
        for(int i =0;i<n-1;i++){
                for(int j=0;j<n-1-i;j++){
                        if(a[j] > a[j+1]){
                                temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }
}

int main(){
	int T,N,count=0;
	long long temp_max=0,max=0;
	cin >> T;
	N = T;
	long long budget[T];
	while(T--){
		cin >> budget[T];
	}
	bubble_sort(budget,N);
	do{
		temp_max = budget[count]*(N-count);
		if(temp_max > max) max = temp_max;
		count++;
	}while(count < N);
	cout << max << endl;
	return 0;
}
