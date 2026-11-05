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

// Function: sub_003B72D0
// Address: 0x3b72d0 - 0x3b74c0
void sub_003B72D0_0x3b72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B72D0_0x3b72d0");
#endif

    switch (ctx->pc) {
        case 0x3b72f0u: goto label_3b72f0;
        default: break;
    }

    ctx->pc = 0x3b72d0u;

    // 0x3b72d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b72d4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b72d4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b72dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b72dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b72e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b72e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b72e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b72ec: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b72ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b72f0:
    // 0x3b72f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b72f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72f4: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b72f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b72f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b72f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b72fc: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b72fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b7300: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7300u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7304: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7308: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b730c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7310: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7310u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7314: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7314u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7318: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b7318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b731c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b731cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7320: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b7320u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7324: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7324u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7328: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b732c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b732cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7330: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7330u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7334: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7334u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7338: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b733c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7340: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b7340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b7344: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7348: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7348u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b734c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b734cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7350: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b7354: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7358: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b7358u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b735c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b735cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7360: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7364: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7368: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b736c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b736cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7370: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b7370u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7374: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7374u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7378: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b737c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b737cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b7380: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7380u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7384: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b7384u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7388: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b738c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7390: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7390u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7394: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b7394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b7398: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b7398u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b739c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b739cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b73a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b73a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b73a4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b73a8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b73a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b73ac: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b73acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b73b0: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b73b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b73b4: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b73b4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b73b8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b73b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b73bc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b73c0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b73c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b73c4: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b73c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b73c8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b73c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b73cc: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b73ccu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b73d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b73d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b73d4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b73d8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b73d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b73dc: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b73dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b73e0: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b73e0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b73e4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b73e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b73e8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b73e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b73ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b73f0: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b73f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b73f4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b73f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b73f8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b73f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b73fc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b73fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7400: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7404: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7408: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b7408u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b740c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b740cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b7410: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7410u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7414: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7414u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7418: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b741c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7420: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b7420u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b7424: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7428: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7428u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b742c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b742cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7430: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7434: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7434u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7438: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b743c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b743cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7440: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7440u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7444: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7448: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7448u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b744c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b744cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7450: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7450u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7454: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7458: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7458u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b745c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7460: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7460u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7464: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7464u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7468: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7468u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b746c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b746cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7470: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7474u;
    {
        const bool branch_taken_0x3b7474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7474u;
        // 0x3b7478: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7474) {
            ctx->pc = 0x3B7488u;
            goto label_3b7488;
        }
    }
    ctx->pc = 0x3B747Cu;
    // 0x3b747c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B747Cu;
    {
        const bool branch_taken_0x3b747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B747Cu;
        // 0x3b7480: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b747c) {
            ctx->pc = 0x3B749Cu;
            goto label_3b749c;
        }
    }
    ctx->pc = 0x3B7484u;
    // 0x3b7484: 0x0  nop
    ctx->pc = 0x3b7484u;
    // NOP
label_3b7488:
    // 0x3b7488: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b7488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b748c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7490: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7490u;
    {
        const bool branch_taken_0x3b7490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7490) {
            ctx->pc = 0x3B7494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7490u;
            // 0x3b7494: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B749Cu;
            goto label_3b749c;
        }
    }
    ctx->pc = 0x3B7498u;
    // 0x3b7498: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b749c:
    // 0x3b749c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b749cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b74a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b74a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b74a4: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B74A4u;
    {
        const bool branch_taken_0x3b74a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74A4u;
        // 0x3b74a8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b74a4) {
            ctx->pc = 0x3B72F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b72f0;
        }
    }
    ctx->pc = 0x3B74ACu;
    // 0x3b74ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b74acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b74b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b74b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b74b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b74b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b74b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B74B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B74B8u;
        // 0x3b74bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B74B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B74C0u;
}
