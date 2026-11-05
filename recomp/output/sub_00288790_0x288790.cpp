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

// Function: sub_00288790
// Address: 0x288790 - 0x2887b0
void sub_00288790_0x288790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288790_0x288790");
#endif

    ctx->pc = 0x288790u;

    // 0x288790: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x288794: 0x3e00008  jr          $ra
    ctx->pc = 0x288794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288794u;
        // 0x288798: 0x8c6225b8  lw          $v0, 0x25B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28879Cu;
    // 0x28879c: 0x0  nop
    ctx->pc = 0x28879cu;
    // NOP
    // 0x2887a0: 0xac4400b0  sw          $a0, 0xB0($v0)
    ctx->pc = 0x2887a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
    // 0x2887a4: 0x0  nop
    ctx->pc = 0x2887a4u;
    // NOP
    // 0x2887a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2887a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2887ac: 0x0  nop
    ctx->pc = 0x2887acu;
    // NOP
    ctx->pc = 0x2887b0u;
}
