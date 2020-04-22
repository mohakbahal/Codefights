int chessKnight(std::string cell) {
    int r[5] = {2, 3, 4, 6, 8};
    int c1 = min(cell[0] - 'a', 'h' - cell[0]);
    int c2 = min(cell[1] - '1', '8' - cell[1]);
    int d1 = min(c1, 2);
    int d2 = min(c2, 2);
    return r[d1 + d2];
}