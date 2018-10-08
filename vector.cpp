#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);
#define ll long long
#define ld long double

template<class T>
T add(T x,T y){
    return x+y;
}

int main(){
    FastRead
    int temp,max1,max2;
    vector<int> a[3];
    vector<int>::iterator it;
    int T,N;
    cin >> T;
    N = T;
    while(T--){
        cin >> temp;
        a[0].push_back(temp);
    }
    T = N;
    while(T--){
        cin >> temp;
        a[1].push_back(temp);
    }
    T = N;
    while(T--){
        cin >> temp;
        a[2].push_back(temp);
    }
    cout << *a[0].end() << endl;
    it=max_element(a[0].begin(),a[0].end());
    temp = *(a[0].end()-1);
    *(a[0].end()-1) = *it;
    max1 = *it;
    *it = temp;
    it=max_element(a[0].begin(),a[0].end()-1);
    max2 = *it;
    cout << max1 << endl << max2  <<  endl;

    //cout << a[0][0] << " " << a[0][4] << endl;
    //cout << add(9.0,9.78) << endl;
    return 0;
}
