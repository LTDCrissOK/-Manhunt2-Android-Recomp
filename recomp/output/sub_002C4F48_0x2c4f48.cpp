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

// Function: sub_002C4F48
// Address: 0x2c4f48 - 0x2c5120
void sub_002C4F48_0x2c4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4F48_0x2c4f48");
#endif

    switch (ctx->pc) {
        case 0x2c4facu: goto label_2c4fac;
        case 0x2c4fe8u: goto label_2c4fe8;
        case 0x2c4ff4u: goto label_2c4ff4;
        case 0x2c5040u: goto label_2c5040;
        case 0x2c50c0u: goto label_2c50c0;
        default: break;
    }

    ctx->pc = 0x2c4f48u;

    // 0x2c4f48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4f4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c4f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c4f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c4f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c4f60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c4f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c4f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c4f68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c4f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4f70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c4f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f74: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2c4f74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c4f78: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2c4f78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c4f7c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c4f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c4f80: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2c4f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4f84: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2c4f84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4f88: 0x0  nop
    ctx->pc = 0x2c4f88u;
    // NOP
    // 0x2c4f8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4F8Cu;
    {
        const bool branch_taken_0x2c4f8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F8Cu;
        // 0x2c4f90: 0xc60d0014  lwc1        $f13, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f8c) {
            ctx->pc = 0x2C4FA4u;
            goto label_2c4fa4;
        }
    }
    ctx->pc = 0x2C4F94u;
    // 0x2c4f94: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2c4f94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4f98: 0x0  nop
    ctx->pc = 0x2c4f98u;
    // NOP
    // 0x2c4f9c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4F9Cu;
    {
        const bool branch_taken_0x2c4f9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F9Cu;
        // 0x2c4fa0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f9c) {
            ctx->pc = 0x2C4FB0u;
            goto label_2c4fb0;
        }
    }
    ctx->pc = 0x2C4FA4u;
label_2c4fa4:
    // 0x2c4fa4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C4FA4u;
    SET_GPR_U32(ctx, 31, 0x2C4FACu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C4FA4u, 0x2C4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FACu;
label_2c4fac:
    // 0x2c4fac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c4facu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c4fb0:
    // 0x2c4fb0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2c4fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2c4fb4: 0x0  nop
    ctx->pc = 0x2c4fb4u;
    // NOP
    // 0x2c4fb8: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x2c4fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4fbc: 0x0  nop
    ctx->pc = 0x2c4fbcu;
    // NOP
    // 0x2c4fc0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4FC0u;
    {
        const bool branch_taken_0x2c4fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FC0u;
        // 0x2c4fc4: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fc0) {
            ctx->pc = 0x2C4FE0u;
            goto label_2c4fe0;
        }
    }
    ctx->pc = 0x2C4FC8u;
    // 0x2c4fc8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c4fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c4fcc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4fd4: 0x0  nop
    ctx->pc = 0x2c4fd4u;
    // NOP
    // 0x2c4fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c4fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4fdc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2c4fe0:
    // 0x2c4fe0: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C4FE0u;
    SET_GPR_U32(ctx, 31, 0x2C4FE8u);
    ctx->pc = 0x2C4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4FE0u;
    // 0x2c4fe4: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C4FE0u, 0x2C4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FE8u;
label_2c4fe8:
    // 0x2c4fe8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c4fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4fec: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2C4FECu;
    SET_GPR_U32(ctx, 31, 0x2C4FF4u);
    ctx->pc = 0x2C4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4FECu;
    // 0x2c4ff0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2C4FECu, 0x2C4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4FF4u;
label_2c4ff4:
    // 0x2c4ff4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c4ff4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c4ff8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2c4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c4ffc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2c4ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5004: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c5004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5008: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c5008u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c500c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5010: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2c5010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2c5014: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c5014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c5018: 0x46166032  c.eq.s      $f12, $f22
    ctx->pc = 0x2c5018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c501c: 0x0  nop
    ctx->pc = 0x2c501cu;
    // NOP
    // 0x2c5020: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5020u;
    {
        const bool branch_taken_0x2c5020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5020u;
        // 0x2c5024: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5020) {
            ctx->pc = 0x2C5038u;
            goto label_2c5038;
        }
    }
    ctx->pc = 0x2C5028u;
    // 0x2c5028: 0x46166832  c.eq.s      $f13, $f22
    ctx->pc = 0x2c5028u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c502c: 0x0  nop
    ctx->pc = 0x2c502cu;
    // NOP
    // 0x2c5030: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5030u;
    {
        const bool branch_taken_0x2c5030 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5030u;
        // 0x2c5034: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5030) {
            ctx->pc = 0x2C5044u;
            goto label_2c5044;
        }
    }
    ctx->pc = 0x2C5038u;
