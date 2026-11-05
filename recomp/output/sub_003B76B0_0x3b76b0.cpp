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

// Function: sub_003B76B0
// Address: 0x3b76b0 - 0x3b78a0
void sub_003B76B0_0x3b76b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B76B0_0x3b76b0");
#endif

    switch (ctx->pc) {
        case 0x3b76d0u: goto label_3b76d0;
        default: break;
    }

    ctx->pc = 0x3b76b0u;

    // 0x3b76b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b76b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b76b4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b76b4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b76b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b76bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b76bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b76c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b76c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b76c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b76c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b76cc: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b76ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b76d0:
    // 0x3b76d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b76d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b76d4: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b76d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b76d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b76d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b76dc: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b76dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b76e0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b76e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b76e4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b76e8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b76e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b76ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b76f0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b76f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b76f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b76f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b76f8: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b76f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b76fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b76fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7700: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b7700u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7704: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7704u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7708: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b7708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b770c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b770cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7710: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7710u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7714: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7714u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7718: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b771c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7720: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b7720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b7724: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7728: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7728u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b772c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b772cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7730: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7734: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7738: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b7738u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b773c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b773cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7740: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7744: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7748: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b774c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b774cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7750: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b7750u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7754: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7754u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7758: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b775c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b775cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b7760: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7760u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7764: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b7764u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7768: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b776c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7770: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7770u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7774: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b7774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b7778: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b7778u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b777c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b777cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7780: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7784: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7788: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7788u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b778c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b778cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b7790: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7790u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7794: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b7794u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7798: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b779c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b77a0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b77a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b77a4: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b77a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b77a8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b77a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b77ac: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b77acu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b77b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b77b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b77b4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b77b8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b77b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b77bc: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b77bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b77c0: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b77c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b77c4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b77c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b77c8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b77c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b77cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b77d0: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b77d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b77d4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b77d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b77d8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b77d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b77dc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b77dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b77e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b77e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b77e4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b77e8: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b77e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b77ec: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b77ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b77f0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b77f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b77f4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b77f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b77f8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b77f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b77fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7800: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b7800u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b7804: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7808: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7808u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b780c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b780cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7810: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7814: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7814u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7818: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b781c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b781cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7820: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7820u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7824: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7828: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7828u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b782c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b782cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7830: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7830u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7834: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7838: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7838u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b783c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b783cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7840: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7840u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7844: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7844u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7848: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7848u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b784c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b784cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7850: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7854u;
    {
        const bool branch_taken_0x3b7854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7854u;
        // 0x3b7858: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7854) {
            ctx->pc = 0x3B7868u;
            goto label_3b7868;
        }
    }
    ctx->pc = 0x3B785Cu;
    // 0x3b785c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B785Cu;
    {
        const bool branch_taken_0x3b785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B785Cu;
        // 0x3b7860: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b785c) {
            ctx->pc = 0x3B787Cu;
            goto label_3b787c;
        }
    }
    ctx->pc = 0x3B7864u;
    // 0x3b7864: 0x0  nop
    ctx->pc = 0x3b7864u;
    // NOP
label_3b7868:
    // 0x3b7868: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b7868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b786c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b786cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7870: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7870u;
    {
        const bool branch_taken_0x3b7870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7870) {
            ctx->pc = 0x3B7874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7870u;
            // 0x3b7874: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B787Cu;
            goto label_3b787c;
        }
    }
    ctx->pc = 0x3B7878u;
    // 0x3b7878: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b787c:
    // 0x3b787c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b787cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b7880: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b7880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b7884: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B7884u;
    {
        const bool branch_taken_0x3b7884 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7884u;
        // 0x3b7888: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7884) {
            ctx->pc = 0x3B76D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b76d0;
        }
    }
    ctx->pc = 0x3B788Cu;
    // 0x3b788c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b788cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b7890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b7894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b7894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7898: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7898u;
        // 0x3b789c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B78A0u;
}
