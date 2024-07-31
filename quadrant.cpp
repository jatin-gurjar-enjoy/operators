#include<iostream>
using namespace std;

int main(){
    int x,y;
     cout<<"enter the co ordinates";
     cin>>x>>y;
    if(x>0 && y>0 )
       cout<<"present in first quadrant";
    else if(x<0 && y>0)
       cout<<"present in second quadrant";
    else if(x<0 && y<0)
       cout<<"present in third quadrant";
    else
       cout<<"present in fourth quadrant";
}
//enter the co ordinates21
//424
//present in first quadrant

//=== Code Execution Successful ===
//enter the co ordinates23
//-23
//present in fourth quadrant

//=== Code Execution Successful ===
//enter the co ordinates-21
//-21
//present in third quadrant

//=== Code Execution Successful ===
//enter the co ordinates-21
//98
//present in second quadrant

//=== Code Execution Successful ===