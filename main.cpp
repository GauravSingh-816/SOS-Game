/*
Gaurav Singh
CS-449
*/
#include <iostream>
#include <string>
using namespace std;

class SOS {
private:
    string gameBody[5][5] = { {"   ", "   ", "   ", "   ", "   "},
                              {"   ", "   ", "   ", "   ", "   "},
                              {"   ", "   ", "   ", "   ", "   "},
                              {"   ", "   ", "   ", "   ", "   "},
                              {"   ", "   ", "   ", "   ", "   "} };

    int pl1_score = 0, pl2_score = 0, gameCounter = 1, playerIndex = 1, row = 10, column = 10;
    char c;

public:
    void DrawPattern() {
      cout << "\nFirst Player Points : " << pl1_score << "     " << "Second Player Points : " << pl2_score << "\n";
      if (playerIndex % 2)
      {
          cout << "((First Player Turn))\n";
      }
      else
      {
          cout << "((Second Player Turn))\n";
      }


      for (int i = 0; i < 5; i++)
      {
          cout << "|";
          for (int j = 0; j < 5; j++)
          {
              cout << gameBody[i][j] << "|";
          }
          cout << "\n" << "---------------------" << "\n";
      }
    }

    void TakingIndex() {
      bool indexIsFine = false;

      while (!indexIsFine)
      {
          row = 10;
          column = 10;
          c = ' ';
          while (row > 5 || row < 0)
          {
              cout << "Enter Row's Index : ";
              cin >> row;
          }
          while (column > 5 || column < 0)
          {
              cout << "Enter Column's Index : ";
              cin >> column;
          }
          while (c != 'S' && c != 'O')
          {
              cout << "Choose Whether S or O : ";
              cin >> c;
          }
          if (gameBody[row - 1][column - 1] == "   ")
          {
              string str = "   ";
              str[1] = c;
              gameBody[row - 1][column - 1] = str;
              gameCounter++;
              indexIsFine = true;
          }
      }
    }

    void DeterminingPoints() {
      bool win = false;
      bool condition1 = gameBody[row - 1][column - 2] == " O " && gameBody[row - 1][column - 3] == " S " && row - 1 >= 0 && column - 3 >= 0;
      bool condition2 = gameBody[row - 1][column] == " O " && gameBody[row - 1][column + 1] == " S " && row - 1 >= 0 && column + 1 < 5;
      bool condition3 = gameBody[row - 2][column - 1] == " O " and gameBody[row - 3][column - 1] == " S " and row - 3 >= 0 && column - 1 >= 0;
      bool condition4 = gameBody[row][column - 1] == " O " && gameBody[row + 1][column - 1] == " S " && column - 1 >= 0 && row + 1 < 5;
      bool condition5 = gameBody[row][column - 2] == " O " && gameBody[row + 1][column - 3] == " S " && column - 3 >= 0 && row + 1 < 5;
      bool condition6 = gameBody[row - 2][column] == " O " && gameBody[row - 3][column + 1] == " S " && row - 3 >= 0 && column + 1 < 5;
      bool condition7 = gameBody[row][column] == " O " && gameBody[row + 1][column + 1] == " S " && row + 1 < 5 && column + 1 < 5;
      bool condition8 = gameBody[row - 2][column - 2] == " O " && gameBody[row - 3][column - 3] == " S " && row - 3 >= 0 && column - 3 >= 0;
      bool condition9 = gameBody[row - 1][column] == " S " && gameBody[row - 1][column - 2] == " S " && row - 1 >= 0 && column - 2 >= 0 && column < 5;
      bool condition10 = gameBody[row][column - 1] == " S " && gameBody[row - 2][column - 1] == " S " && row - 2 >= 0 && column - 1 >= 0 && row < 5;
      bool condition11 = gameBody[row - 2][column] == " S " && gameBody[row][column - 2] == " S " && row - 2 >= 0 && column - 2 >= 0 && column < 5 && row < 5;
      bool condition12 = gameBody[row - 2][column - 2] == " S " && gameBody[row][column] == " S " && row - 2 >= 0 && column - 2 >= 0 && column < 5 && row < 5;

      if (gameBody[row - 1][column - 1] == " S ")
      {
          if (condition1)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition2)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition3)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }
          if (condition4)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition5)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition6)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition7)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition8)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }
      }
      else if (gameBody[row - 1][column - 1] == " O ")
      {
          if (condition9)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition10)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }

          if (condition11)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }
          if (condition12)
          {
              if (playerIndex % 2)
              {
                  pl1_score += 1;
              }
              else
              {
                  pl2_score += 1;
              }
              win = true;
          }
      }
      if (!win)
      {
          playerIndex += 1;
      }
    }

    void Update() {
        DrawPattern();
        TakingIndex();
        DeterminingPoints();
    }

    void GameEnds() {
      if (pl1_score > pl2_score){
        cout << "Player One Has Won The Game";
      }

      else if (pl2_score > pl1_score){
        cout << "Player Two Has Won The Game";
      }
      else{
        cout << "Game Is Draw";
      }      
    }

void PlayGame() {
    while (gameCounter <= 26) {
        Update();

        if (pl1_score >= 13 || pl2_score >= 13) {
            break;  // Break the loop when a player wins
        }
    }

    GameEnds();
}
  
};

int main() {
    SOS game;
    game.PlayGame();
    return 0;
}