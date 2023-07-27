#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outfile("file.txt");
    outfile << "hello"<<endl;
    outfile<<78<<endl;
    outfile.close();
    cout<<"done"<<endl;
    ifstream inf("file.txt");
    string str1;
    int n;
    inf>>str1>>n;
    inf.close();
    cout<<str1<<endl<<n;
    inf.close();

    return 0;
}
