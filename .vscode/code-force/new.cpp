#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Function to read levels and insert them into a set
void readLevels(set<int> &levels, int count) {
    int level;
    for (int i = 0; i < count; i++) {
        cin >> level;
        levels.insert(level);
    }
}

// Class to handle the game levels
class Game {
public:
    int n, p, q;
    set<int> levels;

    // Constructor to initialize game with number of levels
    Game(int totalLevels) : n(totalLevels) {}

    // Function to check if the player becomes "the guy"
    void checkIfIBecomeTheGuy() {
        if (levels.size() == n) {
            cout << "I become the guy.\n";
        } else {
            cout << "Oh, my keyboard!\n";
        }
    }

    // Function to read levels from input
    void readInput() {
        cin >> p;
        readLevels(levels, p);
        cin >> q;
        readLevels(levels, q);
    }
};

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    int n;
    cin >> n;

    Game game(n);
    game.readInput();
    game.checkIfIBecomeTheGuy();

    return 0;
}
