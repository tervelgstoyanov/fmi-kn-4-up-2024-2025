#include <iostream>

using namespace std;

int main(){
    const int MAXN=256;
    int n,d,arr[MAXN],result[MAXN];
    cin>>n>>d;
    d%=n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        result[(i + d)%n] =arr[i]; 
    for(int i=0;i<n;i++)
        arr[i] = result[i];

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}