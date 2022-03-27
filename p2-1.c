#include <stdio.h>
#define MAX_SIZE 100 // 배열의 크기를 지정하는 상수 MAX_SIZE를 지정한다


float sum(float [], int); 
// 반환값이 실수인 sum함수의 원형을 지정한다. 파라미터로 실수형 배열과 정수형이 있다
float input[MAX_SIZE], answer;  // 크기가 100인 실수형 배열 input과 실수형 변수 answer를 선언한다
int i; // 정수형 변수 i를 선언한다

void main(void)
{
    printf("------ [허원일] [2019036068] ------\n\n");
    
    for(i=0; i < MAX_SIZE; i++)
    input[i] = i;
    // for반복문 MAX_SIZE만큼 돌며 배열 input의 첫번째 원소부터 마지막 원소까지 i=0 ~ i=MAX_SIZE-1 의 값을 대입한다
    
    printf("address of input = %p\n", input); 
    // 배열 input의 주소값을 출력한다
    // 배열의 이름은 배열 시작값의 주소(&input[0])이다
    answer = sum(input, MAX_SIZE); 
    // sum 함수에 배열의 이름(배열 시작값의 주소)과 배열의 크기를 전달한다
    // 배열 시작값의 주소가 sum함수의 list에 복사된다
    // sum함수에서의 반환값을 answer에 대입한다
    printf("The sum is: %f\n", answer); // answer를 출력한다
}

/* sum 함수를 선언한다. sum()은 배열 input의 주소를 list가 받아, list를 통해 배열 input에 접근한다.
이와 같이 함수호출시 해당 주소값을 넘겨받는 것을 call by reference라 하고 이 방법은 데이터의 원본에 접근하여 값을 직접 조작할 수 있다. 반면, n의 경우 받은 값을 복사하여 저장하는데 함수내에서 n의 값이 변경되어도 원본의 값(여기서는 MAX_SIZE)은 변경되지 않는다 */
float sum(float list[], int n) 
{
    printf("value of list = %p\n", list); 
    // 배열 list의 값을 출력한다. 배열 list는 배열 input을 가리키고 있으므로 출력값은 배열 input의 주소값과 같다.
    printf("address of list = %p\n\n", &list);
    // 배열 list의 주소값을 출력한다. 배열 list 자체의 주소값을 출력한다. 포인터가 저장되는 공간과 포인터가 가리키는 공간의 주소값이 다른 것과 비슷한 원리이다.
    int i;
    float tempsum = 0; // 배열 원소의 합을 저장하는 변수 tempsum을 선언 후 초기화한다
    for(i = 0; i < n; i++)
    tempsum += list[i]; 
    // 배열 list로 접근한 배열 input의 모든 원소를 더한 값을 tempsum 변수에 저장한다
    return tempsum; // tempsum 을 반환한다
}