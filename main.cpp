// a simple program to calculate and display the area 
// of a rectangle
#include <iostream>
using namespace std;

int main(){
    float A , L ,W ;

    cout<<"Please enter the length and the width of the rectangle" <<std::endl;
    cout<<"Length" <<std::endl;
    cin>>L;
    cout<<"Width" <<std::endl;
    cin>>W;
    A = L *W ;
    cout<<"The area of the rectangle with length of " <<L <<" and width of " <<W <<" is " <<A <<std::endl;
    return 0;
}