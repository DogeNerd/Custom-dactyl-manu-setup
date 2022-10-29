# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

#Build Options. change yes to no to disable
VIA_ENABLE = yes 										# Enable VIA support
# Change Bootmagic from no to lite if you wanna use bootmagic
BOOTMAGIC_ENABLE = no 						  # Enable Bootmagic Lite
LTO_ENABLE = yes										# Enables Link Time Optimization

COMBO_ENABLE = yes									# Enables combos
LEADER_ENABLE = yes									# Enable Leader
MOUSEKEY_ENABLE = yes								# Mouse keys
EXTRAKEY_ENABLE = no         				# Audio control and System control
NKRO_ENABLE = yes										# Enable N-Key Rollover
SPLIT_KEYBOARD = yes								# Split keyboard
TAP_DANCE_ENABLE = yes							# Enable tap-dance
OLED_ENABLE = no										# Enable OLED support
WPM_ENABLE = no											# Enable WPM
RGB_MATRIX_ENABLE = no							# Enable RGB Matrix support

# Opt defs comment out if not using OLED screen for the dactyl_manuform.
OPT_DEFS += -DHAL_USE_I2C=TRUE
# Sourcing needed base files
#SRC+=
