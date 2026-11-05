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

// Function: sub_001AFF20
// Address: 0x1aff20 - 0x1affc0
void sub_001AFF20_0x1aff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFF20_0x1aff20");
#endif

    switch (ctx->pc) {
        case 0x1aff60u: goto label_1aff60;
        case 0x1aff70u: goto label_1aff70;
        case 0x1aff88u: goto label_1aff88;
        case 0x1affa0u: goto label_1affa0;
        default: break;
    }

    ctx->pc = 0x1aff20u;

    // 0x1aff20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aff24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aff28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aff2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aff2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aff34: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1aff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1aff38: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1aff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1aff3c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AFF3Cu;
    {
        const bool branch_taken_0x1aff3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF3Cu;
        // 0x1aff40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff3c) {
            ctx->pc = 0x1AFFA8u;
            goto label_1affa8;
        }
    }
    ctx->pc = 0x1AFF44u;
    // 0x1aff44: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1aff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1aff48: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AFF48u;
    {
        const bool branch_taken_0x1aff48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff48) {
            ctx->pc = 0x1AFF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFF48u;
            // 0x1aff4c: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF74u;
            goto label_1aff74;
        }
    }
    ctx->pc = 0x1AFF50u;
    // 0x1aff50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aff54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aff54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aff58: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AFF58u;
    SET_GPR_U32(ctx, 31, 0x1AFF60u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AFF58u, 0x1AFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF60u;
label_1aff60:
    // 0x1aff60: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1aff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1aff64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aff64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aff68: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1AFF68u;
    SET_GPR_U32(ctx, 31, 0x1AFF70u);
    ctx->pc = 0x1AFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF68u;
    // 0x1aff6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1AFF68u, 0x1AFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF70u;
label_1aff70:
    // 0x1aff70: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1aff74:
    // 0x1aff74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFF74u;
    {
        const bool branch_taken_0x1aff74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff74) {
            ctx->pc = 0x1AFF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFF74u;
            // 0x1aff78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFF8Cu;
            goto label_1aff8c;
        }
    }
    ctx->pc = 0x1AFF7Cu;
    // 0x1aff7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aff7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aff80: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AFF80u;
    SET_GPR_U32(ctx, 31, 0x1AFF88u);
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AFF80u, 0x1AFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF88u;
label_1aff88:
    // 0x1aff88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aff8c:
    // 0x1aff8c: 0xae1100b0  sw          $s1, 0xB0($s0)
    ctx->pc = 0x1aff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
    // 0x1aff90: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1aff90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1aff94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff98: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1AFF98u;
    SET_GPR_U32(ctx, 31, 0x1AFFA0u);
    ctx->pc = 0x1AFF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF98u;
    // 0x1aff9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1AFF98u, 0x1AFFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFA0u;
label_1affa0:
    // 0x1affa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFFA0u;
    {
        const bool branch_taken_0x1affa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFA0u;
        // 0x1affa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affa0) {
            ctx->pc = 0x1AFFACu;
            goto label_1affac;
        }
    }
    ctx->pc = 0x1AFFA8u;
label_1affa8:
    // 0x1affa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1affa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1affac:
    // 0x1affac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1affacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1affb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1affb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1affb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1affb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1affb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFB8u;
        // 0x1affbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFFC0u;
}
