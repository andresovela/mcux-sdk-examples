/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __TEST_ECMUL521_H
#define __TEST_ECMUL521_H

#include <stdint.h>

uint32_t test_ecmulscalar521[9][18] = {
    {0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0},
    {0xA98D9C0A, 0xA024384D, 0xCCADE907, 0x7EB04946, 0x7D9D7A72, 0xAF1D563C, 0x4FE98EEE, 0x65472890, 0xB55C069A,
     0xFB9F6172, 0xA8E4A88, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0},
    {0x65FA59B4, 0xF5563094, 0xAD313C2D, 0xD511A977, 0x336F9EF, 0xBE6ACE54, 0xE5B64DDD, 0xB28C9B0F, 0x6200E5EE,
     0x178F5DE9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0},
    {0x60EC0C4A, 0x75BEC419, 0x6902FFBE, 0x9E5D6CF6, 0x3BDA3F22, 0x7EF5B492, 0xD5FEBEBA, 0x4E1C8002, 0x640F73D5, 0x0,
     0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0},
    {0x53E8480A, 0xF492D8C9, 0xD89BF348, 0x3D0C490B, 0xCA2FC05B, 0xA7BD04AB, 0xF7E44BAB, 0x5D23F79F, 0xBBAFCDDB,
     0x6882CEAA, 0x351E801D, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0},
    {0x632A5CA6, 0x5D2F2CF8, 0x3CCAF15B, 0xC07FC611, 0xA83F7696, 0xBC0CD65A, 0x62074024, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0},
    {0xBC5911FE, 0xD67FAA5, 0xF8FF0433, 0xA2307B70, 0x86D92C0B, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0},
    {0xFDAC489E, 0xD39FD4A0, 0x7D6FAF20, 0xC9F40F3A, 0x8E83F398, 0x1F4C611F, 0x4129717C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0},
    {0x3A3EE038, 0x119B70DD, 0xCB7587EA, 0xB886176B, 0x3E51B7EC, 0x3AC519E, 0x16B26241, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0}};
