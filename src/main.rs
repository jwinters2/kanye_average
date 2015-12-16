use std::env;
use std::process::exit;

fn main() {
    let mut quiet = false;
    let mut nums: Vec<f64> = Vec::with_capacity(2);

    for arg in env::args().skip(1) {
        if arg == "-q" {
            quiet = true;
        } else {
            if let Ok(num) = arg.parse() {
                nums.push(num);
            } else {
                println!("Could not convert {} to a float", arg);
            }
        }
    }

    if nums.len() != 2 {
        let pgrm = env::args().nth(0).unwrap_or("kanye".to_string());
        println!("Usage:");
        println!("{} number_1 number_2 [-q]", pgrm);
        println!("Options:");
        println!(" -q quiet mode, only print the average.");
        println!("    useful for integrating into bash scripts.");
        exit(1);
    }

    let (a, b) = (nums[0], nums[1]);
    let k = ((a + b) + (a * b) + (a / b) + (b / a)) / 4.0;

    if !quiet {
        print!("Kanye avg. = ");
    }

    if (a == 2.0 && b == 3.0) || (b == 2.0 && a == 3.0) {
        println!("5.76-blah-blah-blah");
    } else {
        println!("{}", k);
    }
}
