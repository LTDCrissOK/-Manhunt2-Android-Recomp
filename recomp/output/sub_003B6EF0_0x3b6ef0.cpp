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

// Function: sub_003B6EF0
// Address: 0x3b6ef0 - 0x3b70e0
void sub_003B6EF0_0x3b6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6EF0_0x3b6ef0");
#endif

    switch (ctx->pc) {
        case 0x3b6f10u: goto label_3b6f10;
        default: break;
    }

    ctx->pc = 0x3b6ef0u;

    // 0x3b6ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6ef4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6ef4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6efc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b6efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b6f0c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b6f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6f10:
    // 0x3b6f10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6f14: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6f14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f1c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b6f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6f20: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f20u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f24: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6f28: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f2c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6f30: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6f30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f34: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f38: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b6f3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f40: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b6f40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f44: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f48: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6f4c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b6f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6f50: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6f50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f54: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f58: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f5c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6f60: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b6f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b6f64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f68: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6f68u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f6c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f70: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6f74: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b6f78: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b6f78u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f7c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f84: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6f88: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6f8c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6f90: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b6f90u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6f94: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6f94u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6f98: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b6f9c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b6f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b6fa0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6fa4: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b6fa4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6fa8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6fac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6fb0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6fb0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6fb4: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6fb8: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b6fbc: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b6fbcu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6fc0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6fc4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6fc8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6fc8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6fcc: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b6fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6fd0: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6fd4: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6fd4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6fd8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6fdc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6fe0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6fe0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6fe4: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6fe8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6fec: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b6fecu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6ff0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6ff4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6ff8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6ff8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6ffc: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b6ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b7000: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b7000u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7004: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7004u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7008: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b700c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7010: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b7010u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b7014: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b7014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b7018: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7018u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b701c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b701cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7020: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7024: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7028: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b7028u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b702c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b702cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b7030: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7030u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7034: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7034u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7038: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b703c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7040: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b7040u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b7044: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7048: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7048u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b704c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b704cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7050: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7054: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7054u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7058: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b705c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b705cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7060: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7060u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7064: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7068: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7068u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b706c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b706cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7070: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7074: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7078: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7078u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b707c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7080: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7080u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7084: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7084u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7088: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7088u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b708c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b708cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7090: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7094u;
    {
        const bool branch_taken_0x3b7094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7094u;
        // 0x3b7098: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7094) {
            ctx->pc = 0x3B70A8u;
            goto label_3b70a8;
        }
    }
    ctx->pc = 0x3B709Cu;
    // 0x3b709c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B709Cu;
    {
        const bool branch_taken_0x3b709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B709Cu;
        // 0x3b70a0: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b709c) {
            ctx->pc = 0x3B70BCu;
            goto label_3b70bc;
        }
    }
    ctx->pc = 0x3B70A4u;
    // 0x3b70a4: 0x0  nop
    ctx->pc = 0x3b70a4u;
    // NOP
label_3b70a8:
    // 0x3b70a8: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b70ac: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b70acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b70b0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B70B0u;
    {
        const bool branch_taken_0x3b70b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b70b0) {
            ctx->pc = 0x3B70B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B70B0u;
            // 0x3b70b4: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B70BCu;
            goto label_3b70bc;
        }
    }
    ctx->pc = 0x3B70B8u;
    // 0x3b70b8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b70bc:
    // 0x3b70bc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b70bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b70c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b70c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b70c4: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B70C4u;
    {
        const bool branch_taken_0x3b70c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70C4u;
        // 0x3b70c8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b70c4) {
            ctx->pc = 0x3B6F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6f10;
        }
    }
    ctx->pc = 0x3B70CCu;
    // 0x3b70cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b70ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b70d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b70d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b70d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b70d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b70d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B70D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70D8u;
        // 0x3b70dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B70D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B70E0u;
}
