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

// Function: sub_0020BC98
// Address: 0x20bc98 - 0x20bcc0
void sub_0020BC98_0x20bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BC98_0x20bc98");
#endif

    ctx->pc = 0x20bc98u;

    // 0x20bc98: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x20bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x20bc9c: 0x240601e0  addiu       $a2, $zero, 0x1E0
    ctx->pc = 0x20bc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x20bca0: 0x8ca4cba8  lw          $a0, -0x3458($a1)
    ctx->pc = 0x20bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCBA8u));
    // 0x20bca4: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x20bca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x20bca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bcac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x20bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x20bcb0: 0x8ca3cba8  lw          $v1, -0x3458($a1)
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCBA8u));
    // 0x20bcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x20BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCB4u;
        // 0x20bcb8: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BCBCu;
    // 0x20bcbc: 0x0  nop
    ctx->pc = 0x20bcbcu;
    // NOP
    ctx->pc = 0x20bcc0u;
}
