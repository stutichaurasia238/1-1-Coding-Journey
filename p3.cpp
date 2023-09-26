//Type casting in c++
//ASCII value
#include <iostream>
using namespace std;

int main()
{
    // char to int type conversion
    // 'a' is type casted to 97
    // char to ASCII value
    int a ='a'; 
    cout<<a<<endl;

    //int to char type conversion
    // 98 is type casted to 'b'
    //ASCII value to char
    char ch= 98;
    cout<<ch<<endl;

    //Warning : 123456 trated as 64 , because that is largest value which can be stored in char
    //64 is type casted to '@'
    //char (1 byte)=8 bits
    //for char max value =2^8 -1 =255 and for 4 byte integer , last bit shows =255/4 ~ 64 (fuzzy logic)
    /* If we try to assign some big value of any char variable,
    only its last bit values will be assigned and 
    then specific mapped character will be printed*/
    char ch1 =123456;
    cout<<ch1<<endl;

}