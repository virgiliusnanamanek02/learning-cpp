# include <iostream>
using namespace std;

int main()
{
    string people[3] = {"Vicky", "John", "Mary"};
    int ages[3] = {20, 21, 22};

    for (int i = 0; i < 3 ; i++)
    {
        cout << "Hello, this is " << people[i] << "!" << endl;
        cout << "I am " << ages[i] << " years old." << endl;
    }
}