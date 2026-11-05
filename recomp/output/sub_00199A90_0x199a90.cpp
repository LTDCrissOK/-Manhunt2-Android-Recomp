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

// Function: sub_00199A90
// Address: 0x199a90 - 0x199b08
void sub_00199A90_0x199a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199A90_0x199a90");
#endif

    ctx->pc = 0x199a90u;

    // 0x199a90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x199a94: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x199a98: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x199a9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199A9Cu;
    {
        const bool branch_taken_0x199a9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A9Cu;
        // 0x199aa0: 0x24640900  addiu       $a0, $v1, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a9c) {
            ctx->pc = 0x199AB8u;
            goto label_199ab8;
        }
    }
    ctx->pc = 0x199AA4u;
    // 0x199aa4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199aa8: 0x0  nop
    ctx->pc = 0x199aa8u;
    // NOP
    // 0x199aac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199ab0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199AB0u;
    {
        const bool branch_taken_0x199ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ab0) {
            ctx->pc = 0x199AD4u;
            goto label_199ad4;
        }
    }
    ctx->pc = 0x199AB8u;
label_199ab8:
    // 0x199ab8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x199ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199abc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199ac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199ac4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199ac8: 0x0  nop
    ctx->pc = 0x199ac8u;
    // NOP
    // 0x199acc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199ad0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199ad0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199ad4:
    // 0x199ad4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199ad8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199adc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199ae0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x199ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199ae4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x199ae8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199aec: 0x0  nop
    ctx->pc = 0x199aecu;
    // NOP
    // 0x199af0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x199AF0u;
    {
        const bool branch_taken_0x199af0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AF0u;
        // 0x199af4: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199af0) {
            ctx->pc = 0x199B00u;
            goto label_199b00;
        }
    }
    ctx->pc = 0x199AF8u;
    // 0x199af8: 0x3e00008  jr          $ra
    ctx->pc = 0x199AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AF8u;
        // 0x199afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199B00u;
label_199b00:
    // 0x199b00: 0x3e00008  jr          $ra
    ctx->pc = 0x199B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B00u;
        // 0x199b04: 0x8c6208e0  lw          $v0, 0x8E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199B08u;
}
