/**
 * Solution of problem 'Printing a number pattern'.
 * @file 0001_solution.c
 * @author Nischay Sharma
 * @version 1.0
 * */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {    
    int n;
    scanf("%d",&n);
    int temp;
    // looping i from 1 to 'n-1'
    for(int i=1;i<=n;i++)
    {
        temp=i; 
        for(int j=0;j<i;j++)
        {
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
    }
    return 0;

}
