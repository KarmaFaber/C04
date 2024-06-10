int ft_atoi(char *str)
{
    short parity;
    int number;
    
    parity = 0; 
    number = 0; 
    while (*str >= 9 && *str <= 13 || *str == 32)
        ++str; 

    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            parity++;
        ++str;
    }
    
    while (*str >48 && *str <=57)
    {
        number *= 10; 
        number += *str - 48; 
        ++str;   
    }
    
    if (!(parity % 2))
        return (number);
    return (-number);    
}


#include <stdio.h>
int main (void)
{
    char *s = " ---+--+1234ab567"; // pide string
    printf("%d\n", ft_atoi(s)); //devuelve int 
    return 0;
}




/*-----------------------------------------EXPLICACION--------------------------------*/
int ft_atoi(char *str)
{
    short parity; // contador para + y -
    int number; // var para guardar numeros
    
    parity = 0; 
    number = 0; 
    
    //revisamos los espacios:
    while (*str >= 9 && *str <= 13 || *str == 32) // ver ASCII -referencias de tipos de espacios de 9 -13 y el 32.
        ++str; 
    
    //revisamos los + y -
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            parity++;
        ++str;
    }
    
    //revisamos los dogitos en la tabla ASCII de 0 a 9 -> unidades, decenas, centenas, etc. -> shift_base10_like operation
    while (*str >48 && *str <=57)
    {
        number *= 10; // es lo mismo que number = number *10/ desplazamos 10 unidades a la derecha el numero seun vamos escribiendo: shift_base10_like operation
        number += *str - 48; // convertir char to int
        ++str;
        
    }
    
    //revisamos cuantos '-' tenemos en el contador parity:
    if (!(parity % 2)) // si parity no es par devolvemos numero, si es par devolvemos -numero:
        return (number);
    return (-number);
     
}


#include <stdio.h>
int main (void)
{
    char *s = " ---+--+1234ab567"; // pide string
    printf("%d\n", ft_atoi(s)); //devuelve int 
    
    return 0;
}
