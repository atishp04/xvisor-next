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
 * @file cpu_vcpu_trap.c
 * @author Anup Patel (anup@brainfault.org)
 * @brief source of VCPU trap handling
 */

#include <vmm_error.h>
#include <cpu_vcpu_trap.h>

int cpu_vcpu_page_fault(struct vmm_vcpu *vcpu,
			arch_regs_t *regs,
			unsigned long cause,
			unsigned long stval)
{
	return VMM_EFAIL;
}

int cpu_vcpu_access_fault(struct vmm_vcpu *vcpu,
			  arch_regs_t *regs,
			  unsigned long cause,
			  unsigned long stval)
{
	return VMM_EFAIL;
}
