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

// Function: sub_003B7A90
// Address: 0x3b7a90 - 0x3b7d38
void sub_003B7A90_0x3b7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7A90_0x3b7a90");
#endif

    switch (ctx->pc) {
        case 0x3b7ab0u: goto label_3b7ab0;
        case 0x3b7c90u: goto label_3b7c90;
        case 0x3b7ce4u: goto label_3b7ce4;
        case 0x3b7d0cu: goto label_3b7d0c;
        default: break;
    }

    ctx->pc = 0x3b7a90u;

    // 0x3b7a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7a94: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b7a94u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7a9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b7a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b7aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b7aa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b7aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7aa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b7aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b7aac: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b7aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b7ab0:
    // 0x3b7ab0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b7ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7ab4: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7ab4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7ab8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7abc: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b7abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b7ac0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7ac0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7ac4: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b7ac8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7acc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7ad0: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7ad0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7ad4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7ad4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7ad8: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b7ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b7adc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7ae0: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b7ae0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7ae4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7ae4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7ae8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7aec: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b7aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7af0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7af0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7af4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7af4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7af8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7afc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7b00: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b7b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b7b04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b08: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7b08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b0c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b10: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7b14: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7b18: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b7b18u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b1c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b20: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b24: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7b28: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7b2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b30: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b7b30u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b34: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b38: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7b3c: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b7b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b7b40: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7b40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7b44: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b7b44u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b48: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b4c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7b50: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b54: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b7b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b7b58: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b7b58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b7b5c: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b7b5cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b64: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7b68: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b6c: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b7b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b7b70: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7b70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7b74: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b7b74u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b78: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b7c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7b80: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b84: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b7b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b7b88: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7b88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7b8c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b7b8cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7b90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b94: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7b98: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7b98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7b9c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b7b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b7ba0: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b7ba0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7ba4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7ba4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7ba8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7ba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7bac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7bb0: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b7bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b7bb4: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b7bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b7bb8: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b7bb8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7bbc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7bbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7bc0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7bc4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b7bc8: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b7bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b7bcc: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b7bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b7bd0: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b7bd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7bd4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7bd4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7bd8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b7bd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7bdc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b7be0: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b7be0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b7be4: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b7be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b7be8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b7be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7bec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b7becu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b7bf0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b7bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7bf4: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b7bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b7bf8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b7bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b7bfc: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b7bfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b7c00: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b7c00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b7c04: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b7c08: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b7c08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b7c0c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b7c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b7c10: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b7c10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b7c14: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b7c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b7c18: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b7c18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b7c1c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b7c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b7c20: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b7c20u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b7c24: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b7c24u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b7c28: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b7c28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b7c2c: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b7c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b7c30: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b7c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b7c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7C34u;
    {
        const bool branch_taken_0x3b7c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C34u;
        // 0x3b7c38: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c34) {
            ctx->pc = 0x3B7C48u;
            goto label_3b7c48;
        }
    }
    ctx->pc = 0x3B7C3Cu;
    // 0x3b7c3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7C3Cu;
    {
        const bool branch_taken_0x3b7c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C3Cu;
        // 0x3b7c40: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c3c) {
            ctx->pc = 0x3B7C5Cu;
            goto label_3b7c5c;
        }
    }
    ctx->pc = 0x3B7C44u;
    // 0x3b7c44: 0x0  nop
    ctx->pc = 0x3b7c44u;
    // NOP
label_3b7c48:
    // 0x3b7c48: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b7c4c: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b7c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7c50: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B7C50u;
    {
        const bool branch_taken_0x3b7c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7c50) {
            ctx->pc = 0x3B7C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7C50u;
            // 0x3b7c54: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7C5Cu;
            goto label_3b7c5c;
        }
    }
    ctx->pc = 0x3B7C58u;
    // 0x3b7c58: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b7c5c:
    // 0x3b7c5c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b7c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b7c60: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b7c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b7c64: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B7C64u;
    {
        const bool branch_taken_0x3b7c64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C64u;
        // 0x3b7c68: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c64) {
            ctx->pc = 0x3B7AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ab0;
        }
    }
    ctx->pc = 0x3B7C6Cu;
    // 0x3b7c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b7c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b7c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b7c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7c78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C78u;
        // 0x3b7c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7C80u;
    // 0x3b7c80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3b7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3b7c84: 0x0  nop
    ctx->pc = 0x3b7c84u;
    // NOP
    // 0x3b7c88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b7c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b7c8c: 0x0  nop
    ctx->pc = 0x3b7c8cu;
    // NOP
