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

// Function: sub_0020BD90
// Address: 0x20bd90 - 0x20bdf8
void sub_0020BD90_0x20bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BD90_0x20bd90");
#endif

    ctx->pc = 0x20bd90u;

    // 0x20bd90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20bd94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20bd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bd98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20bd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd9c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x20bda0: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x20bda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x20bda4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x20bda8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x20bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x20bdac: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x20bdb0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x20bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x20bdb4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x20bdb8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x20bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x20bdbc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x20bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x20bdc0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x20bdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x20bdc4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x20bdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x20bdc8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x20bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x20bdcc: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x20bdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x20bdd0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x20bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x20bdd4: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x20bdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x20bdd8: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x20bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x20bddc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x20bde0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20bde4: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x20bde4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bde8: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x20bde8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bdec: 0x3e00008  jr          $ra
    ctx->pc = 0x20BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDECu;
        // 0x20bdf0: 0xa0800050  sb          $zero, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BDF4u;
    // 0x20bdf4: 0x0  nop
    ctx->pc = 0x20bdf4u;
    // NOP
    ctx->pc = 0x20bdf8u;
}
