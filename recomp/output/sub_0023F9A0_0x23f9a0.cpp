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

// Function: sub_0023F9A0
// Address: 0x23f9a0 - 0x23fa18
void sub_0023F9A0_0x23f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F9A0_0x23f9a0");
#endif

    ctx->pc = 0x23f9a0u;

    // 0x23f9a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x23f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x23f9a4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x23f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x23f9a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F9A8u;
    {
        const bool branch_taken_0x23f9a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A8u;
        // 0x23f9ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9a8) {
            ctx->pc = 0x23F9C4u;
            goto label_23f9c4;
        }
    }
    ctx->pc = 0x23F9B0u;
    // 0x23f9b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x23f9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23f9b4: 0x0  nop
    ctx->pc = 0x23f9b4u;
    // NOP
    // 0x23f9b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x23f9b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x23f9bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23F9BCu;
    {
        const bool branch_taken_0x23f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9BCu;
        // 0x23f9c0: 0xc4800fc0  lwc1        $f0, 0xFC0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9bc) {
            ctx->pc = 0x23F9E0u;
            goto label_23f9e0;
        }
    }
    ctx->pc = 0x23F9C4u;
label_23f9c4:
    // 0x23f9c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f9c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23f9cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x23f9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23f9d0: 0x0  nop
    ctx->pc = 0x23f9d0u;
    // NOP
    // 0x23f9d4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x23f9d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x23f9d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x23f9d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x23f9dc: 0xc4800fc0  lwc1        $f0, 0xFC0($a0)
    ctx->pc = 0x23f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23f9e0:
    // 0x23f9e0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x23f9e4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23f9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x23f9e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23f9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23f9ec: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x23f9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x23f9f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23f9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23f9f4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x23f9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x23f9f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x23f9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23f9fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23f9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23fa00: 0x0  nop
    ctx->pc = 0x23fa00u;
    // NOP
    // 0x23fa04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x23FA04u;
    {
        const bool branch_taken_0x23fa04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA04u;
        // 0x23fa08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa04) {
            ctx->pc = 0x23FA10u;
            goto label_23fa10;
        }
    }
    ctx->pc = 0x23FA0Cu;
    // 0x23fa0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fa0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fa10:
    // 0x23fa10: 0x3e00008  jr          $ra
    ctx->pc = 0x23FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA18u;
}