label_2c5038:
    // 0x2c5038: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C5038u;
    SET_GPR_U32(ctx, 31, 0x2C5040u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C5038u, 0x2C5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5040u;
label_2c5040:
    // 0x2c5040: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c5040u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c5044:
    // 0x2c5044: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2c5044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c5048: 0x0  nop
    ctx->pc = 0x2c5048u;
    // NOP
    // 0x2c504c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2c504cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5050: 0x0  nop
    ctx->pc = 0x2c5050u;
    // NOP
    // 0x2c5054: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5054u;
    {
        const bool branch_taken_0x2c5054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5054u;
        // 0x2c5058: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5054) {
            ctx->pc = 0x2C5074u;
            goto label_2c5074;
        }
    }
    ctx->pc = 0x2C505Cu;
    // 0x2c505c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c505cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c5060: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c5060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c5064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5068: 0x0  nop
    ctx->pc = 0x2c5068u;
    // NOP
    // 0x2c506c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c506cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5070: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2c5070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2c5074:
    // 0x2c5074: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2c5074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5078: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2c5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c507c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x2c507cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2c5080: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2c5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5084: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2c5084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2c5088: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c508c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2c508cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2c5090: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c5090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c5094: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x2c5094u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c5098: 0x46046032  c.eq.s      $f12, $f4
    ctx->pc = 0x2c5098u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c509c: 0x0  nop
    ctx->pc = 0x2c509cu;
    // NOP
    // 0x2c50a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C50A0u;
    {
        const bool branch_taken_0x2c50a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50A0u;
        // 0x2c50a4: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50a0) {
            ctx->pc = 0x2C50B8u;
            goto label_2c50b8;
        }
    }
    ctx->pc = 0x2C50A8u;
    // 0x2c50a8: 0x46046832  c.eq.s      $f13, $f4
    ctx->pc = 0x2c50a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c50ac: 0x0  nop
    ctx->pc = 0x2c50acu;
    // NOP
    // 0x2c50b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C50B0u;
    {
        const bool branch_taken_0x2c50b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50B0u;
        // 0x2c50b4: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50b0) {
            ctx->pc = 0x2C50C4u;
            goto label_2c50c4;
        }
    }
    ctx->pc = 0x2C50B8u;
label_2c50b8:
    // 0x2c50b8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C50B8u;
    SET_GPR_U32(ctx, 31, 0x2C50C0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C50B8u, 0x2C50C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50C0u;
label_2c50c0:
    // 0x2c50c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c50c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2c50c4:
    // 0x2c50c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c50c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50c8: 0x0  nop
    ctx->pc = 0x2c50c8u;
    // NOP
    // 0x2c50cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c50ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c50d0: 0x0  nop
    ctx->pc = 0x2c50d0u;
    // NOP
    // 0x2c50d4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C50D4u;
    {
        const bool branch_taken_0x2c50d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50D4u;
        // 0x2c50d8: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50d4) {
            ctx->pc = 0x2C50F4u;
            goto label_2c50f4;
        }
    }
    ctx->pc = 0x2C50DCu;
    // 0x2c50dc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c50dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c50e0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c50e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c50e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c50e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c50e8: 0x0  nop
    ctx->pc = 0x2c50e8u;
    // NOP
    // 0x2c50ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c50ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c50f0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2c50f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2c50f4:
    // 0x2c50f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c50f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c50f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c50f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c50fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c50fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c5100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c5104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5108: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2c5108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c510c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2c510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5110: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2c5110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5114: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5114u;
        // 0x2c5118: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C511Cu;
    // 0x2c511c: 0x0  nop
    ctx->pc = 0x2c511cu;
    // NOP
    ctx->pc = 0x2c5120u;
}
