/*
 *  snapshot.h
 *  bless
 *
 *  Created by joevt on Jan 15 2021.
*/

#ifndef snapshot_h
#define snapshot_h

int
fs_snapshot_root(int dirfd, const char *name, uint32_t flags);

#endif /* snapshot_h */
