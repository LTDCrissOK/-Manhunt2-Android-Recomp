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

// Function: sub_00280EF0
// Address: 0x280ef0 - 0x280f10
void sub_00280EF0_0x280ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280EF0_0x280ef0");
#endif

    ctx->pc = 0x280ef0u;

    // 0x280ef0: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280EF0u;
    {
        const bool branch_taken_0x280ef0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x280EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EF0u;
        // 0x280ef4: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ef0) {
            ctx->pc = 0x280F04u;
            goto label_280f04;
        }
    }
    ctx->pc = 0x280EF8u;
    // 0x280ef8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280efc: 0x3e00008  jr          $ra
    ctx->pc = 0x280EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EFCu;
        // 0x280f00: 0xac40cb50  sw          $zero, -0x34B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F04u;
label_280f04:
    // 0x280f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280f08: 0x3e00008  jr          $ra
    ctx->pc = 0x280F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F08u;
        // 0x280f0c: 0xac62cb50  sw          $v0, -0x34B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F10u;
}
