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

// Function: sub_003CC270
// Address: 0x3cc270 - 0x3cc298
void sub_003CC270_0x3cc270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC270_0x3cc270");
#endif

    ctx->pc = 0x3cc270u;

    // 0x3cc270: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cc270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cc274: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cc274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cc278: 0x24422040  addiu       $v0, $v0, 0x2040
    ctx->pc = 0x3cc278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
    // 0x3cc27c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3cc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3cc280: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC280u;
        // 0x3cc284: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC288u;
    // 0x3cc288: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3cc288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3cc28c: 0x0  nop
    ctx->pc = 0x3cc28cu;
    // NOP
    // 0x3cc290: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x3cc290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x3cc294: 0x0  nop
    ctx->pc = 0x3cc294u;
    // NOP
    ctx->pc = 0x3cc298u;
}
