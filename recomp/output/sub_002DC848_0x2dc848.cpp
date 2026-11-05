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

// Function: sub_002DC848
// Address: 0x2dc848 - 0x2dc8c8
void sub_002DC848_0x2dc848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC848_0x2dc848");
#endif

    ctx->pc = 0x2dc848u;

    // 0x2dc848: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2dc848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2dc84c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2dc84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc850: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2dc850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc854: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dc854u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dc858: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2dc858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc85c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2dc85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc860: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dc860u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2dc864: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2dc864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc868: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2dc868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc86c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2dc86cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dc870: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dc870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dc874: 0xc440b668  lwc1        $f0, -0x4998($v0)
    ctx->pc = 0x2dc874u;
    { uint32_t bits = FAST_READ32(0x3FB668u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc878: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC878u;
        // 0x2dc87c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC880u;
    // 0x2dc880: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2dc880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2dc884: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2dc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc888: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2dc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc88c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dc88cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dc890: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2dc890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc894: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2dc894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc898: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dc898u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2dc89c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2dc89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc8a0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2dc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc8a4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2dc8a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dc8a8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2dc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2dc8ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dc8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dc8b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dc8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc8b4: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2dc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc8b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dc8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dc8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8BCu;
        // 0x2dc8c0: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC8C4u;
    // 0x2dc8c4: 0x0  nop
    ctx->pc = 0x2dc8c4u;
    // NOP
    ctx->pc = 0x2dc8c8u;
}
