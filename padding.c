#include <stdio.h>


/* student 구조체를 정의한다. 타입이 다른 데이터들을 그룹화할 수 있다. */
struct student {
    // 각각의 멤버변수를 정의한다
    char lastName[13]; // 크기가 13인 char형 배열
    int studentId; // int형 변수
    short grade; // short형 변수
};

int main()
{
    printf("------ [허원일] [2019036068] ------\n\n");

    struct student pst; 
    // student 구조체 변수 pst를 선언한다. 구조체 변수를 정의함으로써 실제 메모리를 할당 받게 된다.
    printf("size of student = %ld\n", sizeof(struct student)); 
    // student 구조체의 크기를 출력한다. 이론적으로 student 구조체에는 char형 배열, int형 변수, short형 변수가 있으므로 총 크기는 19바이트일 것이라 예상되나, 실제로 대게의 컴파일러는 구조체 멤버 중 크기가 가장 큰 것을 기준으로 하여 그것의 배수로 구조체의 크기를 늘려나간다. (이는 cpu의 메모리접근을 최소화하여 프로그램 동작 속도를 빠르게 한다) 따라서 메모리 상에 빈공간이 생기는데 컴파일러는 이 공간에 메모리를 채워넣어(padding) 메꾼게 된다. 여기서 gcc 컴파일러는 4바이트를 기준으로 하여 구조체 크기를 지정한다. 결국 출력값은 19가 아닌 24이다. 
    printf("size of int = %ld\n", sizeof(int)); // int의 크기를 출력한다
    printf("size of short = %ld\n", sizeof(short)); // short의 크기를 출력한다
    
    return 0;
}