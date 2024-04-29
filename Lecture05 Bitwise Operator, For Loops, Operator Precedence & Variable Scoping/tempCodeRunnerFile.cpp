for (int i = 0; i < 5; i++)
    {
        for (int j = i; i <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }

            cout << i << " " << j << endl;
        }
    }