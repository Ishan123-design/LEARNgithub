//Program-1(write a program in which 0 comes after every digit in a number)-
// #include <math.h>
// #include <stdio.h>

// int main()
// {

// long long num;
// printf("enter the num:");
// scanf("%lld", &num);

// long long temp = num;
// long long reversed =0;

// while(temp!=0){
// reversed = reversed *10 + temp%10;
// temp /=10;
// }

// while(reversed!=0){
//     long long digit = reversed%10;
//     printf("%lld0", digit);
//     reversed/=10;
// }
// return 0;
// }
/**************************************************************************************************************************** */

// #include <math.h>
// #include <stdio.h>

// int main()
// {
//     int arr[4][5]={{7,6,5,4,5}, {1,2,3,4,5}, {4,3,2,1,4}, {3,5,7,9,0}};
//     for(int i=0; i < 4; i++)
//     {
//         for(int j=0; j < 5; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// return 0;
// }

// #include <stdio.h>

// void hello()
// {
//     printf("Good morning\n");
//     printf("How are you?\n");
//     return ;// end or khatam//
// }

// int main()
// {
// hello(); // two times calling the function //
// hello();     // starting main function se hi hogi //
// return 0;
// }

/* The function should be written above the 
main function , and multiple functions should be written
in sequence */
// Example-
// #include <stdio.h>
// void india(){
//     printf("India");
//     austrailia();
//     return;
// }

// void austrailia(){
//     printf("Austrailia");
//     return ;
// }

// int main()
// {
// india();
// return 0;
// }
/*The above function is showing an error*/

// #include <stdio.h>

// void austrailia(){
//     printf("Austrailia\n");
//     return ;
// }

// void india(){
//     printf("India\n");
//     austrailia();
//     return ;
// }

// int main()
// {
// india();
// return 0;
// }// This is correct 

/*Main function is written only once in a c program 
*/
// Write a code to return sum of two numbers using a function 

// #include <stdio.h>
// #include <math.h>

// int add( int x, int y) // the variables in function and the main function are different//
// {
//     return x+y;
// }

// int main()
// {
//     int a,b;
//     printf("Enter the first number:");
//     scanf("%d", &a);
    
//     printf("Enter the second number:");
//     scanf("%d", &b);
    
//     int sum;
//     sum = add(a,b);
//     printf("%d", sum);

//     return 0;
// }
// using function prototype
// #include <stdio.h>

// int main(){
//     void printhello();
//     printhello();
//     printf("bye");
//     return 0;
// }

// void printhello()
// {
//     printf("hello\n");
//     return ;
// }

// #include <stdio.h>
// #include <math.h>

// int factorial(int x)
// {
//     int fact = 1;
//     for(int i=2; i<=x; i++)
//     {
//         fact = fact*i;
//     }
//  return fact;
// }

// int main()
// {
//     int n,r;
//     printf("enter the value of n:");
//     scanf("%d", &n);

//     printf("enter the value of r:");
//     scanf("%d", &r);
    
//     // int factn = factorial(n);
//     // int factr = factorial(r);
//     // int factnr= factorial(n-r);

//     int ncr= factorial(n)/(factorial(r)*factorial(n-r));
//     printf("%d", ncr);
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int f = 1;
    for(int i=2; i<=n; i++){
        f = f*i;

    }
    return f;
}

int combination(int x, int y)
{
int comb = factorial(x)/ (factorial(y)* factorial(x-y));
return comb;

}

int main()
{
    int a;
    printf("enter the number");
    scanf("%d", &a);
    
    for(int i=0; i<=a; i++)
    {
        for(int j=0; j<=a-i+1; j++)
        {
            printf(" ");
        }
        
        for(int p=0; p<=i; p++)
           {
            int b = combination(i,p);
            printf("%d " ,b);
           }

    printf("\n");
    }
    return 0;
}