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

// Function: sub_002D2C70
// Address: 0x2d2c70 - 0x2d2cd0
void sub_002D2C70_0x2d2c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2C70_0x2d2c70");
#endif

    ctx->pc = 0x2d2c70u;

    // 0x2d2c70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d2c74: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D2C74u;
    {
        const bool branch_taken_0x2d2c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C74u;
        // 0x2d2c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c74) {
            ctx->pc = 0x2D2CC4u;
            goto label_2d2cc4;
        }
    }
    ctx->pc = 0x2D2C7Cu;
    // 0x2d2c7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d2c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2c80: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2d2c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d2c84: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x2d2c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2C90u;
    {
        const bool branch_taken_0x2d2c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C90u;
        // 0x2d2c94: 0xe48c000c  swc1        $f12, 0xC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c90) {
            ctx->pc = 0x2D2CA0u;
            goto label_2d2ca0;
        }
    }
    ctx->pc = 0x2D2C98u;
    // 0x2d2c98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2C98u;
    {
        const bool branch_taken_0x2d2c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C98u;
        // 0x2d2c9c: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c98) {
            ctx->pc = 0x2D2CB0u;
            goto label_2d2cb0;
        }
    }
    ctx->pc = 0x2D2CA0u;
label_2d2ca0:
    // 0x2d2ca0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2d2ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2ca4: 0x0  nop
    ctx->pc = 0x2d2ca4u;
    // NOP
    // 0x2d2ca8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2CA8u;
    {
        const bool branch_taken_0x2d2ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2ca8) {
            ctx->pc = 0x2D2CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2CA8u;
            // 0x2d2cac: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2CB0u;
            goto label_2d2cb0;
        }
    }
    ctx->pc = 0x2D2CB0u;
label_2d2cb0:
    // 0x2d2cb0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2d2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2cb4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2d2cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2cb8: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x2d2cb8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d2cbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2cc0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2d2cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2d2cc4:
    // 0x2d2cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2CCCu;
    // 0x2d2ccc: 0x0  nop
    ctx->pc = 0x2d2cccu;
    // NOP
    ctx->pc = 0x2d2cd0u;
}
