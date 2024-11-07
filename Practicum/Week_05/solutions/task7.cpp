#include <iostream>

using namespace std;

int main(){
    const int MAXN = 100;
    int n,m;
    int arr[MAXN];
    cin>>n;
    if(n<0||n>100){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    cin>>m;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            if(arr[i] + arr[j] == m)
                cout<<arr[i]<<" "<<arr[j]<<endl;
    }

}