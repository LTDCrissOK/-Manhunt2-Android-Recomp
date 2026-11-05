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

// Function: sub_002FC7E8
// Address: 0x2fc7e8 - 0x2fc888
void sub_002FC7E8_0x2fc7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC7E8_0x2fc7e8");
#endif

    ctx->pc = 0x2fc7e8u;

    // 0x2fc7e8: 0x8c8211d8  lw          $v0, 0x11D8($a0)
    ctx->pc = 0x2fc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4568)));
    // 0x2fc7ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc7f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2fc7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2fc7f4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC7F4u;
    {
        const bool branch_taken_0x2fc7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc7f4) {
            ctx->pc = 0x2FC7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC7F4u;
            // 0x2fc7f8: 0xc4800524  lwc1        $f0, 0x524($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC824u;
            goto label_2fc824;
        }
    }
    ctx->pc = 0x2FC7FCu;
    // 0x2fc7fc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fc800: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2fc800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2fc804: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fc808: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FC808u;
    {
        const bool branch_taken_0x2fc808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc808) {
            ctx->pc = 0x2FC880u;
            goto label_2fc880;
        }
    }
    ctx->pc = 0x2FC810u;
    // 0x2fc810: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x2fc810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x2fc814: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2fc814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2fc818: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC818u;
    {
        const bool branch_taken_0x2fc818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc818) {
            ctx->pc = 0x2FC880u;
            goto label_2fc880;
        }
    }
    ctx->pc = 0x2FC820u;
    // 0x2fc820: 0xc4800524  lwc1        $f0, 0x524($a0)
    ctx->pc = 0x2fc820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fc824:
    // 0x2fc824: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc828: 0xc4810528  lwc1        $f1, 0x528($a0)
    ctx->pc = 0x2fc828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc82c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fc82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fc830: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2fc830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fc834: 0xc442b80c  lwc1        $f2, -0x47F4($v0)
    ctx->pc = 0x2fc834u;
    { uint32_t bits = FAST_READ32(0x3FB80Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc838: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2fc838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2fc83c: 0xc463b814  lwc1        $f3, -0x47EC($v1)
    ctx->pc = 0x2fc83cu;
    { uint32_t bits = FAST_READ32(0x3FB814u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fc840: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc844: 0x0  nop
    ctx->pc = 0x2fc844u;
    // NOP
    // 0x2fc848: 0x0  nop
    ctx->pc = 0x2fc848u;
    // NOP
    // 0x2fc84c: 0x46000004  c1          0x4
    ctx->pc = 0x2fc84cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fc850: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fc850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fc854: 0x46040040  add.s       $f1, $f0, $f4
    ctx->pc = 0x2fc854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2fc858: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2fc858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc85c: 0x0  nop
    ctx->pc = 0x2fc85cu;
    // NOP
    // 0x2fc860: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC860u;
    {
        const bool branch_taken_0x2fc860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc860) {
            ctx->pc = 0x2FC864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC860u;
            // 0x2fc864: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC868u;
            goto label_2fc868;
        }
    }
    ctx->pc = 0x2FC868u;
label_2fc868:
    // 0x2fc868: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x2fc868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc86c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fc86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc870: 0x0  nop
    ctx->pc = 0x2fc870u;
    // NOP
    // 0x2fc874: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC874u;
    {
        const bool branch_taken_0x2fc874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fc874) {
            ctx->pc = 0x2FC878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC874u;
            // 0x2fc878: 0xe4811204  swc1        $f1, 0x1204($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4612), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC87Cu;
            goto label_2fc87c;
        }
    }
    ctx->pc = 0x2FC87Cu;
label_2fc87c:
    // 0x2fc87c: 0xc4841204  lwc1        $f4, 0x1204($a0)
    ctx->pc = 0x2fc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2fc880:
    // 0x2fc880: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC880u;
        // 0x2fc884: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC888u;
}
