#include  <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y,r;
    double dist;
    const double eps = 0.0001; 
    cin>>r>> x >> y;
    if( r < 0)
        cout<< "Invalid arguments"<<endl;
    else{
        dist = (x*x + y*y);
        r = r*r;
        if(abs(dist - r) < eps){
            cout<< "contour" <<endl;
        }
        else if(dist < r){
            cout<< "inside" <<endl;
        }
        else{
            cout<< "outside" <<endl;

        }
    }
}