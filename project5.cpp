//Author: Zakiya Mims Oct 16 

#include <iostream>
using namespace std;
int main()
{
// variable declaration for getting user choice
int choice;
do
{
    cout<<"1) Convert Binary to Decimal"<<endl;
    cout<<"2) Convert Decimal to Binary"<<endl;
    cout<<"Enter 1, 2, or 0 to exit:"<<endl;
    cin>>choice;

    if(choice==1)
    {
    int num;
    // get binary number from user
    cout<<"Enter Binary Number:";
    cin>>num;
    int dec = 0;

//  base value to 1, i.e 2^0
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec += last_digit * base;
        base = base * 2;
    }
// printing decimal number
    cout<<"Decimal Number:"<<dec<<endl;
}

    if(choice==2)
    {
        int n;
        // getting decimal number from user
        cout<<"Enter Decimal Number:";
        cin>>n;
        int binaryNum[32];
        int i = 0;
    while (n > 0)
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        }
        cout<<"Binary Number:";
        // // printing equivalent decimal number
        for (int j = i - 1; j >= 0; j--)
            cout << binaryNum[j];
            cout<<endl;
}

    if (choice==0)
        break;

        } while(1);

    return 0;
    }