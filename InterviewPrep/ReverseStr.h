#include <iostream>
#include <cstring>

class ReverseStr{
 public:
    void reverse(char* str){
        char* end = str;
        char temp;
        int count = 0, len = strlen(str);
        if (str){
            while(count++ < len){
                end++;
            }
            end--;

            while (str < end){
                temp = *str;
                *str++ = *end;
                *end = temp;
            }
        }
    }
};