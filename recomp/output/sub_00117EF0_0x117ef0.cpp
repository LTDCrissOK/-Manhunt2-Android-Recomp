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

// Function: sub_00117EF0
// Address: 0x117ef0 - 0x117f48
void sub_00117EF0_0x117ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117EF0_0x117ef0");
#endif

    ctx->pc = 0x117ef0u;

    // 0x117ef0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x117EF0u;
    {
        const bool branch_taken_0x117ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EF0u;
        // 0x117ef4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ef0) {
            ctx->pc = 0x117F14u;
            goto label_117f14;
        }
    }
    ctx->pc = 0x117EF8u;
    // 0x117ef8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x117ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x117efc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x117EFCu;
    {
        const bool branch_taken_0x117efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EFCu;
        // 0x117f00: 0x28620013  slti        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117efc) {
            ctx->pc = 0x117F38u;
            goto label_117f38;
        }
    }
    ctx->pc = 0x117F04u;
    // 0x117f04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117F04u;
    {
        const bool branch_taken_0x117f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F04u;
        // 0x117f08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f04) {
            ctx->pc = 0x117F1Cu;
            goto label_117f1c;
        }
    }
    ctx->pc = 0x117F0Cu;
    // 0x117f0c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117F0Cu;
    {
        const bool branch_taken_0x117f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x117f0c) {
            ctx->pc = 0x117F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117F0Cu;
            // 0x117f10: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117F30u;
            goto label_117f30;
        }
    }
    ctx->pc = 0x117F14u;
label_117f14:
    // 0x117f14: 0x3e00008  jr          $ra
    ctx->pc = 0x117F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F1Cu;
label_117f1c:
    // 0x117f1c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x117f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x117f20: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117F20u;
    {
        const bool branch_taken_0x117f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x117f20) {
            ctx->pc = 0x117F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117F20u;
            // 0x117f24: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117F3Cu;
            goto label_117f3c;
        }
    }
    ctx->pc = 0x117F28u;
    // 0x117f28: 0x3e00008  jr          $ra
    ctx->pc = 0x117F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F30u;
label_117f30:
    // 0x117f30: 0x3e00008  jr          $ra
    ctx->pc = 0x117F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F30u;
        // 0x117f34: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F38u;
label_117f38:
    // 0x117f38: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x117f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_117f3c:
    // 0x117f3c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x117f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x117f40: 0x3e00008  jr          $ra
    ctx->pc = 0x117F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F48u;
}
