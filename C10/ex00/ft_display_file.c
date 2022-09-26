#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int ft_display_file(char *file)
{
    int on;
    int rd;
    char tmp;

    on = open(file , O_RDONLY);
    if(on == -1)
        return 0;
    while (rd = read(on , &tmp, 1))
    {
        if(rd == -1)
            return 0;
        write(2, &tmp, 1);
    }
    close(on);
    return 1;
}

int main(int ac , char **av)
{   
    if(ac == 1)
        write(2, "File name missing.\n", 19);
    else if(ac > 2)
        write(2, "Too many arguments.\n", 20);
    else
    {
        if(!ft_display_file(av[1]))
            write(2, "Cannot read file.\n", 16);
    }
    return 0;
}