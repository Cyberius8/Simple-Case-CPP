#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char move, bantu;
    int x = 1, y = 3;
    char arena[10][10] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                          {'|', '#', 'o', '!', '#', '#', '#', '#', '#', '|'},
                          {'|', '#', 'o', 'o', 'o', 'o', 'o', 'o', '#', '|'},
                          {'|', '#', 'o', 'o', 'o', 'o', 'o', 'o', '#', '|'},
                          {'|', '#', 'o', 'o', 'o', 'o', 'o', 'o', '#', '|'},
                          {'|', '#', 'o', 'o', 'o', 'o', 'o', 'o', '#', '|'},
                          {'|', '#', 'o', 'o', 'o', 'o', 'o', 'o', '#', '|'},
                          {'|', '#', 'o', 'o', 'o', 'o', 'o', 'o', '#', '|'},
                          {'|', '#', '#', '#', '#', '#', '#', '#', '#', '|'},
                          {'-', '-', '-', '-', '-', '-', '-', '#', '-', '-'}};
    cout << "Panduan Pergerakan : " << endl;
    cout << "a = kiri" << endl;
    cout << "d = kanan" << endl;
    cout << "w = atas" << endl;
    cout << "s = bawah" << endl;
    cout << "==========================" << endl;
    cout << "GAME CARI JALAN !!!" << endl;
    cout << "==========================" << endl;
    do
    {
        for (int i = 0; i < 10; i++)
        {
            cout << endl;
            for (int j = 0; j < 10; j++)
            {
                cout << " " << arena[i][j];
            }
        }
        cout << endl;
        cout << "Move : ";
        cin >> move;
        switch (move)
        {
        case 'a':
            bantu = arena[x][y];
            arena[x][y] = arena[x][y - 1];
            if (arena[x][y] != '#')
            {
                system("cls");
                cout << "You Lose";
                arena[9][7] = '!';
            }
            else if (arena[x][y] == '#')
            {
                system("cls");
            }
            arena[x][y - 1] = bantu;
            y = y - 1;
            if (x == 9 && y == 7)
            {
                system("cls");
                cout << "You Win";
            }
            break;
        case 'd':
            bantu = arena[x][y];
            arena[x][y] = arena[x][y + 1];
            if (arena[x][y] != '#')
            {
                system("cls");
                cout << "You Lose";
                arena[9][7] = '!';
            }
            else if (arena[x][y] == '#')
            {
                system("cls");
            }
            arena[x][y + 1] = bantu;
            y = y + 1;
            if (x == 9 && y == 7)
            {
                system("cls");
                cout << "You Win";
            }
            break;
        case 'w':
            bantu = arena[x][y];
            arena[x][y] = arena[x - 1][y];
            if (arena[x][y] != '#')
            {
                system("cls");
                cout << "You Lose";
                arena[9][7] = '!';
            }
            else if (arena[x][y] == '#')
            {
                system("cls");
            }
            arena[x - 1][y] = bantu;
            x = x - 1;
            if (x == 9 && y == 7)
            {
                system("cls");
                cout << "You Win";
            }
            break;
        case 's':
            bantu = arena[x][y];
            arena[x][y] = arena[x + 1][y];
            if (arena[x][y] != '#')
            {
                system("cls");
                cout << "You Lose";
                arena[9][7] = '!';
            }
            else if (arena[x][y] == '#')
            {
                system("cls");
            }
            arena[x + 1][y] = bantu;
            x = x + 1;
            if (x == 9 && y == 7)
            {
                system("cls");
                cout << "You Win";
            }
            break;
        default:
            cout << "Inputan Salah" << endl;
            break;
        }
    } while (arena[9][7] != '!');
}