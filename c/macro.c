#include<stdio.h>
#define Print(msg,input) printf(#msg,#input)
#define print(msg,input_1,input_2) printf(#msg,#input_1,#input_2)
int main(void)
{
    Print("Welcome to %s",C);
    print("Hello to %s: Welcome to %s",John,C);
    return 0;
}
