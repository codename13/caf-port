/*
 * Copyright (C) 2007-2011 B.A.T.M.A.N. contributors:
 *
 * Marek Lindner, Simon Wunderlich
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 *
 */

#ifndef _NET_BATMAN_ADV_TRANSLATION_TABLE_H_
#define _NET_BATMAN_ADV_TRANSLATION_TABLE_H_

int tt_local_init(struct bat_priv *bat_priv);
void tt_local_add(struct net_device *soft_iface, uint8_t *addr);
void tt_local_remove(struct bat_priv *bat_priv,
		      uint8_t *addr, char *message);
int tt_local_fill_buffer(struct bat_priv *bat_priv,
			  unsigned char *buff, int buff_len);
int tt_local_seq_print_text(struct seq_file *seq, void *offset);
void tt_local_free(struct bat_priv *bat_priv);
int tt_global_init(struct bat_priv *bat_priv);
void tt_global_add_orig(struct bat_priv *bat_priv,
			 struct orig_node *orig_node,
			 unsigned char *tt_buff, int tt_buff_len);
int tt_global_seq_print_text(struct seq_file *seq, void *offset);
void tt_global_del_orig(struct bat_priv *bat_priv,
			 struct orig_node *orig_node, char *message);
void tt_global_free(struct bat_priv *bat_priv);
struct orig_node *transtable_search(struct bat_priv *bat_priv, uint8_t *addr);

#endif /* _NET_BATMAN_ADV_TRANSLATION_TABLE_H_ */
