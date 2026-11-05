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

// Function: sub_001ED368
// Address: 0x1ed368 - 0x1ed3a0
void sub_001ED368_0x1ed368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED368_0x1ed368");
#endif

    switch (ctx->pc) {
        case 0x1ed370u: goto label_1ed370;
        default: break;
    }

    ctx->pc = 0x1ed368u;

    // 0x1ed368: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED368u;
        // 0x1ed36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED370u;
label_1ed370:
    // 0x1ed370: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ed370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ed374: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ed37c: 0x2484dc30  addiu       $a0, $a0, -0x23D0
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    // 0x1ed380: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x1ed380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x1ed384: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ed384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1ed388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed38c: 0xacc40024  sw          $a0, 0x24($a2)
    ctx->pc = 0x1ed38cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 4));
    // 0x1ed390: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ed390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed394: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ed398: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED398u;
        // 0x1ed39c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED3A0u;
}
