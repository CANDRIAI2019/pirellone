#include <stdio.h>
#include <stdlib.h>


int is_solvable(int M, int N, int **P);

void solve(int M, int N, int **P, void switch_row(int i), void switch_col(int j));


int main() {
    // checkpoint
    printf("%d\n", 0);
    // read choice
    static int choice;
    fflush(stdout);
    scanf("%d", &choice);
    // if choice {...} else {...}
    if (choice) {
        // read M, N
        static int M;
        static int N;
        fflush(stdout);
        scanf("%d%d", &M, &N);
        // for i to M {...}
        static int **P;
        P = malloc(M * sizeof(*P));
        for (int i = 0; i < M; i++) {
            // for j to N {...}
            P[i] = malloc(N * sizeof(*P[i]));
            for (int j = 0; j < N; j++) {
                // read P[i][j]
                fflush(stdout);
                scanf("%d", &P[i][j]);
            }
        }
        // call res = is_solvable(M, N, P)
        static int res;
        res = is_solvable(M, N, P);
        // write res
        printf("%d\n", res);
    } else {
        // read M, N
        static int M;
        static int N;
        fflush(stdout);
        scanf("%d%d", &M, &N);
        // for i to M {...}
        static int **P;
        P = malloc(M * sizeof(*P));
        for (int i = 0; i < M; i++) {
            // for j to N {...}
            P[i] = malloc(N * sizeof(*P[i]));
            for (int j = 0; j < N; j++) {
                // read P[i][j]
                fflush(stdout);
                scanf("%d", &P[i][j]);
            }
        }
        // call solve(M, N, P) callbacks {...}
        {
            void switch_row(int i) {
                // callback switch_row
                printf("%d %d\n", 1, 0);
                // write i
                printf("%d\n", i);
            }
            void switch_col(int j) {
                // callback switch_col
                printf("%d %d\n", 1, 1);
                // write j
                printf("%d\n", j);
            }
            solve(M, N, P, switch_row, switch_col);
        }
        // no more callbacks
        printf("%d %d\n", 0, 0);
    }
    // exit
    exit(0);
}
