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

// Function: sub_0037D358
// Address: 0x37d358 - 0x37d388
void sub_0037D358_0x37d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D358_0x37d358");
#endif

    ctx->pc = 0x37d358u;

    // 0x37d358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37d358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37d35c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37d35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d360: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x37d360u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37d364: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x37d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x37d368: 0xe48d0020  swc1        $f13, 0x20($a0)
    ctx->pc = 0x37d368u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x37d36c: 0xe48e0014  swc1        $f14, 0x14($a0)
    ctx->pc = 0x37d36cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x37d370: 0xe48f0024  swc1        $f15, 0x24($a0)
    ctx->pc = 0x37d370u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x37d374: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x37d374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x37d378: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x37d378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37d37c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x37d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x37d380: 0x3e00008  jr          $ra
    ctx->pc = 0x37D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D380u;
        // 0x37d384: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D388u;
}
