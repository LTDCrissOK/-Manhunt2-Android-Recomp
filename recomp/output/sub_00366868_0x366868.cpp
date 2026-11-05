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

// Function: sub_00366868
// Address: 0x366868 - 0x3668c0
void sub_00366868_0x366868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366868_0x366868");
#endif

    ctx->pc = 0x366868u;

    // 0x366868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36686c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x366870: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x366870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366874: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x366874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366878: 0x0  nop
    ctx->pc = 0x366878u;
    // NOP
    // 0x36687c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36687Cu;
    {
        const bool branch_taken_0x36687c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36687c) {
            ctx->pc = 0x36688Cu;
            goto label_36688c;
        }
    }
    ctx->pc = 0x366884u;
    // 0x366884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x366884u;
    {
        const bool branch_taken_0x366884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366884u;
        // 0x366888: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366884) {
            ctx->pc = 0x36689Cu;
            goto label_36689c;
        }
    }
    ctx->pc = 0x36688Cu;
label_36688c:
    // 0x36688c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x36688cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366890: 0x0  nop
    ctx->pc = 0x366890u;
    // NOP
    // 0x366894: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x366894u;
    {
        const bool branch_taken_0x366894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366894) {
            ctx->pc = 0x366898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366894u;
            // 0x366898: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36689Cu;
            goto label_36689c;
        }
    }
    ctx->pc = 0x36689Cu;
label_36689c:
    // 0x36689c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3668a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3668a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3668a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3668a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3668a8: 0xa043cb30  sb          $v1, -0x34D0($v0)
    ctx->pc = 0x3668a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCB30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FCB30u, _value); } while (0);
    // 0x3668ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3668ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3668B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3668ACu;
        // 0x3668b0: 0xe48ccb34  swc1        $f12, -0x34CC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953780), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3668ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3668B4u;
    // 0x3668b4: 0x0  nop
    ctx->pc = 0x3668b4u;
    // NOP
    // 0x3668b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3668b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3668bc: 0x0  nop
    ctx->pc = 0x3668bcu;
    // NOP
    ctx->pc = 0x3668c0u;
}
