#include <stdio.h>

struct vision
{
    double left;
    double right;
};

typedef struct vision Vision;
Vision exchange(Vision robot); // Vision을 반환하는 함수

int main(void){
    Vision robot;
    printf("좌우 시력 : ");
    scanf("%lf %lf", &robot.left, &robot.right);
    printf("입력한 좌우 시력 : %.2lf\t%.2lf\n", robot.left, robot.right);
    robot = exchange(robot);
    printf("좌우가 바뀐 시력 : %.2lf\t%.2lf\n", robot.left, robot.right);
}

Vision exchange(Vision robot){
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}