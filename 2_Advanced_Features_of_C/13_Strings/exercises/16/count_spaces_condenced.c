int count_spaces(const char *s)
{
    int count = 0;
    while (*s++)
        if (*s == ' ')
            count++;
    return count;
}

// K. N. King

int count_spaces(const char *s)
{
    int count = 0;
    while (*s)
        if (*s++ == ' ')
            count++;
    return count;
}
