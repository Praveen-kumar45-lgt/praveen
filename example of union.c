#include <stdio.h>
union Data {
    int intVal;
    float floatVal;
    char str[20];
    double doubleval;
};
int main() {
    union Data data;
    data.intVal = 10;
    printf("Integer: %d\n", data.intVal);
    data.floatVal = 3.14;
    printf("Float: %.2f\n", data.floatVal);
    // Notice the memory overlap when updating the string
    sprintf(data.str, "Hello");
    printf("String: %s\n", data.str);
    printf("Integer after string update: %d\n", data.intVal); // Shows garbage due to shared memory
    data.doubleval=20;
    printf("double:%lf\n",data.doubleval);
    return 0;
}


