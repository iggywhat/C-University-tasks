// Igor Kamski
#include <iostream>
using namespace std;
int main() {
    float iloscrund, wypisanie = 0;
    char gracz1, gracz2;
    int k, l, m, n, o, u, p, r;
    float wygranaa = 0, remisa = 0, przegranaa = 0;
    float wygranab = 0, remisb = 0, przegranab = 0;
    float wygranac = 0, remisc = 0, przegranac = 0;
    float wygranad = 0, remisd = 0, przegranad = 0;
    float wygranae = 0, remise = 0, przegranae = 0;
    char a = 'a', b = 'b', c = 'c', d = 'd', e = 'e';
    cin>>iloscrund;
    while(wypisanie < iloscrund){
        cin >> gracz1 >> k >> l >> m >> n >> gracz2 >> o >> u >> p >> r;
        ++wypisanie;
        if ((k == l && k == m && k == n && m == k && m == l && m == n && l == k && l == m && l == n && n == k && n == l && n == m) && (o == u && o == p && o == r && p == r && p == o && p == u && r == o && r == u && r == p && u == r && u == p && u == o))
        {
            if (((k == l && k == m && k == n && m == k && m == l && m == n && l == k && l == m && l == n && n == k && n == l && n == m) && (o == u && o == p && o == r && p == r && p == o && p == u && r == o && r == u && r == p && u == r && u == p && u == o)) && (k + l + m + n) > (o + u + p + r)) {

                if (gracz1 == 'a') wygranaa++;
                else if (gracz1 == 'b') wygranab++;
                else if (gracz1 == 'c') wygranac++;
                else if (gracz1 == 'd') wygranad++;
                else if (gracz1 == 'e') wygranae++;

                if (gracz2 == 'a') przegranaa++;
                else if (gracz2 == 'b') przegranab++;
                else if (gracz2 == 'c') przegranac++;
                else if (gracz2 == 'd') przegranad++;
                else if (gracz2 == 'e') przegranae++;
            } else if (((k == l && k == m && k == n && m == k && m == l && m == n && l == k && l == m && l == n && n == k && n == l && n == m) && (o == u && o == p && o == r && p == r && p == o && p == u && r == o && r == u && r == p && u == r && u == p && u == o)) && (k + l + m + n) < (o + u + p + r)) {

                if (gracz1 == 'a') przegranaa++;
                else if (gracz1 == 'b') przegranab++;
                else if (gracz1 == 'c') przegranac++;
                else if (gracz1 == 'd') przegranad++;
                else if (gracz1 == 'e') przegranae++;

                if (gracz2 == 'a') wygranaa++;
                else if (gracz2 == 'b') wygranab++;
                else if (gracz2 == 'c') wygranac++;
                else if (gracz2 == 'd') wygranad++;
                else if (gracz2 == 'e') wygranae++;
            } else if (((k == l && k == m && k == n && m == k && m == l && m == n && l == k && l == m && l == n && n == k && n == l && n == m) && (o == u && o == p && o == r && p == r && p == o && p == u && r == o && r == u && r == p && u == r && u == p && u == o)) && (k + l + m + n) == (o + u + p + r)) {

                if (gracz1 == 'a') remisa++;
                else if (gracz1 == 'b') remisb++;
                else if (gracz1 == 'c') remisc++;
                else if (gracz1 == 'd') remisd++;
                else if (gracz1 == 'e') remise++;

                if (gracz2 == 'a') remisa++;
                else if (gracz2 == 'b') remisb++;
                else if (gracz2 == 'c') remisc++;
                else if (gracz2 == 'd') remisd++;
                else if (gracz2 == 'e') remise++;
            }
        } else if (k == l && k == m && k == n && m == k && m == l && m == n && l == k && l == m && l == n && n == k && n == l && n == m) {

            if (gracz1 == 'a') wygranaa++;
            else if (gracz1 == 'b') wygranab++;
            else if (gracz1 == 'c') wygranac++;
            else if (gracz1 == 'd') wygranad++;
            else if (gracz1 == 'e') wygranae++;

            if (gracz2 == 'a') przegranaa++;
            else if (gracz2 == 'b') przegranab++;
            else if (gracz2 == 'c') przegranac++;
            else if (gracz2 == 'd') przegranad++;
            else if (gracz2 == 'e') przegranae++;
        } else if (o == u && o == p && o == r && p == r && p == o && p == u && r == o && r == u && r == p && u == r && u == p && u == o) {

            if (gracz1 == 'a') przegranaa++;
            else if (gracz1 == 'b') przegranab++;
            else if (gracz1 == 'c') przegranac++;
            else if (gracz1 == 'd') przegranad++;
            else if (gracz1 == 'e') przegranae++;

            if (gracz2 == 'a') wygranaa++;
            else if (gracz2 == 'b') wygranab++;
            else if (gracz2 == 'c') wygranac++;
            else if (gracz2 == 'd') wygranad++;
            else if (gracz2 == 'e') wygranae++;
        } else if ((k != l && k != m && k != n && m != n && m != l && m != k && l != k && l != m && l !=n && n != k && n != m && n != l) && (o != u && o != p && o != r && p != r && p != o && p!= u && r != o && r != u && r != p && u !=p && u != o && u !=r)) {
            if (((k != l && k != m && k != n && m != n && m != l && m != k && l != k && l != m && l !=n && n != k && n != m && n != l) && (o != u && o != p && o != r && p != r && p != o && p!= u && r != o && r != u && r != p && u !=p && u != o && u !=r)) && (k + l + m + n) > (o + u + p + r)) {

                if (gracz1 == 'a') wygranaa++;
                else if (gracz1 == 'b') wygranab++;
                else if (gracz1 == 'c') wygranac++;
                else if (gracz1 == 'd') wygranad++;
                else if (gracz1 == 'e') wygranae++;

                if (gracz2 == 'a') przegranaa++;
                else if (gracz2 == 'b') przegranab++;
                else if (gracz2 == 'c') przegranac++;
                else if (gracz2 == 'd') przegranad++;
                else if (gracz2 == 'e') przegranae++;
            } else if (((k != l && k != m && k != n && m != n && m != l && m != k && l != k && l != m && l !=n && n != k && n != m && n != l) && (o != u && o != p && o != r && p != r && p != o && p!= u && r != o && r != u && r != p && u !=p && u != o && u !=r)) && (k + l + m + n) < (o + u + p + r)) {

                if (gracz1 == 'a') przegranaa++;
                else if (gracz1 == 'b') przegranab++;
                else if (gracz1 == 'c') przegranac++;
                else if (gracz1 == 'd') przegranad++;
                else if (gracz1 == 'e') przegranae++;

                if (gracz2 == 'a') wygranaa++;
                else if (gracz2 == 'b') wygranab++;
                else if (gracz2 == 'c') wygranac++;
                else if (gracz2 == 'd') wygranad++;
                else if (gracz2 == 'e') wygranae++;
            } else if (((k != l && k != m && k != n && m != n && m != l && m != k && l != k && l != m && l !=n && n != k && n != m && n != l) && (o != u && o != p && o != r && p != r && p != o && p!= u && r != o && r != u && r != p && u !=p && u != o && u !=r)) && (k + l + m + n) == (o + u + p + r)) {

                if (gracz1 == 'a') remisa++;
                else if (gracz1 == 'b') remisb++;
                else if (gracz1 == 'c') remisc++;
                else if (gracz1 == 'd') remisd++;
                else if (gracz1 == 'e') remise++;

                if (gracz2 == 'a') remisa++;
                else if (gracz2 == 'b') remisb++;
                else if (gracz2 == 'c') remisc++;
                else if (gracz2 == 'd') remisd++;
                else if (gracz2 == 'e') remise++;
            }
        } else if (k != l && k != m && k != n && m != n && m != l && m != k && l != k && l != m && l !=n && n != k && n != m && n != l) {

            if (gracz1 == 'a') wygranaa++;
            else if (gracz1 == 'b') wygranab++;
            else if (gracz1 == 'c') wygranac++;
            else if (gracz1 == 'd') wygranad++;
            else if (gracz1 == 'e') wygranae++;

            if (gracz2 == 'a') przegranaa++;
            else if (gracz2 == 'b') przegranab++;
            else if (gracz2 == 'c') przegranac++;
            else if (gracz2 == 'd') przegranad++;
            else if (gracz2 == 'e') przegranae++;
        } else if (o != u && o != p && o != r && p != r && p != o && p!= u && r != o && r != u && r != p && u !=p && u != o && u !=r) {

            if (gracz1 == 'a') przegranaa++;
            else if (gracz1 == 'b') przegranab++;
            else if (gracz1 == 'c') przegranac++;
            else if (gracz1 == 'd') przegranad++;
            else if (gracz1 == 'e') przegranae++;

            if (gracz2 == 'a') wygranaa++;
            else if (gracz2 == 'b') wygranab++;
            else if (gracz2 == 'c') wygranac++;
            else if (gracz2 == 'd') wygranad++;
            else if (gracz2 == 'e') wygranae++;
        } else if (((k == l && m == n) || (k == m && l == n) || (k == n && l == m)) &&
                   ((o == u && p == r) || (o == p && u == r) || (o == r && p == u))) {

            if (((k>o && k>u && k>r && k>p) && (l>o && l>u && l>r && l>p)) || ((m>o && m>r && m>u && m>p) && (n>o && n>u && n>r && n>p)) ||
                ((k>o && k>u && k>r && k>p) && (m>o && m>u && m>r && m>p)) || ((l>o && l>u && l>r && l>p) && (n>o && n>u && n>r && n>p))||
                ((k>o && k>u && k>r && k>p) && (n>o && n>u && n>r && m>p)) || ((l>o && l>u && l>r && l>p) && (m>o && m>u && m>r && m>p)) ||
                ((l>o && l>u && l>r && l>p) && (k>o && k>u && k>r && k>p)) || ((m>o && m>r && m>u && m>p) && (l>o && l>u && l>r && l>p)) ||
                ((m>o && m>r && m>u && m>p) && (k>o && k>u && k>r && k>p)) || ((n>o && n>u && n>r && n>p) && (l>o && l>u && l>r && l>p)) ||
                ((n>o && n>u && n>r && n>p) && (k>o && k>u && k>r && k>p)) || ((n>o && n>u && n>r && n>p) && (m>o && m>r && m>u && m>p))){

                if (gracz1 == 'a') wygranaa++;
                else if (gracz1 == 'b') wygranab++;
                else if (gracz1 == 'c') wygranac++;
                else if (gracz1 == 'd') wygranad++;
                else if (gracz1 == 'e') wygranae++;

                if (gracz2 == 'a') przegranaa++;
                else if (gracz2 == 'b') przegranab++;
                else if (gracz2 == 'c') przegranac++;
                else if (gracz2 == 'd') przegranad++;
                else if (gracz2 == 'e') przegranae++;
            } else if (((o>k && o>l && o>m && o>n) && (u>k && u>l && u>m && u>n)) || ((p>k && p>l && p>m && p>n) && (r>k && r>l && r>m && r>n)) ||
                       ((o>k && o>l && o>m && o>n) && (p>k && p>l && p>m && p>n)) || ((p>k && p>l && p>m && p>n) && (o>k && o>l && o>m && o>n)) ||
                       ((o>k && o>l && o>m && o>n) && (r>k && r>l && r>m && r>n)) || ((p>k && p>l && p>m && p>n) && (u>k && u>l && u>m && u>n)) ||
                       ((u>k && u>l && u>m && u>n) && (r>k && r>l && r>m && r>n)) || ((u>k && u>l && u>m && u>n) && (p>k && p>l && p>m && p>n)) ||
                       ((u>k && u>l && u>m && u>n) && (o>k && o>l && o>m && o>n)) || ((r>k && r>l && r>m && r>n) && (u>k && u>l && u>m && u>n)) ||
                       ((r>k && r>l && r>m && r>n) && (p>k && p>l && p>m && p>n)) || ((r>k && r>l && r>m && r>n) && (o>k && o>l && o>m && o>n)))
            {

                if (gracz1 == 'a') przegranaa++;
                else if (gracz1 == 'b') przegranab++;
                else if (gracz1 == 'c') przegranac++;
                else if (gracz1 == 'd') przegranad++;
                else if (gracz1 == 'e') przegranae++;

                if (gracz2 == 'a') wygranaa++;
                else if (gracz2 == 'b') wygranab++;
                else if (gracz2 == 'c') wygranac++;
                else if (gracz2 == 'd') wygranad++;
                else if (gracz2 == 'e') wygranae++;
            } else if ((k + l + m + n) == (o + u + p + r)) {

                if (gracz1 == 'a') remisa++;
                else if (gracz1 == 'b') remisb++;
                else if (gracz1 == 'c') remisc++;
                else if (gracz1 == 'd') remisd++;
                else if (gracz1 == 'e') remise++;

                if (gracz2 == 'a') remisa++;
                else if (gracz2 == 'b') remisb++;
                else if (gracz2 == 'c') remisc++;
                else if (gracz2 == 'd') remisd++;
                else if (gracz2 == 'e') remise++;
            }
        } else if ((k == l && m == n) || (k == m && l == n) || (k == n && l == m)) {

            if (gracz1 == 'a') wygranaa++;
            else if (gracz1 == 'b') wygranab++;
            else if (gracz1 == 'c') wygranac++;
            else if (gracz1 == 'd') wygranad++;
            else if (gracz1 == 'e') wygranae++;

            if (gracz2 == 'a') przegranaa++;
            else if (gracz2 == 'b') przegranab++;
            else if (gracz2 == 'c') przegranac++;
            else if (gracz2 == 'd') przegranad++;
            else if (gracz2 == 'e') przegranae++;
        } else if ((o == u && p == r) || (o == p && u == r) || (o == r && p == u)) {

            if (gracz1 == 'a') przegranaa++;
            else if (gracz1 == 'b') przegranab++;
            else if (gracz1 == 'c') przegranac++;
            else if (gracz1 == 'd') przegranad++;
            else if (gracz1 == 'e') przegranae++;

            if (gracz2 == 'a') wygranaa++;
            else if (gracz2 == 'b') wygranab++;
            else if (gracz2 == 'c') wygranac++;
            else if (gracz2 == 'd') wygranad++;
            else if (gracz2 == 'e') wygranae++;
        } else if (((k == l && l == m && k != n) || (l == m && m == n && m != k) || (k == m && m == n && m != l) ||
                    (k == l && l == n && l != m)) &&
                   ((o == u && u == p && u != r) || (u == p && p == r && p != o) || (o == p && p == r && p != u) ||
                    (o == u && u == r && u != p))) {

            if (((k == l && l == m && k != n) && (o == u && u == p && u != r)) && ((k + l + m) > (o + u + p)) ||
                ((k == l && l == m && k != n) && (u == p && p == r && p != o)) && ((k + l + m) > (r + u + p)) ||
                ((k == l && l == m && k != n) && (o == p && p == r && p != u)) && ((k + l + m) > (r + o + p)) ||
                ((k == l && l == m && k != n) && (o == u && u == r && u != p)) && ((k + l + m) > (r + o + u)) ||

                ((l == m && m == n && m != k) && (o == u && u == p && u != r)) && ((l + n + m) > (o + u + p)) ||
                ((l == m && m == n && m != k) && (u == p && p == r && p != o)) && ((l + n + m) > (r + u + p)) ||
                ((l == m && m == n && m != k) && (o == p && p == r && p != u)) && ((l + n + m) > (r + o + p)) ||
                ((l == m && m == n && m != k) && (o == u && u == r && u != p)) && ((l + n + m) > (r + o + u)) ||

                ((k == m && m == n && m != l) && (o == u && u == p && u != r)) && ((k + n + m) > (o + u + p)) ||
                ((k == m && m == n && m != l) && (u == p && p == r && p != o)) && ((k + n + m) > (r + u + p)) ||
                ((k == m && m == n && m != l) && (o == p && p == r && p != u)) && ((k + n + m) > (r + o + p)) ||
                ((k == m && m == n && m != l) && (o == u && u == r && u != p)) && ((k + n + m) > (r + o + u)) ||

                ((k == l && l == n && l != m) && (o == u && u == p && u != r)) && ((k + l + n) > (o + u + p)) ||
                ((k == l && l == n && l != m) && (u == p && p == r && p != o)) && ((k + l + n) > (r + u + p)) ||
                ((k == l && l == n && l != m) && (o == p && p == r && p != u)) && ((k + l + n) > (r + o + p)) ||
                ((k == l && l == n && l != m) && (o == u && u == r && u != p)) && ((k + l + n) > (r + o + u))) {

                if (gracz1 == 'a') wygranaa++;
                else if (gracz1 == 'b') wygranab++;
                else if (gracz1 == 'c') wygranac++;
                else if (gracz1 == 'd') wygranad++;
                else if (gracz1 == 'e') wygranae++;

                if (gracz2 == 'a') przegranaa++;
                else if (gracz2 == 'b') przegranab++;
                else if (gracz2 == 'c') przegranac++;
                else if (gracz2 == 'd') przegranad++;
                else if (gracz2 == 'e') przegranae++;
            } else if(((k == l && l == m && k != n) && (o == u && u == p && u != r)) && ((k + l + m) < (o + u + p)) ||
                      ((k == l && l == m && k != n) && (u == p && p == r && p != o)) && ((k + l + m) < (r + u + p)) ||
                      ((k == l && l == m && k != n) && (o == p && p == r && p != u)) && ((k + l + m) < (r + o + p)) ||
                      ((k == l && l == m && k != n) && (o == u && u == r && u != p)) && ((k + l + m) < (r + o + u)) ||

                      ((l == m && m == n && m != k) && (o == u && u == p && u != r)) && ((l + n + m) < (o + u + p)) ||
                      ((l == m && m == n && m != k) && (u == p && p == r && p != o)) && ((l + n + m) < (r + u + p)) ||
                      ((l == m && m == n && m != k) && (o == p && p == r && p != u)) && ((l + n + m) < (r + o + p)) ||
                      ((l == m && m == n && m != k) && (o == u && u == r && u != p)) && ((l + n + m) < (r + o + u)) ||

                      ((k == m && m == n && m != l) && (o == u && u == p && u != r)) && ((k + n + m) < (o + u + p)) ||
                      ((k == m && m == n && m != l) && (u == p && p == r && p != o)) && ((k + n + m) < (r + u + p)) ||
                      ((k == m && m == n && m != l) && (o == p && p == r && p != u)) && ((k + n + m) < (r + o + p)) ||
                      ((k == m && m == n && m != l) && (o == u && u == r && u != p)) && ((k + n + m) < (r + o + u)) ||

                      ((k == l && l == n && l != m) && (o == u && u == p && u != r)) && ((k + l + n) < (o + u + p)) ||
                      ((k == l && l == n && l != m) && (u == p && p == r && p != o)) && ((k + l + n) < (r + u + p)) ||
                      ((k == l && l == n && l != m) && (o == p && p == r && p != u)) && ((k + l + n) < (r + o + p)) ||
                      ((k == l && l == n && l != m) && (o == u && u == r && u != p)) && ((k + l + n) < (r + o + u)))
            {

                if (gracz1 == 'a') przegranaa++;
                else if (gracz1 == 'b') przegranab++;
                else if (gracz1 == 'c') przegranac++;
                else if (gracz1 == 'd') przegranad++;
                else if (gracz1 == 'e') przegranae++;

                if (gracz2 == 'a') wygranaa++;
                else if (gracz2 == 'b') wygranab++;
                else if (gracz2 == 'c') wygranac++;
                else if (gracz2 == 'd') wygranad++;
                else if (gracz2 == 'e') wygranae++;
            }
            else if(((k == l && l == m && k != n) && (o == u && u == p && u != r)) && ((k + l + m) == (o + u + p)) ||
                    ((k == l && l == m && k != n) && (u == p && p == r && p != o)) && ((k + l + m) == (r + u + p)) ||
                    ((k == l && l == m && k != n) && (o == p && p == r && p != u)) && ((k + l + m) == (r + o + p)) ||
                    ((k == l && l == m && k != n) && (o == u && u == r && u != p)) && ((k + l + m) == (r + o + u)) ||

                    ((l == m && m == n && m != k) && (o == u && u == p && u != r)) && ((l + n + m) == (o + u + p)) ||
                    ((l == m && m == n && m != k) && (u == p && p == r && p != o)) && ((l + n + m) == (r + u + p)) ||
                    ((l == m && m == n && m != k) && (o == p && p == r && p != u)) && ((l + n + m) == (r + o + p)) ||
                    ((l == m && m == n && m != k) && (o == u && u == r && u != p)) && ((l + n + m) == (r + o + u)) ||

                    ((k == m && m == n && m != l) && (o == u && u == p && u != r)) && ((k + n + m) == (o + u + p)) ||
                    ((k == m && m == n && m != l) && (u == p && p == r && p != o)) && ((k + n + m) == (r + u + p)) ||
                    ((k == m && m == n && m != l) && (o == p && p == r && p != u)) && ((k + n + m) == (r + o + p)) ||
                    ((k == m && m == n && m != l) && (o == u && u == r && u != p)) && ((k + n + m) == (r + o + u)) ||

                    ((k == l && l == n && l != m) && (o == u && u == p && u != r)) && ((k + l + n) == (o + u + p)) ||
                    ((k == l && l == n && l != m) && (u == p && p == r && p != o)) && ((k + l + n) == (r + u + p)) ||
                    ((k == l && l == n && l != m) && (o == p && p == r && p != u)) && ((k + l + n) == (r + o + p)) ||
                    ((k == l && l == n && l != m) && (o == u && u == r && u != p)) && ((k + l + n) == (r + o + u))) {

                if (((k == l && l == m && k != n) && (o == u && u == p && u != r)) && ((k + l + m) == (o + u + p)) &&
                    (n > r) ||
                    ((k == l && l == m && k != n) && (u == p && p == r && p != o)) && ((k + l + m) == (r + u + p)) &&
                    (n > o) ||
                    ((k == l && l == m && k != n) && (o == p && p == r && p != u)) && ((k + l + m) == (r + o + p)) &&
                    (n > u) ||
                    ((k == l && l == m && k != n) && (o == u && u == r && u != p)) && ((k + l + m) == (r + o + u)) &&
                    (n > p) ||

                    ((l == m && m == n && m != k) && (o == u && u == p && u != r)) && ((l + n + m) == (o + u + p)) &&
                    (k > r) ||
                    ((l == m && m == n && m != k) && (u == p && p == r && p != o)) && ((l + n + m) == (r + u + p)) &&
                    (k > o) ||
                    ((l == m && m == n && m != k) && (o == p && p == r && p != u)) && ((l + n + m) == (r + o + p)) &&
                    (k > u) ||
                    ((l == m && m == n && m != k) && (o == u && u == r && u != p)) && ((l + n + m) == (r + o + u)) &&
                    (k > p) ||

                    ((k == m && m == n && m != l) && (o == u && u == p && u != r)) && ((k + n + m) == (o + u + p)) &&
                    (l > r) ||
                    ((k == m && m == n && m != l) && (u == p && p == r && p != o)) && ((k + n + m) == (r + u + p)) &&
                    (l > o) ||
                    ((k == m && m == n && m != l) && (o == p && p == r && p != u)) && ((k + n + m) == (r + o + p)) &&
                    (l > u) ||
                    ((k == m && m == n && m != l) && (o == u && u == r && u != p)) && ((k + n + m) == (r + o + u)) &&
                    (l > p) ||

                    ((k == l && l == n && l != m) && (o == u && u == p && u != r)) && ((k + l + n) == (o + u + p)) &&
                    (m > r) ||
                    ((k == l && l == n && l != m) && (u == p && p == r && p != o)) && ((k + l + n) == (r + u + p)) &&
                    (m > o) ||
                    ((k == l && l == n && l != m) && (o == p && p == r && p != u)) && ((k + l + n) == (r + o + p)) &&
                    (m > u) ||
                    ((k == l && l == n && l != m) && (o == u && u == r && u != p)) && ((k + l + n) == (r + o + u)) &&
                    (m > p)) {

                    if (gracz1 == 'a') wygranaa++;
                    else if (gracz1 == 'b') wygranab++;
                    else if (gracz1 == 'c') wygranac++;
                    else if (gracz1 == 'd') wygranad++;
                    else if (gracz1 == 'e') wygranae++;

                    if (gracz2 == 'a') przegranaa++;
                    else if (gracz2 == 'b') przegranab++;
                    else if (gracz2 == 'c') przegranac++;
                    else if (gracz2 == 'd') przegranad++;
                    else if (gracz2 == 'e') przegranae++;
                } else if ((((k == l && l == m && k != n) && (o == u && u == p && u != r)) &&
                            ((k + l + m) == (o + u + p)) && (n < r) ||
                            ((k == l && l == m && k != n) && (u == p && p == r && p != o)) &&
                            ((k + l + m) == (r + u + p)) && (n < o) ||
                            ((k == l && l == m && k != n) && (o == p && p == r && p != u)) &&
                            ((k + l + m) == (r + o + p)) && (n < u) ||
                            ((k == l && l == m && k != n) && (o == u && u == r && u != p)) &&
                            ((k + l + m) == (r + o + u)) && (n < p) ||

                            ((l == m && m == n && m != k) && (o == u && u == p && u != r)) &&
                            ((l + n + m) == (o + u + p)) && (k < r) ||
                            ((l == m && m == n && m != k) && (u == p && p == r && p != o)) &&
                            ((l + n + m) == (r + u + p)) && (k < o) ||
                            ((l == m && m == n && m != k) && (o == p && p == r && p != u)) &&
                            ((l + n + m) == (r + o + p)) && (k < u) ||
                            ((l == m && m == n && m != k) && (o == u && u == r && u != p)) &&
                            ((l + n + m) == (r + o + u)) && (k < p) ||

                            ((k == m && m == n && m != l) && (o == u && u == p && u != r)) &&
                            ((k + n + m) == (o + u + p)) && (l < r) ||
                            ((k == m && m == n && m != l) && (u == p && p == r && p != o)) &&
                            ((k + n + m) == (r + u + p)) && (l < o) ||
                            ((k == m && m == n && m != l) && (o == p && p == r && p != u)) &&
                            ((k + n + m) == (r + o + p)) && (l < u) ||
                            ((k == m && m == n && m != l) && (o == u && u == r && u != p)) &&
                            ((k + n + m) == (r + o + u)) && (l < p) ||

                            ((k == l && l == n && l != m) && (o == u && u == p && u != r)) &&
                            ((k + l + n) == (o + u + p)) && (m < r) ||
                            ((k == l && l == n && l != m) && (u == p && p == r && p != o)) &&
                            ((k + l + n) == (r + u + p)) && (m < o) ||
                            ((k == l && l == n && l != m) && (o == p && p == r && p != u)) &&
                            ((k + l + n) == (r + o + p)) && (m < u) ||
                            ((k == l && l == n && l != m) && (o == u && u == r && u != p)) &&
                            ((k + l + n) == (r + o + u)) && (m < p))) {

                    if (gracz1 == 'a') przegranaa++;
                    else if (gracz1 == 'b') przegranab++;
                    else if (gracz1 == 'c') przegranac++;
                    else if (gracz1 == 'd') przegranad++;
                    else if (gracz1 == 'e') przegranae++;

                    if (gracz2 == 'a') wygranaa++;
                    else if (gracz2 == 'b') wygranab++;
                    else if (gracz2 == 'c') wygranac++;
                    else if (gracz2 == 'd') wygranad++;
                    else if (gracz2 == 'e') wygranae++;
                }else if((((k == l && l == m && k != n) && (o == u && u == p && u != r)) &&
                          ((k + l + m) == (o + u + p)) && (n == r) ||
                          ((k == l && l == m && k != n) && (u == p && p == r && p != o)) &&
                          ((k + l + m) == (r + u + p)) && (n == o) ||
                          ((k == l && l == m && k != n) && (o == p && p == r && p != u)) &&
                          ((k + l + m) == (r + o + p)) && (n == u) ||
                          ((k == l && l == m && k != n) && (o == u && u == r && u != p)) &&
                          ((k + l + m) == (r + o + u)) && (n == p) ||

                          ((l == m && m == n && m != k) && (o == u && u == p && u != r)) &&
                          ((l + n + m) == (o + u + p)) && (k == r) ||
                          ((l == m && m == n && m != k) && (u == p && p == r && p != o)) &&
                          ((l + n + m) == (r + u + p)) && (k == o) ||
                          ((l == m && m == n && m != k) && (o == p && p == r && p != u)) &&
                          ((l + n + m) == (r + o + p)) && (k == u) ||
                          ((l == m && m == n && m != k) && (o == u && u == r && u != p)) &&
                          ((l + n + m) == (r + o + u)) && (k == p) ||

                          ((k == m && m == n && m != l) && (o == u && u == p && u != r)) &&
                          ((k + n + m) == (o + u + p)) && (l == r) ||
                          ((k == m && m == n && m != l) && (u == p && p == r && p != o)) &&
                          ((k + n + m) == (r + u + p)) && (l == o) ||
                          ((k == m && m == n && m != l) && (o == p && p == r && p != u)) &&
                          ((k + n + m) == (r + o + p)) && (l == u) ||
                          ((k == m && m == n && m != l) && (o == u && u == r && u != p)) &&
                          ((k + n + m) == (r + o + u)) && (l == p) ||

                          ((k == l && l == n && l != m) && (o == u && u == p && u != r)) &&
                          ((k + l + n) == (o + u + p)) && (m == r) ||
                          ((k == l && l == n && l != m) && (u == p && p == r && p != o)) &&
                          ((k + l + n) == (r + u + p)) && (m == o) ||
                          ((k == l && l == n && l != m) && (o == p && p == r && p != u)) &&
                          ((k + l + n) == (r + o + p)) && (m == u) ||
                          ((k == l && l == n && l != m) && (o == u && u == r && u != p)) &&
                          ((k + l + n) == (r + o + u)) && (m == p))){

                    if (gracz1 == 'a') remisa++;
                    else if (gracz1 == 'b') remisb++;
                    else if (gracz1 == 'c') remisc++;
                    else if (gracz1 == 'd') remisd++;
                    else if (gracz1 == 'e') remise++;

                    if (gracz2 == 'a') remisa++;
                    else if (gracz2 == 'b') remisb++;
                    else if (gracz2 == 'c') remisc++;
                    else if (gracz2 == 'd') remisd++;
                    else if (gracz2 == 'e') remise++;
                }
            }
        } else if ((k == l && l == m && k != n) || (l == m && m == n && m != k) ||
                   (k == m && m == n && m != l) || (k == l && l == n && l != m)) {

            if (gracz1 == 'a') wygranaa++;
            else if (gracz1 == 'b') wygranab++;
            else if (gracz1 == 'c') wygranac++;
            else if (gracz1 == 'd') wygranad++;
            else if (gracz1 == 'e') wygranae++;

            if (gracz2 == 'a') przegranaa++;
            else if (gracz2 == 'b') przegranab++;
            else if (gracz2 == 'c') przegranac++;
            else if (gracz2 == 'd') przegranad++;
            else if (gracz2 == 'e') przegranae++;
        } else if ((o == u && u == p && u != r) || (u == p && p == r && p != o) ||
                   (o == p && p == r && p != u) || (o == u && u == r && u != p)) {

            if (gracz1 == 'a') przegranaa++;
            else if (gracz1 == 'b') przegranab++;
            else if (gracz1 == 'c') przegranac++;
            else if (gracz1 == 'd') przegranad++;
            else if (gracz1 == 'e') przegranae++;

            if (gracz2 == 'a') wygranaa++;
            else if (gracz2 == 'b') wygranab++;
            else if (gracz2 == 'c') wygranac++;
            else if (gracz2 == 'd') wygranad++;
            else if (gracz2 == 'e') wygranae++;
        } else if (((k == l && k != m && k != n) || (k == m && k != l && k != n) || (l == n && l != m && l != k) ||
                    (m == n && k != m && m != l) || (k == n && k != m && k != l) || (l == m && l != k && l != n)) &&
                   ((o == u && o != p && o != r) || (o == p && o != r && o != u) || (u == r && u != o && u != p) ||
                    (p == r && p != o && p != u) || (o == r && o != p && o != u) || (u == p && u != r && u != o))) {

            if (((k == l && k != m && k != n) && (o == u && o != p && o != r)) && ((k + l) > (o + u)) ||
                ((k == l && k != m && k != n) && (o == p && o != r && o != u)) && ((k + l) > (o + p)) ||
                ((k == l && k != m && k != n) && (u == r && u != o && u != p)) && ((k + l) > (u + r)) ||
                ((k == l && k != m && k != n) && (p == r && p != o && p != u)) && ((k + l) > (p + r)) ||
                ((k == l && k != m && k != n) && (o == r && o != p && o != u)) && ((k + l) > (o + r)) ||
                ((k == l && k != m && k != n) && (u == p && u != r && u != o)) && ((k + l) > (u + p)) ||

                ((k == m && k != l && k != n) && (o == u && o != p && o != r)) && ((k + m) > (o + u)) ||
                ((k == m && k != l && k != n) && (o == p && o != r && o != u)) && ((k + m) > (o + p)) ||
                ((k == m && k != l && k != n) && (u == r && u != o && u != p)) && ((k + m) > (u + r)) ||
                ((k == m && k != l && k != n) && (p == r && p != o && p != u)) && ((k + m) > (p + r)) ||
                ((k == m && k != l && k != n) && (o == r && o != p && o != u)) && ((k + m) > (o + r)) ||
                ((k == m && k != l && k != n) && (u == p && u != r && u != o)) && ((k + m) > (u + p)) ||

                ((l == n && l != m && l != k) && (o == u && o != p && o != r)) && ((n + l) > (o + u)) ||
                ((l == n && l != m && l != k) && (o == p && o != r && o != u)) && ((n + l) > (o + p)) ||
                ((l == n && l != m && l != k) && (u == r && u != o && u != p)) && ((n + l) > (u + r)) ||
                ((l == n && l != m && l != k) && (p == r && p != o && p != u)) && ((n + l) > (p + r)) ||
                ((l == n && l != m && l != k) && (o == r && o != p && o != u)) && ((n + l) > (o + r)) ||
                ((l == n && l != m && l != k) && (u == p && u != r && u != o)) && ((n + l) > (p + u)) ||

                ((m == n && k != m && m != l) && (o == u && o != p && o != r)) && ((n + m) > (o + u)) ||
                ((m == n && k != m && m != l) && (o == p && o != r && o != u)) && ((n + m) > (o + p)) ||
                ((m == n && k != m && m != l) && (u == r && u != o && u != p)) && ((n + m) > (u + r)) ||
                ((m == n && k != m && m != l) && (p == r && p != o && p != u)) && ((n + m) > (p + r)) ||
                ((m == n && k != m && m != l) && (o == r && o != p && o != u)) && ((n + m) > (o + r)) ||
                ((m == n && k != m && m != l) && (u == p && u != r && u != o)) && ((n + m) > (p + u)) ||

                ((k == n && k != m && k != l) && (o == u && o != p && o != r)) && ((n + k) > (o + u)) ||
                ((k == n && k != m && k != l) && (o == p && o != r && o != u)) && ((n + k) > (o + p)) ||
                ((k == n && k != m && k != l) && (u == r && u != o && u != p)) && ((n + k) > (u + r)) ||
                ((k == n && k != m && k != l) && (p == r && p != o && p != u)) && ((n + k) > (p + r)) ||
                ((k == n && k != m && k != l) && (o == r && o != p && o != u)) && ((n + k) > (o + r)) ||
                ((k == n && k != m && k != l) && (u == p && u != r && u != o)) && ((n + k) > (p + u)) ||

                ((l == m && l != k && l != n) && (o == u && o != p && o != r)) && ((m + l) > (o + u)) ||
                ((l == m && l != k && l != n) && (o == p && o != r && o != u)) && ((m + l) > (o + p)) ||
                ((l == m && l != k && l != n) && (u == r && u != o && u != p)) && ((m + l) > (u + r)) ||
                ((l == m && l != k && l != n) && (p == r && p != o && p != u)) && ((m + l) > (p + r)) ||
                ((l == m && l != k && l != n) && (o == r && o != p && o != u)) && ((m + l) > (o + r)) ||
                ((l == m && l != k && l != n) && (u == p && u != r && u != o)) && ((m + l) > (p + u)))
            {

                if (gracz1 == 'a') wygranaa++;
                else if (gracz1 == 'b') wygranab++;
                else if (gracz1 == 'c') wygranac++;
                else if (gracz1 == 'd') wygranad++;
                else if (gracz1 == 'e') wygranae++;

                if (gracz2 == 'a') przegranaa++;
                else if (gracz2 == 'b') przegranab++;
                else if (gracz2 == 'c') przegranac++;
                else if (gracz2 == 'd') przegranad++;
                else if (gracz2 == 'e') przegranae++;

            } else if (((k == l && k != m && k != n) && (o == u && o != p && o != r)) && ((k + l) < (o + u)) ||
                       ((k == l && k != m && k != n) && (o == p && o != r && o != u)) && ((k + l) < (o + p)) ||
                       ((k == l && k != m && k != n) && (u == r && u != o && u != p)) && ((k + l) < (u + r)) ||
                       ((k == l && k != m && k != n) && (p == r && p != o && p != u)) && ((k + l) < (p + r)) ||
                       ((k == l && k != m && k != n) && (o == r && o != p && o != u)) && ((k + l) < (o + r)) ||
                       ((k == l && k != m && k != n) && (u == p && u != r && u != o)) && ((k + l) < (u + p)) ||

                       ((k == m && k != l && k != n) && (o == u && o != p && o != r)) && ((k + m) < (o + u)) ||
                       ((k == m && k != l && k != n) && (o == p && o != r && o != u)) && ((k + m) < (o + p)) ||
                       ((k == m && k != l && k != n) && (u == r && u != o && u != p)) && ((k + m) < (u + r)) ||
                       ((k == m && k != l && k != n) && (p == r && p != o && p != u)) && ((k + m) < (p + r)) ||
                       ((k == m && k != l && k != n) && (o == r && o != p && o != u)) && ((k + m) < (o + r)) ||
                       ((k == m && k != l && k != n) && (u == p && u != r && u != o)) && ((k + m) < (u + p)) ||

                       ((l == n && l != m && l != k) && (o == u && o != p && o != r)) && ((n + l) < (o + u)) ||
                       ((l == n && l != m && l != k) && (o == p && o != r && o != u)) && ((n + l) < (o + p)) ||
                       ((l == n && l != m && l != k) && (u == r && u != o && u != p)) && ((n + l) < (u + r)) ||
                       ((l == n && l != m && l != k) && (p == r && p != o && p != u)) && ((n + l) < (p + r)) ||
                       ((l == n && l != m && l != k) && (o == r && o != p && o != u)) && ((n + l) < (o + r)) ||
                       ((l == n && l != m && l != k) && (u == p && u != r && u != o)) && ((n + l) < (p + u)) ||

                       ((m == n && k != m && m != l) && (o == u && o != p && o != r)) && ((n + m) < (o + u)) ||
                       ((m == n && k != m && m != l) && (o == p && o != r && o != u)) && ((n + m) < (o + p)) ||
                       ((m == n && k != m && m != l) && (u == r && u != o && u != p)) && ((n + m) < (u + r)) ||
                       ((m == n && k != m && m != l) && (p == r && p != o && p != u)) && ((n + m) < (p + r)) ||
                       ((m == n && k != m && m != l) && (o == r && o != p && o != u)) && ((n + m) < (o + r)) ||
                       ((m == n && k != m && m != l) && (u == p && u != r && u != o)) && ((n + m) < (p + u)) ||

                       ((k == n && k != m && k != l) && (o == u && o != p && o != r)) && ((n + k) < (o + u)) ||
                       ((k == n && k != m && k != l) && (o == p && o != r && o != u)) && ((n + k) < (o + p)) ||
                       ((k == n && k != m && k != l) && (u == r && u != o && u != p)) && ((n + k) < (u + r)) ||
                       ((k == n && k != m && k != l) && (p == r && p != o && p != u)) && ((n + k) < (p + r)) ||
                       ((k == n && k != m && k != l) && (o == r && o != p && o != u)) && ((n + k) < (o + r)) ||
                       ((k == n && k != m && k != l) && (u == p && u != r && u != o)) && ((n + k) < (p + u)) ||

                       ((l == m && l != k && l != n) && (o == u && o != p && o != r)) && ((m + l) < (o + u)) ||
                       ((l == m && l != k && l != n) && (o == p && o != r && o != u)) && ((m + l) < (o + p)) ||
                       ((l == m && l != k && l != n) && (u == r && u != o && u != p)) && ((m + l) < (u + r)) ||
                       ((l == m && l != k && l != n) && (p == r && p != o && p != u)) && ((m + l) < (p + r)) ||
                       ((l == m && l != k && l != n) && (o == r && o != p && o != u)) && ((m + l) < (o + r)) ||
                       ((l == m && l != k && l != n) && (u == p && u != r && u != o)) && ((m + l) < (p + u)))
            {

                if (gracz1 == 'a') przegranaa++;
                else if (gracz1 == 'b') przegranab++;
                else if (gracz1 == 'c') przegranac++;
                else if (gracz1 == 'd') przegranad++;
                else if (gracz1 == 'e') przegranae++;

                if (gracz2 == 'a') wygranaa++;
                else if (gracz2 == 'b') wygranab++;
                else if (gracz2 == 'c') wygranac++;
                else if (gracz2 == 'd') wygranad++;
                else if (gracz2 == 'e') wygranae++;
            }else if(((k == l && k != m && k != n) && (o == u && o != p && o != r)) && ((k + l) == (o + u)) && (m + n) > (p + r) ||
                     ((k == l && k != m && k != n) && (o == p && o != r && o != u)) && ((k + l) == (o + p)) && (m + n) > (u + r) ||
                     ((k == l && k != m && k != n) && (u == r && u != o && u != p)) && ((k + l) == (u + r)) && (m + n) > (o + p) ||
                     ((k == l && k != m && k != n) && (p == r && p != o && p != u)) && ((k + l) == (p + r)) && (m + n) > (o + u) ||
                     ((k == l && k != m && k != n) && (o == r && o != p && o != u)) && ((k + l) == (o + r)) && (m + n) > (p + u) ||
                     ((k == l && k != m && k != n) && (u == p && u != r && u != o)) && ((k + l) == (u + p)) && (m + n) > (r + o) ||

                     ((k == m && k != l && k != n) && (o == u && o != p && o != r)) && ((k + m) == (o + u)) && (l + n) > (p + r) ||
                     ((k == m && k != l && k != n) && (o == p && o != r && o != u)) && ((k + m) == (o + p)) && (l + n) > (u + r) ||
                     ((k == m && k != l && k != n) && (u == r && u != o && u != p)) && ((k + m) == (u + r)) && (l + n) > (o + p) ||
                     ((k == m && k != l && k != n) && (p == r && p != o && p != u)) && ((k + m) == (p + r)) && (l + n) > (o + u) ||
                     ((k == m && k != l && k != n) && (o == r && o != p && o != u)) && ((k + m) == (o + r)) && (l + n) > (p + u) ||
                     ((k == m && k != l && k != n) && (u == p && u != r && u != o)) && ((k + m) == (u + p)) && (l + n) > (r + o) ||

                     ((l == n && l != m && l != k) && (o == u && o != p && o != r)) && ((n + l) == (o + u)) && (m + k) > (p + r) ||
                     ((l == n && l != m && l != k) && (o == p && o != r && o != u)) && ((n + l) == (o + p)) && (m + k) > (r + u) ||
                     ((l == n && l != m && l != k) && (u == r && u != o && u != p)) && ((n + l) == (u + r)) && (m + k) > (o + p) ||
                     ((l == n && l != m && l != k) && (p == r && p != o && p != u)) && ((n + l) == (p + r)) && (m + k) > (o + u) ||
                     ((l == n && l != m && l != k) && (o == r && o != p && o != u)) && ((n + l) == (o + r)) && (m + k) > (p + u) ||
                     ((l == n && l != m && l != k) && (u == p && u != r && u != o)) && ((n + l) == (p + u)) && (m + k) > (o + r) ||

                     ((m == n && k != m && m != l) && (o == u && o != p && o != r)) && ((n + m) == (o + u)) && (l + k) > (p + r) ||
                     ((m == n && k != m && m != l) && (o == p && o != r && o != u)) && ((n + m) == (o + p)) && (l + k) > (r + u) ||
                     ((m == n && k != m && m != l) && (u == r && u != o && u != p)) && ((n + m) == (u + r)) && (l + k) > (o + p) ||
                     ((m == n && k != m && m != l) && (p == r && p != o && p != u)) && ((n + m) == (p + r)) && (l + k) > (o + u) ||
                     ((m == n && k != m && m != l) && (o == r && o != p && o != u)) && ((n + m) == (o + r)) && (l + k) > (p + u) ||
                     ((m == n && k != m && m != l) && (u == p && u != r && u != o)) && ((n + m) == (p + u)) && (l + k) > (o + r) ||

                     ((k == n && k != m && k != l) && (o == u && o != p && o != r)) && ((n + k) == (o + u)) && (l + m) > (p + r) ||
                     ((k == n && k != m && k != l) && (o == p && o != r && o != u)) && ((n + k) == (o + p)) && (l + m) > (r + u) ||
                     ((k == n && k != m && k != l) && (u == r && u != o && u != p)) && ((n + k) == (u + r)) && (l + m) > (o + p) ||
                     ((k == n && k != m && k != l) && (p == r && p != o && p != u)) && ((n + k) == (p + r)) && (l + m) > (o + u) ||
                     ((k == n && k != m && k != l) && (o == r && o != p && o != u)) && ((n + k) == (o + r)) && (l + m) > (p + u) ||
                     ((k == n && k != m && k != l) && (u == p && u != r && u != o)) && ((n + k) == (p + u)) && (l + m) > (o + r) ||

                     ((l == m && l != k && l != n) && (o == u && o != p && o != r)) && ((m + l) == (o + u)) && (n + k) > (p + r) ||
                     ((l == m && l != k && l != n) && (o == p && o != r && o != u)) && ((m + l) == (o + p)) && (n + k) > (r + u) ||
                     ((l == m && l != k && l != n) && (u == r && u != o && u != p)) && ((m + l) == (u + r)) && (n + k) > (o + p) ||
                     ((l == m && l != k && l != n) && (p == r && p != o && p != u)) && ((m + l) == (p + r)) && (n + k) > (o + u) ||
                     ((l == m && l != k && l != n) && (o == r && o != p && o != u)) && ((m + l) == (o + r)) && (n + k) > (p + u) ||
                     ((l == m && l != k && l != n) && (u == p && u != r && u != o)) && ((m + l) == (p + u)) && (n + k) > (o + r)) {
                if (gracz1 == 'a') wygranaa++;
                else if (gracz1 == 'b') wygranab++;
                else if (gracz1 == 'c') wygranac++;
                else if (gracz1 == 'd') wygranad++;
                else if (gracz1 == 'e') wygranae++;

                if (gracz2 == 'a') przegranaa++;
                else if (gracz2 == 'b') przegranab++;
                else if (gracz2 == 'c') przegranac++;
                else if (gracz2 == 'd') przegranad++;
                else if (gracz2 == 'e') przegranae++;
            }else if(((k == l && k != m && k != n) && (o == u && o != p && o != r)) && ((k + l) == (o + u)) && (m + n) < (p + r) ||
                     ((k == l && k != m && k != n) && (o == p && o != r && o != u)) && ((k + l) == (o + p)) && (m + n) < (u + r) ||
                     ((k == l && k != m && k != n) && (u == r && u != o && u != p)) && ((k + l) == (u + r)) && (m + n) < (o + p) ||
                     ((k == l && k != m && k != n) && (p == r && p != o && p != u)) && ((k + l) == (p + r)) && (m + n) < (o + u) ||
                     ((k == l && k != m && k != n) && (o == r && o != p && o != u)) && ((k + l) == (o + r)) && (m + n) < (p + u) ||
                     ((k == l && k != m && k != n) && (u == p && u != r && u != o)) && ((k + l) == (u + p)) && (m + n) < (r + o) ||

                     ((k == m && k != l && k != n) && (o == u && o != p && o != r)) && ((k + m) == (o + u)) && (l + n) < (p + r) ||
                     ((k == m && k != l && k != n) && (o == p && o != r && o != u)) && ((k + m) == (o + p)) && (l + n) < (u + r) ||
                     ((k == m && k != l && k != n) && (u == r && u != o && u != p)) && ((k + m) == (u + r)) && (l + n) < (o + p) ||
                     ((k == m && k != l && k != n) && (p == r && p != o && p != u)) && ((k + m) == (p + r)) && (l + n) < (o + u) ||
                     ((k == m && k != l && k != n) && (o == r && o != p && o != u)) && ((k + m) == (o + r)) && (l + n) < (p + u) ||
                     ((k == m && k != l && k != n) && (u == p && u != r && u != o)) && ((k + m) == (u + p)) && (l + n) < (r + o) ||

                     ((l == n && l != m && l != k) && (o == u && o != p && o != r)) && ((n + l) == (o + u)) && (m + k) < (p + r) ||
                     ((l == n && l != m && l != k) && (o == p && o != r && o != u)) && ((n + l) == (o + p)) && (m + k) < (r + u) ||
                     ((l == n && l != m && l != k) && (u == r && u != o && u != p)) && ((n + l) == (u + r)) && (m + k) < (o + p) ||
                     ((l == n && l != m && l != k) && (p == r && p != o && p != u)) && ((n + l) == (p + r)) && (m + k) < (o + u) ||
                     ((l == n && l != m && l != k) && (o == r && o != p && o != u)) && ((n + l) == (o + r)) && (m + k) < (p + u) ||
                     ((l == n && l != m && l != k) && (u == p && u != r && u != o)) && ((n + l) == (p + u)) && (m + k) < (o + r) ||

                     ((m == n && k != m && m != l) && (o == u && o != p && o != r)) && ((n + m) == (o + u)) && (l + k) < (p + r) ||
                     ((m == n && k != m && m != l) && (o == p && o != r && o != u)) && ((n + m) == (o + p)) && (l + k) < (r + u) ||
                     ((m == n && k != m && m != l) && (u == r && u != o && u != p)) && ((n + m) == (u + r)) && (l + k) < (o + p) ||
                     ((m == n && k != m && m != l) && (p == r && p != o && p != u)) && ((n + m) == (p + r)) && (l + k) < (o + u) ||
                     ((m == n && k != m && m != l) && (o == r && o != p && o != u)) && ((n + m) == (o + r)) && (l + k) < (p + u) ||
                     ((m == n && k != m && m != l) && (u == p && u != r && u != o)) && ((n + m) == (p + u)) && (l + k) < (o + r) ||

                     ((k == n && k != m && k != l) && (o == u && o != p && o != r)) && ((n + k) == (o + u)) && (l + m) < (p + r) ||
                     ((k == n && k != m && k != l) && (o == p && o != r && o != u)) && ((n + k) == (o + p)) && (l + m) < (r + u) ||
                     ((k == n && k != m && k != l) && (u == r && u != o && u != p)) && ((n + k) == (u + r)) && (l + m) < (o + p) ||
                     ((k == n && k != m && k != l) && (p == r && p != o && p != u)) && ((n + k) == (p + r)) && (l + m) < (o + u) ||
                     ((k == n && k != m && k != l) && (o == r && o != p && o != u)) && ((n + k) == (o + r)) && (l + m) < (p + u) ||
                     ((k == n && k != m && k != l) && (u == p && u != r && u != o)) && ((n + k) == (p + u)) && (l + m) < (o + r) ||

                     ((l == m && l != k && l != n) && (o == u && o != p && o != r)) && ((m + l) == (o + u)) && (n + k) < (p + r) ||
                     ((l == m && l != k && l != n) && (o == p && o != r && o != u)) && ((m + l) == (o + p)) && (n + k) < (r + u) ||
                     ((l == m && l != k && l != n) && (u == r && u != o && u != p)) && ((m + l) == (u + r)) && (n + k) < (o + p) ||
                     ((l == m && l != k && l != n) && (p == r && p != o && p != u)) && ((m + l) == (p + r)) && (n + k) < (o + u) ||
                     ((l == m && l != k && l != n) && (o == r && o != p && o != u)) && ((m + l) == (o + r)) && (n + k) < (p + u) ||
                     ((l == m && l != k && l != n) && (u == p && u != r && u != o)) && ((m + l) == (p + u)) && (n + k) < (o + r)) {
                if (gracz1 == 'a') przegranaa++;
                else if (gracz1 == 'b') przegranab++;
                else if (gracz1 == 'c') przegranac++;
                else if (gracz1 == 'd') przegranad++;
                else if (gracz1 == 'e') przegranae++;

                if (gracz2 == 'a') wygranaa++;
                else if (gracz2 == 'b') wygranab++;
                else if (gracz2 == 'c') wygranac++;
                else if (gracz2 == 'd') wygranad++;
                else if (gracz2 == 'e') wygranae++;
            }
            else if (((k == l && k != m && k != n) && (o == u && o != p && o != r)) && ((k + l) == (o + u)) && (m + n) == (p + r) ||
                     ((k == l && k != m && k != n) && (o == p && o != r && o != u)) && ((k + l) == (o + p)) && (m + n) == (u + r) ||
                     ((k == l && k != m && k != n) && (u == r && u != o && u != p)) && ((k + l) == (u + r)) && (m + n) == (o + p) ||
                     ((k == l && k != m && k != n) && (p == r && p != o && p != u)) && ((k + l) == (p + r)) && (m + n) == (o + u) ||
                     ((k == l && k != m && k != n) && (o == r && o != p && o != u)) && ((k + l) == (o + r)) && (m + n) == (p + u) ||
                     ((k == l && k != m && k != n) && (u == p && u != r && u != o)) && ((k + l) == (u + p)) && (m + n) == (r + o) ||

                     ((k == m && k != l && k != n) && (o == u && o != p && o != r)) && ((k + m) == (o + u)) && (l + n) == (p + r) ||
                     ((k == m && k != l && k != n) && (o == p && o != r && o != u)) && ((k + m) == (o + p)) && (l + n) == (u + r) ||
                     ((k == m && k != l && k != n) && (u == r && u != o && u != p)) && ((k + m) == (u + r)) && (l + n) == (o + p) ||
                     ((k == m && k != l && k != n) && (p == r && p != o && p != u)) && ((k + m) == (p + r)) && (l + n) == (o + u) ||
                     ((k == m && k != l && k != n) && (o == r && o != p && o != u)) && ((k + m) == (o + r)) && (l + n) == (p + u) ||
                     ((k == m && k != l && k != n) && (u == p && u != r && u != o)) && ((k + m) == (u + p)) && (l + n) == (r + o) ||

                     ((l == n && l != m && l != k) && (o == u && o != p && o != r)) && ((n + l) == (o + u)) && (m + k) == (p + r) ||
                     ((l == n && l != m && l != k) && (o == p && o != r && o != u)) && ((n + l) == (o + p)) && (m + k) == (r + u) ||
                     ((l == n && l != m && l != k) && (u == r && u != o && u != p)) && ((n + l) == (u + r)) && (m + k) == (o + p) ||
                     ((l == n && l != m && l != k) && (p == r && p != o && p != u)) && ((n + l) == (p + r)) && (m + k) == (o + u) ||
                     ((l == n && l != m && l != k) && (o == r && o != p && o != u)) && ((n + l) == (o + r)) && (m + k) == (p + u) ||
                     ((l == n && l != m && l != k) && (u == p && u != r && u != o)) && ((n + l) == (p + u)) && (m + k) == (o + r) ||

                     ((m == n && k != m && m != l) && (o == u && o != p && o != r)) && ((n + m) == (o + u)) && (l + k) == (p + r) ||
                     ((m == n && k != m && m != l) && (o == p && o != r && o != u)) && ((n + m) == (o + p)) && (l + k) == (r + u) ||
                     ((m == n && k != m && m != l) && (u == r && u != o && u != p)) && ((n + m) == (u + r)) && (l + k) == (o + p) ||
                     ((m == n && k != m && m != l) && (p == r && p != o && p != u)) && ((n + m) == (p + r)) && (l + k) == (o + u) ||
                     ((m == n && k != m && m != l) && (o == r && o != p && o != u)) && ((n + m) == (o + r)) && (l + k) == (p + u) ||
                     ((m == n && k != m && m != l) && (u == p && u != r && u != o)) && ((n + m) == (p + u)) && (l + k) == (o + r) ||

                     ((k == n && k != m && k != l) && (o == u && o != p && o != r)) && ((n + k) == (o + u)) && (l + m) == (p + r) ||
                     ((k == n && k != m && k != l) && (o == p && o != r && o != u)) && ((n + k) == (o + p)) && (l + m) == (r + u) ||
                     ((k == n && k != m && k != l) && (u == r && u != o && u != p)) && ((n + k) == (u + r)) && (l + m) == (o + p) ||
                     ((k == n && k != m && k != l) && (p == r && p != o && p != u)) && ((n + k) == (p + r)) && (l + m) == (o + u) ||
                     ((k == n && k != m && k != l) && (o == r && o != p && o != u)) && ((n + k) == (o + r)) && (l + m) == (p + u) ||
                     ((k == n && k != m && k != l) && (u == p && u != r && u != o)) && ((n + k) == (p + u)) && (l + m) == (o + r) ||

                     ((l == m && l != k && l != n) && (o == u && o != p && o != r)) && ((m + l) == (o + u)) && (n + k) == (p + r) ||
                     ((l == m && l != k && l != n) && (o == p && o != r && o != u)) && ((m + l) == (o + p)) && (n + k) == (r + u) ||
                     ((l == m && l != k && l != n) && (u == r && u != o && u != p)) && ((m + l) == (u + r)) && (n + k) == (o + p) ||
                     ((l == m && l != k && l != n) && (p == r && p != o && p != u)) && ((m + l) == (p + r)) && (n + k) == (o + u) ||
                     ((l == m && l != k && l != n) && (o == r && o != p && o != u)) && ((m + l) == (o + r)) && (n + k) == (p + u) ||
                     ((l == m && l != k && l != n) && (u == p && u != r && u != o)) && ((m + l) == (p + u)) && (n + k) == (o + r)) {

                if (gracz1 == 'a') remisa++;
                else if (gracz1 == 'b') remisb++;
                else if (gracz1 == 'c') remisc++;
                else if (gracz1 == 'd') remisd++;
                else if (gracz1 == 'e') remise++;

                if (gracz2 == 'a') remisa++;
                else if (gracz2 == 'b') remisb++;
                else if (gracz2 == 'c') remisc++;
                else if (gracz2 == 'd') remisd++;
                else if (gracz2 == 'e') remise++;
            }
        } else if (((k == l && k != m && k != n) || (k == m && k != l && k != n) ||
                    (l == n && l != m && l != k) || (m == n && k != m && m != l) ||
                    (k == n && k != m && k != l) || (l == m && l != k && l != n))) {

            if (gracz1 == 'a') wygranaa++;
            else if (gracz1 == 'b') wygranab++;
            else if (gracz1 == 'c') wygranac++;
            else if (gracz1 == 'd') wygranad++;
            else if (gracz1 == 'e') wygranae++;

            if (gracz2 == 'a') przegranaa++;
            else if (gracz2 == 'b') przegranab++;
            else if (gracz2 == 'c') przegranac++;
            else if (gracz2 == 'd') przegranad++;
            else if (gracz2 == 'e') przegranae++;
        } else if ((o == u && o != p && o != r) || (o == p && o != r && o != u) ||
                   (u == r && u != o && u != p) || (p == r && p != o && p != u) ||
                   (o == r && o != p && o != u) || (u == p && u != r && u != o)) {

            if (gracz1 == 'a') przegranaa++;
            else if (gracz1 == 'b') przegranab++;
            else if (gracz1 == 'c') przegranac++;
            else if (gracz1 == 'd') przegranad++;
            else if (gracz1 == 'e') przegranae++;

            if (gracz2 == 'a') wygranaa++;
            else if (gracz2 == 'b') wygranab++;
            else if (gracz2 == 'c') wygranac++;
            else if (gracz2 == 'd') wygranad++;
            else if (gracz2 == 'e') wygranae++;
        }
        else if ((k + l + m + n) == (o + u + p + r)) {

            if (gracz1 == 'a') remisa++;
            else if (gracz1 == 'b') remisb++;
            else if (gracz1 == 'c') remisc++;
            else if (gracz1 == 'd') remisd++;
            else if (gracz1 == 'e') remise++;

            if (gracz2 == 'a') remisa++;
            else if (gracz2 == 'b') remisb++;
            else if (gracz2 == 'c') remisc++;
            else if (gracz2 == 'd') remisd++;
            else if (gracz2 == 'e') remise++;
        }
    }
    if(wygranaa + remisa + przegranaa > 0) {
        float sumaa = wygranaa + remisa + przegranaa;
        cout << "gracz "<<a<< endl;
        if (wygranaa > 0) cout << "    " << "wygrane: " << (100 * wygranaa) / sumaa << "%" << endl;
        if (remisa > 0)cout << "    " << "remisy: " << (100 * remisa) / sumaa << "%" << endl;
        if (przegranaa > 0)cout << "    " << "przegrane: " << (100 * przegranaa) / sumaa << "%" << endl;
        cout << "" << endl;
    }
    if(wygranab + remisb + przegranab > 0) {
        float sumab = wygranab + remisb + przegranab;
        cout << "gracz "<<b<< endl;
        if (wygranab > 0) cout << "    " << "wygrane: " << (100 * wygranab) / sumab << "%" << endl;
        if (remisb > 0)cout << "    " << "remisy: " << (100 * remisb) / sumab << "%" << endl;
        if (przegranab > 0)cout << "    " << "przegrane: " << (100 * przegranab) / sumab << "%" << endl;
        cout << "" << endl;
    }
    if(wygranac + remisc + przegranac > 0) {
        float sumac = wygranac + remisc + przegranac;
        cout << "gracz " <<c<< endl;
        if (wygranac > 0) cout << "    " << "wygrane: " << (100 * wygranac) / sumac << "%" << endl;
        if (remisc > 0)cout << "    " << "remisy: " << (100 * remisc) / sumac << "%" << endl;
        if (przegranac > 0)cout << "    " << "przegrane: " << (100 * przegranac) / sumac << "%" << endl;
        cout << "" << endl;
    }
    if(wygranad + remisd + przegranad > 0) {
        float sumad = wygranad + remisd + przegranad;
        cout << "gracz " <<d<< endl;
        if (wygranad > 0) cout << "    " << "wygrane: " << (100 * wygranad) / sumad << "%" << endl;
        if (remisd > 0)cout << "    " << "remisy: " << (100 * remisd) / sumad<< "%" << endl;
        if (przegranad > 0)cout << "    " << "przegrane: " << (100 * przegranad) / sumad << "%" << endl;
        cout << "" << endl;
    }
    if(wygranae + remise + przegranae > 0) {
        float sumae = wygranae + remise + przegranae;
        cout << "gracz " <<e<< endl;
        if (wygranae > 0) cout << "    " << "wygrane: " << (100 * wygranae) / sumae << "%" << endl;
        if (remise > 0)cout << "    " << "remisy: " << (100 * remise) / sumae << "%" << endl;
        if (przegranae > 0)cout << "    " << "przegrane: " << (100 * przegranae) / sumae << "%" << endl;
    }
    return 0;
}