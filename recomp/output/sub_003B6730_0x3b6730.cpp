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

// Function: sub_003B6730
// Address: 0x3b6730 - 0x3b6920
void sub_003B6730_0x3b6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6730_0x3b6730");
#endif

    switch (ctx->pc) {
        case 0x3b6750u: goto label_3b6750;
        default: break;
    }

    ctx->pc = 0x3b6730u;

    // 0x3b6730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6734: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6734u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b673c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b673cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b674c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b674cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6750:
    // 0x3b6750: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6754: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6754u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6758: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b675c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b675cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6760: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6760u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6764: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6768: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b676c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6770: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6774: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6774u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6778: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b677c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b677cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6780: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b6780u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6784: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6784u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6788: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b678c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b678cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6790: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6790u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6794: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6794u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6798: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b679c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b67a0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b67a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b67a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b67a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b67a8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b67a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b67ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b67acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b67b0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b67b4: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b67b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b67b8: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b67b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b67bc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b67bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b67c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b67c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b67c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b67c8: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b67c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b67cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b67ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b67d0: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b67d0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b67d4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b67d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b67d8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b67dc: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b67dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b67e0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b67e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b67e4: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b67e4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b67e8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b67e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b67ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b67f0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b67f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b67f4: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b67f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b67f8: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b67f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b67fc: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b67fcu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6804: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6808: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6808u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b680c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b680cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6810: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6810u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6814: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6814u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6818: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b681c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6820: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6820u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6824: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6828: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6828u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b682c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b682cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6830: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6834: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b6834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b6838: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6838u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b683c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b683cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6840: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6840u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6844: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6844u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6848: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b684c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6850: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6850u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6854: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6858: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6858u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b685c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b685cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6860: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6864: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6868: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6868u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b686c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b686cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b6870: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6870u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6874: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6874u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6878: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b687c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6880: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b6880u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b6884: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6888: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6888u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b688c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b688cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6890: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6894: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b6894u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b6898: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b689c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b689cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b68a0: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b68a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b68a4: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b68a8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b68a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b68ac: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b68acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b68b0: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b68b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b68b4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b68b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b68b8: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b68b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b68bc: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b68bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b68c0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b68c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b68c4: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b68c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b68c8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b68c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b68cc: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b68ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b68d0: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b68d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b68d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B68D4u;
    {
        const bool branch_taken_0x3b68d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68D4u;
        // 0x3b68d8: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68d4) {
            ctx->pc = 0x3B68E8u;
            goto label_3b68e8;
        }
    }
    ctx->pc = 0x3B68DCu;
    // 0x3b68dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B68DCu;
    {
        const bool branch_taken_0x3b68dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68DCu;
        // 0x3b68e0: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68dc) {
            ctx->pc = 0x3B68FCu;
            goto label_3b68fc;
        }
    }
    ctx->pc = 0x3B68E4u;
    // 0x3b68e4: 0x0  nop
    ctx->pc = 0x3b68e4u;
    // NOP
label_3b68e8:
    // 0x3b68e8: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b68ec: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b68ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b68f0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B68F0u;
    {
        const bool branch_taken_0x3b68f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b68f0) {
            ctx->pc = 0x3B68F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B68F0u;
            // 0x3b68f4: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B68FCu;
            goto label_3b68fc;
        }
    }
    ctx->pc = 0x3B68F8u;
    // 0x3b68f8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b68fc:
    // 0x3b68fc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b68fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6900: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6904: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6904u;
    {
        const bool branch_taken_0x3b6904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6904u;
        // 0x3b6908: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6904) {
            ctx->pc = 0x3B6750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6750;
        }
    }
    ctx->pc = 0x3B690Cu;
    // 0x3b690c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b690cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6914: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6918: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6918u;
        // 0x3b691c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6920u;
}
