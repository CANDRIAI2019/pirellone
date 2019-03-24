//#include "skeleton.cpp"

int is_solvable(int m, int n, int P[][]) {
    for (int i=0;i<n;i++){
        if (P[0][i])
            for(int j=0;j<m;j++) P[i][j] = P[i][j]==0;}
    for (int i=0;i<m;i++){
        if (P[i][0])
            for(int j=0;j<n;j++) P[i][j] = P[i][j]==0;}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            if (P[i][j]) return 0;}
    return 1;
}
void solve(int m, int n, int is_on(int row, int col), void switch_row(int row), void switch_col(int col)) {
    for (int i=0;i<n;i++)
        if (is_on(0,i)) switch_row(i);
    for (int i=0;i<m;i++)
        if (is_on(i,0)) switch_col(i);
}
