#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex n1, struct Complex n2) {
    struct Complex temp;

    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return temp;
}

int main() {
    struct Complex num1 = {4.5, 3.2}; // 4.5 + 3.2i
    struct Complex num2 = {1.5, 2.8}; // 1.5 + 2.8i
    struct Complex sum;

    sum = addComplex(num1, num2);

    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);

    return 0;
}
