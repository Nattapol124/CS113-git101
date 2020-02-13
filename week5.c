#include<stdio.h>
int main()
{
    //type name[size];//type คือประเภทของตัว name คือชื่อตัวแปร size คือขนาดของอาเรย์
    int n1 = 5;
    int n2 = 10;
    int n3 = 20;
    int n4 = 30;
    int n5 = 50;
    int n[5] = {5, 10, 20, 30, 50}; //เขียนในแบบarray
    //array ก็เป็นตัวแปรดังนั้นต้องประกาศก่อนเสมอ
    //array เปปลี่ยนแปลงค่าarrayได้เสมอ 
    //array ต้องประกาศtypeไว้เสมอ แล้วต้องกำหนดขนาดเสมอ ถ้าขนาดมีมากกว่าตัวแปรที่กำหนด indexในarrayจำนำเลขที่ค้างอยู่ในaddressมาใช้
    printf("%d\n",n[0]);//ได้ค่า 5 ใน array n[5]
    printf("%d\n",n[4]);//ได้ค่า 50 ใน array n[5]
    //การprint array ในแบบ for loop  //array 
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", n[i]);
    }

    printf("\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d, ", n[i]);
    }

    printf("\n");

    //array 2มิติ 
    //การprint array 2มิติ สามารเปลี่ยนรูปแบบการเปลี่ยน เป็นcollum หรือ roll ขึ้นก่อนก็ได้
    int a[3][3] = //[]แรกคือจำนวน array []ที่สองเป็นซับเซตของarrayตัวแรก
    {
        {35, 6, 1},
        {4, 5, 16},
        {9, 7, 92}
    };

    int c, j;
    for (c = 0; c <3; c++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, ", a[c][j]);
        }
        printf("\n");
    }
}