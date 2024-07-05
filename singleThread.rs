// 正常終了 x=1
fn countup(x: &mut i32)->i32{
	*x += 1;
	return 0;
}

fn main() {
	let mut x = 0;
	countup(&mut x);
	println!("{}", x);
}
