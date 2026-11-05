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

// Function: sub_00288768
// Address: 0x288768 - 0x288790
void sub_00288768_0x288768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288768_0x288768");
#endif

    ctx->pc = 0x288768u;

    // 0x288768: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28876c: 0x3e00008  jr          $ra
    ctx->pc = 0x28876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28876Cu;
        // 0x288770: 0x8c6225b0  lw          $v0, 0x25B0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9648)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28876Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288774u;
    // 0x288774: 0x0  nop
    ctx->pc = 0x288774u;
    // NOP
    // 0x288778: 0xac4400a8  sw          $a0, 0xA8($v0)
    ctx->pc = 0x288778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 4));
    // 0x28877c: 0x0  nop
    ctx->pc = 0x28877cu;
    // NOP
    // 0x288780: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x288784: 0x0  nop
    ctx->pc = 0x288784u;
    // NOP
    // 0x288788: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x288788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
    // 0x28878c: 0x0  nop
    ctx->pc = 0x28878cu;
    // NOP
    ctx->pc = 0x288790u;
}
