#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[20];
    char sex[5];
    int  age;
}Stu;
void input(Stu*stu);
void output(Stu*stu);
int main()
{
    Stu stu[5];
    printf("请输入1个学生的信息：姓名 性别 年龄:\n");
    input(stu);
    printf("1个学生的信息如下：\n姓名  性别  年龄\n");
    output(stu);

    system("pause");
    return 0;
}
void input(Stu*stu)
{
    int i;
    for(i=0;i<1;i++)
        scanf("%s%s%d",stu[i].name,stu[i].sex,&(stu[i].age));
}
void output(Stu*stu)
{
    int i;
    for(i=0;i<1;i++)
        printf("%s %s %d\n",stu[i].name,stu[i].sex,stu[i].age);
}