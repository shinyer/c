#include <stdio.h>

//int main()
//{
//	int a =0;
//	int* p = &a;
//	printf("%p\n",p);
//	return 0;
//}
//int main()
//{
//	/*printf("%d\n",sizeof(char*));*/
//	int a = 0x11223344;
//	int* pa= &a;
//	*pa =0;
//	//char* pc = &a;
//	//printf("%p\n",pa);
//	//printf("%p\n",pc);
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//}

//int main()
//{
//    int arr[10]={0};
//    int* p = arr;//首元素的地址
//    int i =0;
//    for(i=0;i<10;i++)
//    {
//        *(p+i)=1;
//    }
//    return 0;
//}

//int main()
//{
//    int a;//局部变量不初始化，默认随机值
//    int* p;//局部的指针变量，就被初始化随机值
//    return 0;
//}

//int main()
//{
//    int arr[10]={0};
//    int* p=arr;
//    return 0;
//}
//野指针
//int* test()
//{
//    int a =10;
//    return &a;
//}
//int main()
//{
//    int* p = test();
//    printf("%d\n",*p);
//    return 0;
//}

//int main()
//{
//    //int* p = NULL;//初始化指针,指针使置空(NULL)
//    int a = 10;
//    int* pa = &a;
//    *pa = 20;
//    pa = NULL;//置空指针,不用的时候
//    *pa = 10;
//    //printf("%p\n",pa);
//    //if(pa != NULL)判断指针是否可用(有效性)
//    return 0;
//}

//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int* p = &arr;
//    int i = 0;
//    int sz = sizeof (arr)/sizeof (arr[0]);
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",*p);
//        p = p+1;
//    }
//    return 0;
//}

//指针-指针
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[0]-&arr[9]);//得到元素个数
//    return 0;
//}

//strlen()-求字符串长度
//递归-模拟实现strlen-计数器方式1，递归方式2
//
//int my_strlen(char* str)
//{
//    char* start = str;
//    char* end = str;
//    while (*end != '\0')
//    {
//        end++;
//    }
//    return end-start;
//}
//int main()
//{
//    char arr[]="hello world";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}

//int main()
//{
//    int arr[10]={0};
//    printf("%p\n",arr);//地址-首元素地址
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr);//整个数组的地址
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    int** ppa = &pa;//二级指针
//    printf("%p\n",**ppa);
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    int** ppa = &pa;//二级指针
//    printf("%p\n",**ppa);
//    return 0;
//}




//数组初始化并逆置
//void Init(int arr[],int sz)
//{
//    int i =0;
//    for(i=0;i<sz;i++)
//    {
//        arr[i]=0;
//    }
//}
//void Print(int arr[],int sz)
//{
//    int i = 0;
//    for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//}
//
//void Revers(int arr[],int sz)
//{
//    int left = 0;
//    int right = sz -1;
//    while (left<right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof (arr)/sizeof (arr[0]);
//    //Init(arr,sz);//把数组初始化为全0
//    Print(arr,sz);//打印
//    Revers(arr,sz);
//    printf("\n");
//    Print(arr,sz);
//    return 0;
//}


//数组交换
//int main()
//{
//    int arr1[]={1,3,5,7,9};
//    int arr2[]={2,4,6,8,0};
//    int tmp =0;
//    int sz = sizeof (arr1)/sizeof (arr1[0]);
//    int i = 0;
//    for(i=0;i<sz;i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    return 0;
//}



//int i;//全局变量-不初始化-默认是0
//int main()
//{
//    i--;
//    //-1
//    //100000000000000000000001 - 原码
//    //111111111111111111111110 - 反码
//    //111111111111111111111111 - 补码
//    //
//    if(i>sizeof (i))//sizeof-计算类型/变量所占内存大小 >= 0无符号数
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//统计二进制中1的个数
//int count_bit_one(unsigned int n)//unsigned表示无符号位
//{
//    int count = 0;
//    while (n)
//    {
//        if(n%2 == 1)
//        {
//            count++;
//        }
//        n=n/2;
//    }
//    return count;
//}
//优化使用移位
//int count_bit_one(int n)//unsigned表示无符号位
//{
//    int count = 0;
//    int i = 0;
//    for(i=0;i<32;i++)
//    {
//        if((n>>i)&1 == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//优化2(最精简的写法)
//int count_bit_one(int n)//unsigned表示无符号位
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n-1);
//        count++;
//    }
//    return count;
//}
//n = n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n(按位与后)
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//int main()
//{
//    int a = 0;
//    scanf("%d",&a);
//    //写一个函数求a的二进制（补码）表示中有几个1
//    int count = count_bit_one(a);//-1
//    printf("count = %d\n",count);
//    return 0;
//}


