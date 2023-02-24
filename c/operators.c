#include <stdio.h>

int main()
{
    long int a,b=4;// assignment operator and comma operator - ,
    int op;// comma operator - ;
    printf("Enter 1 to calculate sizeof\nEnter 2 to calculate pre-increment\nEnter 3 to calculate post-increment\nEnter 4 to calculate pre-decrement\nEnter 5 to calculate post-decrement\nEnter 6 to calculate addition\nEnter 7 to calculate subtraction\nEnter 8 to calculate multiplication\nEnter 9 to calculate division\nEnter 10 to calculate modulus\nEnter 11 to calculate logical and\nEnter 12 to calculate logical or\nEnter 13 to calculate logical not\n");
    printf("Enter 14 to calculate less than\nEnter 15 to calculate less than or equal to\nEnter 16 to calculate greater than\nEnter 17 to calculate greater than or equal to\nEnter 18 to calculate equal to\nEnter 19 to calculate not equal to\nEnter 20 to calculate bitwise and\nEnter 21 to calculate bitwise or\nEnter 22 to calculate bitwise xor\nEnter 23 to calculate compliment\nEnter 24 to left shift\nEnter 25 to calculate right shift\n");
    printf("Enter the option:\n");
    scanf("%d",&op);
    printf("Enter value for a:\n");
    scanf("%ld",&a);// address of operator
    
    switch(op)
    {
        //unary operator
        case 1:
        printf("sizeof a:%lu \n",sizeof(a));//sizeof operator
        printf("sizeof b:%lu \n",sizeof(b));
        break;
        case 2:
        printf("pre-increment of a:%ld \n",a++);// pre-increment
        break;
        case 3:
        printf("post-increment of a:%ld \n",++a);// post-increment
        break;
        case 4:
        printf("pre-decrement of b:%ld \n",b--);// pre-decrement
        break;
        case 5:
        printf("post-decrement of b:%ld \n",--b);// post-decrement
        break;
    
        //binary operator - arithematic operators
   
        case 6:
        printf("addition:%ld \n",a+b);// plus
        break;
        case 7:
        printf("subtraction:%ld \n",a-b);// minus
        break;
        case 8:
        printf("multiplication:%ld \n",a*b);// multiplication
        break;
        case 9:
        printf("division:%ld \n",a/b);// division
        break;
        case 10:
        printf("modulus:%ld \n",a%b);// modulus
        break;
        //logical operators
        case 11:
        printf("And:%d \n",a&&b);// and
        break;
        case 12:
        printf("Or:%d \n",a||b);// or
        break;
        case 13:
        printf("Not of a:%d \n",!a);
        printf("Not of b:%d \n",!b);// not
        break;
        // relational operators
        case 14:
        printf("a<b :%d \n",a<b);// less than
        break;
        case 15:
        printf("a<=b :%d \n",a<=b);// less than or equal
        break;
        case 16:
        printf("a>b :%d \n",a>b);// greater than
        break;
        case 17:
        printf("a>=b :%d \n",a>=b);// greater than or equal
        break;
        case 18:
        printf("a==b :%d \n",a==b);// equal to
        break;
        case 19:
        printf("!= :%d \n",a!=b);// not equal to
        break;
        //bitwise operators
        case 20:
        printf("a&b :%x \n",a&b);// bitwise and
        break;
        case 21:
        printf("a|b :%x \n",a|b);// bitwise or
        break;
        case 22:
        printf("a^b :%x \n",a^b);// bitwise xor
        break;
        case 23:
        printf("~a :%d \n",~a);
        printf("~b :%d \n",~b);// compliment
        break;
        case 24:
        printf("a<<b :%d \n",a<<b);// left shift
        break;
        case 25:
        printf("b>>a :%d \n",b>>a);// right shift
        break;
        
        default:
        printf("Invalid Symbol");
    }
    return 0;
}

