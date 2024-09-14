/*Автор Осепошвили Всеволод 1 Курс МФ МГТУ Им. Баумана*/
#include <iostream>
#include <cstring>
#include <math.h>
#include "Lesson.h"
using namespace std;

int main()
{
    int res;
    char stri[50],znak,format[50];
    float param1,param2;
    printf("Это калькулятор на C++ умеющий складывать, вычитать, умноножать и много другое.\nСправка по работе с программой --help/-h.\nДля начала работы введите команду...");
    cin>>stri;
    if(strcmp("-c",stri)==0 || strcmp("--calc",stri)==0){
        printf("Выберите формат вывода...\n");
        cin>>format;
        printf("Введите первый операнд...\n");
        cin>>param1;
        printf("Введите второй операнд...\n");
        cin>>param2;
        printf("Введите операцию...");
        cin>>znak;
        switch (znak)
        {
        case '+':
            if(strcmp("-i",format)==0 || strcmp("--int",format)==0){
                printf("Результат сложения чисел в десятичной:\n");
                cout<<param1+param2;
            } else if(strcmp("-x",format)==0 || strcmp("--hex",format)==0){
                printf("Результат сложения чисел в шеснадцатиричной системе:\n");
                res = param1+param2;
                cout<<std::hex<<res;
            }
            break;
        case '-':
            if(strcmp("-i",format)==0 || strcmp("--int",format)==0){
                printf("Результат вычитания чисел в десятичной:\n");
                cout<<param1-param2;
            } else if(strcmp("-x",format)==0 || strcmp("--hex",format)==0){
                printf("Результат вычитания чисел в шеснадцатиричной системе:\n");
                res = param1-param2;
                cout<<std::hex<<res;
            }
            break;
        case '*':
            if(strcmp("-i",format)==0 || strcmp("--int",format)==0){
                printf("Результат умножения чисел в десятичной:\n");
                cout<<param1*param2;
            } else if(strcmp("-x",format)==0 || strcmp("--hex",format)==0){
                printf("Результат умножения чисел в шеснадцатиричной системе:\n");
                res = param1*param2;
                cout<<std::hex<<res;
            }
            break;
        case '/':
            if(strcmp("-i",format)==0 || strcmp("--int",format)==0){
                printf("Результат деления чисел в десятичной:\n");
                cout<<param1/param2;
            } else if(strcmp("-x",format)==0 || strcmp("--hex",format)==0){
                printf("Результат деления чисел в шеснадцатиричной системе:\n");
                res = param1/param2;
                cout<<std::hex<<res;
            }
            break;
        case '%':
            if(strcmp("-i",format)==0 || strcmp("--int",format)==0){
                printf("Результат нахождения остатка чисел в десятичной:\n");
                cout<<fmod(param1,param2);
            } else if(strcmp("-x",format)==0 || strcmp("--hex",format)==0){
                printf("Результат нахождения остатка в шеснадцатиричной системе:\n");
                res = fmod(param1,param2);
                cout<<std::hex<<res;
            }
            break;
        case 'a':
            if((param1==1 || param1==0) && (param2==1 || param2==0)){
                cout<<param1 && param2;
            } else printf("Числа не подходят для данной операции, попробуйте сначало.");
            break;
        case 'o':
            if((param1==1 || param1==0) && (param2==1 || param2==0)){
                cout<<param1||param2;
            } else printf("Числа не подходят для данной операции, попробуйте сначало.");
            break;
        
        default:
            printf("Выбрана не существующая операция, пожалуйста попробуйте снова");
            break;
        }


    } else if (strcmp("-h",stri)==0 || strcmp("--help",stri)==0){
        printf("Для начала работы нужно ввести --calc/-c.\nДля указания формата вывода:\n --int/-i для десятичной\n--hex/-x для шестанадцатиричной.\nДоступные операции: +, -, *, /, %, a(and), o(or)");
    } else{
        printf("Ошибка, приглашаю воспользоватьcя справкой с помощью --help/-h.");
    }
    return 0;
}
