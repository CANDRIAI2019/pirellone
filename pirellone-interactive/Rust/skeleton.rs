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
        // read m, n
        let n: i64;
        let m: i64;
        std::io::stdout().flush().unwrap();
        readln!(m, n);
        // call res = is_solvable(m, n) callbacks {...}
        let res: i64;
        res = solution::is_solvable(m, n, |row: i64, col: i64| -> i64 {
            // callback is_on
            println!("{} {}", 1, 0);
            // write row, col
            println!("{} {}", row, col);
            // read ans
            let ans: i64;
            std::io::stdout().flush().unwrap();
            readln!(ans);
            // return ans
            return ans;
        });
        // no more callbacks
        println!("{} {}", 0, 0);
        // write res
        println!("{}", res);
    } else {
        // read m, n
        let n: i64;
        let m: i64;
        std::io::stdout().flush().unwrap();
        readln!(m, n);
        // call solve(m, n) callbacks {...}
        solution::solve(m, n, |row: i64, col: i64| -> i64 {
            // callback is_on
            println!("{} {}", 1, 0);
            // write row, col
            println!("{} {}", row, col);
            // read ans
            let ans: i64;
            std::io::stdout().flush().unwrap();
            readln!(ans);
            // return ans
            return ans;
        }, |row: i64| {
            // callback switch_row
            println!("{} {}", 1, 1);
            // write row
            println!("{}", row);
        }, |col: i64| {
            // callback switch_col
            println!("{} {}", 1, 2);
            // write col
            println!("{}", col);
        });
        // no more callbacks
        println!("{} {}", 0, 0);
    }
    // exit
    std::process::exit(0);
}
