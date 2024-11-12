#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n,n1,n2;
    cin>>n;
    char prefix[256],text[256];
    cin>>prefix; // getline - ако има интервали
    for(int i=2;i<=n;i++){
        cin>>text; // getline - ако има интервали
        n1=strlen(prefix);
        n2=strlen(text);
        int j;
        for(j=0;j<n1 && j < n2 && prefix[j] == text[j]; j++)
            j++;
        prefix[j] = 0;
    }
    cout<<prefix<<endl;
}