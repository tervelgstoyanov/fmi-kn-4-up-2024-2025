#include  <iostream>
#include <limits.h>
using namespace std;

int main(){
    unsigned int n,m,l,k,sum = 0;
    cin>>n>>m>>l>>k;
    sum = n+m+l+k;
    unsigned int min = n;  
    if(min>m)min = m;
    if(min>l)min = l;
    if(min>k)min = k;
    cout<<sum-min+1<<endl;
}   