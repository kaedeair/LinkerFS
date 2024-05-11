/*
  LinkerFS: a data remapping filesystem
  Copyright (C) 2024  kaedeair <kaedeair@outlook.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU LGPLv3 License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the file LICENSE for more details.
*/

#ifndef LINKERFS_MOUNT_CONFIG_H
#define LINKERFS_MOUNT_CONFIG_H
typedef struct linkerfs_mount_config {
    const char *warp_point;
} LINKERFS_MOUNT_CONFIG;
#endif //LINKERFS_MOUNT_CONFIG_H
