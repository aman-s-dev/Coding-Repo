#include<iostream>
using namespace std;

void towerOfHanoi(char source, char aux, char dest, int n){
    if (n==1){
        cout<<"Move disk from "<<source<<" to "<<dest<<endl;
        return;
    }
    towerOfHanoi(source, dest,aux, n-1);
    cout<<"Move disk from "<<source<<" to "<<dest<<endl;
    towerOfHanoi(aux, source, dest, n-1);
}
 int main(){
    int n;
    cin>>n;
    towerOfHanoi('A','B','C',n);
    return 0;
 }