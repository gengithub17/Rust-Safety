// Rustにstrcpyは存在しない!
use std::io;

fn fgets() -> String {
	let mut buf = String::new(); // ここでは文字列を格納するメモリは確保しない
	io::stdin().read_line(&mut buf).unwrap();
	buf.trim().to_string();
	return buf;
}

fn input_overflow()->i32{
	println!("Enter a string: ");
	let buffer = fgets();
	println!("You entered: {}", buffer);
	return 0;
}

fn main() {
	input_overflow();
	return;
}
