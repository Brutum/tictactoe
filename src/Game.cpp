#include "Game.hpp"

Game::Game() {
    turn = Game::X;
    for (int i = 0; i < 9; i++) {
        board[i] = Game::NONE;
    }
}

bool Game::check_move(unsigned int row, unsigned int col) {
    return board[row * 3 + col] == Game::NONE;
}

Game::Player Game::check_win() {
    for (int i = 0; i < 3; i++) {
        if (board[i * 3] != Game::NONE && board[i * 3] == board[i * 3 + 1] && board[i * 3 + 1] == board[i * 3 + 2]) {
            return board[i * 3];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (board[i] != Game::NONE && board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
            return board[i];
        }
    }
    if (board[0] != Game::NONE && board[0] == board[4] && board[4] == board[8]) {
            return board[0];
    }
    if (board[2] != Game::NONE && board[2] == board[4] && board[4] == board[6]) {
            return board[2];
    }
    return Game::NONE;
}

Game::Player Game::get_board(unsigned int row, unsigned int col) {
    return board[row * 3 + col];
}

Game::Player Game::get_current_player() {
    return turn;
}

void Game::make_move(unsigned int row, unsigned int col) {
    if (check_move(row, col)) {
        board[row * 3 + col] = turn;
        if (turn == Game::X) {
            turn = Game::O;
        }
        else {
            turn = Game::X;
        }
    }
}