label_3b7c90:
    // 0x3b7c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7c94: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3b7c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3b7c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7c9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7ca0: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b7ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3b7ca4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b7ca8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3b7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3b7cac: 0xae03ace0  sw          $v1, -0x5320($s0)
    ctx->pc = 0x3b7cacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x42ACE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACE0u, _value); } while (0);
    // 0x3b7cb0: 0x8e02ace0  lw          $v0, -0x5320($s0)
    ctx->pc = 0x3b7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42ACE0u));
    // 0x3b7cb4: 0xac82ace4  sw          $v0, -0x531C($a0)
    ctx->pc = 0x3b7cb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42ACE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACE4u, _value); } while (0);
    // 0x3b7cb8: 0x8e03ace0  lw          $v1, -0x5320($s0)
    ctx->pc = 0x3b7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42ACE0u));
    // 0x3b7cbc: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7CBCu;
    {
        const bool branch_taken_0x3b7cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CBCu;
        // 0x3b7cc0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cbc) {
            ctx->pc = 0x3B7CD8u;
            goto label_3b7cd8;
        }
    }
    ctx->pc = 0x3B7CC4u;
    // 0x3b7cc4: 0xae00ace0  sw          $zero, -0x5320($s0)
    ctx->pc = 0x3b7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946016), GPR_U32(ctx, 0));
    // 0x3b7cc8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b7ccc: 0xac40acb4  sw          $zero, -0x534C($v0)
    ctx->pc = 0x3b7cccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x42ACB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACB4u, _value); } while (0);
    // 0x3b7cd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B7CD0u;
    {
        const bool branch_taken_0x3b7cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CD0u;
        // 0x3b7cd4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cd0) {
            ctx->pc = 0x3B7D24u;
            goto label_3b7d24;
        }
    }
    ctx->pc = 0x3B7CD8u;
label_3b7cd8:
    // 0x3b7cd8: 0x8c44aca8  lw          $a0, -0x5358($v0)
    ctx->pc = 0x3b7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945960)));
    // 0x3b7cdc: 0xc0f2674  jal         func_3C99D0
    ctx->pc = 0x3B7CDCu;
    SET_GPR_U32(ctx, 31, 0x3B7CE4u);
    ctx->pc = 0x3C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99D0u, 0x3B7CDCu, 0x3B7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CE4u;
label_3b7ce4:
    // 0x3b7ce4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3b7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3b7ce8: 0x8c62ac94  lw          $v0, -0x536C($v1)
    ctx->pc = 0x3b7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42AC94u));
    // 0x3b7cec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B7CECu;
    {
        const bool branch_taken_0x3b7cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CECu;
        // 0x3b7cf0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cec) {
            ctx->pc = 0x3B7D14u;
            goto label_3b7d14;
        }
    }
    ctx->pc = 0x3B7CF4u;
    // 0x3b7cf4: 0x8c439500  lw          $v1, -0x6B00($v0)
    ctx->pc = 0x3b7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x3b7cf8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7CF8u;
    {
        const bool branch_taken_0x3b7cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CF8u;
        // 0x3b7cfc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cf8) {
            ctx->pc = 0x3B7D14u;
            goto label_3b7d14;
        }
    }
    ctx->pc = 0x3B7D00u;
    // 0x3b7d00: 0x8c44aca0  lw          $a0, -0x5360($v0)
    ctx->pc = 0x3b7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945952)));
    // 0x3b7d04: 0xc0f2674  jal         func_3C99D0
    ctx->pc = 0x3B7D04u;
    SET_GPR_U32(ctx, 31, 0x3B7D0Cu);
    ctx->pc = 0x3C99D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99D0u, 0x3B7D04u, 0x3B7D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D0Cu;
label_3b7d0c:
    // 0x3b7d0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7D0Cu;
    {
        const bool branch_taken_0x3b7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7d0c) {
            ctx->pc = 0x3B7D1Cu;
            goto label_3b7d1c;
        }
    }
    ctx->pc = 0x3B7D14u;
label_3b7d14:
    // 0x3b7d14: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b7d18: 0xac40acb4  sw          $zero, -0x534C($v0)
    ctx->pc = 0x3b7d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x42ACB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42ACB4u, _value); } while (0);
label_3b7d1c:
    // 0x3b7d1c: 0xae00ace0  sw          $zero, -0x5320($s0)
    ctx->pc = 0x3b7d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946016), GPR_U32(ctx, 0));
    // 0x3b7d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7d24:
    // 0x3b7d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7d28: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D28u;
        // 0x3b7d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7D30u;
    // 0x3b7d30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b7d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b7d34: 0x0  nop
    ctx->pc = 0x3b7d34u;
    // NOP
    ctx->pc = 0x3b7d38u;
}
