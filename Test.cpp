#include <math.h>
#include <cstdio> 
#include <cstring>
#include <iostream>
#include <stdlib.h>


float calculations(float argument1,char option, float argument2)
{
    switch(option)
    {
        case '+': return argument1 + argument2;
        case '-': return argument1 - argument2;
        case '*': return argument1 * argument2;
        case '/': if(argument2 == 0){
            printf("Error div on zero fo help check -h/--help\n");
        }else return argument1 / argument2;
        case '%': if(argument2 == 0){
            printf("Error div on zero fo help check -h/--help\n");
        }else{
            int arg1 = argument1;
            int arg2 = argument2;
            return arg1%arg2;
        }
        case 'a': if((argument1==1 || argument1==0) && (argument2==1 ||argument2==0)){
            return argument1 && argument2;
        } else printf("Error\n");
        case 'o': if((argument1==1 || argument1==0) && (argument2==1 ||argument2==0)){
            return argument1 || argument2;
        } else printf("Error\n");
    }
}

int main(int argc, char *argv[])
{
    if (argc<2){
        printf("Culculator v0.1\n Use -h/--help for help.");
    }
    if(strcmp(argv[1],"--help") == 0 || strcmp(argv[1],"-h") == 0)
    {
        printf("Structure [Arg1] [option] [Arg2] [Output Type]\n Commands: -c/--calc -x/--hex -i/--int\n Options: +, -, *, /, %, a(and), o(or)\n");
    }
    //? argv[5]
    if((strcmp(argv[1],"--calc") == 0 || strcmp(argv[1],"-c") == 0))
    {
        if(argc == 6 && (strcmp(argv[5],"-x") == 0 || strcmp(argv[5],"--hex") == 0))
        {

        float arg1 = atof(argv[2]);
        char* option = argv[3];
        float arg2 = atof(argv[4]);
        int res = calculations(arg1,option[0],arg2);
        printf("%x\n",res);

        } else if(argc <= 6 || (strcmp(argv[5],"-i") == 0 || strcmp(argv[5],"--int") == 0)){
        
        float arg1 = atof(argv[2]);
        char* option = argv[3];
        float arg2 = atof(argv[4]);
        float res = calculations(arg1,option[0],arg2);
        printf("%f\n",res); 
        
        }

    }
    return 0;
}