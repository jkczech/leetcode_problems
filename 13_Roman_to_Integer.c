int romanToInt(char * s)
{
    int result = 0;
    int i = 0;

    while (s[i])
    {
        if (s[i] && s[i] == 'M')
        {
            result += 1000;
            i++;
        }
        if (s[i] && s[i] == 'D')
        {
            result += 500;
            i++;
        }
        if (s[i] && s[i] == 'C')
        {
            if (s[i + 1] && s[i + 1] == 'M')
            {
                result += 900;
                i += 2;
            }
            else if (s[i + 1] && s[i + 1] == 'D')
            {
                result += 400;
                i += 2;
            }
            else
            {
                result += 100;
                i++;
            }
        }
        if (s[i] && s[i] == 'L')
        {
            result += 50;
            i++;
        }
        if (s[i] && s[i] == 'X')
        {
            if (s[i + 1] && s[i + 1] == 'C')
            {
                result += 90;
                i += 2;
            }
            else if (s[i + 1] && s[i + 1] == 'L')
            {
                result += 40;
                i += 2;
            }
            else
            {
                result += 10;
                i++;
            }
        }
        if (s[i] && s[i] == 'V')
        {
            result += 5;
            i++;
        }
        if (s[i] && s[i] == 'I')
        {
            if (s[i + 1] && s[i + 1] == 'X')
            {
                result += 9;
                i += 2;
            }
            else if (s[i + 1] && s[i + 1] == 'V')
            {
                result += 4;
                i += 2;
            }
            else
            {
                result += 1;
                i++;
            }
        }
    }
    return result;
}
