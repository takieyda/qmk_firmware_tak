ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif

BOOTMAGIC_ENABLE = yes
BACKLIGHT_ENABLE = yes