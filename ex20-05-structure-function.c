/*
파일명: ex20-05-structure-function.c

구조체 함수
    구조체 변수를 함수의 인자로 전달
    또 함수로부터 반환(return)할 수 있다.
*/

#include <stdio.h>

typedef struct
{
    int s_id;
    int age;
}Student;

// 선언 및 초기화를 마친 구조체 변수를 반환하는 함수
Student setStudent(int s_id, int age)
{
    Student s = {s_id, age};
    return s;
}

void printStudent(Student s)
{
    printf("학번: %d, 나이: %d\n", s.s_id, s.age);
}

int main(void)
{
    Student s = setStudent(20231119, 20);
    printStudent(s);

    return 0;

}
