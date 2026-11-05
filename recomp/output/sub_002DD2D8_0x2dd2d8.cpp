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

// Function: sub_002DD2D8
// Address: 0x2dd2d8 - 0x2dd630
void sub_002DD2D8_0x2dd2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD2D8_0x2dd2d8");
#endif

    switch (ctx->pc) {
        case 0x2dd314u: goto label_2dd314;
        case 0x2dd3a8u: goto label_2dd3a8;
        case 0x2dd550u: goto label_2dd550;
        case 0x2dd59cu: goto label_2dd59c;
        case 0x2dd5c0u: goto label_2dd5c0;
        case 0x2dd5dcu: goto label_2dd5dc;
        case 0x2dd600u: goto label_2dd600;
        default: break;
    }

    ctx->pc = 0x2dd2d8u;

    // 0x2dd2d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dd2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dd2dc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2dd2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2dd2e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dd2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2e4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2dd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2dd2e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2dd2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2dd2ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dd2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2dd2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2dd2f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2dd2f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2f8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2dd2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2dd2fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dd2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd300: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2dd300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2dd304: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x2dd304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2dd308: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2dd308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2dd30c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DD30Cu;
    SET_GPR_U32(ctx, 31, 0x2DD314u);
    ctx->pc = 0x2DD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD30Cu;
    // 0x2dd310: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DD30Cu, 0x2DD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD314u;
label_2dd314:
    // 0x2dd314: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2dd314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd318: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dd318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dd31c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2dd31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2dd320: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2dd320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd324: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2dd324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2dd328: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2dd328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd32c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2dd32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2dd330: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2dd330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd334: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD334u;
    {
        const bool branch_taken_0x2dd334 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD334u;
        // 0x2dd338: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd334) {
            ctx->pc = 0x2DD350u;
            goto label_2dd350;
        }
    }
    ctx->pc = 0x2DD33Cu;
    // 0x2dd33c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dd340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dd344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd348: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2dd348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2dd34c: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x2dd34cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_2dd350:
    // 0x2dd350: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2dd350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd354: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2dd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2dd358: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2dd358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dd35c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2dd35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2dd360: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dd360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd364: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2dd364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2dd368: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2dd368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd36c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2dd36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2dd370: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd374: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2dd374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2dd378: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2dd378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd37c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2dd37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd380: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dd380u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dd384: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2dd384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd388: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2dd388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd38c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dd38cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2dd390: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2dd390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd394: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2dd394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd398: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x2dd398u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dd39c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3a0: 0xc0fb7fe  jal         func_3EDFF8
    ctx->pc = 0x2DD3A0u;
    SET_GPR_U32(ctx, 31, 0x2DD3A8u);
    ctx->pc = 0x2DD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD3A0u;
    // 0x2dd3a4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDFF8u, 0x2DD3A0u, 0x2DD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3A8u;
label_2dd3a8:
    // 0x2dd3a8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x2dd3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dd3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3b0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dd3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2dd3b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dd3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd3b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dd3c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2dd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dd3c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD3C4u;
    {
        const bool branch_taken_0x2dd3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3C4u;
        // 0x2dd3c8: 0x46010142  mul.s       $f5, $f0, $f1 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3c4) {
            ctx->pc = 0x2DD3D4u;
            goto label_2dd3d4;
        }
    }
    ctx->pc = 0x2DD3CCu;
    // 0x2dd3cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DD3CCu;
    {
        const bool branch_taken_0x2dd3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3CCu;
        // 0x2dd3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd3cc) {
            ctx->pc = 0x2DD40Cu;
            goto label_2dd40c;
        }
    }
    ctx->pc = 0x2DD3D4u;
