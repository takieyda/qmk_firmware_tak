# Takieyda's Launchpad Layout

## Description
A neat project board, still have to find a use for it.

## Flashing Instructions
Because I keep forgetting the command line commands to compile and flash the firmware I've decided to include it here.

### Compile
Using [QMK MSYS](https://github.com/qmk/qmk_distro_msys) (after initial run of `qmk setup` command):
```shell
qmk compile --clean --keyboard maple_computing/launchpad/rev1 --keymap takieyda
```
Short form:
```shell
qmk compile -c -kb maple_computing/launchpad/rev1 -km takieyda
```
> [!NOTE]
> Using `--clean` or `-c` removes the .build directory and artifacts.

### Flash
[QMK Toolbox](https://github.com/qmk/qmk_toolbox) can be used to flash the BIN file.

Alternatively, compiling and flashing can be done using QMK MSYS:
```shell
qmk flash -c -kb maple_computing/launchpad/rev1 -km takieyda
```
> [!NOTE]
> Put the board into the bootloader using *Adjust-Q* or the reset button.


<details>
<summary>Old method for prior QMK versions</summary>
 
### Compile
`make maple_computing/launchpad/rev1:takieyda`

### Flash
`make maple_computing/launchpad/rev1:takieyda:dfu-util`
 </details>

## Features
- Layers
  - Base
  - Lower
  - Raise
  - Nav: Hold Esc to access volume controls and VIM style arrow keys.
  - Adjust: Hold Lower and Raise

## Layout
![Layout image.](Launchpad_layout.png)
> Generated using [Keyboard-Layout-Editor.com](https://www.keyboard-layout-editor.com).