#include <stdio.h>

int main(){
    int score = 90.5;
    printf("score: %.1f\n", score);
    return 0;
}

// code error เพราะ 90.5 เป็นทศนิยม แต่ int ไม่สามารถเก็บค่าทศนิยมได้