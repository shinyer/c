#include <stdio.h>

//int main()
//{
//    int a = 5 % 2;//商2余1 取模必须是整型
//    printf("a=%d\n",a);
//    int a = -1;
//    //整数二进制表示
//    //原码、反码、补码
//    //存储到内存中是补码
//    int b = a >> 2;
//    printf("%d\n",b);
//    return 0;
//}
//int main()
//{
//    int a = 5;
//    //int b = a << 1;
//    int b = 3;
//    int c = a^b;
//    printf("%d",c);
//    return 0;
//}

//练习 求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//    int num = 0;
//    scanf("%d",&num);
//    int count = 0;
//    //统计num的补码中有几个1
//    //模2除2
//    while (num != 0)
//    {
//        if(num%2 == 1)
//            count++;
//        num = num/2;
//    }
//    printf("%d\n",count);
//    return 0;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d",&num);
//    int count = 0;
//    int i = 0;
//    for(i=0;i<32;i++)
//    {
//       if (1 == ((num >> i) & 1))
//           count++;
//    }
//    printf("%d",count);
//    return 0;
//}
//int main()
//{
//    int a =0;
//    char b = 'w';
//    int arr[10] = {0};
//    printf("%d\n",sizeof (int [10]));
//    return 0;
//}

//int main()
//{
//    short s = 0;
//    int a = 10;
//    printf("%d\n",sizeof (s = a +5));//表达式不参与运算
//    printf("%d\n",s);
//    return 0;
//}

//int main()
//{
//    //int a = 1;
//    //printf("%d\n",~a);//按位取反(二进制)
//    int a = 11;
//    a = a | (1<<2);
//    printf("%d\n",a);
//    a = a & (~(1<<2));
//    printf("%d\n",a);
//    return 0;
//}

//int main()
//{
//    int a =10;
//    printf("%d\n",++a);
//    printf("%d\n",a++);
//    return 0;
//}

//int main()
//{
//    int a = (int)3.14;
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("%d\n",sizeof (arr));
//    printf("%d\n",sizeof (ch));
//    return 0;
//}
//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = a ||b;
//    printf("%d",c);
//    return 0;
//}

//int main()
//{
//    int i = 0,a=0,b=2,c=3,d=4;
//    //i = a++ && ++b && d++;
//    i = a++ || ++b || d++;
//    printf("%d %d %d %d\n",a,b,c,d);
//    return 0;
//}
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = (a>b,a=b+10,a,b=a+1);
//    printf("%d\n",c);
//    return 0;
//}

//学生
//创建结构体类型
//struct stu
//{
//    char name[20];
//    int age;
//    char id[10];
//};
//int main()
//{
//    //使用struct stu这个类型创建了一个学生对象s1并初始化
//    struct stu s1 = {"张三",20,"202005"};
//    struct stu* p = &s1;
//    printf("%s\n",p->name);//结构体指针->成员名
//    //printf("%p\n",(*p).name);
//    //printf("%p\n",(*p).age);
//    //printf("%s\n",s1.name);
//    //printf("%d\n",s1.age);
//    //printf("%s\n",s1.id);
//    //结构体变量.成员名
//    return 0;
//}

//int main()
//{
//    char a = 3;
//    char b = 127;
//    char c = a + b;
//    printf("%d\n",c);
//    return 0;
//}

//整型提升
//int main()
//{
//    char a = 0xb6;
//    short b = 0xb600;
//    int c = 0xb6000000;
//    if(a == 0xb6)
//        printf("a");
//    if(b == 0xb600)
//        printf("b");
//    if(c == 0xb6000000)
//        printf("c");
//    return 0;
//}
//int main()
//{
//    char c = 1;
//    printf("%u\n",sizeof (c));
//    printf("%u\n",sizeof (+c));
//    printf("%u\n",sizeof (!c));
//    return 0;
//}

