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

// Function: sub_002A3FA8
// Address: 0x2a3fa8 - 0x2a4270
void sub_002A3FA8_0x2a3fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3FA8_0x2a3fa8");
#endif

    switch (ctx->pc) {
        case 0x2a4028u: goto label_2a4028;
        case 0x2a4044u: goto label_2a4044;
        case 0x2a4054u: goto label_2a4054;
        case 0x2a4100u: goto label_2a4100;
        case 0x2a4124u: goto label_2a4124;
        case 0x2a4130u: goto label_2a4130;
        case 0x2a4204u: goto label_2a4204;
        case 0x2a4238u: goto label_2a4238;
        case 0x2a4240u: goto label_2a4240;
        default: break;
    }

    ctx->pc = 0x2a3fa8u;

    // 0x2a3fa8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a3fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a3fac: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a3facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a3fb0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2a3fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2a3fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a3fbc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a3fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fc0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2a3fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2a3fc4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2a3fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fc8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2a3fc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a3fcc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2a3fccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fd0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a3fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a3fd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a3fd8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2a3fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a3fdc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a3fe0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2a3fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a3fe4: 0x12400096  beqz        $s2, . + 4 + (0x96 << 2)
    ctx->pc = 0x2A3FE4u;
    {
        const bool branch_taken_0x2a3fe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FE4u;
        // 0x2a3fe8: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fe4) {
            ctx->pc = 0x2A4240u;
            goto label_2a4240;
        }
    }
    ctx->pc = 0x2A3FECu;
    // 0x2a3fec: 0x14a00095  bnez        $a1, . + 4 + (0x95 << 2)
    ctx->pc = 0x2A3FECu;
    {
        const bool branch_taken_0x2a3fec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FECu;
        // 0x2a3ff0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fec) {
            ctx->pc = 0x2A4244u;
            goto label_2a4244;
        }
    }
    ctx->pc = 0x2A3FF4u;
    // 0x2a3ff4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a3ff8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2a3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3ffc: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2a3ffcu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4000: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x2a4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a4004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4008: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a4008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a400c: 0x0  nop
    ctx->pc = 0x2a400cu;
    // NOP
    // 0x2a4010: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x2A4010u;
    {
        const bool branch_taken_0x2a4010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4010u;
        // 0x2a4014: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4010) {
            ctx->pc = 0x2A40ECu;
            goto label_2a40ec;
        }
    }
    ctx->pc = 0x2A4018u;
    // 0x2a4018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a401c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a401cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a4020: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A4020u;
    SET_GPR_U32(ctx, 31, 0x2A4028u);
    ctx->pc = 0x2A4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4020u;
    // 0x2a4024: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A4020u, 0x2A4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4028u;
label_2a4028:
    // 0x2a4028: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a4028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2a402c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a402cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4030: 0x0  nop
    ctx->pc = 0x2a4030u;
    // NOP
    // 0x2a4034: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4038: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2a4038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2a403c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A403Cu;
    SET_GPR_U32(ctx, 31, 0x2A4044u);
    ctx->pc = 0x2A4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A403Cu;
    // 0x2a4040: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A403Cu, 0x2A4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4044u;
label_2a4044:
    // 0x2a4044: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a4044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a4048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a404c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2A404Cu;
    SET_GPR_U32(ctx, 31, 0x2A4054u);
    ctx->pc = 0x2A4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A404Cu;
    // 0x2a4050: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A404Cu, 0x2A4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4054u;
label_2a4054:
    // 0x2a4054: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4054u;
    {
        const bool branch_taken_0x2a4054 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4054u;
        // 0x2a4058: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4054) {
            ctx->pc = 0x2A4070u;
            goto label_2a4070;
        }
    }
    ctx->pc = 0x2A405Cu;
    // 0x2a405c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a405cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4060: 0x0  nop
    ctx->pc = 0x2a4060u;
    // NOP
    // 0x2a4064: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a4064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4068u;
    {
        const bool branch_taken_0x2a4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4068) {
            ctx->pc = 0x2A408Cu;
            goto label_2a408c;
        }
    }
    ctx->pc = 0x2A4070u;
label_2a4070:
    // 0x2a4070: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a4074: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a4078: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a407c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a407cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4080: 0x0  nop
    ctx->pc = 0x2a4080u;
    // NOP
    // 0x2a4084: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a4084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4088: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a4088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a408c:
    // 0x2a408c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a408cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a4090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a4090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4094: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2a4094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2a4098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a4098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a409c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a40a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A40A0u;
    {
        const bool branch_taken_0x2a40a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40A0u;
        // 0x2a40a4: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a40a0) {
            ctx->pc = 0x2A40BCu;
            goto label_2a40bc;
        }
    }
    ctx->pc = 0x2A40A8u;
    // 0x2a40a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a40a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a40ac: 0x0  nop
    ctx->pc = 0x2a40acu;
    // NOP
    // 0x2a40b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a40b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a40b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A40B4u;
    {
        const bool branch_taken_0x2a40b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40b4) {
            ctx->pc = 0x2A40D8u;
            goto label_2a40d8;
        }
    }
    ctx->pc = 0x2A40BCu;
label_2a40bc:
    // 0x2a40bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a40c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a40c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a40c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a40c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a40c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a40c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a40cc: 0x0  nop
    ctx->pc = 0x2a40ccu;
    // NOP
    // 0x2a40d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a40d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a40d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a40d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a40d8:
    // 0x2a40d8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a40d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a40dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a40dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a40e0: 0x0  nop
    ctx->pc = 0x2a40e0u;
    // NOP
    // 0x2a40e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a40e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a40e8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2a40e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2a40ec:
    // 0x2a40ec: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2a40f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a40f4: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x2a40f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A40F8u;
    SET_GPR_U32(ctx, 31, 0x2A4100u);
    ctx->pc = 0x2A40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40F8u;
    // 0x2a40fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A40F8u, 0x2A4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4100u;
