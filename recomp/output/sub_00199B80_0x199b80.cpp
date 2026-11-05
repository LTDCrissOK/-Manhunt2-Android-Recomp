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

// Function: sub_00199B80
// Address: 0x199b80 - 0x199bf8
void sub_00199B80_0x199b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199B80_0x199b80");
#endif

    ctx->pc = 0x199b80u;

    // 0x199b80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x199b84: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x199b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x199b88: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x199b8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199B8Cu;
    {
        const bool branch_taken_0x199b8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B8Cu;
        // 0x199b90: 0x246408f8  addiu       $a0, $v1, 0x8F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b8c) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199B94u;
    // 0x199b94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199b98: 0x0  nop
    ctx->pc = 0x199b98u;
    // NOP
    // 0x199b9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199ba0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199BA0u;
    {
        const bool branch_taken_0x199ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ba0) {
            ctx->pc = 0x199BC4u;
            goto label_199bc4;
        }
    }
    ctx->pc = 0x199BA8u;
label_199ba8:
    // 0x199ba8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x199ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199bb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199bb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199bb8: 0x0  nop
    ctx->pc = 0x199bb8u;
    // NOP
    // 0x199bbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199bc0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199bc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199bc4:
    // 0x199bc4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199bc8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199bd0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x199bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199bd4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x199bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199bdc: 0x0  nop
    ctx->pc = 0x199bdcu;
    // NOP
    // 0x199be0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x199BE0u;
    {
        const bool branch_taken_0x199be0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BE0u;
        // 0x199be4: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199be0) {
            ctx->pc = 0x199BF0u;
            goto label_199bf0;
        }
    }
    ctx->pc = 0x199BE8u;
    // 0x199be8: 0x3e00008  jr          $ra
    ctx->pc = 0x199BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BE8u;
        // 0x199bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199BF0u;
label_199bf0:
    // 0x199bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x199BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BF0u;
        // 0x199bf4: 0x8c6208dc  lw          $v0, 0x8DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2268)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199BF8u;
}
