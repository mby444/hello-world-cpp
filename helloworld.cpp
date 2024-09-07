#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void printMessage(string &message);
void sleep(const int &ms);

int main()
{
    string message = "Hello world!";
    printMessage(message);
    return 0;
}

void printMessage(string &message)
{
    string output = "";

    for (int i = 0; i < message.length(); i++)
    {
        char ch = ' ';
        int limit = 95;

        for (int j = 0; j < limit; j++)
        {
            sleep(5);
            if (ch == message[i])
            {
                output += ch;
                cout << output << endl;
                break;
            }
            cout << output << ch << endl;
            ch++;
        }
    }
}

void sleep(const int &ms)
{
    this_thread::sleep_for(chrono::milliseconds(ms));
}