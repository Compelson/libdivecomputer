/*
 * libdivecomputer
 *
 * Copyright (C) 2011 Jef Driesen
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

#ifndef MARES_DARWIN_H
#define MARES_DARWIN_H

#include <libdivecomputer/context.h>
#include <libdivecomputer/iostream.h>
#include <libdivecomputer/device.h>
#include <libdivecomputer/parser.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

dc_status_t
mares_darwin_device_open (dc_device_t **device, dc_context_t *context, dc_iostream_t *iostream, unsigned int model);

dc_status_t
mares_darwin_parser_create (dc_parser_t **parser, dc_context_t *context, const unsigned char data[], size_t size, unsigned int model);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* MARES_DARWIN_H */
