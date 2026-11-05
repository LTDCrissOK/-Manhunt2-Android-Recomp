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

// Function: sub_00288708
// Address: 0x288708 - 0x288730
void sub_00288708_0x288708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288708_0x288708");
#endif

    ctx->pc = 0x288708u;

    // 0x288708: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28870c: 0x3e00008  jr          $ra
    ctx->pc = 0x28870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28870Cu;
        // 0x288710: 0x8c6225e8  lw          $v0, 0x25E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9704)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288714u;
    // 0x288714: 0x0  nop
    ctx->pc = 0x288714u;
    // NOP
    // 0x288718: 0xac4400e0  sw          $a0, 0xE0($v0)
    ctx->pc = 0x288718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
    // 0x28871c: 0x0  nop
    ctx->pc = 0x28871cu;
    // NOP
    // 0x288720: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x288720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288724: 0x0  nop
    ctx->pc = 0x288724u;
    // NOP
    // 0x288728: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x288728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x28872c: 0x0  nop
    ctx->pc = 0x28872cu;
    // NOP
    ctx->pc = 0x288730u;
}
