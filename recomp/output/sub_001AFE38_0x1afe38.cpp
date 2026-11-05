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

// Function: sub_001AFE38
// Address: 0x1afe38 - 0x1aff20
void sub_001AFE38_0x1afe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFE38_0x1afe38");
#endif

    switch (ctx->pc) {
        case 0x1afeb4u: goto label_1afeb4;
        case 0x1afeccu: goto label_1afecc;
        case 0x1afeecu: goto label_1afeec;
        case 0x1aff00u: goto label_1aff00;
        default: break;
    }

    ctx->pc = 0x1afe38u;

    // 0x1afe38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afe3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afe40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1afe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1afe44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afe44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe48: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1afe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1afe4c: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AFE4Cu;
    {
        const bool branch_taken_0x1afe4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe4c) {
            ctx->pc = 0x1AFE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFE4Cu;
            // 0x1afe50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF14u;
            goto label_1aff14;
        }
    }
    ctx->pc = 0x1AFE54u;
    // 0x1afe54: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1afe58: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1afe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1afe5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1afe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1afe60: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1afe60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1afe64: 0x24428658  addiu       $v0, $v0, -0x79A8
    ctx->pc = 0x1afe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x1afe68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afe6c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1afe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1afe70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFE70u;
    {
        const bool branch_taken_0x1afe70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE70u;
        // 0x1afe74: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe70) {
            ctx->pc = 0x1AFE90u;
            goto label_1afe90;
        }
    }
    ctx->pc = 0x1AFE78u;
    // 0x1afe78: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1afe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1afe7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1afe80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afe84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afe88: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1afe8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1afe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1afe90:
    // 0x1afe90: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AFE90u;
    {
        const bool branch_taken_0x1afe90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFE90u;
        // 0x1afe94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe90) {
            ctx->pc = 0x1AFEE4u;
            goto label_1afee4;
        }
    }
    ctx->pc = 0x1AFE98u;
    // 0x1afe98: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1afe9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFE9Cu;
    {
        const bool branch_taken_0x1afe9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe9c) {
            ctx->pc = 0x1AFEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFE9Cu;
            // 0x1afea0: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFEB8u;
            goto label_1afeb8;
        }
    }
    ctx->pc = 0x1AFEA4u;
    // 0x1afea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1afea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1afea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1afeac: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AFEACu;
    SET_GPR_U32(ctx, 31, 0x1AFEB4u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AFEACu, 0x1AFEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEB4u;
label_1afeb4:
    // 0x1afeb4: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1afeb8:
    // 0x1afeb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFEB8u;
    {
        const bool branch_taken_0x1afeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEB8u;
        // 0x1afebc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afeb8) {
            ctx->pc = 0x1AFED0u;
            goto label_1afed0;
        }
    }
    ctx->pc = 0x1AFEC0u;
    // 0x1afec0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1afec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1afec4: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AFEC4u;
    SET_GPR_U32(ctx, 31, 0x1AFECCu);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AFEC4u, 0x1AFECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFECCu;
label_1afecc:
    // 0x1afecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afed0:
    // 0x1afed0: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1afed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1afed4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFED4u;
    {
        const bool branch_taken_0x1afed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFED4u;
        // 0x1afed8: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afed4) {
            ctx->pc = 0x1AFEE0u;
            goto label_1afee0;
        }
    }
    ctx->pc = 0x1AFEDCu;
    // 0x1afedc: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1afedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_1afee0:
    // 0x1afee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1afee4:
    // 0x1afee4: 0xc06c450  jal         func_1B1140
    ctx->pc = 0x1AFEE4u;
    SET_GPR_U32(ctx, 31, 0x1AFEECu);
    ctx->pc = 0x1AFEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEE4u;
    // 0x1afee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1140u, 0x1AFEE4u, 0x1AFEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEECu;
label_1afeec:
    // 0x1afeec: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1afeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1afef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afef4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1afef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1afef8: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1AFEF8u;
    SET_GPR_U32(ctx, 31, 0x1AFF00u);
    ctx->pc = 0x1AFEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEF8u;
    // 0x1afefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1AFEF8u, 0x1AFF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF00u;
label_1aff00:
    // 0x1aff00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aff04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1aff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1aff08: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1aff08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x1aff0c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1aff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x1aff10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aff10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aff14:
    // 0x1aff14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aff14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aff18: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF18u;
        // 0x1aff1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFF20u;
}
