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

// Function: sub_003B6D00
// Address: 0x3b6d00 - 0x3b6ef0
void sub_003B6D00_0x3b6d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6D00_0x3b6d00");
#endif

    switch (ctx->pc) {
        case 0x3b6d20u: goto label_3b6d20;
        default: break;
    }

    ctx->pc = 0x3b6d00u;

    // 0x3b6d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6d04: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6d04u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6d0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b6d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b6d1c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b6d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6d20:
    // 0x3b6d20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d24: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6d24u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6d28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d2c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b6d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6d30: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6d30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6d34: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6d38: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6d38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d3c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6d40: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6d40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6d44: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6d44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6d48: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b6d4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d50: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b6d50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6d54: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6d54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6d58: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6d5c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b6d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6d60: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6d60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6d64: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6d64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6d68: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6d70: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b6d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b6d74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d78: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6d78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6d7c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6d7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6d80: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6d84: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b6d88: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b6d88u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6d8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6d8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6d90: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6d90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6d98: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6d9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6da0: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b6da0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6da4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6da4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6da8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6dac: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b6dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b6db0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6db0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6db4: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b6db4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6db8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6db8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6dbc: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x3b6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x3b6dc0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6dc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6dc4: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6dc8: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b6dcc: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b6dccu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6dd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6dd4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6dd8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6dd8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6ddc: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b6ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6de0: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6de0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6de4: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6de4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6de8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6dec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6df0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6df0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6df4: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6df8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6df8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6dfc: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b6dfcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6e00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6e04: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6e08: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6e08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6e0c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b6e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6e10: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6e10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6e14: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6e14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6e18: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6e18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6e1c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6e20: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6e20u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6e24: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6e28: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6e28u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6e2c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6e2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6e30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6e34: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6e38: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6e38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b6e3c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b6e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b6e40: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6e40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6e44: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6e44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6e48: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6e4c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6e50: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b6e50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b6e54: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6e58: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6e58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6e5c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6e5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6e60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6e64: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b6e64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b6e68: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b6e6c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b6e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6e70: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b6e70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b6e74: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b6e78: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b6e78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b6e7c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b6e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6e80: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b6e80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b6e84: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b6e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b6e88: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b6e88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b6e8c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b6e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b6e90: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6e90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6e94: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6e94u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6e98: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6e98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6e9c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b6e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b6ea0: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b6ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b6ea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6EA4u;
    {
        const bool branch_taken_0x3b6ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EA4u;
        // 0x3b6ea8: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ea4) {
            ctx->pc = 0x3B6EB8u;
            goto label_3b6eb8;
        }
    }
    ctx->pc = 0x3B6EACu;
    // 0x3b6eac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6EACu;
    {
        const bool branch_taken_0x3b6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EACu;
        // 0x3b6eb0: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6eac) {
            ctx->pc = 0x3B6ECCu;
            goto label_3b6ecc;
        }
    }
    ctx->pc = 0x3B6EB4u;
    // 0x3b6eb4: 0x0  nop
    ctx->pc = 0x3b6eb4u;
    // NOP
label_3b6eb8:
    // 0x3b6eb8: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b6ebc: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b6ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6ec0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6EC0u;
    {
        const bool branch_taken_0x3b6ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6ec0) {
            ctx->pc = 0x3B6EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6EC0u;
            // 0x3b6ec4: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6ECCu;
            goto label_3b6ecc;
        }
    }
    ctx->pc = 0x3B6EC8u;
    // 0x3b6ec8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b6ecc:
    // 0x3b6ecc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b6eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6ed0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6ed4: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6ED4u;
    {
        const bool branch_taken_0x3b6ed4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6ED4u;
        // 0x3b6ed8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ed4) {
            ctx->pc = 0x3B6D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6d20;
        }
    }
    ctx->pc = 0x3B6EDCu;
    // 0x3b6edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EE8u;
        // 0x3b6eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6EF0u;
}
