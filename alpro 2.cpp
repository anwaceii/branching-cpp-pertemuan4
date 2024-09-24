#include<iostream>
using namespace std;

int main(){

int n, t1 = 0, t2 = 1, nextTerm;

cout<<"Masukkan jumlah suku:";
cin>> n;

cout<<"Deret Fibonacci:";
for (int i =1; i <= n; i++){
    cout<< t1 << " ";
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
}
return 0;
}
