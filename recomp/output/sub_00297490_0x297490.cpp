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

// Function: sub_00297490
// Address: 0x297490 - 0x2974a8
void sub_00297490_0x297490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297490_0x297490");
#endif

    ctx->pc = 0x297490u;

    // 0x297490: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x297490u;
    {
        const bool branch_taken_0x297490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x297494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297490u;
        // 0x297494: 0xa0850060  sb          $a1, 0x60($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297490) {
            ctx->pc = 0x29749Cu;
            goto label_29749c;
        }
    }
    ctx->pc = 0x297498u;
    // 0x297498: 0xa0800080  sb          $zero, 0x80($a0)
    ctx->pc = 0x297498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 0));
label_29749c:
    // 0x29749c: 0x3e00008  jr          $ra
    ctx->pc = 0x29749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2974A4u;
    // 0x2974a4: 0x0  nop
    ctx->pc = 0x2974a4u;
    // NOP
    ctx->pc = 0x2974a8u;
}