//求二进制中不同位的个数(异或)
//int get_dif_bit(int m,int n)
//{
//    int tmp = m^n;
//    int count = 0;
//    while (tmp)
//    {
//        tmp = tmp&(tmp-1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d",&m,&n);
//    int count = get_dif_bit(m,n);
//    printf("count = %d",count);
//    return 0;
//}


//打印二进制的奇数为和偶数位
//void print(int m)
//{
//    int i = 0;
//    printf("奇数位:\n");
//    for(i=30;i>=0;i-=2)
//    {
//        printf("%d",(m>>i)&1);
//    }
//    printf("\n");
//    printf("偶数位:\n");
//    for(i=31;i>=1;i-=2)
//    {
//        printf("%d",(m>>i)&1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int m = 0;
//    scanf("%d",&m);
//    print(m);
//    return 0;
//}


//输出乘法口诀表
//void print_table(int n)
//{
//    int i = 0;
//    for(i=1;i<=n;i++)
//    {
//        int j = 0;
//        for(j=1;j<=i;j++)
//        {
//            printf("%d*%d=%-3d ",i,j,i*j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n =0;
//    scanf("%d",&n);
//    print_table(n);
//    return 0;
//}

#include <string.h>
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//字符串逆序
//void reverse_string(char arr[])
//{
//    int left = 0;
//    int right = my_strlen(arr)-1;
//    while (left<right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//递归方式
//void reverse_string(char arr[])
//{
//   char tmp = arr[0];
//   int len = my_strlen(arr);
//   arr[0] = arr[len-1];
//   arr[len-1] = '\0';
//   if(my_strlen(arr+1) >= 2)
//       reverse_string(arr+1);
//   arr[len-1] = tmp;
//}
//int main()
//{
//    char arr[]="abcdef";
//    reverse_string(arr);
//    printf("%s\n",arr);
//    return 0;
//}


//计算一个数的每位之和
//int Digitsum(unsigned int num)
//{
//    if(num>9)
//    {
//        return Digitsum(num/10)+num%10;
//    }
//    else
//    {
//        return num;
//    }
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d",&num);
//    int ret = Digitsum(num);
//    printf("ret = %d\n",ret);
//    return 0;
//}


//实现n的k次方
//double Pow(int n,int k)
//{
//    //n^k = n*n^(k-1)
//    if(k<0)
//    {
//        return (1.0 / (Pow(n,-k)));
//    }
//    else if(k == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return n*Pow(n,k-1);
//    }
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d",&n,&k);
//    double ret = Pow(n,k);
//    printf("%lf\n",ret);
//    return 0;
//}

//描述一个学生
//名字
//年龄
//电话
//性别
//typedef struct Stu
//{
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//struct S
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//struct T
//{
//    char ch[10];
//    struct S s;
//    char *pc;
//};
//int main()
//{
//    char arr[] = "hello\n";
//    struct T t = {"hehe",{100,'w',"hello",3.14},arr};
//    printf("%s\n",t.ch);
//    printf("%s\n",t.s.arr);
//    printf("%lf\n",t.s.d);
//    printf("%s\n",t.pc);
//    return 0;
//}

typedef struct Stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;
void print1(Stu tmp)
{
    printf("name:%s\n",tmp.name);
    printf("age:%d\n",tmp.age);
    printf("tele:%s\n",tmp.tele);
    printf("sex:%s\n",tmp.sex);
}
void print2(Stu* ps)
{
    printf("name:%s\n",ps->name);
    printf("name:%d\n",ps->age);
    printf("name:%s\n",ps->tele);
    printf("name:%s\n",ps->sex);
}
int main()
{
    Stu s = {"李四",40,"13000000000","男"};
    print1(s);
    print2(&s);
    return 0;
}