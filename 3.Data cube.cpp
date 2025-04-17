//Igor Kamski
#include <iostream>
using namespace std;
void Gausitto(long long int macierz[32][32], int t3, int big) {
    for (int t1 = t3 + 1; t1 < big; t1++) {
        for (int t2 = t3 + 1; t2 < big; t2++) {
            macierz[t1][t2] = macierz[t3][t3] * macierz[t1][t2] - macierz[t1][t3] * macierz[t3][t2];
            if (t3 != 0) {
                macierz[t1][t2] /= macierz[t3 - 1][t3 - 1];
            }
        }
    }
}

long long int Gauss(int roz, long long int macierz[32][32]) {
    if (roz <= 0) {
        return 0;
    } else if (roz == 2) {
        return macierz[0][0] * macierz[1][1] - macierz[0][1] * macierz[1][0];
    }else if(roz == 3){
        long long int laplace = macierz[0][0] * macierz[1][1] * macierz[2][2]- macierz[0][2] * macierz[1][1] * macierz[2][0];
        return laplace;
    }else {

        long long int hmm = 1;

        for (int a = 0; a < roz - 1; a++) {
            if (macierz[a][a] == 0) {
                bool found = false;
                for (int b = a + 1; b < roz; b++) {
                    if (macierz[b][a] != 0) {
                        for (int c = a; c < roz; c++) {
                            long long int temp = macierz[b][c];
                            macierz[b][c] = macierz[a][c];
                            macierz[a][c] = temp;
                        }
                        hmm = -hmm;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return 0;
                }
            }
            Gausitto(macierz, a, roz);
        }

        long long int final = hmm * macierz[roz - 1][roz - 1];
        return final;
    }
}

int main() {
    int length = 0;
    int cube[32][32][32];
    char choice = ' ';

    cin >> length;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            for (int c = 0; c < length; c++) {
                cin >> cube[i][j][c];
            }
        }
    }

    cin >> choice;
    while (choice != 'E') {
        if (choice == 'C') {
            int l = 0, v = 0, p = 0, h = 0, w = 0, d = 0;
            cin >> l >> v >> p >> h >> w >> d;

            int szer = 0;
            if (l >= length / 2) {
                l = l - h;
                szer = l;
            } else {
                szer = l;
            }

            int wys = 0;
            if (v >= length / 2) {
                v = v - w;
                wys = v;
            } else {
                wys = v;
            }

            int gleb = 0;
            if (p >= length / 2) {
                p = p - d;
                gleb = p;
            } else {
                gleb = p;
            }
            int ng = gleb + d + 1;
            int nw = wys + w + 1;
            int ns = szer + h + 1;
            int sum = 0;
            for (int i = p; i < ng; i++) {
                for (int j = l; j < ns; j++) {
                    for (int k = v; k < nw; k++) {
                        if (i >= 0 && i < length && j >= 0 && j < length && k >= 0 && k < length) {
                            sum += cube[i][j][k];
                        }
                    }
                }
            }

            cout << sum << endl;

        } else if (choice == 'T') {
            int l = 0, v = 0, p = 0, e = 0;
            cin >> l >> v >> p >> e;

            int szer = 0;
            if (l >= length / 2) {
                l = l - e;
                szer = l;
            } else {
                szer = l;
            }

            int wys = 0;
            if (v >= length / 2) {
                v = v - e;
                wys = v;
            } else {
                wys = v;
            }

            int gleb = 0;
            if (p >= length / 2) {
                p = p - e;
                gleb = p;
            } else {
                gleb = p;
            }
            int ng = gleb + e + 1;
            int nw = wys + e + 1;
            int ns = szer + e + 1;
            int sum = 0;
            for (int i = p; i < ng; i++) {
                for (int j = l; j < ns; j++) {
                    for (int k = v; k < nw; k++) {
                        if (i >= 0 && i < length && j >= 0 && j < length && k >= 0 && k < length) {
                            int p1 = (i - p);
                            int p2 = (j - l);
                            int p3 = (k - v);
                            if ((p1 + p2 + p3) <= e) {
                                sum += cube[i][j][k];
                            }
                        }
                    }
                }
            }

            cout << sum << endl;

        } else if (choice == 'O') {
            int l = 0, v = 0, p = 0, r = 0;
            cin >> l >> v >> p >> r;

            int szer = 0;
            if (l >= length / 2) {
                l = l - r;
                szer = l;
            } else {
                szer = l;
            }

            int wys = 0;
            if (v >= length / 2) {
                v = v - r;
                wys = v;
            } else {
                wys = v;
            }

            int gleb = 0;
            if (p >= length / 2) {
                p = p - r;
                gleb = p;
            } else {
                gleb = p;
            }
            int ng = gleb + r + 1;
            int nw = wys + r + 1;
            int ns = szer + r + 1;
            int sum = 0;
            for (int x = p; x <= ng; x++) {
                for (int y = l; y <= ns; y++) {
                    for (int z = v; z <= nw; z++) {
                        if (x >= 0 && y >= 0 && z >= 0 && x < length && y < length && z < length) {
                            int d1 = (x - p) * (x - p);
                            int d2 = (y - l) * (y - l);
                            int d3 = (z - v) * (z - v);
                            if ((d1 + d2 + d3) <= (r * r)) {
                                sum += cube[x][y][z];
                            }
                        }
                    }
                }
            }

            cout << sum << endl;
        } else if (choice == 'D') {
            long long int matrix[32][32];
            long long int determinant = 0;
            int i = 0;
            char k;
            cin >> k >> i;

            switch (k) {
                case 'l':
                    for (int q = 0; q < length; q++) {
                        for (int j = 0; j < length; j++) {
                            matrix[q][j] = cube[q][i][j];
                        }
                    }
                    determinant = Gauss(length, matrix);
                    cout << determinant << endl;
                    break;
                case 'v':
                    for (int q = 0; q < length; q++) {
                        for (int j = 0; j < length; j++) {
                            matrix[q][j] = cube[q][j][i];
                        }
                    }
                    determinant = Gauss(length, matrix);
                    cout << determinant << endl;
                    break;
                case 'p':
                    for (int q = 0; q < length; q++) {
                        for (int j = 0; j < length; j++) {
                            matrix[q][j] = cube[i][q][j];
                        }
                    }
                    determinant = Gauss(length, matrix);
                    cout << determinant << endl;
                    break;
                default:
                    for (int q = 0; q < length; q++) {
                        for (int j = 0; j < length; j++) {
                            matrix[q][j] = 0;
                        }
                    }
                    determinant = Gauss(length, matrix);
                    cout << determinant << endl;
                    break;
            }
        }
        cin >> choice;
    }

    return 0;
}