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

// Function: sub_002C5220
// Address: 0x2c5220 - 0x2c5270
void sub_002C5220_0x2c5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5220_0x2c5220");
#endif

    ctx->pc = 0x2c5220u;

    // 0x2c5220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5228: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c5228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c522c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2c5230: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c5230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c5234: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2c5234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2c5238: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2c5238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2c523c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2c523cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2c5240: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2c5240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2c5244: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2c5244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2c5248: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2c5248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2c524c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2c524cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2c5250: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2c5250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2c5254: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2c5254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2c5258: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2c5258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2c525c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2c525cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2c5260: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2c5260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2c5264: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5264u;
        // 0x2c5268: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C526Cu;
    // 0x2c526c: 0x0  nop
    ctx->pc = 0x2c526cu;
    // NOP
    ctx->pc = 0x2c5270u;
}
