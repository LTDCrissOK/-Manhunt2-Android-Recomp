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

// Function: sub_002DC990
// Address: 0x2dc990 - 0x2dca48
void sub_002DC990_0x2dc990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC990_0x2dc990");
#endif

    switch (ctx->pc) {
        case 0x2dca3cu: goto label_2dca3c;
        default: break;
    }

    ctx->pc = 0x2dc990u;

    // 0x2dc990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc998: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2dc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2dc99c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DC99Cu;
    {
        const bool branch_taken_0x2dc99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC99Cu;
        // 0x2dc9a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc99c) {
            ctx->pc = 0x2DCA40u;
            goto label_2dca40;
        }
    }
    ctx->pc = 0x2DC9A4u;
    // 0x2dc9a4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2dc9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc9a8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2dc9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc9ac: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2dc9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dc9b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dc9b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2dc9b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dc9b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2dc9b8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2dc9b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2dc9bc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2dc9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2dc9c0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2dc9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2dc9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9c8: 0x0  nop
    ctx->pc = 0x2dc9c8u;
    // NOP
    // 0x2dc9cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc9ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9d0: 0x0  nop
    ctx->pc = 0x2dc9d0u;
    // NOP
    // 0x2dc9d4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC9D4u;
    {
        const bool branch_taken_0x2dc9d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9D4u;
        // 0x2dc9d8: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9d4) {
            ctx->pc = 0x2DC9FCu;
            goto label_2dc9fc;
        }
    }
    ctx->pc = 0x2DC9DCu;
    // 0x2dc9dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2dc9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2dc9e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2dc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2dc9e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2dc9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2dc9e8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2dc9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2dc9ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dc9ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc9f0: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2dc9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dc9f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC9F4u;
    {
        const bool branch_taken_0x2dc9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9F4u;
        // 0x2dc9f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9f4) {
            ctx->pc = 0x2DCA40u;
            goto label_2dca40;
        }
    }
    ctx->pc = 0x2DC9FCu;
label_2dc9fc:
    // 0x2dc9fc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2dc9fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dca00: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2dca00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dca04: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2dca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dca08: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2dca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dca0c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2dca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dca10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dca10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2dca14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dca14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2dca18: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2dca18u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2dca1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca20: 0x0  nop
    ctx->pc = 0x2dca20u;
    // NOP
    // 0x2dca24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dca28: 0x0  nop
    ctx->pc = 0x2dca28u;
    // NOP
    // 0x2dca2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCA2Cu;
    {
        const bool branch_taken_0x2dca2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA2Cu;
        // 0x2dca30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca2c) {
            ctx->pc = 0x2DCA40u;
            goto label_2dca40;
        }
    }
    ctx->pc = 0x2DCA34u;
    // 0x2dca34: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x2DCA34u;
    SET_GPR_U32(ctx, 31, 0x2DCA3Cu);
    ctx->pc = 0x2DCA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA34u;
    // 0x2dca38: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2DCA34u, 0x2DCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA3Cu;
label_2dca3c:
    // 0x2dca3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dca40:
    // 0x2dca40: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA40u;
        // 0x2dca44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCA48u;
}
