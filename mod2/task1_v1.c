#include <stdio.h>

int main()

{
int myInt1;
int myInt2;

printf("Enter two integers\n");
scanf("%d %d", &myInt1, &myInt2);
printf("The sum of %d and %d is %d\n", myInt1, myInt2, myInt1 + myInt2);
printf("The diff of %d and %d is %d\n", myInt1, myInt2, myInt1 - myInt2);
printf("The product of %d and %d is %d\n", myInt1, myInt2, myInt1 * myInt2);
//Division will give you the quotient
printf("The division of %d and %d is %d\n", myInt1, myInt2, myInt1 / myInt2);
// Get the remainder with the modulus % 
printf("The modulus of %d and %d is %d\n", myInt1, myInt2, myInt1 % myInt2);
return 0;
}
