/* 
 * libdivecomputer
 * 
 * Copyright (C) 2008 Jef Driesen
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef REEFNET_SENSUS_H
#define REEFNET_SENSUS_H

#include "device.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define REEFNET_SENSUS_MEMORY_SIZE 32768
#define REEFNET_SENSUS_HANDSHAKE_SIZE 10

device_status_t
reefnet_sensus_device_open (device_t **device, const char* name);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* REEFNET_SENSUS_H */
