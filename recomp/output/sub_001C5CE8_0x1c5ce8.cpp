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

// Function: sub_001C5CE8
// Address: 0x1c5ce8 - 0x1c5d18
void sub_001C5CE8_0x1c5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5CE8_0x1c5ce8");
#endif

    ctx->pc = 0x1c5ce8u;

    // 0x1c5ce8: 0x8c850318  lw          $a1, 0x318($a0)
    ctx->pc = 0x1c5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1c5cec: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x1c5cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5cf0: 0x8ca30fe8  lw          $v1, 0xFE8($a1)
    ctx->pc = 0x1c5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4072)));
    // 0x1c5cf4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1c5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5cf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5cfc: 0x0  nop
    ctx->pc = 0x1c5cfcu;
    // NOP
    // 0x1c5d00: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5D00u;
    {
        const bool branch_taken_0x1c5d00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D00u;
        // 0x1c5d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d00) {
            ctx->pc = 0x1C5D0Cu;
            goto label_1c5d0c;
        }
    }
    ctx->pc = 0x1C5D08u;
    // 0x1c5d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5d0c:
    // 0x1c5d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5D14u;
    // 0x1c5d14: 0x0  nop
    ctx->pc = 0x1c5d14u;
    // NOP
    ctx->pc = 0x1c5d18u;
}
