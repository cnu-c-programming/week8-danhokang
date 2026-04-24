#include <stdio.h>

char *my_strcat(char *dst, const char *src) {
    char *start = dst;

    // dst를 문자열 끝까지 이동
    while (*dst) {
        dst++;
    }

    // src 복사
    while (*src) {
        *dst = *src;
        dst++;
        src++;
    }

    // 마지막 null 문자 추가
    *dst = '\0';

    return start;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
