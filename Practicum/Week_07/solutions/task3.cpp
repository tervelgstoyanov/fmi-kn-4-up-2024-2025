#include <iostream>
#include <cstring>

using namespace std;

char getFirstUniqueSymbol(char str[]){
    int n = strlen(str);
    int counts[256]{0,};
    for(int i=0;i<n;i++)
        counts[(unsigned char)str[i]]++;
    for(int i=0;i<n;i++)
        if(counts[(unsigned char)str[i]] == 1)return str[i];
    return 0;
}

int main(){
    char str[256] = "abracadabra";
    cout<<getFirstUniqueSymbol(str)<<endl;;
}