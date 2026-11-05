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

// Function: sub_00110218
// Address: 0x110218 - 0x110230
void sub_00110218_0x110218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110218_0x110218");
#endif

    ctx->pc = 0x110218u;

    // 0x110218: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x110218u;
    {
        const bool branch_taken_0x110218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110218u;
        // 0x11021c: 0xac850280  sw          $a1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110218) {
            ctx->pc = 0x110224u;
            goto label_110224;
        }
    }
    ctx->pc = 0x110220u;
    // 0x110220: 0xac80027c  sw          $zero, 0x27C($a0)
    ctx->pc = 0x110220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 0));
label_110224:
    // 0x110224: 0x3e00008  jr          $ra
    ctx->pc = 0x110224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11022Cu;
    // 0x11022c: 0x0  nop
    ctx->pc = 0x11022cu;
    // NOP
    ctx->pc = 0x110230u;
}
