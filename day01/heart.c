//
//  heart.c
//  xiaomage-c-day01
//
//  Created by Phoenix Fate on 2020/2/16.
//  Copyright © 2020 Phoenix Fate. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
    int  i = 0;
    while (1) {
        if (i % 2 == 0) {
            printf(" *** *** \n");
            printf("*********\n");
            printf(" *******\n");
            printf("  ****\n");
            printf("   **\n");
        }else
        {
            printf("\n");
            printf("   ** ** \n");
            printf("  *******\n");
            printf("   *****\n");
            printf("    **\n");
        }
        sleep(1);
        i++;
    }
    
    
    return 0;
}
