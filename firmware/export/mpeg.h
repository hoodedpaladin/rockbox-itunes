/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2002 by Linus Nielsen Feltzing
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef _MPEG_H_
#define _MPEG_H_

#include <stdbool.h>

#define MPEG_SWAP_CHUNKSIZE  0x2000
#define MPEG_HIGH_WATER  2 /* We leave 2 bytes empty because otherwise we
                              wouldn't be able to see the difference between
                              an empty buffer and a full one. */
#define MPEG_LOW_WATER  0x60000
#define MPEG_RECORDING_LOW_WATER  0x80000
#define MPEG_LOW_WATER_CHUNKSIZE  0x40000
#define MPEG_LOW_WATER_SWAP_CHUNKSIZE  0x10000
#ifdef HAVE_MMC
#define MPEG_PLAY_PENDING_THRESHOLD 0x20000
#define MPEG_PLAY_PENDING_SWAPSIZE 0x20000
#else
#define MPEG_PLAY_PENDING_THRESHOLD 0x10000
#define MPEG_PLAY_PENDING_SWAPSIZE 0x10000
#endif

#define MPEG_MAX_PRERECORD_SECONDS 30

/* For ID3 info and VBR header */
#define MPEG_RESERVED_HEADER_SPACE (4096 + 1500)

#if (CONFIG_HWCODEC == MAS3587F) || defined(SIMULATOR)
void mpeg_init_recording(void);
void mpeg_record(const char *filename);
void mpeg_new_file(const char *filename);
void mpeg_set_recording_options(int frequency, int quality,
                                int source, int channel_mode,
                                bool editable, int prerecord_time);
void mpeg_set_recording_gain(int left, int right, bool use_mic);
unsigned long mpeg_recorded_time(void);
unsigned long mpeg_num_recorded_bytes(void);
void mpeg_pause_recording(void);
void mpeg_resume_recording(void);
#endif
unsigned long mpeg_get_last_header(void);

/* in order to keep the recording here, I have to expose this */
void rec_tick(void);
void playback_tick(void); /* FixMe: get rid of this, use mp3_get_playtime() */
void mpeg_id3_options(bool _v1first);

#endif
