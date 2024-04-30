/*
    To compile and run, in the terminal, type:
        rustc main_rust.rs
    After compilation, in the terminal, type:
        ./main_rust
*/

fn main() {
    let mut my_array: [i32; 3] = [0; 3];

    my_array[0] = 1;
    my_array[1] = 3;
    my_array[2] = 5;

    println!("{}", my_array[0]);
    println!("{}", my_array[1]);
    println!("{}", my_array[2]);
    // println!("{}", my_array[3]); // Aborted, out of bounds
}