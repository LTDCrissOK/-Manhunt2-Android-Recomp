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

// Function: sub_001EA2C8
// Address: 0x1ea2c8 - 0x1ea330
void sub_001EA2C8_0x1ea2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA2C8_0x1ea2c8");
#endif

    ctx->pc = 0x1ea2c8u;

    // 0x1ea2c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ea2cc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1ea2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ea2d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ea2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ea2d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea2d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ea2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ea2dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ea2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ea2e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ea2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ea2e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ea2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ea2e8: 0xc440d9ec  lwc1        $f0, -0x2614($v0)
    ctx->pc = 0x1ea2e8u;
    { uint32_t bits = FAST_READ32(0x45D9ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea2ec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ea2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1ea2f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ea2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea2f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ea2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ea2f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1ea2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1ea2fc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ea2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ea300: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1ea300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1ea304: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1ea304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1ea308: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1ea308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1ea30c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1ea30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1ea310: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1ea310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1ea314: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1ea314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1ea318: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1ea318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1ea31c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1ea31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1ea320: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1ea320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1ea324: 0xa080004c  sb          $zero, 0x4C($a0)
    ctx->pc = 0x1ea324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea328: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA328u;
        // 0x1ea32c: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA330u;
}
