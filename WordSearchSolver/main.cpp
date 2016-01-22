#include "wordsearch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    for ( int x = 1; x < argc; x++)
    {
        ifstream inFile(argv[x], ios::in);
        WordSearch newSearch(inFile);
    }
    cout << "Hello World!" << endl;
    return 0;
}

