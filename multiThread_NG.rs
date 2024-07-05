// コンパイルエラーパターン
use std::thread;
fn countup(x: &mut i32)->i32{
	*x += 1;
	return 0;
}

fn main() {
	let mut x = 0;
	let thread1 = thread::spawn(||{
		countup(&mut x);
		// ここで参照している&mut x が
		// 元のxよりもライフラインが短いことを保証できない
	});
	let thread2 = thread::spawn(||{
		countup(&mut x);
		// xの可変参照は1つしか存在できない
	});

	thread1.join().unwrap();
	thread2.join().unwrap();

	println!("{}", x);
}
