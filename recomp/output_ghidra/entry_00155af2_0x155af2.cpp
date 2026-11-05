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

// Function: entry_00155af2
// Address: 0x155af2 - 0x155b02
void entry_00155af2_0x155af2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155af2_0x155af2");
#endif

    ctx->pc = 0x155af2u;

    // 0x155af2: 0x1880c4e2  blez        $a0, . + 4 + (-0x3B1E << 2)
    ctx->pc = 0x155AF2u;
    {
        const bool branch_taken_0x155af2 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x155AF6u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AF2u;
        // 0x155af6: 0x40003  sra         $zero, $a0, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af2) {
            ctx->pc = 0x146E7Eu;
            return;
        }
    }
    ctx->pc = 0x155AFAu;
    // 0x155afa: 0x847c4e0  j           func_11F1380
    ctx->pc = 0x155AFAu;
    ctx->pc = 0x155AFEu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AFAu;
    // 0x155afe: 0x10874600  beq         $a0, $a3, . + 4 + (0x4600 << 2) (Delay Slot)
    // Likely branch instruction at 0x155AFE - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1380u, 0x155AFAu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x155B02u;
}
