//
//  main.cpp
//  homework4
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int second=0;
    printf("請輸入你的秒數：");
    scanf("%d",&second);
    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",second/3600%60,second/60%60,second%60);
    system("pause");
    return 0;
}
