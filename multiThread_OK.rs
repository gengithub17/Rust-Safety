// OKパターン
use std::sync::{Arc, Mutex};
use std::thread;

fn countup(x: Arc<Mutex<i32>>)->i32{
	let mut x = x.lock().unwrap();
	*x += 1;
	return 0;
}

fn main() {
	let x = Arc::new(Mutex::new(0));
	let x1 = Arc::clone(&x);
	let x2 = Arc::clone(&x);

	let thread1 = thread::spawn(move || {
		countup(x1);
	});

	let thread2 = thread::spawn(move || {
		countup(x2);
	});

	thread1.join().unwrap();
	thread2.join().unwrap();

	println!("{}", *x.lock().unwrap());
}
