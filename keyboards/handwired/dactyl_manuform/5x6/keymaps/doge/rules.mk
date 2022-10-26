# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

#Build Options. change yes to no to disable
VIA_ENABLE = yes 										# Enable VIA support
BOOTMAGIC_ENABLE = no							  # Enable Bootmagic Lite
LTO_ENABLE = yes										# Enables Link Time Optimization

COMBO_ENABLE = yes									# Enables combos
LEADER_ENABLE = yes									# Enable Leader
MOUSEKEY_ENABLE = yes								# Mouse keys
EXTRAKEY_ENABLE = no         				# Audio control and System control
COMMAND_ENABLE = no									# Commands for debug and configuration
NKRO_ENABLE = yes										# Enable N-Key Rollover
BACKLIGHT_ENABLE = no       				# Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no	       				# Enable keyboard RGB underglow
SPLIT_KEYBOARD = yes								# Split keyboard
TAP_DANCE_ENABLE = yes							# Enable tap-dance
AUDIO_ENABLE = no										# Enable Audio
OLED_ENABLE = no										# Enable OLED support
OLED_DRIVER = SSD1306								# OLED driver support
WPM_ENABLE = no											# Enable WPM
# Extra Stuff
UNICODE_ENABLE = no
UNICODEMAP_ENABLE = no
BLUETOOTH_ENABLE = no
RAW_ENABLE = no
MIDI_ENABLE = no
CONSOLE_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
AVR_USE_MINIMAL_PRINTF = no
TERMINAL_ENABLE = no

# Opt defs comment out if not using OLED screen for the dactyl_manuform.
OPT_DEFS += -DHAL_USE_I2C=TRUE
# Sourcing needed base files
SRC+= combos.c leader.c start.c
