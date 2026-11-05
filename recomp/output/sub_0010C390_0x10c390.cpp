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

// Function: sub_0010C390
// Address: 0x10c390 - 0x10c3b8
void sub_0010C390_0x10c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C390_0x10c390");
#endif

    ctx->pc = 0x10c390u;

    // 0x10c390: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x10c390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x10c394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c398: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x10c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10c39c: 0xa08003b0  sb          $zero, 0x3B0($a0)
    ctx->pc = 0x10c39cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 944), (uint8_t)GPR_U32(ctx, 0));
    // 0x10c3a0: 0xe48003b8  swc1        $f0, 0x3B8($a0)
    ctx->pc = 0x10c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 952), bits); }
    // 0x10c3a4: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x10c3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c3a8: 0xac8003b4  sw          $zero, 0x3B4($a0)
    ctx->pc = 0x10c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 0));
    // 0x10c3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3ACu;
        // 0x10c3b0: 0xac8003bc  sw          $zero, 0x3BC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C3B4u;
    // 0x10c3b4: 0x0  nop
    ctx->pc = 0x10c3b4u;
    // NOP
    ctx->pc = 0x10c3b8u;
}
