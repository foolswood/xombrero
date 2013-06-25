/*
 * Copyright (c) 2011 Conformal Systems LLC <info@conformal.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef XOMBRERO_VERSION_H
#define XOMBRERO_VERSION_H

#define XOMBRERO_STR(x)		#x
#define XOMBRERO_STRINGIZE(x)	XOMBRERO_STR(x)

#define XOMBRERO_MAJOR		1
#define XOMBRERO_MINOR		6
#define XOMBRERO_PATCH		1
#define XOMBRERO_VERSION	XOMBRERO_STRINGIZE(XOMBRERO_MAJOR) "." \
				XOMBRERO_STRINGIZE(XOMBRERO_MINOR) "." \
				XOMBRERO_STRINGIZE(XOMBRERO_PATCH)

#endif /* XOMBRERO_VERSION_H */

