#include <iostream>
#include "ReverseStr.h"

using namespace std;

int main(){
    char *str = (char*)"Hello";
    ReverseStr rev;
    rev.reverse(str);
    cout << str << endl;

    return 0;
}