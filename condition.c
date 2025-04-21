#include <stdio.h>
 int main () {

  int age = 22;
    if (age < 16) {
        printf("Baby");
    } else if (age < 40) {
    printf("Young adult");
    } else if (age < 55) {
    printf("Adult");
    } else {
    printf("Senior citizen");
    }
    return 0;
 }