import java.util.Scanner;

abstract class Skeleton {
    private static final Scanner in = new Scanner(System.in);


    abstract int is_solvable(int M, int N, int P[][]);

    interface SolveCallbacks {
        void switch_row(int i);
        void switch_col(int j);
    }
    abstract void solve(int M, int N, int P[][], SolveCallbacks callbacks);

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
            // read M, N
            int M;
            int N;
            System.out.flush();
            M = in.nextInt();
            N = in.nextInt();
            // for i to M {...}
            int[][] P;
            P = new int[M][];
            for (int i = 0; i < M; i++) {
                // for j to N {...}
                P[i] = new int[N];
                for (int j = 0; j < N; j++) {
                    // read P[i][j]
                    System.out.flush();
                    P[i][j] = in.nextInt();
                }
            }
            // call res = is_solvable(M, N, P)
            int res;
            res = __solution.is_solvable(M, N, P);
            // write res
            System.out.printf("%d\n", res);
        } else {
            // read M, N
            int M;
            int N;
            System.out.flush();
            M = in.nextInt();
            N = in.nextInt();
            // for i to M {...}
            int[][] P;
            P = new int[M][];
            for (int i = 0; i < M; i++) {
                // for j to N {...}
                P[i] = new int[N];
                for (int j = 0; j < N; j++) {
                    // read P[i][j]
                    System.out.flush();
                    P[i][j] = in.nextInt();
                }
            }
            // call solve(M, N, P) callbacks {...}
            SolveCallbacks solveCallbacks = new SolveCallbacks() {
                public void switch_row(int i) {
                    // callback switch_row
                    System.out.printf("%d %d\n", 1, 0);
                    // write i
                    System.out.printf("%d\n", i);
                }
                public void switch_col(int j) {
                    // callback switch_col
                    System.out.printf("%d %d\n", 1, 1);
                    // write j
                    System.out.printf("%d\n", j);
                }
            };
            __solution.solve(M, N, P,  solveCallbacks);
            // no more callbacks
            System.out.printf("%d %d\n", 0, 0);
        }
        // exit
        System.exit(0);
    }
}
