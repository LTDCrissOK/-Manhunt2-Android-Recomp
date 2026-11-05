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

// Function: sub_0014DB98
// Address: 0x14db98 - 0x14dbb8
void sub_0014DB98_0x14db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DB98_0x14db98");
#endif

    ctx->pc = 0x14db98u;

    // 0x14db98: 0x8c820560  lw          $v0, 0x560($a0)
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x14db9c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14dba0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14dba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14dba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14dbac: 0x3e00008  jr          $ra
    ctx->pc = 0x14DBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBACu;
        // 0x14dbb0: 0x8c620108  lw          $v0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DBB4u;
    // 0x14dbb4: 0x0  nop
    ctx->pc = 0x14dbb4u;
    // NOP
    ctx->pc = 0x14dbb8u;
}
