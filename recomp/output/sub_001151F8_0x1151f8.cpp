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

// Function: sub_001151F8
// Address: 0x1151f8 - 0x115210
void sub_001151F8_0x1151f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001151F8_0x1151f8");
#endif

    ctx->pc = 0x1151f8u;

    // 0x1151f8: 0xe48c01d4  swc1        $f12, 0x1D4($a0)
    ctx->pc = 0x1151f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x1151fc: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1151FCu;
    {
        const bool branch_taken_0x1151fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x115200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151FCu;
        // 0x115200: 0xac8501cc  sw          $a1, 0x1CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151fc) {
            ctx->pc = 0x115208u;
            goto label_115208;
        }
    }
    ctx->pc = 0x115204u;
    // 0x115204: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x115204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
label_115208:
    // 0x115208: 0x3e00008  jr          $ra
    ctx->pc = 0x115208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115210u;
}
