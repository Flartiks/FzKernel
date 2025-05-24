# 🚀 FzKernel

A minimal **operating system kernel** written in C and Assembly, featuring a basic shell and interrupt handling.  

---

⚠️ **This is the first version of the project and will be actively updated with new features and improvements!**

---
## ⚙️ Requirements

Make sure you have the following installed before building and running the project:

- 🛠️ `gcc` (32-bit C compiler)  
- 🛠️ `ld` (linker)  
- 🛠️ `nasm` (Netwide Assembler)  
- 🛠️ `qemu-system-x86_64` (x86_64 emulator)

Check your setup by running:

```bash
gcc --version
ld --version
nasm -v
qemu-system-x86_64 --version
```
## 🛠️ Build & Run

Build the kernel:

```bash
make
```
Run the kernel in QEMU:

```bash
make runkernel
```
