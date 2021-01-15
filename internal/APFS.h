/*
 *  APFS.h
 *  bless
 *
 *  Created by joevt on Jan 15 2021.
 *  Original: https://developer.apple.com/support/downloads/Apple-File-System-Reference.pdf
*/

#ifndef APFS_h
#define APFS_h

int APFSContainerEFIEmbed(const char *wholeDiskBSD, const char *apfsDriverData, long apfsDriverDataLength);
int APFSVolumeRole(const char* fromname, uint16_t *role, void *unknown);

#define SNAPSHOT_MARKED_AS_ROOT_TO_BIT 0x8000000000000000

#define APFS_VOL_ROLE_NONE        0x0000
#define APFS_VOL_ROLE_SYSTEM      0x0001
#define APFS_VOL_ROLE_USER        0x0002
#define APFS_VOL_ROLE_RECOVERY    0x0004
#define APFS_VOL_ROLE_VM          0x0008
#define APFS_VOL_ROLE_PREBOOT     0x0010
#define APFS_VOL_ROLE_INSTALLER   0x0020
#define APFS_VOL_ROLE_DATA        (1 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_BASEBAND    (2 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_UPDATE      (3 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_XART        (4 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_HARDWARE    (5 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_BACKUP      (6 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_SIDECAR     (7 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_INTERNAL    (8 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_ENTERPRISE  (9 << APFS_VOLUME_ENUM_SHIFT)
#define APFS_VOL_ROLE_IDIAGS      (10 << APFS_VOLUME_ENUM_SHIFT)
//#define APFS_VOL_ROLE_PRELOGIN    (11 << APFS_VOLUME_ENUM_SHIFT)

#define APFS_VOLUME_ENUM_SHIFT    6

#define APFS_MEDIA_OBJECT "AppleAPFSMedia"
	#define APFS_CONTAINER_OBJECT "AppleAPFSContainer"
		#define APFS_VOLUME_OBJECT "AppleAPFSVolume"
			#define kAPFSVolGroupUUIDKey "VolGroupUUID" // string
			#define kAPFSRoleKey "Role" // integer
				#define kAPFSVolumeRoleNone "none"
				#define kAPFSVolumeRoleSystem "System"
				#define kAPFSVolumeRoleUser "User"
				#define kAPFSVolumeRoleRecovery "Recovery"
				#define kAPFSVolumeRoleVM "VM"
				#define kAPFSVolumeRolePreBoot "Preboot"
				#define kAPFSVolumeRoleInstaller "Installer"
				#define kAPFSVolumeRoleData "Data"
				#define kAPFSVolumeRoleBaseband "Baseband data"
				#define kAPFSVolumeRoleXART "XART"
				#define kAPFSVolumeRoleInternal "Internal"
				#define kAPFSVolumeRoleBackup "Backup"
				#define kAPFSVolumeRoleUpdate "Update"
				#define kAPFSVolumeRoleHardware "Hardware"
				#define kAPFSVolumeRoleSideCar "SideCar"
				#define kAPFSVolumeRoleEnterprise "Enterprise data"
				#define kAPFSVolumeRoleIDiags "IDiags"
			#define kAPFSStatusKey "Status" // string

#endif /* APFS_h */
