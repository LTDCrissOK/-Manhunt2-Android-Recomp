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

// Function: sub_001EA050
// Address: 0x1ea050 - 0x1ea118
void sub_001EA050_0x1ea050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA050_0x1ea050");
#endif

    switch (ctx->pc) {
        case 0x1ea10cu: goto label_1ea10c;
        default: break;
    }

    ctx->pc = 0x1ea050u;

    // 0x1ea050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea054: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1ea054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ea058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea05c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1ea05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1ea060: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ea060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1ea064: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1ea064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1ea068: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1ea068u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ea06c: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1ea06cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea070: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ea070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea074: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1ea074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1ea078: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1ea078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1ea07c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea080: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ea080u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ea084: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ea084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea088: 0x0  nop
    ctx->pc = 0x1ea088u;
    // NOP
    // 0x1ea08c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1EA08Cu;
    {
        const bool branch_taken_0x1ea08c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA08Cu;
        // 0x1ea090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea08c) {
            ctx->pc = 0x1EA0C4u;
            goto label_1ea0c4;
        }
    }
    ctx->pc = 0x1EA094u;
    // 0x1ea094: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ea094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea098: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ea098u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ea09c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ea09cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea0a0: 0x0  nop
    ctx->pc = 0x1ea0a0u;
    // NOP
    // 0x1ea0a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA0A4u;
    {
        const bool branch_taken_0x1ea0a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea0a4) {
            ctx->pc = 0x1EA0C4u;
            goto label_1ea0c4;
        }
    }
    ctx->pc = 0x1EA0ACu;
    // 0x1ea0ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ea0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea0b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ea0b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ea0b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ea0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea0b8: 0x0  nop
    ctx->pc = 0x1ea0b8u;
    // NOP
    // 0x1ea0bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA0BCu;
    {
        const bool branch_taken_0x1ea0bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea0bc) {
            ctx->pc = 0x1EA0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA0BCu;
            // 0x1ea0c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA0C4u;
            goto label_1ea0c4;
        }
    }
    ctx->pc = 0x1EA0C4u;
label_1ea0c4:
    // 0x1ea0c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA0C4u;
    {
        const bool branch_taken_0x1ea0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0C4u;
        // 0x1ea0c8: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0c4) {
            ctx->pc = 0x1EA0DCu;
            goto label_1ea0dc;
        }
    }
    ctx->pc = 0x1EA0CCu;
    // 0x1ea0cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ea0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea0d4: 0x0  nop
    ctx->pc = 0x1ea0d4u;
    // NOP
    // 0x1ea0d8: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ea0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1ea0dc:
    // 0x1ea0dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ea0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ea0e0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1ea0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea0e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1ea0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ea0e8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1ea0e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ea0ec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1ea0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea0f0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1ea0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ea0f4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1ea0f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1ea0f8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1ea0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea0fc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1ea0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ea100: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1ea100u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ea104: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1EA104u;
    SET_GPR_U32(ctx, 31, 0x1EA10Cu);
    ctx->pc = 0x1EA108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA104u;
    // 0x1ea108: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1EA104u, 0x1EA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA10Cu;
label_1ea10c:
    // 0x1ea10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea110: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA110u;
        // 0x1ea114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA118u;
}
