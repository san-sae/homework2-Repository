#include <stdio.h>
int main()
{
    printf("[----- [choi_yoo_lim] [2020022001] -----]\n");

    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char: %ld byte\n",sizeof(charType));      //변수 charType은 char형이므로 1byte
    printf("Size of int: %ld bytes\n",sizeof(integerType));   //변수 integerType은 int형이므로 4bytes
    printf("Size of float: %ld bytes\n",sizeof(floatType));   //변수 floatType은 float형이므로 4bytes
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //변수 doubleType은 double형이므로 8bytes
    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));      // char형은 1byte
    printf("Size of int: %ld bytes\n",sizeof(int));       // char형은 4bytes
    printf("Size of float: %ld bytes\n",sizeof(float));   // char형은 4bytes
    printf("Size of double: %ld bytes\n",sizeof(double)); // char형은 8bytes
    printf("-----------------------------------------\n");

    /*포인터 변수의 크기는 CPU가 한 번에 처리할 수 있는 데이터의 크기인 워드(word)와 관련있음
      32bit 시스템에서는 1워드의 크가가 4bytes이며, 포인트 변수의 크기이다.
      참고로 포인터가 가리키는 변수의 타입은 즉, 포인터 타입은 포인터변수의 크기와 관련이 없다.
    */
    printf("Size of char*: %ld byte\n",sizeof(char*));      // 포인트 변수의 크기는 1워드(4bytes)   
    printf("Size of int*: %ld bytes\n",sizeof(int*));       // 포인트 변수의 크기는 1워드(4bytes)
    printf("Size of float*: %ld bytes\n",sizeof(float*));   // 포인트 변수의 크기는 1워드(4bytes)
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // 포인트 변수의 크기는 1워드(4bytes)

    return 0;
}