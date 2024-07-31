#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3,s4,s5,avg;
    cout<<"Enter the marks of 5 subjects";
    cin>>s1>>s2>>s3>>s4>>s5;
    avg =((s1+s2+s3+s4+s5)/5);
    cout<<"The average is : "<<avg;
    if (avg>90)
       cout<< "The grade is O";
    else if (avg>70 && avg<80)
        cout<< "The grade is A+";
    else if (avg>60 && avg<70)
       cout<< "The grade is A";
    else if (avg>50 && avg<60)
       cout<< "The grade is B+";
    else if (avg>50 && avg<40)
       cout<< "The grade is B";
    else
       cout<< "FAIL";
    
}
//Enter the marks of 5 subjects80
//80
//80
//808
//0
//The average is : 64The grade is A

//=== Code Execution Successful ===
//Enter the marks of 5 subjects60
//404
//0
//404
//0
//The average is : 28FAIL

//=== Code Execution Successful ===