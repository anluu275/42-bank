#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    int  i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (0);
}


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i <= n-1)
    {
        dest[i] = src[i];
        i++;
    }
    //dest[i] = '\0';
    return (0);
}




int main () {
   char src[40];
   char dest[17];
   
   char src2[40];
   char dest2[12];
   
   //memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 9);

   printf("Final copied string : %s\n", dest);
   
   ft_strcpy(src2, "Testing_Testing_123\n");
   ft_strncpy(dest2, src2, 3);

   printf("Final copied string : %s\n", dest2);
   
   
   return(0);
}
