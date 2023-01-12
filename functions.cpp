#include <iostream>
#include <string.h>
#include "headerFiles.h"

using namespace std;

void printOutput(int length, char userInput[]){//takes the length of the string and array as input

    int i;
    //printing out the first row of letters
    for(i=0;i<length;i++){

        if(userInput[i]=='A'||userInput[i]=='!'||userInput[i]=='1')
          {cout<<"  *   ";}
        else if(userInput[i]=='B'||userInput[i]=='D'||userInput[i]=='R'||
                userInput[i]=='P'||userInput[i]=='['||userInput[i]=='3')
                {cout<<"****  ";}
        else if(userInput[i]=='F'||userInput[i]=='I'||
                userInput[i]=='O'||userInput[i]=='J'||userInput[i]=='T'||
                userInput[i]=='Z'||userInput[i]=='G'||userInput[i]=='E'||
                userInput[i]=='5'||userInput[i]=='7')
                {cout<<"***** ";}
        else if(userInput[i]=='H'||userInput[i]=='K'||userInput[i]=='M'||
                userInput[i]=='N'||userInput[i]=='U'||userInput[i]=='V'||
                userInput[i]=='W'||userInput[i]=='X'||userInput[i]=='Y')
                {cout<<"*   * ";}
        else if(userInput[i]=='S'||userInput[i]==']'||userInput[i]=='6'||
                userInput[i]=='C')
               {cout<<" **** ";}
        else if(userInput[i]=='L'){cout<<"*     ";}
        else if(userInput[i]=='Q'||userInput[i]=='?'||userInput[i]=='2'||
                userInput[i]=='8'||userInput[i]=='9'||userInput[i]=='0')
                {cout<<" ***  ";}
        else if(userInput[i]=='#'||userInput[i]=='4'){cout<<" * *  ";}
        else if(userInput[i]=='('){cout<<" *    ";}
        else if(userInput[i]==')'){cout<<"   *  ";}
        else if(userInput[i]=='.'||userInput[i]==','||userInput[i]=='*')
               {cout<<"      ";}
        else {cout<<"      ";}

    }cout<<"\n";

    //printing out second row of letters
    for(i=0;i<length;i++){

        if(userInput[i]=='B'||userInput[i]=='D'||userInput[i]=='H'||
           userInput[i]=='O'||userInput[i]=='P'||userInput[i]=='Q'||
           userInput[i]=='R'||userInput[i]=='U'||userInput[i]=='V'||
           userInput[i]=='W'||userInput[i]=='?'||userInput[i]=='8'||
           userInput[i]=='9'||userInput[i]=='0')
           {cout<<"*   * ";}
        else if(userInput[i]=='C'||userInput[i]=='E'||userInput[i]=='F'||
                userInput[i]=='G'||userInput[i]=='L'||userInput[i]=='S'||
                userInput[i]=='['||userInput[i]=='('||userInput[i]=='5'||
                userInput[i]=='6')
                {cout<<"*     ";}
        else if(userInput[i]=='A'||userInput[i]=='X'||
                userInput[i]=='Y'){cout<<" * *  ";}
        else if(userInput[i]=='I'||userInput[i]=='T'||userInput[i]=='!'||
                userInput[i]=='*'){cout<<"  *   ";}
        else if(userInput[i]=='M'||userInput[i]=='#'){cout<<"** ** ";}
        else if(userInput[i]=='N'){cout<<"**  * ";}
        else if(userInput[i]=='Z'){cout<<"   *  ";}
        else if(userInput[i]=='J'||userInput[i]==']'||userInput[i]==')'||
                userInput[i]=='3'||userInput[i]=='7')
               {cout<<"    * ";}
        else if(userInput[i]=='K'||userInput[i]=='2'||userInput[i]=='4'){cout<<"*  *  ";}
        else if(userInput[i]=='1'){cout<<" **   ";}
        else if(userInput[i]== ' '||userInput[i]=='.'||userInput[i]==','){cout<<"      ";}
        else {cout<<"      ";}

    }cout<<"\n";

    //printing out third row of letters
    for(i=0;i<length;i++){

        if(userInput[i]=='A'||userInput[i]=='H'||userInput[i]=='*'||
           userInput[i]=='3'||userInput[i]=='4')
          {cout<<"***** ";}
        else if(userInput[i]=='B'||userInput[i]=='E'||userInput[i]=='F'||
                userInput[i]=='P'||userInput[i]=='R'||userInput[i]=='5'||
                userInput[i]=='6')
                {cout<<"****  ";}
        else if(userInput[i]=='D'||userInput[i]=='O'||userInput[i]=='U'||
                userInput[i]=='V'||userInput[i]=='0'){cout<<"*   * ";}
        else if(userInput[i]=='I'||userInput[i]=='Z'||userInput[i]=='T'||
                userInput[i]=='Y'||userInput[i]=='X'||userInput[i]=='I'||
                userInput[i]=='!'||userInput[i]=='1'||userInput[i]=='2')
                {cout<<"  *   ";}
        else if(userInput[i]=='C'||userInput[i]=='L'||userInput[i]=='['||
                userInput[i]=='('){cout<<"*     ";}
        else if(userInput[i]=='G'){cout<<"* *** ";}
        else if(userInput[i]=='S'||userInput[i]==','||userInput[i]=='.'||
                userInput[i]=='8'||userInput[i]=='9')
               {cout<<" ***  ";}
        else if(userInput[i]=='K'){cout<<"***   ";}
        else if(userInput[i]=='J'||userInput[i]==']'||userInput[i]==')')
               {cout<<"    * ";}
        else if(userInput[i]=='Q'||userInput[i]=='M'|| userInput[i]=='N'||
                userInput[i]=='W'){cout<<"* * * ";}
        else if(userInput[i]=='?'||userInput[i]=='7'){cout<<"   *  ";}
        else if(userInput[i]== ' '||userInput[i]=='#'){cout<<"      ";}
        else {cout<<"      ";}

    }cout<<"\n";

    //printing out fourth row of letters
    for(i=0;i<length;i++){

        if(userInput[i]=='A'||userInput[i]=='B'||userInput[i]=='D'||
           userInput[i]=='G'||userInput[i]=='H'||userInput[i]=='M'||
           userInput[i]=='O'||userInput[i]=='R'||userInput[i]=='U'||
           userInput[i]=='J'||userInput[i]=='6'||userInput[i]=='8'||
           userInput[i]=='0'){cout<<"*   * ";}
        else if(userInput[i]=='C'||userInput[i]=='E'||userInput[i]=='F'||
                userInput[i]=='L'||userInput[i]=='P'||userInput[i]=='['||
                userInput[i]=='('){cout<<"*     ";}
        else if(userInput[i]=='I'||userInput[i]=='T'||userInput[i]=='Y'||
                userInput[i]=='1')
                {cout<<"  *   ";}
        else if(userInput[i]=='K'||userInput[i]=='Q'){cout<<"*  *  ";}
        else if(userInput[i]=='V'||userInput[i]=='X'||userInput[i]=='*'){cout<<" * *  ";}
        else if(userInput[i]=='S'||userInput[i]==']'||userInput[i]==')'||
                userInput[i]=='3'||userInput[i]=='5'){cout<<"    * ";}
        else if(userInput[i]=='W'||userInput[i]=='#'){cout<<"** ** ";}
        else if(userInput[i]=='Z'||userInput[i]=='2'){cout<<" *    ";}
        else if(userInput[i]=='N'){cout<<"*  ** ";}
        else if(userInput[i]==','||userInput[i]=='4'||userInput[i]=='7'||
                userInput[i]=='9'){cout<<"   *  ";}
        else if(userInput[i]=='.'){cout<<" ***  ";}
        else if(userInput[i]== ' '||userInput[i]=='!'||userInput[i]=='?')
               {cout<<"      ";}
        else {cout<<"      ";}

    }cout<<"\n";

    //printing the fifth row of letters
    for(i=0;i<length;i++){

        if(userInput[i]=='['||userInput[i]=='E'||userInput[i]=='G'||
           userInput[i]=='L'||userInput[i]=='O'||userInput[i]=='Z'||
           userInput[i]=='I'||userInput[i]=='2')
           {cout<<"***** ";}
        else if(userInput[i]=='A'||userInput[i]=='H'||userInput[i]=='K'||
                userInput[i]=='M'||userInput[i]=='N'||userInput[i]=='R'||
                userInput[i]=='W'||userInput[i]=='X'||userInput[i]=='*')
                {cout<<"*   * ";}
        else if(userInput[i]=='B'||userInput[i]=='D'||userInput[i]=='S'||
                userInput[i]=='3'){cout<<"****  ";}
        else if(userInput[i]=='['){cout<<"***   ";}
        else if(userInput[i]=='I'||userInput[i]=='T'||userInput[i]=='V'||
                userInput[i]=='Y'||userInput[i]=='!'||userInput[i]=='?'||
                userInput[i]==','||userInput[i]=='7'||userInput[i]=='9')
                {cout<<"  *   ";}
        else if(userInput[i]=='F'||userInput[i]=='P'){cout<<"*     ";}
        else if(userInput[i]=='J'||userInput[i]=='U'||userInput[i]=='.'||
                userInput[i]=='1'||userInput[i]=='5'||userInput[i]=='6'||
                userInput[i]=='8'||userInput[i]=='0')
               {cout<<" ***  ";}
        else if(userInput[i]=='Q'){cout<<" ** * ";}
        else if(userInput[i]=='C'||userInput[i]==']'){cout<<" **** ";}
        else if(userInput[i]=='#'){cout<<" * *  ";}
        else if(userInput[i]=='('){cout<<" *    ";}
        else if(userInput[i]==')'||userInput[i]=='4'){cout<<"   *  ";}
        else if(userInput[i]== ' '){cout<<"      ";}
        else {cout<<"      ";}

    }cout<<"\n";



}

