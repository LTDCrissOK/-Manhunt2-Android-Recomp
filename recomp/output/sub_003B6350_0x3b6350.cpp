#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B6350
// Address: 0x3b6350 - 0x3b6540
void sub_003B6350_0x3b6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6350_0x3b6350");
#endif

    switch (ctx->pc) {
        case 0x3b6370u: goto label_3b6370;
        default: break;
    }

    ctx->pc = 0x3b6350u;

    // 0x3b6350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6354: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6354u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b635c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b635cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b636c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b636cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6370:
    // 0x3b6370: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6374: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6374u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6378: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b637c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6380: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6380u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6384: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6388: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b638c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6390: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6390u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6394: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6394u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6398: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b639c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b639cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b63a0: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b63a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b63a4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b63a4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b63a8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b63ac: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b63acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b63b0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b63b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b63b4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b63b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b63b8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b63b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b63bc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b63c0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b63c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b63c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b63c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b63c8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b63c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b63cc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b63ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b63d0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b63d4: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b63d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b63d8: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b63d8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b63dc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b63dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b63e0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b63e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b63e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b63e8: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b63e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b63ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b63ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b63f0: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b63f0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b63f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b63f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b63f8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b63fc: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b63fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b6400: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6400u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6404: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b6404u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6408: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b640c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6410: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6410u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6414: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6418: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6418u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b641c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b641cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6420: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6424: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6428: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6428u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b642c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b642cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6430: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6430u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6434: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6434u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6438: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b643c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6440: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6440u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6444: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6448: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6448u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b644c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b644cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6454: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6458: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6458u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b645c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b645cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6460: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6460u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6464: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6464u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6468: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b646c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6470: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6470u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6474: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6478: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6478u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b647c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b647cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6480: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6484: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b6488: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6488u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b648c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b648cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b6490: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6490u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6494: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6494u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6498: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b649c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b64a0: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b64a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b64a4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b64a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b64a8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b64a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b64ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b64acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b64b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b64b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b64b4: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b64b4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b64b8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b64b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b64bc: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b64bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b64c0: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b64c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b64c4: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b64c8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b64c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b64cc: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b64ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b64d0: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b64d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b64d4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b64d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b64d8: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b64d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b64dc: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b64dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b64e0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b64e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b64e4: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b64e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b64e8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b64e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b64ec: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b64ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b64f0: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b64f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b64f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B64F4u;
    {
        const bool branch_taken_0x3b64f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64F4u;
        // 0x3b64f8: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64f4) {
            ctx->pc = 0x3B6508u;
            goto label_3b6508;
        }
    }
    ctx->pc = 0x3B64FCu;
    // 0x3b64fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B64FCu;
    {
        const bool branch_taken_0x3b64fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64FCu;
        // 0x3b6500: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64fc) {
            ctx->pc = 0x3B651Cu;
            goto label_3b651c;
        }
    }
    ctx->pc = 0x3B6504u;
    // 0x3b6504: 0x0  nop
    ctx->pc = 0x3b6504u;
    // NOP
label_3b6508:
    // 0x3b6508: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b6508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b650c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b650cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6510: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6510u;
    {
        const bool branch_taken_0x3b6510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6510) {
            ctx->pc = 0x3B6514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6510u;
            // 0x3b6514: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B651Cu;
            goto label_3b651c;
        }
    }
    ctx->pc = 0x3B6518u;
    // 0x3b6518: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b651c:
    // 0x3b651c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b651cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6520: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6524: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6524u;
    {
        const bool branch_taken_0x3b6524 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6524u;
        // 0x3b6528: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6524) {
            ctx->pc = 0x3B6370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6370;
        }
    }
    ctx->pc = 0x3B652Cu;
    // 0x3b652c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b652cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6538: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6538u;
        // 0x3b653c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6540u;
}
