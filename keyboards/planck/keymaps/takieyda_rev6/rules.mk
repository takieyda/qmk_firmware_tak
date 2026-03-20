ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif

BOOTMAGIC_ENABLE = yes
BOOTLOADER = stm32-dfu