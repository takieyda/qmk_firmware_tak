# Takieyda's Contra Layout

More to come.

## Description
A layout that takes a little bit from the Planck and a little bit from the Pok3r.

## Flashing Instructions
Because I keep forgetting the command line commands to compile and flash the firmware I've decided to include it here.

### Compile
Using [QMK MSYS](https://github.com/qmk/qmk_distro_msys) (after initial run of `qmk setup` command):
```shell
qmk compile --clean --keyboard contra --keymap takieyda
```
Short form:
```shell
qmk compile -c -kb contra -km takieyda
```
> [!NOTE]
> Using `--clean` or `-c` removes the .build directory and artifacts.

### Flash
[QMK Toolbox](https://github.com/qmk/qmk_toolbox) can be used to flash the BIN file using the **ATmega32U4** MCU option.

Alternatively, compiling and flashing can be done using QMK MSYS:
```shell
qmk flash -c -kb contra -km takieyda
```
> [!NOTE]
> Put the board into the bootloader using the reset button.


<details>
<summary>Old method for prior QMK versions</summary>
 
### Compile
`make contra:takieyda`

### Flash
`make contra:takieyda:dfu-util`
 </details>

## Features
- Layers
  - Base
  - Lower
  - Raise
  - Nav: Hold Esc to access volume controls and VIM style arrow keys.
  - Adjust: Hold Lower and Raise

## Layout
![Layout image.](Planck_layout.png)
> Generated using [Keyboard-Layout-Editor.com](https://www.keyboard-layout-editor.com).

## To Do
- [x] Add RGB underglow