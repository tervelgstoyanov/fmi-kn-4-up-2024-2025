#include  <iostream>

using namespace std;

int main(){
    char c;
    cin>>c;
    if(c >= '0' && c<='9'){
        cout<<"digit"<<endl;
    }
    else if(c >= 'a' && c<='z'){
        cout<<"lower case letter"<<endl;
    }
    else if(c >= 'A' && c<='Z'){
        cout<<"uppercase case letter"<<endl;
    }
    else{
        cout<<"not a digit nor a letter"<<endl;
    }


}