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

// Function: sub_0013AC40
// Address: 0x13ac40 - 0x13ac60
void sub_0013AC40_0x13ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AC40_0x13ac40");
#endif

    ctx->pc = 0x13ac40u;

    // 0x13ac40: 0x8c820ab0  lw          $v0, 0xAB0($a0)
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2736)));
    // 0x13ac44: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13ac48: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13ac4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ac50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x13AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC54u;
        // 0x13ac58: 0x8c620108  lw          $v0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AC5Cu;
    // 0x13ac5c: 0x0  nop
    ctx->pc = 0x13ac5cu;
    // NOP
    ctx->pc = 0x13ac60u;
}
