#include <stdio.h>
//Akram Mustafa
//150116905
void print0(int row, int col,int j)
{
    if (row < 0)
        return;
    int i;
    for (i = 0; i <(col/2); i++)
        printf("_");
    for (i = 0; i < j; i++)
        printf("1");
    for (i = 0 ; i <(col/2); i++)
        printf("_");
    printf("\n");
    print0(row - 1, col - 2,j+2);
}

void print1(int row, int col,int j)
{
    if (row < 0)
        return;
    int i;
    for (i = 0; i <(col/2); i++)
        printf("_");
    for (i = 0; i < j; i++)
        printf("1");
    for (i = 0 ; i <(col/2); i++)
        printf("_");
    printf("\n");
    print1(row - 1, col - 2,j+2);



}

void print11(int row, int col,int j)
{ row=15;
col=53;
j=1;
    if (row < 0)
        return;
    int i;
    for (i = 0; i <(col/2); i++)
        printf("_");
    for (i = 0; i < j; i++)
        printf("1");
    for (i = 0 ; i <(col/2); i++)
        printf("_");
    printf("\n");
    print1(row - 1, col - 2,j+2);



}

void print2(int n,int k,int j) {
    int i;

}

void print3(int row)
{
    for (int y = row - 1; y >= 0; y--) {


        for (int i = 0; i < y; i++) {
            printf("_");
        }
        for (int x = 0; x + y < row; x++) {

            if(x & y)
                printf("_ ");
            else
                printf("1 ");

        }

        for (int i = 0; i < y; i++) {
            printf("_");
        }

        printf("\n"); ;
    }
}
void print4(int row)
{
    int y=5;
    for ( y = row - 1; y >= 0; y--) {


        for (int i = 0; i < y; i++) {
            printf("_");
        }
        for (int x = 0; x + y < row; x++) {

            if(x & y)
                printf("_ ");
            else
                printf("1 ");

        }

        for (int i = 0; i < y; i++) {
            printf("_");
        }

        printf("\n"); ;
    }
}
int main()
{
    int row = 32, col=64, j=1,itr;
    printf("The number of iteration : ");
    scanf("%d",&itr);
    if(itr==0){
        print0(row-1, col,j);
    }

    else if(itr==1){
        row=14;
        col=80;
        j=1;
        print1(row,col,j);
        print11(row-1,col,j);

    }
    else if(itr==2){
        print2(row-1,col-2,j+3);
    }
    else if(itr==3){
    print3(row);
    }
    else if(itr==4){
        print4(row);
    }
    else
        printf("False");

    return 0;
}