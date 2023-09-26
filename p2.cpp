//Data type in C++
//sizeof()function

#include <iostream>
using namespace std;

int main(){
    int a=123;
    cout<< a <<endl;
    int s1= sizeof(a);
     cout<< "Size ="<<s1<<endl;

    char b='v';
    cout<< b <<endl;
    int s2= sizeof(b);
    cout<< "Size ="<<s2<<endl;

    float c=1.0;
    cout<< c <<endl;
    int s3= sizeof(c);
    cout<< "Size ="<<s3 <<endl;

    bool b1 =true;
    cout<< b1 <<endl;
    int s4= sizeof(b1);
    cout<< "Size ="<<s4<<endl;

    double d=1.23;
    cout<< d <<endl;
    int s5= sizeof(d);
    cout<< "Size ="<<s5 <<endl;

}