#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main ()
//{
//    printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");
//    return 0;
//}
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}
//
// 
void judge(int a)
{
    if (a % 5 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int M = 0;
    printf("������һ��>=1��<=100������\n");
    scanf("%d", &M);
    while(M >= 1 && M <= 100)
    {
        judge(M);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int M = 0;
    scanf("%d", &M);
    if (M <= 1 && M >= 100)
        printf("\n");
    else if (M / 5 == 0)
        printf("YES\n");
    else
        printf("NO\n");
return 0;
}