uint32_t test_ecmulans521[9][2 * 18] = {
    {0xC2E5BD66, 0xF97E7E31, 0x856A429B, 0x3348B3C1, 0xA2FFA8DE, 0xFE1DC127, 0xEFE75928, 0xA14B5E77, 0x6B4D3DBA,
     0xF828AF60, 0x53FB521,  0x9C648139, 0x2395B442, 0x9E3ECB66, 0x404E9CD,  0x858E06B7, 0xC6,       0,
     0x9FD16650, 0x88BE9476, 0xA272C240, 0x353C7086, 0x3FAD0761, 0xC550B901, 0x5EF42640, 0x97EE7299, 0x273E662C,
     0x17AFBD17, 0x579B4468, 0x98F54449, 0x2C7D1BD9, 0x5C8A5FB4, 0x9A3BC004, 0x39296A78, 0x118,      0},
    {0xF0CB8F96, 0x445F48B8, 0x72E2D211, 0x52EC18BC, 0xBB49726F, 0xA1A46D93, 0x9BBAEE37, 0xC9EBB89F, 0xE9B98E45,
     0xAF6DAC91, 0xC00BDEF8, 0x2D873102, 0xA0EC2CB5, 0x5ACC22FE, 0x23D4D392, 0xFF15FC14, 0xFA,       0,
     0x7979BD9A, 0xD101802C, 0xA2B82B9D, 0xA2462287, 0xDC3F0E7F, 0xD1896F5F, 0x8553E546, 0xB60908C2, 0x39565BED,
     0x6C9F3B82, 0xD036065E, 0x112EC80,  0xCC47F122, 0x318AF1C7, 0xFC8AAE93, 0x1B47E784, 0xCB,       0},
    {0x5FCE9583, 0xD0A02CD1, 0x5ADA48A9, 0xA86671FB, 0x5F3F7E52, 0x714D3D06, 0x6699EE46, 0x69F41362, 0x43F671EF,
     0x619730AB, 0x3FC589E8, 0x1CEA6B75, 0xB733AE1D, 0x9083CF2,  0x88B99A49, 0x6DB2149,  0x20,       0,
     0xE56DF0D4, 0x9E6B213C, 0x4E29DF9E, 0xF522E201, 0x73AA6742, 0xC6D990A7, 0x566B7FDB, 0x84C5C15,  0x8414727F,
     0x7EFD380D, 0x76E0933B, 0x69D7CA29, 0x44F51547, 0x3D39EBC3, 0xA7270D0E, 0x2C141F31, 0x138,      0},
    {0x99C36F36, 0xEF23483,  0xCE79A76D, 0xF1400C6B, 0xFDF890D3, 0xDEF5D774, 0xAC02611E, 0x4CA01959, 0x6A88D8C8,
     0xD84DBDF8, 0x8FCC54F,  0x6ADF30E2, 0xE6088C35, 0xFFE979E5, 0xB169EB4E, 0xE2D06A9,  0xA6,       0,
     0xB2BF3264, 0x424AF3EE, 0xD6C462D1, 0x678E635,  0x3876A8B6, 0x22FF7220, 0x833E81E3, 0x64E3F264, 0xD247A130,
     0xD8F514EA, 0xCCCB1427, 0x3068B6A3, 0x975A73C6, 0xA73DB9B5, 0xD62D826F, 0x51760313, 0x43,       0},
    {0xCD5B844D, 0x4CE1789A, 0x247F0E0A, 0xEE2C1885, 0x1B911BA4, 0x8518A8E,  0xC5A1C312, 0x33805940, 0x9ABACA5,
     0x8B10108F, 0x94BEE251, 0xCDEA5EF4, 0x57DB6C34, 0xC3D4003A, 0xA5447156, 0x52799BBD, 0xB8,       0,
     0xB0D4F94,  0x2A7BF134, 0xB6B363E,  0xE4663228, 0x7E42CD93, 0x40228D5E, 0xAFA8B4F0, 0x47ED8CB9, 0xF1F71BBC,
     0xA78C1E26, 0xC0DAD4C8, 0xCFD4C54B, 0x8FAEC04E, 0xADD683B7, 0x8D05605A, 0x85D9BD6F, 0xBB,       0},
    {0x6CB0B2E3, 0x7C9E14A8, 0x1677A4D1, 0x6C16FCC6, 0xB76BFA51, 0xC2189A4D, 0xD96E9490, 0x41884562, 0x8AA4C805,
     0xE866E156, 0x8A3B64A9, 0xC85CCCE,  0x53EB8298, 0xA8700855, 0x112250E0, 0xFCBAB8F0, 0xB5,       0,
     0xADA19D9F, 0x77F07BE,  0x7AA58448, 0xD6217C12, 0xF05EB9F0, 0x7C7EFFD7, 0x697E963E, 0xFB2E40E3, 0xAF52D759,
     0x8D6FAE19, 0x80E2F028, 0xA336EE01, 0xEB82EEB,  0xED421291, 0x7773A1A8, 0xAC62456,  0x102,      0},
    {0xA232EBE9, 0xCD46B401, 0x545A4C2,  0x10508A70, 0x89AB4E82, 0x4B3CDA8C, 0x8C4DD6EA, 0xFCD2AEBF, 0xF6309958,
     0x4AF6A7FA, 0xBD24E853, 0x714855FD, 0xE34C990,  0x3E8EA4AA, 0x15DACF8A, 0x21245815, 0x1CD,      0,
     0x16FD0A66, 0x8DE8CBB5, 0x7F6822EB, 0xE4627FD2, 0x47E4642E, 0x35CCFB0D, 0xA9C3039F, 0x1A476D25, 0xC8482FBA,
     0xC5955BB2, 0x59A3C8BF, 0x26514ECB, 0xCA20BB8A, 0xD6034188, 0x8F4FB08C, 0x397DC4E8, 0x1CD,      0},
    {0x1B353CD,  0x663681F9, 0xA384EEBD, 0x4E882F80, 0x9F2FA6B7, 0x3D91480D, 0x6335F53F, 0x78605573, 0x916F6A87,
     0xD0FFD1F2, 0xB4D1B464, 0xD3C01144, 0xC428BC35, 0x7108D0DB, 0x11816DF8, 0x65BBD4C,  0x43,       0,
     0xCD248C67, 0xF695547E, 0x3EC4F6E,  0x303310D0, 0xF14F46FC, 0x48511F91, 0x5AB758A8, 0x51AC2CB9, 0x10A66B2B,
     0x58259812, 0x271E9C62, 0x83826EA4, 0x6D771C61, 0xB2D669FD, 0x2DEF403B, 0x57F0E4A9, 0x124,      0},
    {0x2D5FF45,  0xB0DA1E36, 0xFB19FA8B, 0x5A673018, 0x6189B12C, 0x6B292762, 0x218DAED2, 0x527D488F, 0xF29CEDA4,
     0xE1BB4FD8, 0x3C98724,  0x7EEFD5FD, 0x77132C20, 0xA8A09558, 0xBE18FD6C, 0x850ADED2, 0x171,      0,
     0xE604DB7C, 0x8740686C, 0xA2D43E7A, 0x6563697C, 0xFE992C1F, 0xF1870079, 0xB3B63595, 0x565C52F7, 0x3E68EF13,
     0x44794FF1, 0xA80A2F85, 0xB31880E,  0x5352A0C2, 0x5D7743CF, 0x59BF4BF5, 0xA7D039AB, 0x6A,       0}};

#endif /* __TEST_ECMUL_H */