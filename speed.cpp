#include<iostream>
#include<cmath>
using namespace std;

long double func_c(int n,long double t,long double* d,long double* s,long double c){
    long double v_time = 0,factor = 1;
    int nn = n;
    while(nn--){
        v_time += d[nn]/(s[nn]+c);
    }
    nn = n;
    while(nn--){
        factor*=(s[nn]+c);
    }
    return (v_time*factor) - (t*factor);
}

long double speed_correction(int n,long double t,long double* d,long double* s){
    long double time1,time2,time3;
    long double pc1 = -1000,pc2 = 1000,c=-1;
    time1 = func_c(n,t,d,s,pc1);
    time2 = func_c(n,t,d,s,c);
    time3 = func_c(n,t,d,s,pc2);
    cout << time1 << endl <<time2 << endl << time3 << endl;
    while(abs(time2)>0.00000000000000001){
        time1 = func_c(n,t,d,s,pc1);
        time2 = func_c(n,t,d,s,c);
        time3 = func_c(n,t,d,s,pc2);
        //cout << time1 << endl <<time2 << endl << time3 << endl;
        if((0>time1 && 0<time2) || (0<time1 && 0>time2)){
            pc2 = c;
            c = (pc1+c)/2;
        }
        else if((0>time2 && 0<time3) || (0<time2 && 0>time3)){
            pc1 = c;
            c = (pc2+c)/2;
        }
        /*else{
            if(abs(time2)>0.00000000000000001) c--;
            //cout << 1 << endl;
        }*/
        cout << c << endl;

    }
    cout << c << endl;
    return c;

}

int main(){
    cout.precision(19);
    int n,nn;
    long double t;
    cin >> n >> t;
    nn = n;
    long double d[n];
    long double s[n];
    while(nn--){
        cin >> d[nn] >> s[nn];
    }
    cout <<func_c(n,t,d,s,-1)<<endl<< speed_correction(n,t,d,s) << endl;
    return 0;
}
