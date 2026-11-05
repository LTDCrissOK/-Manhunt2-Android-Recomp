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

// Function: sub_0017BFD8
// Address: 0x17bfd8 - 0x17bff8
void sub_0017BFD8_0x17bfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BFD8_0x17bfd8");
#endif

    ctx->pc = 0x17bfd8u;

    // 0x17bfd8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x17bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x17bfdc: 0x8c62b040  lw          $v0, -0x4FC0($v1)
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48B040u));
    // 0x17bfe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BFE0u;
    {
        const bool branch_taken_0x17bfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bfe0) {
            ctx->pc = 0x17BFF0u;
            goto label_17bff0;
        }
    }
    ctx->pc = 0x17BFE8u;
    // 0x17bfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFE8u;
        // 0x17bfec: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFF0u;
label_17bff0:
    // 0x17bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFF0u;
        // 0x17bff4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFF8u;
}
