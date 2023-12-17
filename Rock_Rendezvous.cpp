#include <bits/stdc++.h>
#define ll long long
#define fri(n) for (int i = 0; i < n; i++)
#define frk(n) for (int k = 0; k < n; k++)
#define frj(n) for (int j = 0; j < n; j++)
#define ff first
#define ss second
#define nn
using namespace std;

void suggestion_for_player1(int value, int n)
{
    if (value == 3 || value == 2 || value == 1)
    {
        cout << "Pick " << value << endl;
        return;
    }

    if (value % 4 == 0)
    {
        cout << "Pick " << 0 << endl;
    }
    else
    {
        int y = value / 4;
        cout << "Pick " << value - (y * 4) << endl;
    }

    return;
}

void start_gaiming()
{
    int n, x, y, sum = 0;
    cout << "How many rocks are there in the table?: ";
    cin >> n;
    while (1)
    {
        suggestion_for_player1(n - sum, n);
        cout << "1st player: ";
        cin >> x;
        sum += x;
        cout << "\t\tRemaining rocks: " << n - sum << endl;
        if (n - sum <= 0)
        {
            cout << "Player 1 wins!" << endl;
            break;
        }
        cout << "2nd player: ";
        cin >> y;
        sum += y;
        cout << "\t\tRemaining rocks: " << n - sum << endl;
        if (n - sum <= 0)
        {
            cout << "Player 2 wins!" << endl;
            break;
        }
    }
}

void help()
{
    cout << ">> start :\n\tYour can take turns removing 0,1,2 or 3 rocks from the table.\n\tBut you can't pass your turn without removing any rocks twice in a row.\n\tThe person who removes the last stone wins the game.\n>> exit :\n\tTo exit from the game." << endl;
}

int main()
{
    while (1)
    {
        string s1;
        cout << ">> ";
        cin >> s1;
        if (s1 == "start")
        {
            start_gaiming();
        }
        else if (s1 == "help")
        {
            help();
        }
        else if (s1 == "exit")
        {
            exit(1);
        }
    }
    return 0;
}