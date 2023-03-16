#include <stdio.h>
int main()
{
    printf("[----- [choi_yoo_lim] [2020022001] -----]\n");

    int i;    
    int *ptr;  
    int **dptr;
    i = 1234;
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);        //9번 째 줄에서 변수 i를 초기화한 값(1234) 출력
    printf("address of i == %p\n", &i);     //변수 i의 주소값(0061FF1C) 출력
    printf("value of ptr == %p\n", ptr);    //포인터 변수 ptr의 값(초기화하기 전이므로 쓰레기 값) 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 주소값(0061FF18) 출력

    ptr = &i; /* ptr is now holding the address of i */
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);        //변수 i의 값 변동 없이 출력
    printf("address of i == %p\n", &i);     //변수 i의 주소값 변동 없이 출력
    printf("value of ptr == %p\n", ptr);    //16번 째 줄에서 포인터 변수 ptr에 i의 주소값 대입하여 i의 주소값 출력
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 주소값 변동 없이 출력
    printf("value of *ptr == %d\n", *ptr);  //포인터 변수 ptr가 가리키는 변수 i의 값 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);           //변수 i의 값 변동 없이 출력
    printf("address of i == %p\n", &i);        //변수 i의 주소값 변동 없이 출력
    printf("value of ptr == %p\n", ptr);       //포인터 변수 ptr가 가리키는 변수 i의 주소값 출력
    printf("address of ptr == %p\n", &ptr);    //포인터 변수 ptr의 주소값 변동 없이 출력
    printf("value of *ptr == %d\n", *ptr);     //포인터 변수 ptr가 가리키는 변수 i의 값 변동 없이 출력
    printf("value of dptr == %p\n", dptr);     //24번 째 줄에서 dptr에 ptr의 주소값을 대입하여 ptr의 주소값 출력
    printf("address of dptr == %p\n", &dptr);  //dptr의 주소값 출력
    printf("value of *dptr == %p\n", *dptr);   //dptr이 가리키고 있는 ptr의 값(=i의 주소값)
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키고 있는 ptr이 가리키고 있는 i의 값

    *ptr = 7777; /* changing the value of *ptr */
    //ptr가 가리키는 i의 값에 7777을 대입 
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);           //i = 7777
    printf("value of *ptr == %d\n", *ptr);     //*ptr(=i) = 7777
    printf("value of **dptr == %d\n", **dptr); //**dptr(=*ptr =i) = 7777

    **dptr = 8888; /* changing the value of **dptr */
    //dptr가 가리키는 ptr가 가리키는 i의 값에 8888을 대입
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);           //i = 8888
    printf("value of *ptr == %d\n", *ptr);     //*ptr(=i) = 8888
    printf("value of **dptr == %d\n", **dptr); //**dptr(=*ptr =i) = 8888
    
    return 0;
}