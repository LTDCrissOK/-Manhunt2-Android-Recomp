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

// Function: sub_001B45C8
// Address: 0x1b45c8 - 0x1b45f8
void sub_001B45C8_0x1b45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B45C8_0x1b45c8");
#endif

    ctx->pc = 0x1b45c8u;

    // 0x1b45c8: 0xc48100bc  lwc1        $f1, 0xBC($a0)
    ctx->pc = 0x1b45c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b45cc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b45d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b45d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b45d4: 0x0  nop
    ctx->pc = 0x1b45d4u;
    // NOP
    // 0x1b45d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b45d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b45dc: 0x0  nop
    ctx->pc = 0x1b45dcu;
    // NOP
    // 0x1b45e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B45E0u;
    {
        const bool branch_taken_0x1b45e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45E0u;
        // 0x1b45e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45e0) {
            ctx->pc = 0x1B45ECu;
            goto label_1b45ec;
        }
    }
    ctx->pc = 0x1B45E8u;
    // 0x1b45e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b45e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b45ec:
    // 0x1b45ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B45ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B45F4u;
    // 0x1b45f4: 0x0  nop
    ctx->pc = 0x1b45f4u;
    // NOP
    ctx->pc = 0x1b45f8u;
}
