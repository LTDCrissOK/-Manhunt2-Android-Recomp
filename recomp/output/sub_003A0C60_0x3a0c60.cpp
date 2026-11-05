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

// Function: sub_003A0C60
// Address: 0x3a0c60 - 0x3a1018
void sub_003A0C60_0x3a0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0C60_0x3a0c60");
#endif

    switch (ctx->pc) {
        case 0x3a0c98u: goto label_3a0c98;
        case 0x3a0cecu: goto label_3a0cec;
        case 0x3a0d3cu: goto label_3a0d3c;
        case 0x3a0de8u: goto label_3a0de8;
        case 0x3a0ef8u: goto label_3a0ef8;
        case 0x3a0f98u: goto label_3a0f98;
        default: break;
    }

    ctx->pc = 0x3a0c60u;

    // 0x3a0c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0c64: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3a0c68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a0c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a0c6c: 0x2454c488  addiu       $s4, $v0, -0x3B78
    ctx->pc = 0x3a0c6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952072));
    // 0x3a0c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0c74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a0c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a0c7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a0c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a0c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0c88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0c8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3a0c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3a0c90: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A0C90u;
    SET_GPR_U32(ctx, 31, 0x3A0C98u);
    ctx->pc = 0x3A0C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0C90u;
    // 0x3a0c94: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A0C90u, 0x3A0C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0C98u;
label_3a0c98:
    // 0x3a0c98: 0x2a101800  slti        $s0, $s0, 0x1800
    ctx->pc = 0x3a0c98u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6144) ? 1 : 0);
    // 0x3a0c9c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3a0c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ca0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3a0ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ca4: 0x160000d3  bnez        $s0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x3A0CA4u;
    {
        const bool branch_taken_0x3a0ca4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CA4u;
        // 0x3a0ca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ca4) {
            ctx->pc = 0x3A0FF4u;
            goto label_3a0ff4;
        }
    }
    ctx->pc = 0x3A0CACu;
    // 0x3a0cac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0cb0: 0x3c054149  lui         $a1, 0x4149
    ctx->pc = 0x3a0cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16713 << 16));
    // 0x3a0cb4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a0cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0cb8: 0x34a55846  ori         $a1, $a1, 0x5846
    ctx->pc = 0x3a0cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22598);
    // 0x3a0cbc: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3a0cbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0cc0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a0cc4: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x3a0cc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0cc8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3a0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a0ccc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a0cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a0cd0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3a0cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3a0cd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a0cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a0cd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0cdc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0CDCu;
    {
        const bool branch_taken_0x3a0cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a0cdc) {
            ctx->pc = 0x3A0CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0CDCu;
            // 0x3a0ce0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0CF8u;
            goto label_3a0cf8;
        }
    }
    ctx->pc = 0x3A0CE4u;
    // 0x3a0ce4: 0xc0e8406  jal         func_3A1018
    ctx->pc = 0x3A0CE4u;
    SET_GPR_U32(ctx, 31, 0x3A0CECu);
    ctx->pc = 0x3A0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0CE4u;
    // 0x3a0ce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1018u, 0x3A0CE4u, 0x3A0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0CECu;
label_3a0cec:
    // 0x3a0cec: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x3A0CECu;
    {
        const bool branch_taken_0x3a0cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0CECu;
        // 0x3a0cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0cec) {
            ctx->pc = 0x3A0FF4u;
            goto label_3a0ff4;
        }
    }
    ctx->pc = 0x3A0CF4u;
    // 0x3a0cf4: 0x0  nop
    ctx->pc = 0x3a0cf4u;
    // NOP
label_3a0cf8:
    // 0x3a0cf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a0cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0cfc: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3a0cfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0d00: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3a0d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0d04: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a0d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0d08: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0d0c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a0d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a0d10: 0x92270003  lbu         $a3, 0x3($s1)
    ctx->pc = 0x3a0d10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0d14: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a0d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0d18: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0d1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3a0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3a0d20: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x3a0d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x3a0d24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0d28: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x3a0d28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3a0d2c: 0x2082023  subu        $a0, $s0, $t0
    ctx->pc = 0x3a0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x3a0d30: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x3a0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x3a0d34: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3A0D34u;
    SET_GPR_U32(ctx, 31, 0x3A0D3Cu);
    ctx->pc = 0x3A0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0D34u;
    // 0x3a0d38: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3A0D34u, 0x3A0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0D3Cu;
