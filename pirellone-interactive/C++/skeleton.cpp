#include <cstdio>
#include <cstdlib>

int is_solvable(int m, int n, int is_on(int row, int col));

void solve(int m, int n, int is_on(int row, int col), void switch_row(int row), void switch_col(int col));

int main() {
    // checkpoint
    printf("%d\n", 0);
    // read choice
    static int choice;
    fflush(stdout);
    scanf("%d", &choice);
    // if choice {...} else {...}
    if (choice) {
        // read m, n
        static int n;
        static int m;
        fflush(stdout);
        scanf("%d%d", &m, &n);
        // call res = is_solvable(m, n) callbacks {...}
        static int res;
        res = is_solvable(m, n, [](int row, int col) -> int {
            // callback is_on
            printf("%d %d\n", 1, 0);
            // write row, col
            printf("%d %d\n", row, col);
            // read ans
            static int ans;
            fflush(stdout);
            scanf("%d", &ans);
            // return ans
            return ans;
        });
        // no more callbacks
        printf("%d %d\n", 0, 0);
        // write res
        printf("%d\n", res);
    } else {
        // read m, n
        static int n;
        static int m;
        fflush(stdout);
        scanf("%d%d", &m, &n);
        // call solve(m, n) callbacks {...}
        solve(m, n, [](int row, int col) -> int {
            // callback is_on
            printf("%d %d\n", 1, 0);
            // write row, col
            printf("%d %d\n", row, col);
            // read ans
            static int ans;
            fflush(stdout);
            scanf("%d", &ans);
            // return ans
            return ans;
        }, [](int row) {
            // callback switch_row
            printf("%d %d\n", 1, 1);
            // write row
            printf("%d\n", row);
        }, [](int col) {
            // callback switch_col
            printf("%d %d\n", 1, 2);
            // write col
            printf("%d\n", col);
        });
        // no more callbacks
        printf("%d %d\n", 0, 0);
    }
    // exit
    exit(0);
}
