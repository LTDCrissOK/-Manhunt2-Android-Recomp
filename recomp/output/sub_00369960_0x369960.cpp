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

// Function: sub_00369960
// Address: 0x369960 - 0x369970
void sub_00369960_0x369960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369960_0x369960");
#endif

    ctx->pc = 0x369960u;

    // 0x369960: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x369960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x369964: 0x3e00008  jr          $ra
    ctx->pc = 0x369964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369964u;
        // 0x369968: 0xe44cca68  swc1        $f12, -0x3598($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294953576), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36996Cu;
    // 0x36996c: 0x0  nop
    ctx->pc = 0x36996cu;
    // NOP
    ctx->pc = 0x369970u;
}