label_3a0d3c:
    // 0x3a0d3c: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x3A0D3Cu;
    {
        const bool branch_taken_0x3a0d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0D3Cu;
        // 0x3a0d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0d3c) {
            ctx->pc = 0x3A0FF4u;
            goto label_3a0ff4;
        }
    }
    ctx->pc = 0x3A0D44u;
    // 0x3a0d44: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0d48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a0d4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a0d4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0d50: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3a0d50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a0d54: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a0d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0d58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a0d5c: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x3a0d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a0d60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0d64: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0d68: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3a0d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3a0d6c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0d70: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x3a0d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0d74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a0d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a0d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a0d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a0d80: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3a0d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x3a0d84: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a0d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0d88: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a0d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0d8c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3a0d8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0d90: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a0d94: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x3a0d94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0d98: 0x24d10008  addiu       $s1, $a2, 0x8
    ctx->pc = 0x3a0d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3a0d9c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0da0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a0da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a0da4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3a0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a0da8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3a0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3a0dac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0db0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3a0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3a0db4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0db8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0dbc: 0x24d10010  addiu       $s1, $a2, 0x10
    ctx->pc = 0x3a0dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a0dc0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0dc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0dc8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3A0DC8u;
    {
        const bool branch_taken_0x3a0dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0DC8u;
        // 0x3a0dcc: 0xae420210  sw          $v0, 0x210($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0dc8) {
            ctx->pc = 0x3A0ECCu;
            goto label_3a0ecc;
        }
    }
    ctx->pc = 0x3A0DD0u;
    // 0x3a0dd0: 0x264f0004  addiu       $t7, $s2, 0x4
    ctx->pc = 0x3a0dd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3a0dd4: 0x264e0008  addiu       $t6, $s2, 0x8
    ctx->pc = 0x3a0dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3a0dd8: 0x264d000c  addiu       $t5, $s2, 0xC
    ctx->pc = 0x3a0dd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3a0ddc: 0x264c0010  addiu       $t4, $s2, 0x10
    ctx->pc = 0x3a0ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3a0de0: 0x240a0210  addiu       $t2, $zero, 0x210
    ctx->pc = 0x3a0de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x3a0de4: 0x0  nop
    ctx->pc = 0x3a0de4u;
    // NOP
label_3a0de8:
    // 0x3a0de8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0dec: 0x1ea3021  addu        $a2, $t7, $t2
    ctx->pc = 0x3a0decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x3a0df0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a0df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0df4: 0x1ca3821  addu        $a3, $t6, $t2
    ctx->pc = 0x3a0df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x3a0df8: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3a0df8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0dfc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a0e00: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x3a0e00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0e04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a0e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0e08: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a0e0c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3a0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a0e10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a0e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a0e14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3a0e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3a0e18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0e1c: 0x1aa4021  addu        $t0, $t5, $t2
    ctx->pc = 0x3a0e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x3a0e20: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3a0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3a0e24: 0x18a4821  addu        $t1, $t4, $t2
    ctx->pc = 0x3a0e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3a0e28: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3a0e28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3a0e2c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3a0e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3a0e30: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0e34: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a0e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0e38: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3a0e38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0e3c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a0e40: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x3a0e40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0e44: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a0e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0e48: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a0e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a0e4c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3a0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a0e50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a0e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a0e54: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3a0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3a0e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0e5c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3a0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3a0e60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a0e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0e64: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a0e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0e68: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3a0e68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0e6c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a0e70: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x3a0e70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0e74: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a0e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0e78: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a0e7c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0e80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3a0e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a0e84: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3a0e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3a0e88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0e8c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3a0e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x3a0e90: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3a0e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0e94: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a0e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0e98: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0e9c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a0e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a0ea0: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x3a0ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0ea4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0ea8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3a0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3a0eac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0eb0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3a0eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3a0eb4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3a0eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3a0eb8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3a0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3a0ebc: 0x8e420210  lw          $v0, 0x210($s2)
    ctx->pc = 0x3a0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x3a0ec0: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x3a0ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a0ec4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3A0EC4u;
    {
        const bool branch_taken_0x3a0ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EC4u;
        // 0x3a0ec8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ec4) {
            ctx->pc = 0x3A0DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0de8;
        }
    }
    ctx->pc = 0x3A0ECCu;
