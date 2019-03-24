int is_solvable(int M, int N, int **P) {
    for (int i=0;i<M;i++)
        if (P[i][0])
            for(int j=0;j<N;j++) P[i][j] = P[i][j]==0;
    for (int i=0;i<N;i++)
        if (P[0][i])
            for(int j=0;j<M;j++) P[j][i] = P[j][i]==0;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            if (P[i][j]) return 0;
    return 1;
}
void solve(int M, int N, int **P, void switch_row(int i), void switch_col(int j)) {
    for (int i=0;i<M;i++)
        if (P[i][0]) switch_row(i);
    for (int i=0;i<N;i++)
        if (P[0][i]) switch_col(i);
}
