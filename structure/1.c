#include <stdio.h>
#include <string.h>


struct myStructure {
    int myNum;
    char myLetter;
};


int main() {
    struct myStructure s1;

    s1.myNum = 10; 
    s1.myLetter = 'd';

    printf("%c=%d", s1.myLetter, s1.myNum);

    return 0;
}