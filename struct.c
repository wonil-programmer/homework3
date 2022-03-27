#include <stdio.h>

/* student1 구조체를 정의한다. */
/* method1) 구조체 정의는 보통 main함수 바깥에서 한다. struct 구조체이름 { 자료형 멤버이름; }; 과 같이 선언한다. 구조체 정의시 }(닫는 중괄호) 뒤에는 반드시 ;(세미콜론)을 붙여야 한다. */
struct student1 {
    char lastName;
    int studentId;
    char grade;
};

/* method2) method1과 같이 구조체를 정의하면 구조체변수를 선언할때마다 struct 구조체이름 변수이름; 와 같이 struct 키워드를 매번 사용하여야 한다. 이러한 번거러움을 typedef로 typedef struct (구조체이름) { 자료형 멤버이름; } 구조체별명; 과 같이 선언함으로써 해결할 수 있다. */
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {

    printf("------ [허원일] [2019036068] ------\n\n");

    struct student1 st1 = {'A', 100, 'A'};
    // 정의한 구조체를 사용하려면 반드시 구조체 변수를 선언해야 하는데, 이때 구조체 이름 앞에 반드시 struct 키워드를 붙여준다. student1 구조체 타입의 변수 st1을 선언 후, 중괄호 내에 각 멤버의 자료형에 맞게 변수 lastName, studentId, grade에 해당하는 값을 처음부터 순서대로 넣어준다.  

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    // 일반변수로 선언한 구조체 변수의 멤버변수에 접근시, .(점)을 사용하여 구조체변수.멤버변수 의 형태로 접근한다.

    student2 st2 = {'B', 200, 'B'}; // 
    // student2 구조체 타입은 typedef으로 정의하였기 때문에 struct 키워드 없이 구조체 변수를 선언할 수 있다.

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    // st1에서의 멤버변수 접근방법과 같다.

    student2 st3; // 
    // student2 구조체 타입의 변수 st3를 선언한다. 멤버변수 초기화는 하지 않은 상태이다.

    st3 = st2;
    // st2의 멤버변수 값을 그대로 st3의 값에 대입한다. (구조 치환)

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    // st2의 멤버변수 값과 동일하다.

    /* 동작하지 않는 코드 */
    if(st3 == st2) 
    // 비교연산자(==)로 구조체 전체 구조의 동등성 검사는 불가하다.
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
}