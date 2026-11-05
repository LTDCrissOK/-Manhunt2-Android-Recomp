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

// Function: sub_002E09B0
// Address: 0x2e09b0 - 0x2e0dd8
void sub_002E09B0_0x2e09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E09B0_0x2e09b0");
#endif

    switch (ctx->pc) {
        case 0x2e0a74u: goto label_2e0a74;
        case 0x2e0c50u: goto label_2e0c50;
        case 0x2e0c68u: goto label_2e0c68;
        default: break;
    }

    ctx->pc = 0x2e09b0u;

    // 0x2e09b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e09b4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2e09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2e09b8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e09bc: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x2e09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x2e09c0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e09c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2e09c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e09c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09c8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e09c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e09cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e09ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e09d0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e09d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2e09d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e09d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e09dc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2e09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e09e0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2e09e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e09e4: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x2e09e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e09e8: 0x92020094  lbu         $v0, 0x94($s0)
    ctx->pc = 0x2e09e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2e09ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e09f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e09f4: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2e09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
    // 0x2e09f8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2e09f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e09fc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2e09fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0a00: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e0a00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0a04: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2e0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0a08: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2e0a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0a0c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e0a0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e0a10: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2e0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0a14: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2e0a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0a18: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2e0a18u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0a1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e0a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e0a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e0a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0a2c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2e0a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0a30: 0x0  nop
    ctx->pc = 0x2e0a30u;
    // NOP
    // 0x2e0a34: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0A34u;
    {
        const bool branch_taken_0x2e0a34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0a34) {
            ctx->pc = 0x2E0A44u;
            goto label_2e0a44;
        }
    }
    ctx->pc = 0x2E0A3Cu;
    // 0x2e0a3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A3Cu;
    {
        const bool branch_taken_0x2e0a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A3Cu;
        // 0x2e0a40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a3c) {
            ctx->pc = 0x2E0A54u;
            goto label_2e0a54;
        }
    }
    ctx->pc = 0x2E0A44u;
label_2e0a44:
    // 0x2e0a44: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2e0a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0a48: 0x0  nop
    ctx->pc = 0x2e0a48u;
    // NOP
    // 0x2e0a4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0A4Cu;
    {
        const bool branch_taken_0x2e0a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0a4c) {
            ctx->pc = 0x2E0A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0A4Cu;
            // 0x2e0a50: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0A54u;
            goto label_2e0a54;
        }
    }
    ctx->pc = 0x2E0A54u;
label_2e0a54:
    // 0x2e0a54: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2e0a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2e0a58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e0a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0a5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e0a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0a60: 0x0  nop
    ctx->pc = 0x2e0a60u;
    // NOP
    // 0x2e0a64: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2e0a64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e0a68: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2e0a68u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e0a6c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2E0A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E0A74u);
    ctx->pc = 0x2E0A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0A6Cu;
    // 0x2e0a70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2E0A6Cu, 0x2E0A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0A74u;
label_2e0a74:
    // 0x2e0a74: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2e0a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0a78: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2e0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2e0a7c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2e0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2e0a80: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2e0a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0a84: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e0a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e0a88: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2e0a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2e0a8c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2e0a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2e0a90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e0a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e0a94: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2e0a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2e0a98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e0a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0a9c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2e0a9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e0aa0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e0aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e0aa4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e0aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e0aa8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0aac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e0aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e0ab0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2e0ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0ab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0AB4u;
    {
        const bool branch_taken_0x2e0ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AB4u;
        // 0x2e0ab8: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ab4) {
            ctx->pc = 0x2E0AC8u;
            goto label_2e0ac8;
        }
    }
    ctx->pc = 0x2E0ABCu;
    // 0x2e0abc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2e0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2e0ac0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x2e0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x2e0ac4: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x2e0ac4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e0ac8:
    // 0x2e0ac8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0AC8u;
    {
        const bool branch_taken_0x2e0ac8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ac8) {
            ctx->pc = 0x2E0AE8u;
            goto label_2e0ae8;
        }
    }
    ctx->pc = 0x2E0AD0u;
    // 0x2e0ad0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0AD0u;
    {
        const bool branch_taken_0x2e0ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AD0u;
        // 0x2e0ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ad0) {
            ctx->pc = 0x2E0ADCu;
            goto label_2e0adc;
        }
    }
    ctx->pc = 0x2E0AD8u;
    // 0x2e0ad8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2e0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2e0adc:
    // 0x2e0adc: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x2e0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x2e0ae0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0AE0u;
    {
        const bool branch_taken_0x2e0ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AE0u;
        // 0x2e0ae4: 0xc4470034  lwc1        $f7, 0x34($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ae0) {
            ctx->pc = 0x2E0AECu;
            goto label_2e0aec;
        }
    }
    ctx->pc = 0x2E0AE8u;
