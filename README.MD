# 🚀 FzKernel

**FzKernel** is a minimal 32-bit operating system kernel written in C and Assembly for the x86 architecture. This is an updated version of the project, featuring an interactive shell (`fzsh`), keyboard input, real-time clock (RTC) support, a basic text editor, and interrupt handling.

---

## 🌟 Features

- **Interactive Shell (`fzsh`)**: Supports commands like `help`, `clear`, `about`, `halt`, `edit`, `links`, `rtc`.
- **VGA Text Mode**: Text output with color support and screen scrolling.
- **Keyboard Handling**: Supports shift, caps lock, and basic input via IRQ1.
- **Real-Time Clock (RTC)**: Displays current time and date.
- **Programmable Interval Timer (PIT)**: Implements `sleep` function for delays.
- **Interrupt Management**: Configures IDT and PIC for IRQ0 (timer) and IRQ1 (keyboard).
- **Basic Text Editor**: Simple editor for text input (via `edit` command).
- **Open Source**: Source code available on [GitHub](https://github.com/flartiks/FzKernel).

⚠️ **This is an evolving project!** Expect new features like an improved editor, file system support, and additional shell commands.

---

## ⚙️ Requirements

To build and run **FzKernel**, ensure the following tools are installed:

- 🛠️ `gcc` (C compiler, version 4.8 or higher)
- 🛠️ `ld` (GNU linker)
- 🛠️ `nasm` (Netwide Assembler)
- 🛠️ `qemu-system-x86_64` (emulator for running the kernel)

Verify your setup:

```bash
gcc --version
ld --version
nasm -v
qemu-system-x86_64 --version
```

## 🛠️ Build & Run
1. Clone repo
```bash
git clone https://github.com/flartiks/FzKernel.git
cd FzKernel
```
2. Build kernel
```bash
make
```
3. Run kernel 
```bash
make runkernel
```

---

## 📜 Usage

After booting the kernel, you will enter the `fzsh` shell. Available commands:
- `help` — Display the list of commands.
- `clear` — Clear the screen.
- `about` — Show information about FzKernel.
- `halt` — Halt the system.
- `edit` — Launch the text editor.
- `links` — Display the GitHub repository link.
- `rtc` — Show the current time and date.

---

## 🔧 Technical Details

- **Architecture**: x86 (32-bit protected mode).
- **Bootloader**: Multiboot-compatible (GRUB).
- **Components**:
  - **Graphics**: VGA text mode (80x25, 16 colors).
  - **Interrupts**: PIC and IDT setup for IRQ0 (PIT) and IRQ1 (keyboard).
  - **Timer**: PIT configured at 100 Hz.
  - **I/O**: Direct port access (0x60, 0x70, 0x71, etc.).
- **Build**: Uses `gcc` with `-m32`, `nasm` with `-f elf32`, and `ld` with a custom `linker.ld` script.

---

## 📌 Future Plans

- Add functionality for "edit".
- Implement file system support.
- Add commands for displaying system information (memory, CPU state).
- Explore transition to x86_64 (64-bit mode).

---

## 📜 License

FzKernel is distributed under the **Apache License 2.0**. See the `LICENSE` file for details.