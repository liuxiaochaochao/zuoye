#include <stdio.h>
#include <math.h>
struct Point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct Point arr[100];

    printf("欢迎进入专场位置管理系统!\n");
    while (1)
    {
        printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我的位置最近的车辆\n");
        printf("5---退出\n");
        printf("请选择相应功能\n");
        int a;
        scanf("%d", &a);

        if (a == 1)
        {
            printf("请输入车辆的位置：\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("添加完成，点击回车继续\n");
            char s;
            scanf("%c", &s);
            scanf("%c", &s);
        }
        if (a == 2)
        {
            if (index > 0)
            {
                index--;
                printf("删除完成，点击回车继续\n");
                char s;
                scanf("%c", &s);
                scanf("%c", &s);
            }
            else
            {
                printf("无车辆位置信息，删除失败，点击回车继续\n");
                char s;
                scanf("%c", &s);
                scanf("%c", &s);
            }
        }
        if (a == 3)
        {
            printf("所有车辆位置如下：\n");
            for (int i = 0; i < index; i++)
            {
                printf("第%d个车辆的位置为(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("\n点击回车继续\n");
            char s;
            scanf("%c", &s);
            scanf("%c", &s);
        }
        if (a == 4)
        {
            printf("请输入当前位置坐标：\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            double min = 1000;
            int che = 0;
            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);
                if (min > l)
                {
                    min = l;
                    che = i;
                }
            }
            printf("我的位置与第%d个车的距离最小为%lf\n", che + 1, min);
            printf("\n点击回车继续\n");
            char s;
            scanf("%c", &s);
            scanf("%c", &s);
        }
        if (a == 5)
        {
            printf("应用已经退出\n");
            break;
        }
    }

    return 0;
}