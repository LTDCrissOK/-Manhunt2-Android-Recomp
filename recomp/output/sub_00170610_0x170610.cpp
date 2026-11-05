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

// Function: sub_00170610
// Address: 0x170610 - 0x170638
void sub_00170610_0x170610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170610_0x170610");
#endif

    ctx->pc = 0x170610u;

    // 0x170610: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x170610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    // 0x170614: 0xac800230  sw          $zero, 0x230($a0)
    ctx->pc = 0x170614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
    // 0x170618: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x170618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
    // 0x17061c: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x17061cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x170620: 0x7c800240  sq          $zero, 0x240($a0)
    ctx->pc = 0x170620u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 576), GPR_VEC(ctx, 0));
    // 0x170624: 0xac800258  sw          $zero, 0x258($a0)
    ctx->pc = 0x170624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
    // 0x170628: 0xac800250  sw          $zero, 0x250($a0)
    ctx->pc = 0x170628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
    // 0x17062c: 0x3e00008  jr          $ra
    ctx->pc = 0x17062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17062Cu;
        // 0x170630: 0xac800254  sw          $zero, 0x254($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170634u;
    // 0x170634: 0x0  nop
    ctx->pc = 0x170634u;
    // NOP
    ctx->pc = 0x170638u;
}
