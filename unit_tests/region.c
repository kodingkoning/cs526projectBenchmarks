int main() {
    int size = 100;
    int mat[size][size];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            for(int x = -1; x < 1; x++) {
                for(int y = -1; y <= 1; y++) {
                    if((x != 0 || y != 0) && i+x >= 0 && i+x < size && j+y >= 0 && j+y < size) {
                        mat[i+x][j+y]++;
                    }
                }
            }
        }
    }
    return 0;
}
