#include <stdio.h>
#include <stdlib.h>

void solve(const char *f_name, const char *g_name) {
    FILE *f = fopen(f_name, "rb+");
    FILE *g = fopen(g_name, "rb");
    FILE *temp = tmpfile();

    if (f == NULL || g == NULL || temp == NULL) {
        printf("Error opening file");
        exit(1);
    }

    int fi, gi;
    while (fread(&fi, sizeof(int), 1, f) && fread(&gi, sizeof(int), 1, g)) {
        if (fi > gi) {
            fwrite(&fi, sizeof(int), 1, temp);
        }
    }

    rewind(f);
    rewind(temp);

    while (fread(&fi, sizeof(int), 1, temp)) {
        fwrite(&fi, sizeof(int), 1, f);
    }

    fclose(f);
    fclose(g);
    fclose(temp);
}

int main() {
    solve("f.txt", "g.txt");
    return 0;
}