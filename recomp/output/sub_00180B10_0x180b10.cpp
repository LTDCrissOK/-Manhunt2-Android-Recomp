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

// Function: sub_00180B10
// Address: 0x180b10 - 0x180b28
void sub_00180B10_0x180b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180B10_0x180b10");
#endif

    ctx->pc = 0x180b10u;

    // 0x180b10: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x180b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b14: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x180b18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180b1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180b20: 0x3e00008  jr          $ra
    ctx->pc = 0x180B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B20u;
        // 0x180b24: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B28u;
}
