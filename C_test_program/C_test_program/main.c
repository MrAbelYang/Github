//
//  main.c
//  C_test_program
//
//  Created by MAC on 16/1/29.
//  Copyright © 2016年 MAC. All rights reserved.
//

#include<stdio.h>
#include<string.h>

//判断一个字符串内容是否为会问？
const char* huiwen(const char*  str)
{
    int i = 0;
    long length = strlen(str);
    const char* first = str;
    const char* last = str+length-1;
    for(i = 0;i<length/2;i++)
    {
        if((*(first++)) != (*(last--)))
            return "no";
    }
    return "yes";
}

int main(int argc, const char * argv[]) {
    char a[20];
    printf("input:\n");
    scanf("%s",a);
    printf("%s\n",huiwen(a));
    return 0;
}






