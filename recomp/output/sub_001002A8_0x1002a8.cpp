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

// Function: sub_001002A8
// Address: 0x1002a8 - 0x1002c0
void sub_001002A8_0x1002a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002A8_0x1002a8");
#endif

    ctx->pc = 0x1002a8u;

    // 0x1002a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1002ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1002ACu;
    {
        const bool branch_taken_0x1002ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002ac) {
            ctx->pc = 0x1002B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1002ACu;
            // 0x1002b0: 0xe48c000c  swc1        $f12, 0xC($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1002B4u;
            goto label_1002b4;
        }
    }
    ctx->pc = 0x1002B4u;
label_1002b4:
    // 0x1002b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1002B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1002B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1002BCu;
    // 0x1002bc: 0x0  nop
    ctx->pc = 0x1002bcu;
    // NOP
    ctx->pc = 0x1002c0u;
}
