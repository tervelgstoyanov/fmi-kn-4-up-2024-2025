#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int MAXN = 256;
    int n,arr[MAXN];
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    int min = abs(arr[1] - arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<min)
                min = abs(arr[i]-arr[j]);
        }       
    }
    cout<<min<<endl;
}