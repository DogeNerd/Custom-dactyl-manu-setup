# Bootloader and MCU
MCU = RP2040
BOOTLOADER = rp2040
SERIAL_DRIVER = vendor
F_CPU = 8000000 
SPLIT_KEYBOARD = yes

# Drivers for components
OLED_DRIVER = SSD1306
OLED_DRIVER = no
# Needed for OLED if you wanna display your WPM.
WPM_ENABLE = no
# RGB Light
RGBLIGHT_ENABLE = no

# Debugs
CONSOLE_ENABLE = no

# Opt defs, comment out if you're not using OLED screen for the dactyl_manuform.
#OPT_DEFS+= -DHAL_USE_I2C=TRUE
