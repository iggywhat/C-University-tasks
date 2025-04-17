//Igor Kamski
#include <iostream>
using namespace std;

void Add(int wartosc, int tab[]) {
    if (wartosc >= 1 && wartosc <= 4095) {
        int size = 0;
        while (tab[size] != -1) {
            size++;
        }

        for (int i = 0; i < size; i++) {
            if (tab[i] == wartosc) {
                return;
            }
        }
        tab[size] = wartosc;
        tab[size + 1] = -1;

        for (int a = 0; a < size; ++a) {
            for (int b = 0; b < size - a; ++b) {
                if (tab[b] > tab[b + 1]) {
                    int temp = tab[b];
                    tab[b] = tab[b + 1];
                    tab[b + 1] = temp;
                }
            }
        }
    }
}

void Create(int length, int tab[], int tabafter[]) {
    int elo = 0;
    for (int i = 0; i < length; i++) {
        if (tab[i] >= 1 && tab[i] <= 4095) {
            int duplicate = 0;
            for (int j = 0; j < elo; j++) {
                if (tabafter[j] == tab[i]) {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) {
                tabafter[elo] = tab[i];
                elo++;
            }
            int check = 0;
            while(tabafter[check] != -1) {
                check++;
            }
        }
    }


    tabafter[elo] = -1;

    for (int a = 0; a < elo - 1; ++a) {
        for (int b = 0; b < elo - a - 1; ++b) {
            if (tabafter[b] > tabafter[b + 1]) {
                int temp = tabafter[b];
                tabafter[b] = tabafter[b + 1];
                tabafter[b + 1] = temp;
            }
        }
    }
}
void Complement(int in[], int out[]) {
    int universeSize = 4095;
    int i, j;
    int isInSet;
    int outIndex = 0;
    for (i = 1; i <= universeSize; i++) {
        isInSet = 0;
        for (j = 0; in[j] != -1; j++) {
            if (in[j] == i) {
                isInSet = 1;
                break;
            }
        }
        if (!isInSet) {
            out[outIndex++] = i;
        }
    }
    out[outIndex] = -1;

    for (int a = 0; a < outIndex - 1; ++a) {
        for (int b = 0; b < outIndex - a - 1; ++b) {
            if (out[b] > out[b + 1]) {
                int temp = out[b];
                out[b] = out[b + 1];
                out[b + 1] = temp;
            }
        }
    }
}
void Union(int tab[], int tab2[], int tabeq[]) {
    int n = 0, m = 0, o = 0;

    while (tab[n] != -1) {
        n++;
    }

    while (tab2[m] != -1) {
        m++;
    }

    for (int i = 0; i < n; i++) {
        tabeq[o] = tab[i];
        o++;
    }

    for (int j = 0; j < m; j++) {
        bool found = false;
        for (int k = 0; k < o; k++) {
            if (tab2[j] == tabeq[k]) {
                found = true;
                break;
            }
        }
        if (!found) {
            tabeq[o] = tab2[j];
            o++;
        }
    }

    tabeq[o] = -1;

    for (int a = 0; a < o - 1; ++a) {
        for (int b = 0; b < o - a - 1; ++b) {
            if (tabeq[b] > tabeq[b + 1]) {
                int temp = tabeq[b];
                tabeq[b] = tabeq[b + 1];
                tabeq[b + 1] = temp;
            }
        }
    }
}
void Intersection(int tab[], int tabtwo[], int tabeq[]) {
    int n = 0, o = 0;
    while (tab[n] != -1) {
        int m = 0;
        while (tabtwo[m] != -1) {
            if (tab[n] == tabtwo[m]) {
                tabeq[o] = tab[n];
                o++;
                break;
            }
            m++;
        }
        n++;
    }
    tabeq[o] = -1;

    for (int a = 0; tabeq[a] != -1; ++a) {
        for (int b = 0; tabeq[b + 1] != -1; ++b) {
            if (tabeq[b] > tabeq[b + 1]) {
                int temp = tabeq[b];
                tabeq[b] = tabeq[b + 1];
                tabeq[b + 1] = temp;
            }
        }
    }
}
void Difference(int tab[], int tabout[], int tabeq[]) {
    int n = 0, o = 0;
    bool found;
    while (tab[n] != -1) {
        found = false;
        int m = 0;
        while (tabout[m] != -1) {
            if (tab[n] == tabout[m]) {
                found = true;
                break;
            }
            m++;
        }
        if (!found) {
            tabeq[o] = tab[n];
            o++;
        }
        n++;
    }
    tabeq[o] = -1;

    for (int i = 0; tabeq[i] != -1; ++i) {
        for (int j = i + 1; tabeq[j] != -1; ++j) {
            if (tabeq[i] > tabeq[j]) {
                int temp = tabeq[i];
                tabeq[i] = tabeq[j];
                tabeq[j] = temp;
            }
        }
    }
}


void Symmetric(int tab[], int tabout[], int tabeq[]) {
    int n = 0, m = 0, o = 0;
    int found;
    while (tab[n] != -1) {
        found = 0;
        m = 0;
        while (tabout[m] != -1) {
            if (tab[n] == tabout[m]) {
                found = 1;
                break;
            }
            m++;
        }
        if (!found) {
            tabeq[o] = tab[n];
            o++;
        }
        n++;
    }

    n = 0;
    while (tabout[n] != -1) {
        found = 0;
        m = 0;
        while (tab[m] != -1) {
            if (tabout[n] == tab[m]) {
                found = 1;
                break;
            }
            m++;
        }
        if (!found) {
            tabeq[o] = tabout[n];
            o++;
        }
        n++;
    }
    tabeq[o] = -1;
}
bool Subset(int tab1[], int tab2[]) {
    int sizeone = 0, sizetwo = 0;

    while (tab1[sizeone] != -1) {
        sizeone++;
    }

    while (tab2[sizetwo] != -1) {
        sizetwo++;
    }

    for (int i = 0; i < sizeone; ++i) {
        bool found = false;
        for (int j = 0; j < sizetwo; ++j) {
            if (tab1[i] == tab2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}
bool Equal(int tab1[], int tab2[]) {
    int n = 0, m  = 0;
    while (tab1[n] != -1) {
        n++;
    }
    int length1 = n;

    m = 0;
    while (tab2[m] != -1) {
        m++;
    }
    int length2 = m;
    if (length1 != length2) {
        return false;
    }

    for (int i = 0; i < length1; i++) {
        bool found = false;
        for (int j = 0; j < length2; j++) {
            if (tab1[i] == tab2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    return true;
}
bool Empty (int t[]) {
    if(t[0] == -1){
        return true;
    }else{
        return false;
    }
}
bool Nonempty (int t[]) {
    if(t[0] == -1){
        return false;
    }else{
        return true;
    }
}
bool Element(int wartosc, int t[]) {
    int size = 0;

    while(t[size] != -1) {
        size++;
    }

    for (int i = 0; i < size; i++) {
        if (t[i] == wartosc) {
            return true;
        }
    }

    return false;
}
double Arithmetic (int tab[]) {
    int size = 0;
    double htog = 0.0;

    while (tab[size] != -1) {
        size++;
    }

    if (size == 0) {
        return 0;
    }

    for (int i = 0; i < size; ++i) {
        if (tab[i] != 0) {
            htog += tab[i];
        } else {
            return 1;
        }
    }
    double haverage = htog / double(size);
    return haverage;
}
double Harmonic(int t[]) {
    int size = 0;
    double htog = 0.0;

    while (t[size] != -1) {
        size++;
    }

    if (size == 0) {
        return 1;
    }

    for (int i = 0; i < size; ++i) {
        if (t[i] != 0) {
            htog += 1.0 / t[i];
        } else {
            return 1;
        }
    }
    double haverage = size / htog;
    return haverage;
}

void MinMax(int tab[], int* minimum, int& maximum) {
    if (tab[0] == -1) {
        return;
    }
    *minimum = tab[0];
    maximum = tab[0];
    int o = 0;
    while (tab[o] != -1) {
        o++;
    }
    for (int i = 0; i < o; i++) {
        if (tab[i] < *minimum) {
            *minimum = tab[i];
        }
        if (tab[i] > maximum) {
            maximum = tab[i];
        }
    }
}
void Cardinality(int tab[], int *setpower) {
    *setpower = 0;
    for (int i = 0; tab[i] != -1; i++) {
        (*setpower)++;
    }
}
void Properties(int tab[], char prop[], double &average, double* harmonic, int &minimum, int* maximum, int &setpower) {
    int i = 0;
    while (prop[i] != '\0') {
        if (prop[i] == 'a') {
            average = Arithmetic(tab);
        } else if (prop[i] == 'h') {
            *harmonic = Harmonic(tab);
        } else if (prop[i] == 'm') {
            MinMax(tab, &minimum, *maximum);
        } else if (prop[i] == 'c') {
            Cardinality(tab, &setpower);
        }
        i++;
    }
}
