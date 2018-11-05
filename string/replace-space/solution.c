#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceSpace(char *str,int length) {
        int old_length = length;
        int new_length = old_length;
        if (old_length == 0) {
            printf("str is empty");
            return;
        }
        
        for (int i=0; i<old_length; i++) {
            // 一个空格对应三个字符的站位符号
            if (str[i] == ' ') {
                new_length += 2; // 包含自身，所以长度增加2个字符
            }
        }
        
        if (new_length == old_length) {
            printf("no space found");
            return;
        }
        
        char *new_str = (char*)malloc(new_length+1);
        if (new_str == NULL) {
            printf("fail to alloc new str space");
            return;
        }
        memset(new_str, 0, new_length);
        
        int j = 0;
        for (int i=0; i<old_length; i++) {
            if (str[i] != ' ') {
                new_str[j] = str[i];
                j++;
            } else {
                new_str[j] = '%';
                new_str[j+1] = '2';
                new_str[j+2] = '0';
                j += 3;
            }
        }
        
        printf("\"%s\"\n", new_str);
	}

int main()
{
    replaceSpace(" helloworld", strlen("  helloworld"));
    return 0;
}
