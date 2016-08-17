#ifndef GAME_HPP
#define GAME_HPP

class Game {
public:
    enum Player { X, O, NONE };

    Game();
    bool check_move(unsigned int row, unsigned int col);
    Player check_win();
    Player get_board(unsigned int row, unsigned int col);
    Player get_current_player();
    void make_move(unsigned int row, unsigned int col);

private:
    Player turn;
    Player board[9];
};

#endif
