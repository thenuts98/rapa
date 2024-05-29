#include <stdio.h>

struct student{
    int id; // 학번
    char name[20]; // 이름
    double grade;  // 학점
};

void stPrint(struct student s);

int main(void){
    struct student sArr[3]{
        {101, "홍길동", 4.43},
        {102, "전우치", 4.42},
        {103, "김우리", 4.41}
    };

    printf("학번\t이름\t학점\n-------------------------\n");

    for(int idx = 0; idx < 3; idx++){
        stPrint(sArr[idx]);
    }
}

void stPrint(struct student s){
    printf("%d\t%s\t%.2lf\n", s.id, s.name, s.grade);
}
