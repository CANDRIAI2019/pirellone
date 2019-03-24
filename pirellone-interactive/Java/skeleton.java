import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    interface Is_solvableCallbacks {
        int is_on(int row, int col);
    }
    abstract int is_solvable(int m, int n, Is_solvableCallbacks callbacks);

    interface SolveCallbacks {
        int is_on(int row, int col);
        void switch_row(int row);
        void switch_col(int col);
    }
    abstract void solve(int m, int n, SolveCallbacks callbacks);

    public static void main(String[] args) {
        Solution __solution = new Solution();

        // checkpoint
        System.out.printf("%d\n", 0);
        // read choice
        int choice;
        System.out.flush();
        choice = in.nextInt();
        // if choice {...} else {...}
        if (choice != 0) {
            // read m, n
            int n;
            int m;
            System.out.flush();
            m = in.nextInt();
            n = in.nextInt();
            // call res = is_solvable(m, n) callbacks {...}
            int res;
            Is_solvableCallbacks is_solvableCallbacks = new Is_solvableCallbacks() {
                public int is_on(int row, int col) {
                    // callback is_on
                    System.out.printf("%d %d\n", 1, 0);
                    // write row, col
                    System.out.printf("%d %d\n", row, col);
                    // read ans
                    int ans;
                    System.out.flush();
                    ans = in.nextInt();
                    // return ans
                    return ans;
                }
            };
            res = __solution.is_solvable(m, n,  is_solvableCallbacks);
            // no more callbacks
            System.out.printf("%d %d\n", 0, 0);
            // write res
            System.out.printf("%d\n", res);
        } else {
            // read m, n
            int n;
            int m;
            System.out.flush();
            m = in.nextInt();
            n = in.nextInt();
            // call solve(m, n) callbacks {...}
            SolveCallbacks solveCallbacks = new SolveCallbacks() {
                public int is_on(int row, int col) {
                    // callback is_on
                    System.out.printf("%d %d\n", 1, 0);
                    // write row, col
                    System.out.printf("%d %d\n", row, col);
                    // read ans
                    int ans;
                    System.out.flush();
                    ans = in.nextInt();
                    // return ans
                    return ans;
                }
                public void switch_row(int row) {
                    // callback switch_row
                    System.out.printf("%d %d\n", 1, 1);
                    // write row
                    System.out.printf("%d\n", row);
                }
                public void switch_col(int col) {
                    // callback switch_col
                    System.out.printf("%d %d\n", 1, 2);
                    // write col
                    System.out.printf("%d\n", col);
                }
            };
            __solution.solve(m, n,  solveCallbacks);
            // no more callbacks
            System.out.printf("%d %d\n", 0, 0);
        }
        // exit
        System.exit(0);
    }
}
