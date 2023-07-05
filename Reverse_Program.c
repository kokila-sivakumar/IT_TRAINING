//PROBLEM : Write a program to check whether a number is equal to the reverse of the same number. 123 = 321 PASS 456 = 134 FAIL Sounds easy right? Here’s the catch: The number should not be converted to string

#include <stdio.h>
int n=121;
int reverse() {
    int rev;
    int n = 121;
    while(n!=0){
        rev = (rev*10) + n%10;
        n = n/10;
    }
    return rev;
}

int main() {
    int rev = reverse();
    printf("Reverse of the given number is %d\n",rev);
    printf("Value of n is %d\n",n);
    //If the given number is equal to the reverse of this number print "YES" 
    if(rev == n){
        printf("YES\n");
    }
    //If the given number is not equal to the reverse of this number print "NO"
    else {
    printf("NO\n");
    }
}

//OUTPUT : Reverse of the given number is 121
Value of n is 121
YES

//If n value is 234
//OUTPUT : Reverse of the given number is 432
Value of n is 234
NO

//If n value is 0
//OUTPUT : Reverse of the given number is 0
Value of n is 0
YES