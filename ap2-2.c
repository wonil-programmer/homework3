#include <stdio.h>

void print1 (int *ptr, int rows); 
// 1차원 배열의 원소들을 출력하는 함수 print1의 원형을 선언한다


int main()
{
    printf("------ [허원일] [2019036068] ------\n\n");
    
    int one[] = {0, 1, 2, 3, 4}; // 배열 one에 원소들을 대입한다
    printf("one = %p\n", one); // 배열의 이름(배열의 이름은 배열 시작값의 주소)을 출력한다
    printf("&one = %p\n", &one); // 배열의 주소를 출력한다
    printf("&one[0] = %p\n", &one[0]); // 배열의 첫번째 원소의 주소값을 출력한다
    printf("\n");
    print1(&one[0], 5); // 함수 print1을 출력한다 (*ptr에 배열 one의 첫번째 원소의 주소값을 전달하고, rows에 5를 전달한다)

    return 0;
}

/* 포인터를 이용해서 1차원 배열의 모든 원소를 출력하는 함수 */
void print1 (int *ptr, int rows) 
{
    int i;
    printf ("Address \t Contents\n");
    // for 반복문을 열의 개수(1차원 배열이므로 원소의 개수)만큼 돌며 원소의 주소값과 원소를 출력한다
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i));
    // ptr + i : 정수형 포인터 변수 ptr은 배열의 시작값의 주소를 가리키므로, 
    // +0 ~ +4를 수행하면 배열의 첫번째 원소부터 마지막 원소까지 출력한다
    // *(ptr + i) : 주소의 값을 *을 이용하여 역참조하므로 배열 내 원소의 실제값을 출력한다
    printf("\n");
}