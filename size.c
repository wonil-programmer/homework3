#include<stdio.h>
#include<stdlib.h>


void main()
{
    printf("------ [허원일] [2019036068] ------\n\n");

    int **x; // 이중포인터 변수 x를 선언한다
    printf("sizeof(x) = %lu\n", sizeof(x));
    // x의 크기는 (이중)포인터의 크기이므로 해당 컴파일러에서는 8바이트를 할당한다
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    // 이중포인터가 한 번 역참조하여 가리키는 값은 특정 int형 변수의 주소이므로 8바이트이다
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    // 이중포인터가 두 번 역참조하여 가리키는 값의 공간의 크기는 int의 크기인 4바이트이다
}