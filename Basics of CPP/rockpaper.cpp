// Create a rock-paper-scissors logic for two players using numerical inputs (1, 2, 3).
#include <iostream>
using namespace std;
int rockpaperScissors(int player1, int player2) {
    if (player1 == player2) {
        return 0; // Tie
    } else if ((player1 == 1 && player2 == 3) || 
               (player1 == 2 && player2 == 1) || 
               (player1 == 3 && player2 == 2)) {
        return 1; // Player 1 wins
    } else {
        return 2; // Player 2 wins
    }
}
int main() {
    int player1, player2;
    cout << "Enter Player 1's choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> player1;
    cout << "Enter Player 2's choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> player2;

    int result = rockpaperScissors(player1, player2);
    if (result == 0) {
        cout << "It's a tie!" << endl;
    } else if (result == 1) {
        cout << "Player 1 wins!" << endl;
    } else {
        cout << "Player 2 wins!" << endl;
    }

    return 0;
}