#include <stdio.h>
#include <stdlib.h>


void main()
{
    printf("------ [허원일] [2019036068] ------\n\n");
    
    int list[5]; // 크기가 5인 정수형 배열 선언한다
    int *plist[5]; // 크기가 5인 정수에 대한 포인터 배열을 선언한다

    list[0] = 10; // list[0]에 10을 대입한다
    list[1] = 11; // list[1]에 11을 대입한다

    plist[0] = (int*)malloc(sizeof(int)); // malloc()함수를 사용하여 히프로부터 plist의 첫번째 원소에 동적메모리를 할당한다

    printf("list[0] \t= %d\n", list[0]); // list의 첫번째 원소를 출력한다
    printf("address of list \t= %p\n", list); // 배열 list(배열의 이름은 배열시작값의 주소)를 출력한다
    printf("address of list[0] \t= %p\n", &list[0]); // 배열 list의 첫번째 원소의 주소를 출력한다
    printf("address of list + 0 \t= %p\n", list+0); 
    printf("address of list + 1 \t= %p\n", list+1); 
    printf("address of list + 2 \t= %p\n", list+2); 
    printf("address of list + 3 \t= %p\n", list+3); 
    printf("address of list + 4 \t= %p\n", list+4);
    // list+0부터 list+4 순서로 배열 list의 첫번째 원소의 주소부터 다섯번째 원소의 주소까지 출력한다
    // 배열의 이름은 배열시작값의 주소이므로 1을 더하면 다음 원소의 주소값이다. 이때 정수형 배열이기 때문에 1의 크기는 4바이트이다.
    // 마찬가지로 list+4는 list의 첫번째 원소에서 4칸 뒤에 있는 원소(배열의 다섯번째 원소)의 주소값이다.
    printf("address of list[4] \t= %p\n", &list[4]);
    // 배열 list의 다섯번째 원소의 주소값을 출력한다

    free(plist[0]); // plist[0]이 할당받은 1개의 정수공간을 해제한다
}