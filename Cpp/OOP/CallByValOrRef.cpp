#include <iostream>
using namespace std;

void cbv(int val){
    val = val + 20;
    cout<<val<<endl;
}
void cbr(int &val){
    val = val + 20;
    cout<<val<<endl;
}
inline void add(int a = 34){
    cout<<(a + 35)<<endl;
}
int main(){
    int n;
    cin>>n;
    cbv(n);
    cout<<n<<endl;
    cbr(n);
    cout<<n<<endl;
    add();
}