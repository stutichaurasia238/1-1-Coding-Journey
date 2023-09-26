//Concept of unsigned and signed (how negative nos are stored)
#include <iostream>
using namespace std;
int main()
{
    //unsigned stores only positive nos 
    unsigned int a =112;
    cout<<a<<endl;

    //it will get a very large no as output
    /*Compiler will try to print 2's complement but since the value is unsigned,
    then it will print positive integer which will be largr in value
    because here due to negative sign , most significant bit is 1*/
    unsigned int a1 =-112;
    cout<<a1<<endl;

}

