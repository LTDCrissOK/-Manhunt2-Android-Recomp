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

// Function: sub_0028FD00
// Address: 0x28fd00 - 0x2901c0
void sub_0028FD00_0x28fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FD00_0x28fd00");
#endif

    switch (ctx->pc) {
        case 0x28fd28u: goto label_28fd28;
        case 0x28fd74u: goto label_28fd74;
        case 0x28fe28u: goto label_28fe28;
        case 0x28fe30u: goto label_28fe30;
        case 0x290040u: goto label_290040;
        case 0x2900b0u: goto label_2900b0;
        case 0x290178u: goto label_290178;
        default: break;
    }

    ctx->pc = 0x28fd00u;

    // 0x28fd00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28fd04: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x28fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x28fd08: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x28fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x28fd0c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x28fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x28fd10: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x28fd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x28fd14: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x28fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x28fd18: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x28fd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x28fd1c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28fd20: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x28FD20u;
    SET_GPR_U32(ctx, 31, 0x28FD28u);
    ctx->pc = 0x28FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD20u;
    // 0x28fd24: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x28FD20u, 0x28FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD28u;
label_28fd28:
    // 0x28fd28: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x28FD28u;
    {
        const bool branch_taken_0x28fd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD28u;
        // 0x28fd2c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd28) {
            ctx->pc = 0x290198u;
            goto label_290198;
        }
    }
    ctx->pc = 0x28FD30u;
    // 0x28fd30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd34: 0x8c63bd50  lw          $v1, -0x42B0($v1)
    ctx->pc = 0x28fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    // 0x28fd38: 0x906213f4  lbu         $v0, 0x13F4($v1)
    ctx->pc = 0x28fd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5108)));
    // 0x28fd3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28FD3Cu;
    {
        const bool branch_taken_0x28fd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD3Cu;
        // 0x28fd40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd3c) {
            ctx->pc = 0x28FD60u;
            goto label_28fd60;
        }
    }
    ctx->pc = 0x28FD44u;
    // 0x28fd44: 0xc46113f8  lwc1        $f1, 0x13F8($v1)
    ctx->pc = 0x28fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fd48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28fd48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fd4c: 0x0  nop
    ctx->pc = 0x28fd4cu;
    // NOP
    // 0x28fd50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28fd50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fd54: 0x0  nop
    ctx->pc = 0x28fd54u;
    // NOP
    // 0x28fd58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28FD58u;
    {
        const bool branch_taken_0x28fd58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28fd58) {
            ctx->pc = 0x28FD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FD58u;
            // 0x28fd5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FD60u;
            goto label_28fd60;
        }
    }
    ctx->pc = 0x28FD60u;
label_28fd60:
    // 0x28fd60: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28fd64: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x28FD64u;
    {
        const bool branch_taken_0x28fd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD64u;
        // 0x28fd68: 0x8ca4bd50  lw          $a0, -0x42B0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd64) {
            ctx->pc = 0x290198u;
            goto label_290198;
        }
    }
    ctx->pc = 0x28FD6Cu;
    // 0x28fd6c: 0xc0bf8da  jal         func_2FE368
    ctx->pc = 0x28FD6Cu;
    SET_GPR_U32(ctx, 31, 0x28FD74u);
    ctx->pc = 0x28FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD6Cu;
    // 0x28fd70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE368u, 0x28FD6Cu, 0x28FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD74u;
