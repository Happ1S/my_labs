#include <stdio.h>

int sign(int x) {
    if (x > 0) {
        return 1;
    }
    else if (x == 0) {
        return 0;
    }
    else {
        return -1;
    }
}

int abs(int x) {
    if (x >= 0) {
        return x;
    }
    else {
        return -x;
    }
}

int max(int x, int y) {
    if (x >= y) {
        return x;
    }
    else {
        return y;
    }
}

int min(int x, int y) {
    if (x <= y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int i = -1;
    int j = 2;
    int l = -1;
    int k = 1;
    int flag = 0;

    for (int z; z < 50; ++z) {
        if (((i - 20) * (i - 20)) / (10 * 10) + (j * j) / (5 * 5) <= 1) {
            puts ("Вы попали");
            flag = 1;
            break;
        }
        i = abs(sign(i - j) * l - sign(j - l) * i + sign(i - l) * j - k) % 35;
        j = i * max(j, l) % 30 + j * min(i, l) % (20 - k);
        l = (i + k) * (j - k) * (l + k) % 25;
        k += 1;
    }
    if (flag == 0) {
        puts("Вы промахнулись");
    }
    return 0;
}