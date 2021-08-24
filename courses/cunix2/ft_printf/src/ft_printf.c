#include "../lib.h"

void ft_printf(char *format, ...)
{
    char *f_copy = format;
    int length = 0;  

    va_list arg;
    va_start(arg, format);

    while (*f_copy)
    {
        while (*f_copy != '%' && *f_copy)
        {
            write(1, &*f_copy, 1);
            f_copy++;
        }
        
        if (*f_copy == '%')
        {
            f_copy++;

            while (*f_copy == ' ' || *f_copy == 0)
            {
                f_copy++;
            }

            if (*f_copy == '-')
            {
                //draft. here should be some kind of vatiable
                f_copy++;
            }
            else if (*f_copy == '+')
            {   
                //draft
                f_copy++;
            }
        
            if (*f_copy >= '0' && *f_copy <= '9') 
            {
                length = my_atoi(f_copy);
            }

            char *str;
            char chr;
            switch (*f_copy)
            {
                case 's':
                    str = va_arg(arg, char *);
                    if (!str)
                    {
                        str = "(null)";
                    }
                    break;
              
                case 'd':
                    str = my_itoa(va_arg(arg, int));
                    break;
             
                case 'c':
                    chr = va_arg(arg, int);
                    str = &chr;
                    break;
            
                case 'i':
                    str = my_itoa(va_arg(arg, int));
                    break;
    
                case '%':
                    chr = '%';
                    str = &chr;
                    break;
            }
 
            if (length) //draft
            {
                int len;
                for (len = 0; str[len]; len++);
                length -= len;
            }

            while (*str)
            {
                write(1, &*str, 1);
                str++;
            }
        }        
        
        if (!*f_copy)
        {
            break;
        }

        f_copy++;
    }
}
