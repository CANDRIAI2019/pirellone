mod solution;
use std::io::Write;

macro_rules! readln {
    ($($var:expr),*) => {{
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).unwrap();
        let parts: Vec<&str> = buf.trim().split(" ").collect();
        let mut i: usize = 0;
        $(
            assert!(i < parts.len(), "input format incorrect: too few values on this line"); 
            $var = parts[i].parse().unwrap();
            i += 1;
        )*
        assert!(i == parts.len(), "input format incorrect: too many values on the line")
    }};
}


fn main() {
    // checkpoint
    println!("{}", 0);
    // read choice
    let choice: i64;
    std::io::stdout().flush().unwrap();
    readln!(choice);
    // if choice {...} else {...}
    if choice != 0 {
        // read M, N
        let M: i64;
        let N: i64;
        std::io::stdout().flush().unwrap();
        readln!(M, N);
        // for i to M {...}
        let mut P: Vec<Vec<i64>> = Vec::new();
        P.resize(M as usize, vec::new());
        for i in 0..M {
            // for j to N {...}
            P[i as usize].resize(N as usize, 0);
            for j in 0..N {
                // read P[i][j]
                std::io::stdout().flush().unwrap();
                readln!(P[i as usize][j as usize]);
            }
        }
        // call res = is_solvable(M, N, P)
        let res: i64;
        res = solution::is_solvable(M, N, P);
        // write res
        println!("{}", res);
    } else {
        // read M, N
        let M: i64;
        let N: i64;
        std::io::stdout().flush().unwrap();
        readln!(M, N);
        // for i to M {...}
        let mut P: Vec<Vec<i64>> = Vec::new();
        P.resize(M as usize, vec::new());
        for i in 0..M {
            // for j to N {...}
            P[i as usize].resize(N as usize, 0);
            for j in 0..N {
                // read P[i][j]
                std::io::stdout().flush().unwrap();
                readln!(P[i as usize][j as usize]);
            }
        }
        // call solve(M, N, P) callbacks {...}
        solution::solve(M, N, P, |i: i64| {
            // callback switch_row
            println!("{} {}", 1, 0);
            // write i
            println!("{}", i);
        }, |j: i64| {
            // callback switch_col
            println!("{} {}", 1, 1);
            // write j
            println!("{}", j);
        });
        // no more callbacks
        println!("{} {}", 0, 0);
    }
    // exit
    std::process::exit(0);
}
