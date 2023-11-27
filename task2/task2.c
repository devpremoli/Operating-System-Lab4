#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
typedef int (*OP) (int a, int b);
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exit_program(int a, int b);

int main (void)
{
    /* IMPLEMENT ME: Insert your algorithm here */
	int a = 10;
    int b = 5;

	OP operators[5] = {&add, &subtract, &multiply, &divide, &exit_program};
	char idx[3];

	while (1) {
        printf("Operand 'a' : %d | Operand 'b' : %d\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ", a, b);
		fgets(idx, 3, stdin);
		printf("x = %d\n", operators[(int)idx[0]-'0'](a, b));
	}

    return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }

int subtract(int a, int b) {
    printf ("Subtracting 'a' and 'b'\n");
    return a - b;
}

int multiply(int a, int b) {
    printf ("Multiplying 'a' and 'b'\n");
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        printf ("Dividing 'a' and 'b'\n");
		return a / b;
	} else {
        printf("Division by zero is not allowed.\n");
		return 0;
	}
}

int exit_program(int a, int b) {
    printf("Exiting program.\n");
    exit(0);
    return 0; // Return value to match the signature, even though it's not used
}