label_28fd74:
    // 0x28fd74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28fd74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd78: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x28fd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x28fd7c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x28fd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x28fd80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fd84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28fd88: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28fd8c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x28fd8cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fd90: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28fd94: 0xc483a890  lwc1        $f3, -0x5770($a0)
    ctx->pc = 0x28fd94u;
    { uint32_t bits = FAST_READ32(0x3FA890u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28fd98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28fd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28fd9c: 0xc462ac6c  lwc1        $f2, -0x5394($v1)
    ctx->pc = 0x28fd9cu;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28fda0: 0x3c013f13  lui         $at, 0x3F13
    ctx->pc = 0x28fda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16147 << 16));
    // 0x28fda4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28fda4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28fda8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fdac: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x28fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x28fdb0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28fdb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28fdb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28fdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28fdb8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28fdb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28fdbc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28fdc0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x28fdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x28fdc4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28fdc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28fdc8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28fdc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28fdcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28fdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28fdd0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28fdd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28fdd4: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x28fdd4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x28fdd8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x28fdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x28fddc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28fddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28fde0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fde4: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x28fde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28fde8: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x28fde8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28fdec: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x28fdecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28fdf0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28fdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28fdf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28FDF4u;
    {
        const bool branch_taken_0x28fdf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDF4u;
        // 0x28fdf8: 0xe483a890  swc1        $f3, -0x5770($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294944912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdf4) {
            ctx->pc = 0x28FE00u;
            goto label_28fe00;
        }
    }
    ctx->pc = 0x28FDFCu;
    // 0x28fdfc: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x28fdfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_28fe00:
    // 0x28fe00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28fe04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28fe08: 0xe481a890  swc1        $f1, -0x5770($a0)
    ctx->pc = 0x28fe08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294944912), bits); }
    // 0x28fe0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28fe0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fe10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fe14: 0x0  nop
    ctx->pc = 0x28fe14u;
    // NOP
    // 0x28fe18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28fe18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28fe1c: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x28fe1cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28fe20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe24: 0x0  nop
    ctx->pc = 0x28fe24u;
    // NOP
label_28fe28:
    // 0x28fe28: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x28fe28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28fe2c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x28fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28fe30:
    // 0x28fe30: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x28fe30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28fe34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28fe34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28fe38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fe38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fe3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28fe3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28fe40: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x28fe40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28fe44: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fe48: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28fe4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fe4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fe50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fe50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fe54: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28fe54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28fe58: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x28fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x28fe5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28fe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28fe60: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x28fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x28fe64: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x28fe64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28fe68: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x28FE68u;
    {
        const bool branch_taken_0x28fe68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE68u;
        // 0x28fe6c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe68) {
            ctx->pc = 0x290178u;
            goto label_290178;
        }
    }
    ctx->pc = 0x28FE70u;
    // 0x28fe70: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x28fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x28fe74: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28fe78: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x28fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
    // 0x28fe7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fe80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fe84: 0x800008  jr          $a0
    ctx->pc = 0x28FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28FE8Cu: goto label_28fe8c;
            case 0x28FEB8u: goto label_28feb8;
            case 0x28FEDCu: goto label_28fedc;
            case 0x28FF0Cu: goto label_28ff0c;
            case 0x28FF34u: goto label_28ff34;
            case 0x28FF64u: goto label_28ff64;
            case 0x28FF84u: goto label_28ff84;
            case 0x28FFB0u: goto label_28ffb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FE8Cu;
label_28fe8c:
    // 0x28fe8c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fe90: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28fe94: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28fe94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28fe98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28fe98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28fe9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28fe9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28fea0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28fea4: 0x8c51f4a0  lw          $s1, -0xB60($v0)
    ctx->pc = 0x28fea4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF4A0u));
    // 0x28fea8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x28fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28feac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28feacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28feb0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x28FEB0u;
    {
        const bool branch_taken_0x28feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEB0u;
        // 0x28feb4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28feb0) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FEB8u;
label_28feb8:
    // 0x28feb8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28febc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28fec0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28fec4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28fec4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28fec8: 0x8c51f4a4  lw          $s1, -0xB5C($v0)
    ctx->pc = 0x28fec8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF4A4u));
    // 0x28fecc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x28feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fed0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28fed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28fed4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x28FED4u;
    {
        const bool branch_taken_0x28fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FED4u;
        // 0x28fed8: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fed4) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FEDCu;
label_28fedc:
    // 0x28fedc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fee0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28fee4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28fee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28fee8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28fee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28feec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28feecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28fef0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fef4: 0x8c51f4a8  lw          $s1, -0xB58($v0)
    ctx->pc = 0x28fef4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF4A8u));
    // 0x28fef8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28fef8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x28fefc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28fefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28ff00: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x28ff00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28ff04: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x28FF04u;
    {
        const bool branch_taken_0x28ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF04u;
        // 0x28ff08: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff04) {
            ctx->pc = 0x28FFA4u;
            goto label_28ffa4;
        }
    }
    ctx->pc = 0x28FF0Cu;
