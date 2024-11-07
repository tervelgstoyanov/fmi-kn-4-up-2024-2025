#include <iostream>

using namespace std;

int main(){
    const int MAXN = 256;
    int n,arr[MAXN];
    
    cin>>n;
    for(int i =0;i<n;i++)
        cin>>arr[i];

    int left =0,right = n-1 ;
    while(left < right){
        if(arr[left] != arr[right]){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
        left ++;
        right --;
    }

    // for(int i=0;i < n/2;i++){
    //     if(arr[i] != arr[n-1-i]){
    //         int temp = arr[i];
    //         arr[i] = arr[n-1-i];
    //         arr[n-1-i] = temp;
    //     }        
    // }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}