label_3a0ecc:
    // 0x3a0ecc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3a0eccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0ed0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3a0ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3a0ed4: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A0ED4u;
    {
        const bool branch_taken_0x3a0ed4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0ED4u;
        // 0x3a0ed8: 0xae421894  sw          $v0, 0x1894($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ed4) {
            ctx->pc = 0x3A0F74u;
            goto label_3a0f74;
        }
    }
    ctx->pc = 0x3A0EDCu;
    // 0x3a0edc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3a0edcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ee0: 0x264d0008  addiu       $t5, $s2, 0x8
    ctx->pc = 0x3a0ee0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3a0ee4: 0x264c000a  addiu       $t4, $s2, 0xA
    ctx->pc = 0x3a0ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x3a0ee8: 0x264a000c  addiu       $t2, $s2, 0xC
    ctx->pc = 0x3a0ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3a0eec: 0x2649000e  addiu       $t1, $s2, 0xE
    ctx->pc = 0x3a0eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
    // 0x3a0ef0: 0x24081890  addiu       $t0, $zero, 0x1890
    ctx->pc = 0x3a0ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6288));
    // 0x3a0ef4: 0x0  nop
    ctx->pc = 0x3a0ef4u;
    // NOP
label_3a0ef8:
    // 0x3a0ef8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0efc: 0x1a82021  addu        $a0, $t5, $t0
    ctx->pc = 0x3a0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x3a0f00: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0f04: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3a0f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3a0f08: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0f0c: 0x1882821  addu        $a1, $t4, $t0
    ctx->pc = 0x3a0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x3a0f10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0f14: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x3a0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3a0f18: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x3a0f18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a0f1c: 0x1283821  addu        $a3, $t1, $t0
    ctx->pc = 0x3a0f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3a0f20: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a0f20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a0f24: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3a0f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3a0f28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0f2c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0f30: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3a0f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3a0f34: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0f38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0f3c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3a0f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a0f40: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0f44: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0f48: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3a0f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3a0f4c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0f50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0f54: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3a0f54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a0f58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0f5c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3a0f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0f60: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3a0f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3a0f64: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3a0f68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0f6c: 0x1560ffe2  bnez        $t3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3A0F6Cu;
    {
        const bool branch_taken_0x3a0f6c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F6Cu;
        // 0x3a0f70: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f6c) {
            ctx->pc = 0x3A0EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0ef8;
        }
    }
    ctx->pc = 0x3A0F74u;
label_3a0f74:
    // 0x3a0f74: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a0f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0f78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3a0f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3a0f7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a0f7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0f80: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a0f84: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A0F84u;
    {
        const bool branch_taken_0x3a0f84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F84u;
        // 0x3a0f88: 0xa243000c  sb          $v1, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f84) {
            ctx->pc = 0x3A0FF0u;
            goto label_3a0ff0;
        }
    }
    ctx->pc = 0x3A0F8Cu;
    // 0x3a0f8c: 0x26490004  addiu       $t1, $s2, 0x4
    ctx->pc = 0x3a0f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3a0f90: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3a0f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a0f94: 0x0  nop
    ctx->pc = 0x3a0f94u;
    // NOP
label_3a0f98:
    // 0x3a0f98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3a0f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0f9c: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x3a0f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3a0fa0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3a0fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a0fa4: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x3a0fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x3a0fa8: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3a0fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a0fac: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a0facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a0fb0: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x3a0fb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0fb4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a0fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a0fb8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3a0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a0fbc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3a0fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3a0fc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a0fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a0fc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3a0fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3a0fc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a0fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a0fcc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3a0fccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3a0fd0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3a0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3a0fd4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3a0fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3a0fd8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a0fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a0fdc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3a0fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a0fe0: 0x8242000c  lb          $v0, 0xC($s2)
    ctx->pc = 0x3a0fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3a0fe4: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x3a0fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a0fe8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A0FE8u;
    {
        const bool branch_taken_0x3a0fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0FE8u;
        // 0x3a0fec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0fe8) {
            ctx->pc = 0x3A0F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0f98;
        }
    }
    ctx->pc = 0x3A0FF0u;
label_3a0ff0:
    // 0x3a0ff0: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3a0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3a0ff4:
    // 0x3a0ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0ff8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0ffc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1000: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a1000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a1004: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a1004u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1008: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a100c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A100Cu;
        // 0x3a1010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1014u;
    // 0x3a1014: 0x0  nop
    ctx->pc = 0x3a1014u;
    // NOP
    ctx->pc = 0x3a1018u;
}
