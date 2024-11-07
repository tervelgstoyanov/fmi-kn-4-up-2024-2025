#include <iostream>

using namespace std;

int main(){
    const int MAXN = 256;
    
    int n1, arr1[MAXN];
    cin>>n1;
    for(int i = 0;i<n1;i++)
        cin>>arr1[i]; 
    
    int n2, arr2[MAXN];
    cin>>n2;
    for(int i = 0;i<n2;i++)
        cin>>arr2[i];
    
    int count = 0;
    bool used[MAXN]{0,};

    for(int i = 0; i<n1 ; i++){
        for(int j = 0; j<n2 ; j++){
            if( !used[j] && arr1[i] == arr2[j]){
                count++;
                used[j]=1;
                break;
            }
        }    
    } 
    
    cout<<count<<endl;
}