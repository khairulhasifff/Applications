#include <iostream>
#include <cmath> // To use functions like square root (sqrt) and power (pow)

using namespace std;

int main()
{
    int ext = 1;

    cout << "=====================================================\n";
    cout << "=== PROGRAM TO FIND TRIANGLE LENGTH (PYTHAGORAS) ===\n";
    cout << "=====================================================\n";

    do
    {
        int mode = 1;

        cout << "\n";
        cout << "What side do you want to find?\n";
        cout << "----------------------------\n";
        cout << "1. Hypotenuse\n";
        cout << "2. Base\n";
        cout << "3. Height\n";
        cout << "----------------------------\n";
        cout << "0. Exit\n";
        cout << "> ";
        cin >> mode;

        if (mode == 1)
        {
            float hypotenuse, base, height;

            cout << "\n";
            cout << "Enter the Length of Base   > ";
            cin >> base;
            cout << "Enter the Length of Height > ";
            cin >> height;

            hypotenuse = sqrt(pow(base, 2) + pow(height, 2));

            cout << "---------------------------------------\n";

            cout << "Hypotenuse = " << hypotenuse << "\n";
            cout << "\n";
        }
        else if (mode == 2)
        {
            float base, hypotenuse, height;

            cout << "\n";
            cout << "Enter the Length of Hypotenuse > ";
            cin >> hypotenuse;
            cout << "Enter the Length of Height     > ";
            cin >> height;

            if (hypotenuse < height)
            {
                cout << "Invalid input. Hypotenuse should be greater than height.\n";
                continue;
            }

            base = sqrt(pow(hypotenuse, 2) - pow(height, 2));

            cout << "---------------------------------------\n";

            cout << "Base = " << base << "\n";
            cout << "\n";
        }
        else if (mode == 3)
        {
            float height, hypotenuse, base;

            cout << "\n";
            cout << "Enter the Length of Hypotenuse > ";
            cin >> hypotenuse;
            cout << "Enter the Length of Base       > ";
            cin >> base;

            if (hypotenuse < base)
            {
                cout << "Invalid input. Hypotenuse should be greater than base.\n";
                continue;
            }

            height = sqrt(pow(hypotenuse, 2) - pow(base, 2));

            cout << "---------------------------------------\n";

            cout << "Height = " << height << "\n";
            cout << "\n";
        }
        else if (mode == 0)
        {
            return 0;
        }
        else
        {
            cout << "\n";
            cout << "You entered an invalid number\n";
            cout << "\n";
        }

        cout << "Do you want to repeat the process?\n";
        cout << "---------------------------------------\n";
        cout << "Enter 1 to repeat\n";
        cout << "Enter anything else to exit\n";
        cout << "> ";
        cin >> ext;
    } while (ext == 1);

    return 0;
}
