#include <iostream>
using namespace std;

int main(){
    long long n,m,a,x,y;
    cin>>n;
    cin>>m;
    cin>>a;
    
    x=n/a;
    if(n%a!=0){
        x++;
    }
    
    y=m/a;
    if(m%a!=0){
        y++;
    }
    
    cout<<x*y;
    
}
