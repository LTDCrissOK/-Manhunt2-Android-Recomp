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

// Function: sub_001702C4
// Address: 0x1702c4 - 0x1702e4
void sub_001702C4_0x1702c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001702C4_0x1702c4");
#endif

    ctx->pc = 0x1702c4u;

    // 0x1702c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1702c8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1702c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1702cc: 0x90e300c8  lbu         $v1, 0xC8($a3)
    ctx->pc = 0x1702ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x1702d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1702D0u;
    {
        const bool branch_taken_0x1702d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1702d0) {
            ctx->pc = 0x1702D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1702D0u;
            // 0x1702d4: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1702D8u;
            goto label_1702d8;
        }
    }
    ctx->pc = 0x1702D8u;
label_1702d8:
    // 0x1702d8: 0x90e200c8  lbu         $v0, 0xC8($a3)
    ctx->pc = 0x1702d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x1702dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1702DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702DCu;
        // 0x1702e0: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1702DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1702E4u;
}
