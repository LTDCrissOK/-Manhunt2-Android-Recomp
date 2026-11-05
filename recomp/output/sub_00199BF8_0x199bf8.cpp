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

// Function: sub_00199BF8
// Address: 0x199bf8 - 0x199c70
void sub_00199BF8_0x199bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199BF8_0x199bf8");
#endif

    ctx->pc = 0x199bf8u;

    // 0x199bf8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x199bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x199bfc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x199c00: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x199c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x199c04: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x2464090c  addiu       $a0, $v1, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199C20u;
            goto label_199c20;
        }
    }
    ctx->pc = 0x199C0Cu;
    // 0x199c0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199c10: 0x0  nop
    ctx->pc = 0x199c10u;
    // NOP
    // 0x199c14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199c18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199C18u;
    {
        const bool branch_taken_0x199c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199c18) {
            ctx->pc = 0x199C3Cu;
            goto label_199c3c;
        }
    }
    ctx->pc = 0x199C20u;
label_199c20:
    // 0x199c20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x199c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199c2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199c30: 0x0  nop
    ctx->pc = 0x199c30u;
    // NOP
    // 0x199c34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199c38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199c3c:
    // 0x199c3c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199c40: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199c48: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x199c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199c4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x199c50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199c54: 0x0  nop
    ctx->pc = 0x199c54u;
    // NOP
    // 0x199c58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x199C58u;
    {
        const bool branch_taken_0x199c58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C58u;
        // 0x199c5c: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c58) {
            ctx->pc = 0x199C68u;
            goto label_199c68;
        }
    }
    ctx->pc = 0x199C60u;
    // 0x199c60: 0x3e00008  jr          $ra
    ctx->pc = 0x199C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C60u;
        // 0x199c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C68u;
label_199c68:
    // 0x199c68: 0x3e00008  jr          $ra
    ctx->pc = 0x199C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C68u;
        // 0x199c6c: 0x8c6208e8  lw          $v0, 0x8E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C70u;
}
