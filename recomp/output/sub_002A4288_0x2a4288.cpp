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

// Function: sub_002A4288
// Address: 0x2a4288 - 0x2a42b0
void sub_002A4288_0x2a4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4288_0x2a4288");
#endif

    ctx->pc = 0x2a4288u;

    // 0x2a4288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a428c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a428cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4290: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a4290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a4294: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a4294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4298: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2a4298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2a429c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2a429cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2a42a0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a42a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A42A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42A4u;
        // 0x2a42a8: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A42A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A42ACu;
    // 0x2a42ac: 0x0  nop
    ctx->pc = 0x2a42acu;
    // NOP
    ctx->pc = 0x2a42b0u;
}
