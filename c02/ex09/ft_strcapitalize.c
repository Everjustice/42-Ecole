char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        else if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        else if ((str[i] >= 'A' && str[i] <= 'Z') && !(i == 0 || str[i - 1] == ' '))
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