label_2a4100:
    // 0x2a4100: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a4104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4108: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4108u;
    {
        const bool branch_taken_0x2a4108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4108) {
            ctx->pc = 0x2A410Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4108u;
            // 0x2a410c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4138u;
            goto label_2a4138;
        }
    }
    ctx->pc = 0x2A4110u;
    // 0x2a4110: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2a4114: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4114u;
    {
        const bool branch_taken_0x2a4114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4114) {
            ctx->pc = 0x2A4118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4114u;
            // 0x2a4118: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4138u;
            goto label_2a4138;
        }
    }
    ctx->pc = 0x2A411Cu;
    // 0x2a411c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2A411Cu;
    SET_GPR_U32(ctx, 31, 0x2A4124u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2A411Cu, 0x2A4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4124u;
label_2a4124:
    // 0x2a4124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4128: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x2A4128u;
    SET_GPR_U32(ctx, 31, 0x2A4130u);
    ctx->pc = 0x2A412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4128u;
    // 0x2a412c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x2A4128u, 0x2A4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4130u;
label_2a4130:
    // 0x2a4130: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x2a4130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x2a4134: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a4134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2a4138:
    // 0x2a4138: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a4138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a413c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a4140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4144: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a4144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4148: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a4148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a414c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2a414cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2a4150: 0xc6880000  lwc1        $f8, 0x0($s4)
    ctx->pc = 0x2a4150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a4154: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x2a4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4158: 0xc6a40018  lwc1        $f4, 0x18($s5)
    ctx->pc = 0x2a4158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a415c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2a415cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2a4160: 0xc68a0004  lwc1        $f10, 0x4($s4)
    ctx->pc = 0x2a4160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a4164: 0xc669000c  lwc1        $f9, 0xC($s3)
    ctx->pc = 0x2a4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a4168: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2a4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a416c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a416cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a4170: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2a4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a4174: 0xc6670008  lwc1        $f7, 0x8($s3)
    ctx->pc = 0x2a4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a4178: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a4178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a417c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a4180: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a4180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a4184: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x2a4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4188: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2a4188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a418c: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x2a418cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2a4190: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2a4190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a4194: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a4194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a4198: 0x46050182  mul.s       $f6, $f0, $f5
    ctx->pc = 0x2a4198u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2a419c: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x2a419cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a41a0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2a41a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2a41a4: 0xe7a9001c  swc1        $f9, 0x1C($sp)
    ctx->pc = 0x2a41a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a41a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a41a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a41ac: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2a41acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2a41b0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2a41b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a41b4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a41b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2a41b8: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2a41b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a41bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a41bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a41c0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2a41c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2a41c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a41c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a41c8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a41c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a41cc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2a41ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2a41d0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2a41d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a41d4: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2a41d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a41d8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2a41d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a41dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a41dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a41e0: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x2a41e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a41e4: 0xe7a9002c  swc1        $f9, 0x2C($sp)
    ctx->pc = 0x2a41e4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a41e8: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2a41e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2a41ec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2a41ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2a41f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2a41f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a41f4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a41f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a41f8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2a41f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a41fc: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x2A41FCu;
    SET_GPR_U32(ctx, 31, 0x2A4204u);
    ctx->pc = 0x2A4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41FCu;
    // 0x2a4200: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x2A41FCu, 0x2A4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4204u;
label_2a4204:
    // 0x2a4204: 0xc62f0014  lwc1        $f15, 0x14($s1)
    ctx->pc = 0x2a4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a4208: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a420c: 0x8e4a0048  lw          $t2, 0x48($s2)
    ctx->pc = 0x2a420cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2a4210: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a4210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a4214: 0x8e0ba300  lw          $t3, -0x5D00($s0)
    ctx->pc = 0x2a4214u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943488)));
    // 0x2a4218: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a4218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a421c: 0xc62d000c  lwc1        $f13, 0xC($s1)
    ctx->pc = 0x2a421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a4220: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2a4220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a4224: 0xc62e0010  lwc1        $f14, 0x10($s1)
    ctx->pc = 0x2a4224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a4228: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a4228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a422c: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x2a422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4230: 0xc0dafd6  jal         func_36BF58
    ctx->pc = 0x2A4230u;
    SET_GPR_U32(ctx, 31, 0x2A4238u);
    ctx->pc = 0x2A4234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4230u;
    // 0x2a4234: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BF58u, 0x2A4230u, 0x2A4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4238u;
label_2a4238:
    // 0x2a4238: 0xc0db1fa  jal         func_36C7E8
    ctx->pc = 0x2A4238u;
    SET_GPR_U32(ctx, 31, 0x2A4240u);
    ctx->pc = 0x36C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C7E8u, 0x2A4238u, 0x2A4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4240u;
label_2a4240:
    // 0x2a4240: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a4240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4244:
    // 0x2a4244: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a4244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a4248: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a4248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a424c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2a424cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a4250: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a4250u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4254: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2a4254u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a4258: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a4258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a425c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2a425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a4260: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2a4260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a4264: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4264u;
        // 0x2a4268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A426Cu;
    // 0x2a426c: 0x0  nop
    ctx->pc = 0x2a426cu;
    // NOP
    ctx->pc = 0x2a4270u;
}
