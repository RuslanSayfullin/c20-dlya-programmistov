#include <stdio.h>

int main(int argc, char** argv) {
    int var = 1;

    int* int_ptr = NULL; // обнуляем указатель
    int_ptr = &var;

    char* char_ptr = NULL;
    char_ptr = (char*)&var;

    printf("Before arithmetic: int_ptr: %u, char_ptr: %u\n",
        (unsigned int)int_ptr, (unsigned int)char_ptr);
    
        int_ptr++;  // арифметический шаг обычно равен 4 байтам
        char_ptr++; // арифметический шаг равен 1 байту
    
    printf("After arithmetic: int_ptr: %u, char_ptr: %u\n",
        (unsigned int)int_ptr, (unsigned int)char_ptr);
    return 0;
}