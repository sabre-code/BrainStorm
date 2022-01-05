#include<iostream>
using namespace std;
int main()
{
    int x[21] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    int y[21];
    int j;
    for (int i = 0; i < 21; i++)
    {
        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
    }
    cout << "\nWELCOME TO 21 NUMBER GAME\nPlease select any number from above and follow steps according to that number\n";
    cout << "Columns are coded as a,b,c respectively. Enter value accordingly.";
    char column;
    cout << "\nEnter column: ";
    cin >> column;
    switch ( column )
    {
        case 'a':
        case 'A':
            j = 0;
            for (int i = 1; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
        
            for (int i = 0; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
            
            for (int i = 2; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
            cout << "\n";
            for (int i = 0; i < 21; i++)
            {
                cout << y[i] << "\t" << y[++i] << "\t" << y[++i] << "\n";
            }
            cout << "\nEnter Column: ";
            cin >> column;
            switch( column )
            {
                case 'a':
                case 'A':
                    j = 0;
                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
                case 'b':
                case 'B':
                    j = 0;
                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
                case 'c':
                case 'C':
                    j = 0;
                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
        }
        break;
        case 'b':
        case 'B':
            j = 0;
            for (int i = 0; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
        
            for (int i = 1; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
            
            for (int i = 2; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
            cout << "\n";
            for (int i = 0; i < 21; i++)
            {
                cout << y[i] << "\t" << y[++i] << "\t" << y[++i] << "\n";
            }
            cout << "\nEnter Column: ";
            cin >> column;
            switch( column )
            {
                case 'a':
                case 'A':
                    j = 0;
                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
                case 'b':
                case 'B':
                    j = 0;
                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
                case 'c':
                case 'C':
                    j = 0;
                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
            }
            break;
        case 'c':
        case 'C':
            j = 0;
            for (int i = 0; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
        
            for (int i = 2; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
            
            for (int i = 1; i < 21; i += 3)
            {
                y[j++] = x[i];
            }
            cout << "\n";
            for (int i = 0; i < 21; i++)
            {
                cout << y[i] << "\t" << y[++i] << "\t" << y[++i] << "\n";
            }
            cout << "\nEnter Column: ";
            cin >> column;
            switch( column )
            {
                case 'a':
                case 'A':
                    j = 0;
                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
                case 'b':
                case 'B':
                    j = 0;
                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
                case 'c':
                case 'C':
                    j = 0;
                    for (int i = 0; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 2; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }

                    for (int i = 1; i < 21; i += 3)
                    {
                        x[j++] = y[i];
                    }
                    cout << "\n";
                    for (int i = 0; i < 21; i++)
                    {
                        cout << x[i] << "\t" << x[++i] << "\t" << x[++i] << "\n";
                    }
                    cout << "Enter Column: ";
                    cin >> column;
                    switch (column)
                    {
                        case 'a':
                        case 'A':
                            cout << "Your number was " << x[9];
                            break;
                        case 'b':
                        case 'B':
                            cout << "Your number was " << x[10];
                            break;
                        case 'c':
                        case 'C':
                            cout << "Your number was " << x[11];
                            break;
                    }
                    break;
            }
        break;
    }
return 0;

}
