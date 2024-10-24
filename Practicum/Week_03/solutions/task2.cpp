#include  <iostream>

using namespace std;

int main(){
    while(true){

    unsigned int points;
    unsigned int grade; 
    cin>>points;
    if(points<=30)
        grade = 2;
    else if(points<=50)
        grade = 3;
    else if(points<=70)
        grade = 4;
    else if(points<=85)
        grade = 5;
    else if(points<=100)
        grade = 6;
    else grade = 0;
    
    if(grade)
        cout<<grade<<endl;
    else
        cout<<"Invalid points"<<endl;
    }

}