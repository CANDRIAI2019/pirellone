import os as _os

def main(_solution):
    # checkpoint
    print(0)
    # read choice
    print(end="", flush=True)
    [choice] = map(int, input().split())
    # if choice {...} else {...}
    if choice:
        # read M, N
        print(end="", flush=True)
        [M, N] = map(int, input().split())
        # for i to M {...}
        P = [None] * M
        for i in range(M):
            # for j to N {...}
            P[i] = [None] * N
            for j in range(N):
                # read P[i][j]
                print(end="", flush=True)
                [P[i][j]] = map(int, input().split())
        # call res = is_solvable(M, N, P)
        res = int(_solution.is_solvable(M, N, P))
        # write res
        print(res)
    else:
        # read M, N
        print(end="", flush=True)
        [M, N] = map(int, input().split())
        # for i to M {...}
        P = [None] * M
        for i in range(M):
            # for j to N {...}
            P[i] = [None] * N
            for j in range(N):
                # read P[i][j]
                print(end="", flush=True)
                [P[i][j]] = map(int, input().split())
        # call solve(M, N, P) callbacks {...}
        def _callback_switch_row(i):
            # callback switch_row
            print(1, 0)
            # write i
            print(i)
        def _callback_switch_col(j):
            # callback switch_col
            print(1, 1)
            # write j
            print(j)
        _solution.solve(M, N, P, _callback_switch_row, _callback_switch_col)
        # no more callbacks
        print(0, 0)
    # exit
    print(end="", flush=True)
    _os._exit(0)


if __name__ == '__main__':
    import sys
    import runpy
    
    if len(sys.argv) != 2:
        print("Usage: {} <solution>".format(sys.argv[0]))
    
    class Wrapper: pass 
    solution = Wrapper()
    solution.__dict__ = runpy.run_path(sys.argv[1])
    main(solution)

