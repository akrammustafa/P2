//Akram MUSTAFA
//150116905
#include <stdio.h>

int countEars(int);

int main(){
    int line;

    printf("Please enter the number of lines (n=): ");
    scanf("%d", &line);

    countEars(line);

    return 0;
}

int countEars(int i){
    // Base condition...
    if (i == 0){
        printf("bunnyEars2(0) -> 0\n");
        return 0;
    }

    // Recursive part...
    int ears = countEars(i-1);

    // Printing...
    if(i % 2 == 0){
        printf("bunnyEars2(%d) -> %d\n", i, ears + 3);
        return ears + 3;
    }
    else{
        printf("bunnyEars2(%d) -> %d\n", i, ears + 2);
        return ears + 2;
    }
}