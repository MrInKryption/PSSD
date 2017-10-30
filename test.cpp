#include <iostream>
#include <fstream>
#include <sstream>
#include <sstream>
#include<iomanip>
using namespace std;
int main(){
        double doubleValue;
      	int intValue;
        string line, str, str2, str3;

        ifstream infile("test.txt", ifstream::in);
        getline(infile, line);

        while (getline(infile, line)){
            stringstream infile(line);
            infile >> str >> intValue >> str2 >> doubleValue;
            getline(infile, str3);
            cout << endl;
            cout << " " << str << " " << intValue << " " << str2 << doubleValue << str3<<endl;
        }
}
