/*
 * Copyright (c) 1994 William F. Jolitz.
 * 386BSD Copyright Restrictions Apply. All Other Rights Reserved.
 *
 * $Id: $
 * Unsigned integer maximum function.
 */

__INLINE u_int
max(u_int u1, u_int u2)
{
	return (u1 > u2 ? u1 : u2);
}
