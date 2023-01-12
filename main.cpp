#include <iostream>
#include <string.h>
#include "headerFiles.h"

using namespace std;

void printOutput(int length, char userInput[]);


int main(int argc, char **argv)
{
    for(int i=1;i<argc;i++){
        cout<<"User Input: "<<argv[i]<<endl;
        int length = strlen(argv[i]);
        printOutput(length, argv[i]);
    }

    return 0;
}


