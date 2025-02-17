/**
 * Copyright (c) 2019 Anup Patel.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * @file arch_linux.c
 * @author Anup Patel (anup@brainfault.org)
 * @brief source for arch specific linux booting
 */

#include <arch_linux.h>

extern unsigned long boot_arg0;
extern unsigned long boot_arg1;

typedef void (*linux_entry_t) (unsigned long arg0, unsigned long fdt_addr);

void arch_start_linux_prep(unsigned long kernel_addr,
			   unsigned long fdt_addr,
			   unsigned long initrd_addr,
			   unsigned long initrd_size)
{
	/* For now nothing to do here. */
}

void arch_start_linux_jump(unsigned long kernel_addr,
			   unsigned long fdt_addr,
			   unsigned long initrd_addr,
			   unsigned long initrd_size)
{
	/* Jump to Linux Kernel
	 * a0 -> hart ID
	 * a1 -> dtb address
	 */
	((linux_entry_t)kernel_addr)(boot_arg0,
				     (fdt_addr) ? fdt_addr : boot_arg1);
}
