#include <iostream>
using namespace std;

void printDetails(string f_name, string l_name=""){//last name is default nothing
    cout<<f_name<<" ";
    if (l_name!=""){cout<< l_name;} //prints ast name only if it's non-empty
    cout<<endl;
}

int main(){
    printDetails("Sandeep","Jain");
    printDetails("Shivansh");//here last name is not printed since it was ot provided
    return 0;
}

/*
Output:
Sandeep Jain
Shivansh
*/

//NOTE : default arguments can only be placed for the last elements, any argument that does not have a default value must come first, before any parameter with default values