label_2e0ae8:
    // 0x2e0ae8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2e0ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2e0aec:
    // 0x2e0aec: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2e0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2e0af0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e0af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0af4: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x2e0af4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e0af8: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x2e0af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x2e0afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0b00: 0x0  nop
    ctx->pc = 0x2e0b00u;
    // NOP
    // 0x2e0b04: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2e0b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0b08: 0x0  nop
    ctx->pc = 0x2e0b08u;
    // NOP
    // 0x2e0b0c: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x2E0B0Cu;
    {
        const bool branch_taken_0x2e0b0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B0Cu;
        // 0x2e0b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b0c) {
            ctx->pc = 0x2E0C5Cu;
            goto label_2e0c5c;
        }
    }
    ctx->pc = 0x2E0B14u;
    // 0x2e0b14: 0x3c0142aa  lui         $at, 0x42AA
    ctx->pc = 0x2e0b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17066 << 16));
    // 0x2e0b18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0b1c: 0x0  nop
    ctx->pc = 0x2e0b1cu;
    // NOP
    // 0x2e0b20: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e0b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0b24: 0x0  nop
    ctx->pc = 0x2e0b24u;
    // NOP
    // 0x2e0b28: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
    ctx->pc = 0x2E0B28u;
    {
        const bool branch_taken_0x2e0b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0b28) {
            ctx->pc = 0x2E0B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0B28u;
            // 0x2e0b2c: 0xe7a70004  swc1        $f7, 0x4($sp) (Delay Slot)
            { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C60u;
            goto label_2e0c60;
        }
    }
    ctx->pc = 0x2E0B30u;
    // 0x2e0b30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2e0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0b34: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2e0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0b38: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e0b38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0b3c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2e0b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0b40: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2e0b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0b44: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e0b44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e0b48: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2e0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0b4c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2e0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0b50: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2e0b50u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0b54: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2e0b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e0b58: 0x0  nop
    ctx->pc = 0x2e0b58u;
    // NOP
    // 0x2e0b5c: 0x46066834  c.lt.s      $f13, $f6
    ctx->pc = 0x2e0b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0b60: 0x0  nop
    ctx->pc = 0x2e0b60u;
    // NOP
    // 0x2e0b64: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2E0B64u;
    {
        const bool branch_taken_0x2e0b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B64u;
        // 0x2e0b68: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b64) {
            ctx->pc = 0x2E0C58u;
            goto label_2e0c58;
        }
    }
    ctx->pc = 0x2E0B6Cu;
    // 0x2e0b6c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2e0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0b70: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e0b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e0b74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e0b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0b78: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2e0b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e0b7c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e0b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0b80: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2e0b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e0b84: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x2e0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e0b88: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2e0b88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e0b8c: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x2e0b8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e0b90: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0b94: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2e0b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0b98: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2e0b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e0b9c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e0b9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e0ba0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e0ba0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e0ba4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e0ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e0ba8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2e0ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0bac: 0x0  nop
    ctx->pc = 0x2e0bacu;
    // NOP
    // 0x2e0bb0: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2E0BB0u;
    {
        const bool branch_taken_0x2e0bb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BB0u;
        // 0x2e0bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bb0) {
            ctx->pc = 0x2E0C5Cu;
            goto label_2e0c5c;
        }
    }
    ctx->pc = 0x2E0BB8u;
    // 0x2e0bb8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e0bb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0bbc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e0bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e0bc0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e0bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e0bc4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e0bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e0bc8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e0bc8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e0bcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e0bccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e0bd0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e0bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e0bd4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2e0bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e0bd8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e0bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0bdc: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2e0bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0be0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e0be0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0be4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2e0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0be8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2e0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0bec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e0becu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e0bf0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2e0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0bf4: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2e0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0bf8: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2e0bf8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e0bfc: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2e0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e0c00: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0c04: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0c08: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2e0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0c0c: 0x46046902  mul.s       $f4, $f13, $f4
    ctx->pc = 0x2e0c0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x2e0c10: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e0c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0c14: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x2e0c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2e0c18: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x2e0c18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2e0c1c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2e0c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2e0c20: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2e0c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e0c24: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e0c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e0c28: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e0c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e0c2c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e0c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e0c30: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e0c30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e0c34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0c38: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e0c38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e0c3c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e0c40: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2e0c40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e0c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c48: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E0C48u;
    SET_GPR_U32(ctx, 31, 0x2E0C50u);
    ctx->pc = 0x2E0C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C48u;
    // 0x2e0c4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E0C48u, 0x2E0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C50u;
