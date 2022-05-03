/*Stream is an abstraction that represents a device on which operations are performed
it can be represented as a source of destination of characters of indefinite length depending on its usage
stream provides a communication channel or link(pipeline) between files/devices and program
istream for input
ostream for output
ifstream for input stream to read file
ofstream for output stream to write to file
fstream for read and write to file
open() to create 
close() existing file 
read() from file 
write() to file
ofstream f1; ofstream is class and f1 is object*/

//WAP to write a set of lines to specified files

#include <fstream>
using namespace std;
int main(){
    ofstream f;
    f.open("file.txt");
    f<<"Hello World ! \n";
    f<<"** WROTE TO A FILE **\n";
    return 0;
}