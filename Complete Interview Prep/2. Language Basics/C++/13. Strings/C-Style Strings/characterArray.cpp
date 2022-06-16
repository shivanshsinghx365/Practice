#include <iostream>
using namespace std;
int main(){
    char str[] = {'g','f','g'}; //Here we haven't used "" double quotes so we are creating a character array
    //However in cases like this with '' single quotes, the compiler doesn't put a \0
    cout<<str<<endl; //This again gives the same output as earlier, gfg, but we can also have got some random value or segmentation fault due to absence of \0,since c style strings depend heavily on \0, so the output can be compiler dependant & random
    cout<<sizeof(str)<<endl; //size is 3 not 4 bcz no \0

    //THEREFORE to ue an array like this as a STRING, we must put \0 in the end
    char str1[] = {'g','f','g','\0'}; //Now this is safe to be used as a string
    cout<<str1<<endl;
    return 0;
}