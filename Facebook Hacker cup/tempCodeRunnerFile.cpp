for (int i = 0; i < n;)
    {
        if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
        {
            c++;
            i++;
            continue;
        }
        if (s1[i] == '0' && s2[i] == '0')
        {
            if (i + 1 < n && (s1[i + 1] == '1' && s2[+1] == '1'))
            {
                c += 2;
                i += 2;
                continue;
            }
            else
            {
                c++;
                i++;
                continue;
            }
        }

        if (s1[i] == '1' && s2[i] == '1')
        {
            if (i + 1 < n && (s1[i + 1] == '0' && s2[+1] == '0'))
            {
                c += 2;
                i += 2;
                continue;
            }
            else
            {
                i++;
                continue;
            }
        }
    }
    cout << c << endl;