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

// Function: sub_00105288
// Address: 0x105288 - 0x1052c8
void sub_00105288_0x105288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105288_0x105288");
#endif

    ctx->pc = 0x105288u;

    // 0x105288: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x105288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x10528c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10528Cu;
        // 0x105290: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10528c) {
            ctx->pc = 0x10529Cu;
            goto label_10529c;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105294u;
    {
        const bool branch_taken_0x105294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105294u;
        // 0x105298: 0xc4810030  lwc1        $f1, 0x30($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105294) {
            ctx->pc = 0x1052A0u;
            goto label_1052a0;
        }
    }
    ctx->pc = 0x10529Cu;
label_10529c:
    // 0x10529c: 0xc441a568  lwc1        $f1, -0x5A98($v0)
    ctx->pc = 0x10529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1052a0:
    // 0x1052a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1052a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1052a4: 0xc44089d0  lwc1        $f0, -0x7630($v0)
    ctx->pc = 0x1052a4u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1052a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1052a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1052ac: 0x0  nop
    ctx->pc = 0x1052acu;
    // NOP
    // 0x1052b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1052B0u;
    {
        const bool branch_taken_0x1052b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1052B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052B0u;
        // 0x1052b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052b0) {
            ctx->pc = 0x1052BCu;
            goto label_1052bc;
        }
    }
    ctx->pc = 0x1052B8u;
    // 0x1052b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1052b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1052bc:
    // 0x1052bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1052BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1052C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052BCu;
        // 0x1052c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1052BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1052C4u;
    // 0x1052c4: 0x0  nop
    ctx->pc = 0x1052c4u;
    // NOP
    ctx->pc = 0x1052c8u;
}
