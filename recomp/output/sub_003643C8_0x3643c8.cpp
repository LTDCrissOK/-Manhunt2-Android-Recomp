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

// Function: sub_003643C8
// Address: 0x3643c8 - 0x364408
void sub_003643C8_0x3643c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003643C8_0x3643c8");
#endif

    ctx->pc = 0x3643c8u;

    // 0x3643c8: 0xc48200a8  lwc1        $f2, 0xA8($a0)
    ctx->pc = 0x3643c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3643cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3643ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3643d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3643d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3643d4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3643d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3643d8: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x3643d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3643dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3643dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3643e0: 0x0  nop
    ctx->pc = 0x3643e0u;
    // NOP
    // 0x3643e4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3643E4u;
    {
        const bool branch_taken_0x3643e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3643e4) {
            ctx->pc = 0x3643E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3643E4u;
            // 0x3643e8: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3643F8u;
            goto label_3643f8;
        }
    }
    ctx->pc = 0x3643ECu;
    // 0x3643ec: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x3643ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x3643f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3643F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3643F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643F0u;
        // 0x3643f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3643F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3643F8u;
label_3643f8:
    // 0x3643f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3643f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3643fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3643fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x364400: 0x3e00008  jr          $ra
    ctx->pc = 0x364400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364400u;
        // 0x364404: 0xe48100a8  swc1        $f1, 0xA8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364408u;
}
