int ft_strlen(char *str)
{
   int i;
   
   i == 0;
   while (str[i] != '\0')
    {
        i ++ ;
    }
    return (i);
}

#include <stdio.h>
int main(void)
{
    int len =ft_strlen("hola caracola loca");
    printf("%i\n", len);
    return 0;
}
