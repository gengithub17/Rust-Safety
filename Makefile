COUT = cout
RUSTOUT = rustout

CPROGRAMS = bof.c bof_ctf.c out_of_index.c memory_leak.c
CEXEC = $(CPROGRAMS:%.c=$(COUT)/%)
RUSTPROGRAMS = bof.rs out_of_index.rs multiThread_OK.rs
RUSTEXEC = $(RUSTPROGRAMS:%.rs=$(RUSTOUT)/%)
UNCOMPILABLE = multiThread_NG.rs

all: compile 
compile: $(CEXEC) $(RUSTEXEC)

$(CEXEC): $(COUT)/%: %.c
	gcc -o $@ $<

$(RUSTEXEC): $(RUSTOUT)/%: %.rs
	rustc -o $@ $<

multiThread_NG:
	rustc -o $(RUSTOUT)/multiThread_NG multiThread_NG.rs

clean:
	rm -f $(CEXEC) $(RUSTEXEC)