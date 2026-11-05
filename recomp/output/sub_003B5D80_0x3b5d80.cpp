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

// Function: sub_003B5D80
// Address: 0x3b5d80 - 0x3b5f70
void sub_003B5D80_0x3b5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5D80_0x3b5d80");
#endif

    switch (ctx->pc) {
        case 0x3b5da0u: goto label_3b5da0;
        default: break;
    }

    ctx->pc = 0x3b5d80u;

    // 0x3b5d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5d84: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b5d84u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b5d8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b5d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b5d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b5d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b5d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b5d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b5d9c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b5d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b5da0:
    // 0x3b5da0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b5da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5da4: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b5da4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5da8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5dac: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b5dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b5db0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5db0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5db4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5db8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5db8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5dbc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5dc0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b5dc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5dc4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5dc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5dc8: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b5dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b5dcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5dd0: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b5dd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5dd4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5dd4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5dd8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5ddc: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b5ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b5de0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b5de0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5de4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5de4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5de8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5dec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5df0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b5df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b5df4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5df8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b5df8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5dfc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5dfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e00: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5e04: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b5e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b5e08: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b5e08u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e0c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e10: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e14: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5e18: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b5e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b5e1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e20: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b5e20u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e24: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e28: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5e2c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b5e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b5e30: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b5e30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b5e34: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b5e34u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e38: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e3c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5e40: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e40u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e44: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b5e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b5e48: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b5e48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b5e4c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b5e4cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e54: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5e58: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e5c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b5e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b5e60: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b5e60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b5e64: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b5e64u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e68: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5e70: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e70u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e74: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b5e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b5e78: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b5e78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b5e7c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b5e7cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e84: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5e88: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e8c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b5e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b5e90: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b5e90u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5e94: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5e94u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5e98: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5e9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5ea0: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b5ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b5ea4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b5ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b5ea8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b5ea8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5eac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5eacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5eb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5eb4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b5eb8: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b5eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b5ebc: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b5ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b5ec0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b5ec0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5ec4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5ec4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5ec8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b5ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5ecc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b5ed0: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b5ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b5ed4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b5ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b5ed8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b5ed8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5edc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b5edcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b5ee0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b5ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5ee4: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b5ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b5ee8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b5ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b5eec: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b5eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b5ef0: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b5ef0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b5ef4: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b5ef8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b5ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b5efc: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b5efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b5f00: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b5f00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b5f04: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b5f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b5f08: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b5f08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b5f0c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b5f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b5f10: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b5f10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b5f14: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b5f14u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b5f18: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b5f18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b5f1c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b5f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b5f20: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b5f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b5f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5F24u;
    {
        const bool branch_taken_0x3b5f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F24u;
        // 0x3b5f28: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5f24) {
            ctx->pc = 0x3B5F38u;
            goto label_3b5f38;
        }
    }
    ctx->pc = 0x3B5F2Cu;
    // 0x3b5f2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5F2Cu;
    {
        const bool branch_taken_0x3b5f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F2Cu;
        // 0x3b5f30: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5f2c) {
            ctx->pc = 0x3B5F4Cu;
            goto label_3b5f4c;
        }
    }
    ctx->pc = 0x3B5F34u;
    // 0x3b5f34: 0x0  nop
    ctx->pc = 0x3b5f34u;
    // NOP
label_3b5f38:
    // 0x3b5f38: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b5f3c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b5f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b5f40: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B5F40u;
    {
        const bool branch_taken_0x3b5f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5f40) {
            ctx->pc = 0x3B5F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5F40u;
            // 0x3b5f44: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5F4Cu;
            goto label_3b5f4c;
        }
    }
    ctx->pc = 0x3B5F48u;
    // 0x3b5f48: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b5f4c:
    // 0x3b5f4c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b5f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b5f50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b5f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b5f54: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B5F54u;
    {
        const bool branch_taken_0x3b5f54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F54u;
        // 0x3b5f58: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5f54) {
            ctx->pc = 0x3B5DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5da0;
        }
    }
    ctx->pc = 0x3B5F5Cu;
    // 0x3b5f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b5f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b5f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b5f64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b5f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5f68: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5F68u;
        // 0x3b5f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5F70u;
}