label_2dd3d4:
    // 0x2dd3d4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2dd3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd3d8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2dd3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd3dc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2dd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dd3e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dd3e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2dd3e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dd3e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2dd3e8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2dd3e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2dd3ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dd3f0: 0xc440b670  lwc1        $f0, -0x4990($v0)
    ctx->pc = 0x2dd3f0u;
    { uint32_t bits = FAST_READ32(0x3FB670u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd3f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2dd3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2dd3f8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2dd3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2dd3fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd400: 0x0  nop
    ctx->pc = 0x2dd400u;
    // NOP
    // 0x2dd404: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD404u;
    {
        const bool branch_taken_0x2dd404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd404) {
            ctx->pc = 0x2DD408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD404u;
            // 0x2dd408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD40Cu;
            goto label_2dd40c;
        }
    }
    ctx->pc = 0x2DD40Cu;
label_2dd40c:
    // 0x2dd40c: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DD40Cu;
    {
        const bool branch_taken_0x2dd40c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd40c) {
            ctx->pc = 0x2DD468u;
            goto label_2dd468;
        }
    }
    ctx->pc = 0x2DD414u;
    // 0x2dd414: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2dd414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2dd418: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dd418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dd41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd420: 0x0  nop
    ctx->pc = 0x2dd420u;
    // NOP
    // 0x2dd424: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2dd424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd428: 0x0  nop
    ctx->pc = 0x2dd428u;
    // NOP
    // 0x2dd42c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2DD42Cu;
    {
        const bool branch_taken_0x2dd42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD42Cu;
        // 0x2dd430: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd42c) {
            ctx->pc = 0x2DD468u;
            goto label_2dd468;
        }
    }
    ctx->pc = 0x2DD434u;
    // 0x2dd434: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd438: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2dd438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd43c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2dd43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd440: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2dd440u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2dd444: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dd444u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dd448: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2dd448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2dd44c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dd44cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2dd450: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2dd450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dd454: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dd454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dd458: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2dd458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd45c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dd45cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd460: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dd460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd464: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x2dd464u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_2dd468:
    // 0x2dd468: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD468u;
    {
        const bool branch_taken_0x2dd468 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD468u;
        // 0x2dd46c: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd468) {
            ctx->pc = 0x2DD478u;
            goto label_2dd478;
        }
    }
    ctx->pc = 0x2DD470u;
    // 0x2dd470: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD470u;
    {
        const bool branch_taken_0x2dd470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD470u;
        // 0x2dd474: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd470) {
            ctx->pc = 0x2DD490u;
            goto label_2dd490;
        }
    }
    ctx->pc = 0x2DD478u;
label_2dd478:
    // 0x2dd478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dd478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dd47c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dd47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd480: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2dd480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dd484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dd488: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dd488u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dd48c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2dd48cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2dd490:
    // 0x2dd490: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2dd490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd494: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD494u;
    {
        const bool branch_taken_0x2dd494 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD494u;
        // 0x2dd498: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd494) {
            ctx->pc = 0x2DD4B4u;
            goto label_2dd4b4;
        }
    }
    ctx->pc = 0x2DD49Cu;
    // 0x2dd49c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD49Cu;
    {
        const bool branch_taken_0x2dd49c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd49c) {
            ctx->pc = 0x2DD4B4u;
            goto label_2dd4b4;
        }
    }
    ctx->pc = 0x2DD4A4u;
    // 0x2dd4a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2dd4a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd4a8: 0x0  nop
    ctx->pc = 0x2dd4a8u;
    // NOP
    // 0x2dd4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd4b0: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2dd4b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_2dd4b4:
    // 0x2dd4b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd4b8: 0x0  nop
    ctx->pc = 0x2dd4b8u;
    // NOP
    // 0x2dd4bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2dd4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd4c0: 0x0  nop
    ctx->pc = 0x2dd4c0u;
    // NOP
    // 0x2dd4c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD4C4u;
    {
        const bool branch_taken_0x2dd4c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd4c4) {
            ctx->pc = 0x2DD4E0u;
            goto label_2dd4e0;
        }
    }
    ctx->pc = 0x2DD4CCu;
    // 0x2dd4cc: 0x54c0004d  bnel        $a2, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x2DD4CCu;
    {
        const bool branch_taken_0x2dd4cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4cc) {
            ctx->pc = 0x2DD4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4CCu;
            // 0x2dd4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD604u;
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD4D4u;
    // 0x2dd4d4: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD4D4u;
    {
        const bool branch_taken_0x2dd4d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4d4) {
            ctx->pc = 0x2DD4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4D4u;
            // 0x2dd4d8: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD4E0u;
            goto label_2dd4e0;
        }
    }
    ctx->pc = 0x2DD4DCu;
    // 0x2dd4dc: 0xc4540030  lwc1        $f20, 0x30($v0)
    ctx->pc = 0x2dd4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dd4e0:
    // 0x2dd4e0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2dd4e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd4e4: 0x0  nop
    ctx->pc = 0x2dd4e4u;
    // NOP
    // 0x2dd4e8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD4E8u;
    {
        const bool branch_taken_0x2dd4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd4e8) {
            ctx->pc = 0x2DD4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4E8u;
            // 0x2dd4ec: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD504u;
            goto label_2dd504;
        }
    }
    ctx->pc = 0x2DD4F0u;
    // 0x2dd4f0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD4F0u;
    {
        const bool branch_taken_0x2dd4f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4f0) {
            ctx->pc = 0x2DD4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD4F0u;
            // 0x2dd4f4: 0xc4540030  lwc1        $f20, 0x30($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD500u;
            goto label_2dd500;
        }
    }
    ctx->pc = 0x2DD4F8u;
    // 0x2dd4f8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DD4F8u;
    {
        const bool branch_taken_0x2dd4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4F8u;
        // 0x2dd4fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4f8) {
            ctx->pc = 0x2DD604u;
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD500u;
label_2dd500:
    // 0x2dd500: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2dd500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd504:
    // 0x2dd504: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dd504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd508: 0x0  nop
    ctx->pc = 0x2dd508u;
    // NOP
    // 0x2dd50c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD50Cu;
    {
        const bool branch_taken_0x2dd50c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd50c) {
            ctx->pc = 0x2DD510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD50Cu;
            // 0x2dd510: 0xe6740008  swc1        $f20, 0x8($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD514u;
            goto label_2dd514;
        }
    }
    ctx->pc = 0x2DD514u;