label_28ff0c:
    // 0x28ff0c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff10: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ff14: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28ff14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28ff18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28ff18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28ff1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28ff1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28ff20: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ff24: 0x8c51f4ac  lw          $s1, -0xB54($v0)
    ctx->pc = 0x28ff24u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF4ACu));
    // 0x28ff28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x28ff28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28ff2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x28FF2Cu;
    {
        const bool branch_taken_0x28ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF2Cu;
        // 0x28ff30: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff2c) {
            ctx->pc = 0x28FFC8u;
            goto label_28ffc8;
        }
    }
    ctx->pc = 0x28FF34u;
label_28ff34:
    // 0x28ff34: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28ff38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28ff38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff3c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ff40: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x28ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ff44: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28ff48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28ff48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28ff4c: 0x8c51f494  lw          $s1, -0xB6C($v0)
    ctx->pc = 0x28ff4cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF494u));
    // 0x28ff50: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x28ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff54: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x28ff54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28ff58: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x28ff58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28ff5c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28FF5Cu;
    {
        const bool branch_taken_0x28ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF5Cu;
        // 0x28ff60: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff5c) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28FF64u;
label_28ff64:
    // 0x28ff64: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28ff68: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ff6c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff70: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x28ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ff74: 0x8c51f498  lw          $s1, -0xB68($v0)
    ctx->pc = 0x28ff74u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF498u));
    // 0x28ff78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28ff78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28ff7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28FF7Cu;
    {
        const bool branch_taken_0x28ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF7Cu;
        // 0x28ff80: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff7c) {
            ctx->pc = 0x28FFD0u;
            goto label_28ffd0;
        }
    }
    ctx->pc = 0x28FF84u;
label_28ff84:
    // 0x28ff84: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff88: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ff8c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ff90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ff90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28ff94: 0x8c51f490  lw          $s1, -0xB70($v0)
    ctx->pc = 0x28ff94u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF490u));
    // 0x28ff98: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x28ff98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x28ff9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28ffa0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x28ffa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_28ffa4:
    // 0x28ffa4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28ffa8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28FFA8u;
    {
        const bool branch_taken_0x28ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFA8u;
        // 0x28ffac: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffa8) {
            ctx->pc = 0x28FFD4u;
            goto label_28ffd4;
        }
    }
    ctx->pc = 0x28FFB0u;
label_28ffb0:
    // 0x28ffb0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ffb4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ffb8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ffbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28ffbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28ffc0: 0x8c51f49c  lw          $s1, -0xB64($v0)
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4BF49Cu));
    // 0x28ffc4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x28ffc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_28ffc8:
    // 0x28ffc8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x28ffc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_28ffcc:
    // 0x28ffcc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28ffccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_28ffd0:
    // 0x28ffd0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28ffd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_28ffd4:
    // 0x28ffd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28ffd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28ffd8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28ffd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28ffdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ffdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffe0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x28ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ffe4: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x28ffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28ffe8: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x28ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28ffec: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28ffecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28fff0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x28fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fff4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x28fff4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x28fff8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fffc: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x28fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290000: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x290000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x290004: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x290004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290008: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x290008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29000c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x29000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290010: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x290010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290014: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x290014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x290018: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x290018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x29001c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x29001cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x290020: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x290020u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x290024: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x290024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x290028: 0x1a80000b  blez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x290028u;
    {
        const bool branch_taken_0x290028 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x29002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290028u;
        // 0x29002c: 0xe7a30034  swc1        $f3, 0x34($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290028) {
            ctx->pc = 0x290058u;
            goto label_290058;
        }
    }
    ctx->pc = 0x290030u;
    // 0x290030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290038: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x290038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29003c: 0x0  nop
    ctx->pc = 0x29003cu;
    // NOP
label_290040:
    // 0x290040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x290040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290044: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290048: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x290048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x29004c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x29004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x290050: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x290050u;
    {
        const bool branch_taken_0x290050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290050u;
        // 0x290054: 0xa2800a  movz        $s0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290050) {
            ctx->pc = 0x290040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290040;
        }
    }
    ctx->pc = 0x290058u;
