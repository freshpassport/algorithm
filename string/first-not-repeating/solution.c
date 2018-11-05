// build with clang Apple LLVM version 10.0.0 (clang-1000.10.44.2)
// clang -o solution solution.c

#include <stdio.h>
#include <string.h>

/* 英文字符映射为数组的下标位置 */
int CharPos(char c)
{
    if ((c >= 'A') && (c <= 'Z')) {
        return c - 'A';
    }
    if ((c >= 'a') && (c <= 'z')) {
        return c - 71;
    }
    return -1; // 返回-1作为数组下标是存在风险的应该在外层调用后检查
}

int FirstNotRepeatingChar(char *str)
{
    int cnt[26*2] = {0};
    int slen = strlen(str);

    for (int i=0; i<slen; i++) {
        cnt[CharPos(str[i])]++;
    }
    
    for (int i=0; i<slen; i++) {
        if (cnt[CharPos(str[i])] == 1) {
            return i;
        }
    }

    return -1;
}

int main()
{
    char *test_str = "abadbcf";
    printf("test str: %s\n", test_str);
    printf("first pos: %d\n", FirstNotRepeatingChar(test_str));
}
