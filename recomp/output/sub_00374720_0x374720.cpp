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

// Function: sub_00374720
// Address: 0x374720 - 0x374750
void sub_00374720_0x374720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374720_0x374720");
#endif

    ctx->pc = 0x374720u;

    // 0x374720: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374724: 0x24446050  addiu       $a0, $v0, 0x6050
    ctx->pc = 0x374724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x374728: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x374728u;
    { uint32_t bits = FAST_READ32(0x6C608Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37472c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x37472cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374730: 0x0  nop
    ctx->pc = 0x374730u;
    // NOP
    // 0x374734: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x374734u;
    {
        const bool branch_taken_0x374734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x374738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374734u;
        // 0x374738: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374734) {
            ctx->pc = 0x374748u;
            goto label_374748;
        }
    }
    ctx->pc = 0x37473Cu;
    // 0x37473c: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x37473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954240)));
    // 0x374740: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x374740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x374744: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x374744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954240), GPR_U32(ctx, 2));
label_374748:
    // 0x374748: 0x3e00008  jr          $ra
    ctx->pc = 0x374748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374748u;
        // 0x37474c: 0xe48c003c  swc1        $f12, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374750u;
}
