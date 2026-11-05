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

// Function: sub_003B6B10
// Address: 0x3b6b10 - 0x3b6d00
void sub_003B6B10_0x3b6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6B10_0x3b6b10");
#endif

    switch (ctx->pc) {
        case 0x3b6b30u: goto label_3b6b30;
        default: break;
    }

    ctx->pc = 0x3b6b10u;

    // 0x3b6b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6b14: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x3b6b14u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6b1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b6b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b6b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b6b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b6b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b6b2c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x3b6b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b6b30:
    // 0x3b6b30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b6b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b34: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6b34u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6b38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6b3c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x3b6b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b6b40: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6b40u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6b44: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6b48: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6b4c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6b50: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6b50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6b54: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6b54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6b58: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x3b6b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x3b6b5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6b60: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x3b6b60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6b64: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6b64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6b68: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6b6c: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x3b6b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6b70: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6b70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6b74: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6b74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6b78: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6b7c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6b80: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3b6b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b6b84: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6b88: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6b88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6b8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6b8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6b90: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6b94: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b6b98: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x3b6b98u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6b9c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6b9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6ba0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6ba4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6ba8: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6bac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6bb0: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x3b6bb0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6bb4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6bb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6bb8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6bbc: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x3b6bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x3b6bc0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6bc4: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x3b6bc4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6bc8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6bcc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6bd0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6bd0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6bd4: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x3b6bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x3b6bd8: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x3b6bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x3b6bdc: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x3b6bdcu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6be0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6be4: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x3b6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x3b6be8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6be8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6bec: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x3b6becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x3b6bf0: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6bf4: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x3b6bf4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6bf8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6bfc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6c00: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6c00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6c04: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x3b6c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x3b6c08: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6c08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6c0c: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x3b6c0cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6c10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6c14: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6c18: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6c18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6c1c: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x3b6c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b6c20: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x3b6c20u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6c24: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6c24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6c28: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6c2c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6c30: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x3b6c30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x3b6c34: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x3b6c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3b6c38: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x3b6c38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6c3c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6c3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6c40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6c44: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x3b6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3b6c48: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x3b6c48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x3b6c4c: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x3b6c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b6c50: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x3b6c50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6c54: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6c54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6c58: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3b6c58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6c5c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3b6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3b6c60: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x3b6c60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x3b6c64: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3b6c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3b6c68: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x3b6c68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6c6c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b6c6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b6c70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3b6c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6c74: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x3b6c74u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x3b6c78: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3b6c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b6c7c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x3b6c7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b6c80: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x3b6c80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3b6c84: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x3b6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x3b6c88: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x3b6c88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x3b6c8c: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x3b6c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b6c90: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x3b6c90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x3b6c94: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x3b6c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b6c98: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x3b6c98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x3b6c9c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b6c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b6ca0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x3b6ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x3b6ca4: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x3b6ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3b6ca8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x3b6ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x3b6cac: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x3b6cacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3b6cb0: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x3b6cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x3b6cb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6CB4u;
    {
        const bool branch_taken_0x3b6cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CB4u;
        // 0x3b6cb8: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6cb4) {
            ctx->pc = 0x3B6CC8u;
            goto label_3b6cc8;
        }
    }
    ctx->pc = 0x3B6CBCu;
    // 0x3b6cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6CBCu;
    {
        const bool branch_taken_0x3b6cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CBCu;
        // 0x3b6cc0: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6cbc) {
            ctx->pc = 0x3B6CDCu;
            goto label_3b6cdc;
        }
    }
    ctx->pc = 0x3B6CC4u;
    // 0x3b6cc4: 0x0  nop
    ctx->pc = 0x3b6cc4u;
    // NOP
label_3b6cc8:
    // 0x3b6cc8: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x3b6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x3b6ccc: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x3b6cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b6cd0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6CD0u;
    {
        const bool branch_taken_0x3b6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6cd0) {
            ctx->pc = 0x3B6CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6CD0u;
            // 0x3b6cd4: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6CDCu;
            goto label_3b6cdc;
        }
    }
    ctx->pc = 0x3B6CD8u;
    // 0x3b6cd8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_3b6cdc:
    // 0x3b6cdc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3b6cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6ce0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3b6ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b6ce4: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3B6CE4u;
    {
        const bool branch_taken_0x3b6ce4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CE4u;
        // 0x3b6ce8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ce4) {
            ctx->pc = 0x3B6B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6b30;
        }
    }
    ctx->pc = 0x3B6CECu;
    // 0x3b6cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b6cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b6cf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b6cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CF8u;
        // 0x3b6cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6D00u;
}
