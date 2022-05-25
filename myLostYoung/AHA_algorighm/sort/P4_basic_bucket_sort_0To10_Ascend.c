// for (int count = 1; count <= a[i]; count++) // 这行就比较妙了，自己写过很多不如这行的烂代码
// 我经常会先判断有无，再按次数打印（我的思想惯性）
// count = 1 --> 有才打印，从打印一次开始，多好
// count <= bucket[i] --> bucket[i] 不到 1 就 不执行 {}，就做了判断有无，相得益彰，大于1，有几个打印几个，针不戳
#include <func.h>

int main(int argc, char *argv[])
{
    int a[11];
    for (int i = 0; i <= 10; i++)
        a[i] = 0;

    for (int i = 1; i <= 5; i++)
    {
        int input = 0;
        scanf("%d", &input);
        ++a[input];
    }

    for (int i = 0; i <= 10; i++)
    {
        for (int count = 1; count <= a[i]; count++) // 这行就比较妙了，自己写过很多不如这行的烂代码
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
