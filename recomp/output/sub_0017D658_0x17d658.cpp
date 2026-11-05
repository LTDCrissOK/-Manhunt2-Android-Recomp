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

// Function: sub_0017D658
// Address: 0x17d658 - 0x17d680
void sub_0017D658_0x17d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D658_0x17d658");
#endif

    ctx->pc = 0x17d658u;

    // 0x17d658: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x17d65c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17d660: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x17d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x17d664: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x17d664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x17d668: 0x908200e0  lbu         $v0, 0xE0($a0)
    ctx->pc = 0x17d668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x17d66c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D66Cu;
        // 0x17d670: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D674u;
    // 0x17d674: 0x0  nop
    ctx->pc = 0x17d674u;
    // NOP
    // 0x17d678: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17d678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d67c: 0x0  nop
    ctx->pc = 0x17d67cu;
    // NOP
    ctx->pc = 0x17d680u;
}
