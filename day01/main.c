//
//  main.c
//  day01
//
//  Created by Phoenix Fate on 2020/2/16.
//  Copyright © 2020 Phoenix Fate. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int call(){
    printf("正在打电话\n");
    return 0;
}

//command + b: build 将代码翻译成二进制文本
//command + r: run 运行程序
int main1(int argc, const char * argv[]) {
    // insert code here...
    call();
    printf("Hello, World!\n");
    
    system("pause");
    return 0;
}
