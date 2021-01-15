# bless
 modified macOS bless command

Apple original code may be found at https://opensource.apple.com
Specifically, for this project: https://opensource.apple.com/tarballs/bless/bless-204.40.27.tar.gz
Note: not all original source code for bless is available, therefore not all functions will work.

In the original code, the bless command does not change or report bless information of APFS volumes that are not the Recovery or Preboot volumes.

The bless information we are interested in changing or reporting is the system folder and system file of the System volume.

The reason we want to change those is so that the Startup Manager (when holding the option key at boot) of old Macs such as the MacPro3,1 will use the .disk_label file instead of the default "EFI Boot" image.

In newer Macs, the .disk_label will get used even if there is no bless information. Also, I don't think newer Macs search System volumes - they only show the Preboot volume.
