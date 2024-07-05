#[allow(dead_code)]
fn fixed_length()->i32 {
	println!("Fixed length");
	let mut buf_a: [i32; 5] = [0; 5]; // [0, 0, 0, 0, 0]
	let mut buf_b: [i32; 5] = [0; 5];
	buf_a[0] = 0;
	// buf_b[5] = 5; // error

	println!("buf_a address: {:p}", &buf_a);
	println!("buf_b address: {:p}", &buf_b);

	for i in 0..6 {
		buf_b[i] = i as i32;
		println!("buf_b[{}]: {}", i, buf_b[i]);
	}
	println!("Done");

	println!("buf_a[0]: {}", buf_a[0]);

	return 0;
}

#[allow(dead_code)]
fn variable_length()->i32 {
	println!("Variable length");
	let buflen = 5;
	
	// Rustの配列は固定長のみ。　下記はエラー 
	// let mut buf_a: [i32; buflen] = [0; buflen];
	// let mut buf_b: [i32; buflen] = [0; buflen];

	// Vecを使う
	let mut buf_a: Vec<i32> = vec![0; buflen];
	let mut buf_b: Vec<i32> = vec![0; buflen];
	buf_a[0] = 0;

	println!("buf_a address: {:p}", &buf_a);
	println!("buf_b address: {:p}", &buf_b);

	for i in 0..buflen+1 {
		buf_b[i] = i as i32;
		println!("buf_b[{}]: {}", i, buf_b[i]);
	}
	println!("Done");

	println!("buf_a[0]: {}", buf_a[0]);

	return 0;
}

fn main() {
	// fixed_length();
	variable_length();
	return;
}
