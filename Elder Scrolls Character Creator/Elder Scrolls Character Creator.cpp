#include <iostream>

using namespace std;

class Character3
{
public:
    // character sheet
    string name;
    string sex;
    string race;
    string profession;
    string birthsign;

    // roleplaying choices
    string faction1;
    string faction2;
    string hometown;
};

int main()
{
    string factions[10] = {"Great Houses", "Vampires", "Religions", "Fighter's Guild", "Mage's Guild"};

    cout << "Please enter the number of the Elder Scrolls game.\n";
    int game;
    cin >> game;

    if (game == 3)
    {
        cout << "Please enter the number of the Elder Scrolls game.\n";
        int game;
        cin >> game;
    }
}
