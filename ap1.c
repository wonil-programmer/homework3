#include <stdio.h>
#include <stdlib.h> // malloc()과 free()를 사용하기 위해 stdlib 라이브러리 추가한다


void main()
{
    printf("------ [허원일] [2019036068] ------\n\n");
    
    int list[5]; // 크기가 5인 정수형 배열 선언한다
    int *plist[5] = {NULL,}; // 크기가 5인 정수에 대한 포인터 배열을 선언 및 초기화한다
    plist[0] = (int *)malloc(sizeof(int)); 
    // malloc()함수를 사용하여 히프로부터 plist의 첫번째 원소에 동적메모리를 할당한다
    // (malloc은 memory allocation의 약자이다)
    // 이때 (int *)은 '형변환 연산자;로서 malloc()이 반환한 값을 정수 포인터로 변환해서 변수 에 
    // 대입해야함을 명시적으로 알려주는 역할을 하고(명시적 형변환), 
    // sizeof(int)를 이용하여 malloc()에 할당하기를 원하는 바이트수(여기서는 int의 크기인 4바이트)를    // 넘겨준다

    list[0] = 1; // list[0]에 1을 대입한다
    list[1] = 100; // list[1]에 100을 대입한다
    *plist[0] = 200; // plist[0]이 가리키는 주소공간에 200을 저장한다
    printf("value of list[0] = %d\n", list[0]); // list의 첫번째 원소의 값을 출력한다
    printf("address of list[0] = %p\n", &list[0]); // list의 첫번째 원소의 주소값을 출력한다
    printf("value of list = %p\n", list); // list(배열의 이름은 배열시작값의 주소)를 출력한다
    printf("address of list (&list) = %p\n", &list); 
    // 배열의 주소(배열의 주소는 배열시작값의 주소)를 출력한다

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); // list의 두번째 원소의 값을 출력한다
    printf("address of list[1] = %p\n", &list[1]); // list의 두번째 원소의 주소값을 출력한다
    printf("value of *(list+1) = %d\n", *(list + 1)); 
    // list의 두번째 원소(배열의 이름은 배열시작값의 주소이므로 1을 더하면 다음 원소의 주소값이다. 이때 정수형 배열이기 때문에 1의 크기는 4바이트이다.)를 역참조연산자 *을 이용하여 출력한다
    printf("address of list+1 = %p\n", list+1);
    // list의 두번째 원소의 주소를 출력한다 (바로 윗줄 코드 주석설명 참조)

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); // 위에서 선언한 plist[0]값에 할당된 메모리의 주소에 역참조하여 값을 출력한다
    printf("&plist[0] = %p\n", &plist[0]); // plist의 첫번째 원소의 주소값을 출력한다
    printf("&plist = %p\n", &plist); // 배열 plist의 주소값을 출력한다
    printf("plist = %p\n", plist); // 배열 plist(배열의 이름은 배열시작값의 주소)를 출력한다
    // 위 세 줄의 출력값은 같다 (&plist[0], &plist, plist)
    printf("plist[0] = %p\n", plist[0]); 
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    // plist[0]에만 malloc()을 사용하여 동적으로 메모리를 할당했기 때문에 plist[0]에만 값(주소값)이 저장되고 나머지에는 널(NULL)값이 저장된다
    free(plist[0]); 
    // 히프 메모리의 사용이 끝나면 이것을 시스템에 돌려주어야 한다
    // plist[0]이 할당받는 1개의 정수공간을 해제한다
    // 반납된 메모리는 다른 태스크가 할당받아서 사용할 수 있다 
}