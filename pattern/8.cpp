#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n=5;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout <<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for(j=0;j<i;j++){
            cout <<" ";
    }
    cout <<endl;

}
}