label_2e0c50:
    // 0x2e0c50: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2E0C50u;
    {
        const bool branch_taken_0x2e0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C50u;
        // 0x2e0c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c50) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0C58u;
label_2e0c58:
    // 0x2e0c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0c5c:
    // 0x2e0c5c: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2e0c5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e0c60:
    // 0x2e0c60: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E0C60u;
    SET_GPR_U32(ctx, 31, 0x2E0C68u);
    ctx->pc = 0x2E0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C60u;
    // 0x2e0c64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E0C60u, 0x2E0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0C68u;
label_2e0c68:
    // 0x2e0c68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0c6c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2e0c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e0c70: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2e0c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e0c74: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2e0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0c78: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x2e0c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2e0c7c: 0x46013036  c.le.s      $f6, $f1
    ctx->pc = 0x2e0c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0c80: 0x0  nop
    ctx->pc = 0x2e0c80u;
    // NOP
    // 0x2e0c84: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x2E0C84u;
    {
        const bool branch_taken_0x2e0c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0c84) {
            ctx->pc = 0x2E0D4Cu;
            goto label_2e0d4c;
        }
    }
    ctx->pc = 0x2E0C8Cu;
    // 0x2e0c8c: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x2e0c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0c90: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2e0c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2e0c94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2e0c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2e0c98: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2e0c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2e0c9c: 0x0  nop
    ctx->pc = 0x2e0c9cu;
    // NOP
    // 0x2e0ca0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2e0ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2e0ca4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e0ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0ca8: 0x0  nop
    ctx->pc = 0x2e0ca8u;
    // NOP
    // 0x2e0cac: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2E0CACu;
    {
        const bool branch_taken_0x2e0cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0cac) {
            ctx->pc = 0x2E0D4Cu;
            goto label_2e0d4c;
        }
    }
    ctx->pc = 0x2E0CB4u;
    // 0x2e0cb4: 0x56600028  bnel        $s3, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E0CB4u;
    {
        const bool branch_taken_0x2e0cb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cb4) {
            ctx->pc = 0x2E0CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0CB4u;
            // 0x2e0cb8: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D58u;
            goto label_2e0d58;
        }
    }
    ctx->pc = 0x2E0CBCu;
    // 0x2e0cbc: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x2e0cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x2e0cc0: 0xe60100c4  swc1        $f1, 0xC4($s0)
    ctx->pc = 0x2e0cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x2e0cc4: 0xe60600d0  swc1        $f6, 0xD0($s0)
    ctx->pc = 0x2e0cc4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x2e0cc8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2e0cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0ccc: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2e0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0cd0: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2e0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e0cd4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e0cd4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e0cd8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e0cd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e0cdc: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2e0cdcu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e0ce0: 0x46050144  c1          0x50144
    ctx->pc = 0x2e0ce0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e0ce4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e0ce8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e0ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e0cec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e0cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e0cf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0cf4: 0xc441b698  lwc1        $f1, -0x4968($v0)
    ctx->pc = 0x2e0cf4u;
    { uint32_t bits = FAST_READ32(0x3FB698u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0cf8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e0cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e0cfc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e0cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e0d00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e0d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e0d04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e0d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e0d08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e0d08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e0d0c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2e0d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2e0d10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e0d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e0d14: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2e0d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0d18: 0x0  nop
    ctx->pc = 0x2e0d18u;
    // NOP
    // 0x2e0d1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0D1Cu;
    {
        const bool branch_taken_0x2e0d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D1Cu;
        // 0x2e0d20: 0xe60000c8  swc1        $f0, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d1c) {
            ctx->pc = 0x2E0D28u;
            goto label_2e0d28;
        }
    }
    ctx->pc = 0x2E0D24u;
    // 0x2e0d24: 0xe60200c8  swc1        $f2, 0xC8($s0)
    ctx->pc = 0x2e0d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
label_2e0d28:
    // 0x2e0d28: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x2e0d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0d2c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2e0d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0d30: 0x0  nop
    ctx->pc = 0x2e0d30u;
    // NOP
    // 0x2e0d34: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2E0D34u;
    {
        const bool branch_taken_0x2e0d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D34u;
        // 0x2e0d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d34) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0D3Cu;
    // 0x2e0d3c: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x2e0d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0d40: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2e0d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e0d44: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2E0D44u;
    {
        const bool branch_taken_0x2e0d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D44u;
        // 0x2e0d48: 0xe60600c4  swc1        $f6, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d44) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0D4Cu;
label_2e0d4c:
    // 0x2e0d4c: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0D4Cu;
    {
        const bool branch_taken_0x2e0d4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d4c) {
            ctx->pc = 0x2E0D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D4Cu;
            // 0x2e0d50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D68u;
            goto label_2e0d68;
        }
    }
    ctx->pc = 0x2E0D54u;
    // 0x2e0d54: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x2e0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_2e0d58:
    // 0x2e0d58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0d5c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2e0d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0d60: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x2e0d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x2e0d64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e0d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e0d68:
    // 0x2e0d68: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2e0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2e0d6c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2e0d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2e0d70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0D70u;
    {
        const bool branch_taken_0x2e0d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D70u;
        // 0x2e0d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d70) {
            ctx->pc = 0x2E0D88u;
            goto label_2e0d88;
        }
    }
    ctx->pc = 0x2E0D78u;
    // 0x2e0d78: 0x8c630334  lw          $v1, 0x334($v1)
    ctx->pc = 0x2e0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x2e0d7c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2e0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2e0d80: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
    // 0x2e0d84: 0x2c450003  sltiu       $a1, $v0, 0x3
    ctx->pc = 0x2e0d84u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2e0d88:
    // 0x2e0d88: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x2e0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0d90: 0x0  nop
    ctx->pc = 0x2e0d90u;
    // NOP
    // 0x2e0d94: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e0d94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0d98: 0x0  nop
    ctx->pc = 0x2e0d98u;
    // NOP
    // 0x2e0d9c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0D9Cu;
    {
        const bool branch_taken_0x2e0d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0d9c) {
            ctx->pc = 0x2E0DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D9Cu;
            // 0x2e0da0: 0xe61400c0  swc1        $f20, 0xC0($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DB0u;
            goto label_2e0db0;
        }
    }
    ctx->pc = 0x2E0DA4u;
    // 0x2e0da4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0DA4u;
    {
        const bool branch_taken_0x2e0da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DA4u;
        // 0x2e0da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0da4) {
            ctx->pc = 0x2E0DB8u;
            goto label_2e0db8;
        }
    }
    ctx->pc = 0x2E0DACu;
    // 0x2e0dac: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x2e0dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_2e0db0:
    // 0x2e0db0: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x2e0db0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e0db4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0db8:
    // 0x2e0db8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e0db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0dbc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e0dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0dc0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e0dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0dc4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e0dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e0dc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e0dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0dcc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2e0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DD0u;
        // 0x2e0dd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DD8u;
}
