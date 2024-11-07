#include <iostream>

using namespace std;

int main(){
    const int MAXN = 256;
    int n;
    int arr[MAXN];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<arr[0]<<" ";   
    for(int i = 1;i<n;i++){
        if(arr[i-1] > arr[i])
            cout<<"\n";
        cout<<arr[i]<<" ";
    }
}