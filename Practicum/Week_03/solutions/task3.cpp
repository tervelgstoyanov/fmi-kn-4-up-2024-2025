#include  <iostream>

using namespace std;

int main(){
    int n;
    bool strange = false;
    cin>>n;
    if(n%2 == 1 ||(n >=6 && n<=20))
        strange = true;
    cout<< (strange ? "strange" : " not strange")<<endl;
}