#include <iostream>

using namespace std;

int main(){
    const int MAXN = 256;
    int n,arr[MAXN];
    bool isPalindrom = true;
    cin>>n;
    for(int i =0;i<n;i++)
        cin>>arr[i];

    int left =0,right = n-1 ;
    while(left < right && isPalindrom){
        if(arr[left] != arr[right])
            isPalindrom = false;
        left ++;
        right --;
    }
    // for(int i=0;i < n/2;i++){
    //     if(arr[i] != arr[n-1-i]){
    //         isPalindrom = false;
    //         break;
    //     }
        
    // }

    cout<<(isPalindrom ? "true" : "false")<<endl;
}