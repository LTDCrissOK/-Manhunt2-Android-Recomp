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

// Function: sub_0026EA20
// Address: 0x26ea20 - 0x26eaa0
void sub_0026EA20_0x26ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EA20_0x26ea20");
#endif

    switch (ctx->pc) {
        case 0x26ea48u: goto label_26ea48;
        case 0x26ea58u: goto label_26ea58;
        default: break;
    }

    ctx->pc = 0x26ea20u;

    // 0x26ea20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ea24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ea28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ea2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ea2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ea34: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x26ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x26ea38: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26EA38u;
    {
        const bool branch_taken_0x26ea38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA38u;
        // 0x26ea3c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea38) {
            ctx->pc = 0x26EA8Cu;
            goto label_26ea8c;
        }
    }
    ctx->pc = 0x26EA40u;
    // 0x26ea40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26EA40u;
    {
        const bool branch_taken_0x26ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA40u;
        // 0x26ea44: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea40) {
            ctx->pc = 0x26EA6Cu;
            goto label_26ea6c;
        }
    }
    ctx->pc = 0x26EA48u;
label_26ea48:
    // 0x26ea48: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EA48u;
    {
        const bool branch_taken_0x26ea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x26ea48) {
            ctx->pc = 0x26EA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA48u;
            // 0x26ea4c: 0x8e030268  lw          $v1, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EA5Cu;
            goto label_26ea5c;
        }
    }
    ctx->pc = 0x26EA50u;
    // 0x26ea50: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26EA50u;
    SET_GPR_U32(ctx, 31, 0x26EA58u);
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26EA50u, 0x26EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA58u;
label_26ea58:
    // 0x26ea58: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x26ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_26ea5c:
    // 0x26ea5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26ea60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EA60u;
    {
        const bool branch_taken_0x26ea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea60) {
            ctx->pc = 0x26EA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA60u;
            // 0x26ea64: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EA74u;
            goto label_26ea74;
        }
    }
    ctx->pc = 0x26EA68u;
    // 0x26ea68: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26ea6c:
    // 0x26ea6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26ea70: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_26ea74:
    // 0x26ea74: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26ea78: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26EA78u;
    {
        const bool branch_taken_0x26ea78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA78u;
        // 0x26ea7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea78) {
            ctx->pc = 0x26EA84u;
            goto label_26ea84;
        }
    }
    ctx->pc = 0x26EA80u;
    // 0x26ea80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26ea84:
    // 0x26ea84: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26EA84u;
    {
        const bool branch_taken_0x26ea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ea84) {
            ctx->pc = 0x26EA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ea48;
        }
    }
    ctx->pc = 0x26EA8Cu;
label_26ea8c:
    // 0x26ea8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ea8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ea90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26ea90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26ea94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ea94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ea98: 0x3e00008  jr          $ra
    ctx->pc = 0x26EA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA98u;
        // 0x26ea9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EAA0u;
}
