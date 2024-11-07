#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x,arr[10]{0,};
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x;
        while(x>0){
            arr[x%10]++;
            x/=10;
        }
    }
    for(int i=0;i<10;i++){
        cout<<i<<": "<<arr[i]<<endl;
    }
}