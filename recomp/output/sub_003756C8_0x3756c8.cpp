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

// Function: sub_003756C8
// Address: 0x3756c8 - 0x3756e0
void sub_003756C8_0x3756c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003756C8_0x3756c8");
#endif

    ctx->pc = 0x3756c8u;

    // 0x3756c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3756c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3756cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3756ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3756d0: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x3756d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x3756d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3756d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3756d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3756D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756D8u;
        // 0x3756dc: 0xdc820000  ld          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756E0u;
}