label_2dd514:
    // 0x2dd514: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd51c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2dd51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd520: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2dd520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd524: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2dd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd528: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2dd528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2dd52c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2dd52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd530: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2dd530u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2dd534: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2dd534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2dd538: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2dd538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2dd53c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2dd53cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dd540: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2dd540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dd544: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2dd544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd548: 0xc0b71e0  jal         func_2DC780
    ctx->pc = 0x2DD548u;
    SET_GPR_U32(ctx, 31, 0x2DD550u);
    ctx->pc = 0x2DD54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD548u;
    // 0x2dd54c: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DD548u, 0x2DD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD550u;
label_2dd550:
    // 0x2dd550: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2dd550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dd554: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2dd554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dd558: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dd558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd55c: 0x10440029  beq         $v0, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DD55Cu;
    {
        const bool branch_taken_0x2dd55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD55Cu;
        // 0x2dd560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd55c) {
            ctx->pc = 0x2DD604u;
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD564u;
    // 0x2dd564: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dd564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dd568: 0x90620114  lbu         $v0, 0x114($v1)
    ctx->pc = 0x2dd568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x2dd56c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2DD56Cu;
    {
        const bool branch_taken_0x2dd56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD56Cu;
        // 0x2dd570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd56c) {
            ctx->pc = 0x2DD604u;
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD574u;
    // 0x2dd574: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x2dd574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x2dd578: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2dd578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x2dd57c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD57Cu;
    {
        const bool branch_taken_0x2dd57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD57Cu;
        // 0x2dd580: 0x8c6200b8  lw          $v0, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd57c) {
            ctx->pc = 0x2DD5C8u;
            goto label_2dd5c8;
        }
    }
    ctx->pc = 0x2DD584u;
    // 0x2dd584: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2dd584u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x2dd588: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2dd588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    // 0x2dd58c: 0x8e910034  lw          $s1, 0x34($s4)
    ctx->pc = 0x2dd58cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2dd590: 0x90520054  lbu         $s2, 0x54($v0)
    ctx->pc = 0x2dd590u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2dd594: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x2DD594u;
    SET_GPR_U32(ctx, 31, 0x2DD59Cu);
    ctx->pc = 0x2DD598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD594u;
    // 0x2dd598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DD594u, 0x2DD59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD59Cu;
label_2dd59c:
    // 0x2dd59c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2dd59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dd5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5a4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dd5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dd5a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dd5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dd5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2dd5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5b4: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2dd5b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dd5b8: 0xc07f550  jal         func_1FD540
    ctx->pc = 0x2DD5B8u;
    SET_GPR_U32(ctx, 31, 0x2DD5C0u);
    ctx->pc = 0x2DD5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5B8u;
    // 0x2dd5bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DD5B8u, 0x2DD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5C0u;
label_2dd5c0:
    // 0x2dd5c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DD5C0u;
    {
        const bool branch_taken_0x2dd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD5C0u;
        // 0x2dd5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd5c0) {
            ctx->pc = 0x2DD604u;
            goto label_2dd604;
        }
    }
    ctx->pc = 0x2DD5C8u;
label_2dd5c8:
    // 0x2dd5c8: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2dd5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x2dd5cc: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2dd5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    // 0x2dd5d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dd5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5d4: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x2DD5D4u;
    SET_GPR_U32(ctx, 31, 0x2DD5DCu);
    ctx->pc = 0x2DD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5D4u;
    // 0x2dd5d8: 0x90510054  lbu         $s1, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DD5D4u, 0x2DD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD5DCu;
label_2dd5dc:
    // 0x2dd5dc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2dd5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dd5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dd5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dd5e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dd5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5ec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2dd5ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5f0: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2dd5f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dd5f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dd5f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dd5f8: 0xc07f550  jal         func_1FD540
    ctx->pc = 0x2DD5F8u;
    SET_GPR_U32(ctx, 31, 0x2DD600u);
    ctx->pc = 0x2DD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD5F8u;
    // 0x2dd5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DD5F8u, 0x2DD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD600u;
label_2dd600:
    // 0x2dd600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd604:
    // 0x2dd604: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2dd604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd608: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2dd608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd60c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2dd60cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd610: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2dd610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dd614: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2dd614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd618: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2dd618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dd61c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2dd61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dd620: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2dd620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dd624: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD624u;
        // 0x2dd628: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD62Cu;
    // 0x2dd62c: 0x0  nop
    ctx->pc = 0x2dd62cu;
    // NOP
    ctx->pc = 0x2dd630u;
}