label_290058:
    // 0x290058: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x290058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29005c: 0x16600014  bnez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x29005Cu;
    {
        const bool branch_taken_0x29005c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x290060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29005Cu;
        // 0x290060: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29005c) {
            ctx->pc = 0x2900B0u;
            goto label_2900b0;
        }
    }
    ctx->pc = 0x290064u;
    // 0x290064: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290064u;
    {
        const bool branch_taken_0x290064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290064u;
        // 0x290068: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290064) {
            ctx->pc = 0x290074u;
            goto label_290074;
        }
    }
    ctx->pc = 0x29006Cu;
    // 0x29006c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x29006cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x290070: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x290070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_290074:
    // 0x290074: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x290074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290078: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29007c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29007cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x290080: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x290080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290084: 0xc7af0044  lwc1        $f15, 0x44($sp)
    ctx->pc = 0x290084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x290088: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x290088u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x29008c: 0x460d6302  mul.s       $f12, $f12, $f13
    ctx->pc = 0x29008cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x290090: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x290090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290094: 0x460d7b42  mul.s       $f13, $f15, $f13
    ctx->pc = 0x290094u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
    // 0x290098: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x290098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29009c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29009cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2900a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2900a4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2900a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2900a8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2900A8u;
    SET_GPR_U32(ctx, 31, 0x2900B0u);
    ctx->pc = 0x2900ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900A8u;
    // 0x2900ac: 0x460d0b41  sub.s       $f13, $f1, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2900A8u, 0x2900B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900B0u;
label_2900b0:
    // 0x2900b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2900b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2900b4: 0x16620031  bne         $s3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2900B4u;
    {
        const bool branch_taken_0x2900b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2900B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900B4u;
        // 0x2900b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900b4) {
            ctx->pc = 0x29017Cu;
            goto label_29017c;
        }
    }
    ctx->pc = 0x2900BCu;
    // 0x2900bc: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2900BCu;
    {
        const bool branch_taken_0x2900bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900BCu;
        // 0x2900c0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900bc) {
            ctx->pc = 0x29017Cu;
            goto label_29017c;
        }
    }
    ctx->pc = 0x2900C4u;
    // 0x2900c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2900c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2900c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2900c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2900cc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2900ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2900d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2900d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2900d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2900d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2900d8: 0x461430c1  sub.s       $f3, $f6, $f20
    ctx->pc = 0x2900d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[20]);
    // 0x2900dc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2900dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2900e0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2900e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2900e4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2900e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2900e8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2900e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2900ec: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2900ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2900f0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2900f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2900f4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2900f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2900f8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2900f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2900fc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2900fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x290100: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x290100u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x290104: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x290104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x290108: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x290108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29010c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x29010cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x290110: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x290110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x290114: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x290114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x290118: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x290118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29011c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x29011cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x290120: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x290120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x290124: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x290128: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x290128u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x29012c: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x29012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x290130: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x290130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x290134: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x290134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290138: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29013c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x29013cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x290140: 0x460c0342  mul.s       $f13, $f0, $f12
    ctx->pc = 0x290140u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x290144: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x290144u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x290148: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x290148u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x29014c: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x29014cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x290150: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x290154: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x290154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x290158: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x290158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29015c: 0x460d2341  sub.s       $f13, $f4, $f13
    ctx->pc = 0x29015cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x290160: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x290160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x290164: 0x460c3b01  sub.s       $f12, $f7, $f12
    ctx->pc = 0x290164u;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x290168: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x290168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29016c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290170: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x290170u;
    SET_GPR_U32(ctx, 31, 0x290178u);
    ctx->pc = 0x290174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290170u;
    // 0x290174: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x290170u, 0x290178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290178u;
label_290178:
    // 0x290178: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x290178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29017c:
    // 0x29017c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x29017cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290180: 0x1440ff2b  bnez        $v0, . + 4 + (-0xD5 << 2)
    ctx->pc = 0x290180u;
    {
        const bool branch_taken_0x290180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290180u;
        // 0x290184: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290180) {
            ctx->pc = 0x28FE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fe30;
        }
    }
    ctx->pc = 0x290188u;
    // 0x290188: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x290188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29018c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x29018cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x290190: 0x5440ff25  bnel        $v0, $zero, . + 4 + (-0xDB << 2)
    ctx->pc = 0x290190u;
    {
        const bool branch_taken_0x290190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290190) {
            ctx->pc = 0x290194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290190u;
            // 0x290194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fe28;
        }
    }
    ctx->pc = 0x290198u;
label_290198:
    // 0x290198: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x290198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29019c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x29019cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2901a0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2901a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2901a4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2901a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2901a8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2901a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2901ac: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2901acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2901b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2901b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2901b4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2901b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2901b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2901B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2901BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901B8u;
        // 0x2901bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2901B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2901C0u;
}
