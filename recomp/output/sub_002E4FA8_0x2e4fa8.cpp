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

// Function: sub_002E4FA8
// Address: 0x2e4fa8 - 0x2e4ff0
void sub_002E4FA8_0x2e4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4FA8_0x2e4fa8");
#endif

    ctx->pc = 0x2e4fa8u;

    // 0x2e4fa8: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x2e4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x2e4fac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2e4facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2e4fb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4fb4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4FB4u;
    {
        const bool branch_taken_0x2e4fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FB4u;
        // 0x2e4fb8: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fb4) {
            ctx->pc = 0x2E4FC4u;
            goto label_2e4fc4;
        }
    }
    ctx->pc = 0x2E4FBCu;
    // 0x2e4fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FBCu;
        // 0x2e4fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FC4u;
label_2e4fc4:
    // 0x2e4fc4: 0x8c8211a8  lw          $v0, 0x11A8($a0)
    ctx->pc = 0x2e4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4520)));
    // 0x2e4fc8: 0x8c632b00  lw          $v1, 0x2B00($v1)
    ctx->pc = 0x2e4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x2e4fcc: 0x24420dac  addiu       $v0, $v0, 0xDAC
    ctx->pc = 0x2e4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3500));
    // 0x2e4fd0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e4fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e4fd4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4FD4u;
    {
        const bool branch_taken_0x2e4fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fd4) {
            ctx->pc = 0x2E4FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4FD4u;
            // 0x2e4fd8: 0xac8311a8  sw          $v1, 0x11A8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4520), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4FE4u;
            goto label_2e4fe4;
        }
    }
    ctx->pc = 0x2E4FDCu;
    // 0x2e4fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FDCu;
        // 0x2e4fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FE4u;
label_2e4fe4:
    // 0x2e4fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FE4u;
        // 0x2e4fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FECu;
    // 0x2e4fec: 0x0  nop
    ctx->pc = 0x2e4fecu;
    // NOP
    ctx->pc = 0x2e4ff0u;
}
