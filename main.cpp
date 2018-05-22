//
//  main.cpp
//  Ejercicio_encriptacion
//
//  Created by Mac User on 22/05/18.
//  Copyright © 2018 Mac User. All rights reserved.
//

#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <time.h>

int main(void){
    std::string  c;
    std::getline(std::cin,c);
    int i,n;
    n=strlen(c)
    for(i=0;i<n;i++);
    std::cout<<c;
    return 0;
}

int strlen(char cadena[])
{
    int i,ac;
    for(i=0,ac=0;cadena[i]!='\0';i++)
        ac++;
    return ac;
}




