import os as _os

def main(_solution):
    # checkpoint
    print(0)
    # read choice
    print(end="", flush=True)
    [choice] = map(int, input().split())
    # if choice {...} else {...}
    if choice:
        # read m, n
        print(end="", flush=True)
        [m, n] = map(int, input().split())
        # call res = is_solvable(m, n) callbacks {...}
        def _callback_is_on(row, col):
            # callback is_on
            print(1, 0)
            # write row, col
            print(row, col)
            # read ans
            print(end="", flush=True)
            [ans] = map(int, input().split())
            # return ans
            return ans
        res = int(_solution.is_solvable(m, n, _callback_is_on))
        # no more callbacks
        print(0, 0)
        # write res
        print(res)
    else:
        # read m, n
        print(end="", flush=True)
        [m, n] = map(int, input().split())
        # call solve(m, n) callbacks {...}
        def _callback_is_on(row, col):
            # callback is_on
            print(1, 0)
            # write row, col
            print(row, col)
            # read ans
            print(end="", flush=True)
            [ans] = map(int, input().split())
            # return ans
            return ans
        def _callback_switch_row(row):
            # callback switch_row
            print(1, 1)
            # write row
            print(row)
        def _callback_switch_col(col):
            # callback switch_col
            print(1, 2)
            # write col
            print(col)
        _solution.solve(m, n, _callback_is_on, _callback_switch_row, _callback_switch_col)
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

