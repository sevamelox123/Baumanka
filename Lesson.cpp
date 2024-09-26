#include <math.h>
#include <cstdio> 
#include <cstring>
#include <iostream>
#include <stdlib.h>


// float calculations(int argument1,char option, int argument2)
// {
//     switch(option)
//     {
//         case '+': return argument1 + argument2;
//         case '-': return argument1 - argument2;
//         case '*': return argument1 * argument2;
//         case '/': if(argument2 == 0){
//             printf("Div on zero fo help check -h/--help\n");
//         }else return argument1 / argument2;
//         case '%': if(argument2 == 0){
//             printf("Div on zero fo help check -h/--help\n");
//         }else {
//         return argument1 % argument2;
//         }
//         case 'a': if((argument1==1 || argument1==0) && (argument2==1 ||argument2==0)){
//             return argument1 && argument2;
//         } else printf("Something happen check -h/--help\n");
//         case 'o': if((argument1==1 || argument1==0) && (argument2==1 ||argument2==0)){
//             return argument1 || argument2;
//         } else printf("Something happen check -h/--help\n");
//     }
// }

// int main(int argc, char *argv[])
// {
//     printf("Culculator v0.1\nFor help use -h/--help\nFor work use -c/--calc\n");
//     if(strcmp(argv[1],"--help") == 0 || strcmp(argv[1],"-h") == 0)
//     {
//         printf("Structure [Arg1] [option] [Arg2] [Output Type]\n Commands: -c/--calc -x/--hex -i/--int\n Options: + - * / % a(and) o(or)\n");
//     }
//     if((strcmp(argv[1],"--calc") == 0 || strcmp(argv[1],"-c") == 0) && (strcmp(argv[5],"-x") == 0 || strcmp(argv[5],"--hex") == 0))
//     {
//         double arg1 = atof(argv[2]);
//         char* option = argv[3];
//         double arg2 = atof(argv[4]);
//         int res = calculations(arg1,option[0],arg2);
//         printf("%x",res);
//     } else if((strcmp(argv[1],"--calc") == 0 || strcmp(argv[1],"-c") == 0) && (strcmp(argv[5],"-i") == 0 || strcmp(argv[5],"--int") == 0)) {
//        double arg1 = atof(argv[2]);
//         char* option = argv[3];
//         double arg2 = atof(argv[4]);
//         double res = calculations(arg1,option[0],arg2);
//         printf("%f\n",res);
//     }
//     return 0;
// }