#include "ui_lower.h"
#include "lower.h"

void ui_lower()
{
    char str[100];
    input_lower(str);
    lower_case(str);
    printf("%s", str);
}

void input_lower(char * str)
{
    puts("\nInput string: ");
    scanf("%*c");
    gets(str);
}

void fifth_task_text()
{
    printf("\nТекст, не содержащий собственных имен и сокращений, \nнабран полностью прописными русскими буквами.\nЗаменить все прописные буквы, кроме букв, \nстоящих после точки, строчными буквами.\n");
}
