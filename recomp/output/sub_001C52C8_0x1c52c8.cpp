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

// Function: sub_001C52C8
// Address: 0x1c52c8 - 0x1c56a8
void sub_001C52C8_0x1c52c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C52C8_0x1c52c8");
#endif

    switch (ctx->pc) {
        case 0x1c5348u: goto label_1c5348;
        case 0x1c5384u: goto label_1c5384;
        case 0x1c542cu: goto label_1c542c;
        case 0x1c5454u: goto label_1c5454;
        case 0x1c5470u: goto label_1c5470;
        case 0x1c549cu: goto label_1c549c;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c55a4u: goto label_1c55a4;
        case 0x1c55ccu: goto label_1c55cc;
        case 0x1c55e8u: goto label_1c55e8;
        case 0x1c5614u: goto label_1c5614;
        default: break;
    }

    ctx->pc = 0x1c52c8u;

    // 0x1c52c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c52c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c52cc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1c52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1c52d0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1c52d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1c52d4: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1c52d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1c52d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c52d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c52dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c52e0: 0x24773d20  addiu       $s7, $v1, 0x3D20
    ctx->pc = 0x1c52e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
    // 0x1c52e4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c52e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c52e8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c52e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c52ec: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c52ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c52f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c52f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c52f4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c52f8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1c52f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1c52fc: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1c52fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1c5300: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1c5300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x1c5304: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x1c5304u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B3D2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D2Cu, _value); } while (0);
    // 0x1c5308: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1c5308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1c530c: 0x8eb60318  lw          $s6, 0x318($s5)
    ctx->pc = 0x1c530cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 792)));
    // 0x1c5310: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x1c5310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
    // 0x1c5314: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x1c5314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x1c5318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c531c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1c531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5320: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1c5324: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c5324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c5328: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c532c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c5330: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1c5330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5334: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c5334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c5338: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1c5338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c533c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c5340: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1C5340u;
    {
        const bool branch_taken_0x1c5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5340u;
        // 0x1c5344: 0x3c1e0040  lui         $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5340) {
            ctx->pc = 0x1C54ACu;
            goto label_1c54ac;
        }
    }
    ctx->pc = 0x1C5348u;
label_1c5348:
    // 0x1c5348: 0x52c60059  beql        $s6, $a2, . + 4 + (0x59 << 2)
    ctx->pc = 0x1C5348u;
    {
        const bool branch_taken_0x1c5348 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c5348) {
            ctx->pc = 0x1C534Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5348u;
            // 0x1c534c: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C54B0u;
            goto label_1c54b0;
        }
    }
    ctx->pc = 0x1C5350u;
    // 0x1c5350: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x1c5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x1c5354: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x1c5354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1c5358: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C5358u;
    {
        const bool branch_taken_0x1c5358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5358) {
            ctx->pc = 0x1C535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5358u;
            // 0x1c535c: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C54B0u;
            goto label_1c54b0;
        }
    }
    ctx->pc = 0x1C5360u;
    // 0x1c5360: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c5364: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C5364u;
    {
        const bool branch_taken_0x1c5364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5364) {
            ctx->pc = 0x1C5368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5364u;
            // 0x1c5368: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C54B0u;
            goto label_1c54b0;
        }
    }
    ctx->pc = 0x1C536Cu;
    // 0x1c536c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c5370: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C5370u;
    {
        const bool branch_taken_0x1c5370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5370) {
            ctx->pc = 0x1C5374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5370u;
            // 0x1c5374: 0x8ee2000c  lw          $v0, 0xC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C54B0u;
            goto label_1c54b0;
        }
    }
    ctx->pc = 0x1C5378u;
    // 0x1c5378: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c5378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c537c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C537Cu;
    SET_GPR_U32(ctx, 31, 0x1C5384u);
    ctx->pc = 0x1C5380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C537Cu;
    // 0x1c5380: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C537Cu, 0x1C5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5384u;
label_1c5384:
    // 0x1c5384: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c5388: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c538c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5390: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c5390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c5394: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c5394u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c5398: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c5398u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c539c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c539cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c53a0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1c53a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c53a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c53a8: 0x0  nop
    ctx->pc = 0x1c53a8u;
    // NOP
    // 0x1c53ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c53acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c53b0: 0x0  nop
    ctx->pc = 0x1c53b0u;
    // NOP
    // 0x1c53b4: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1C53B4u;
    {
        const bool branch_taken_0x1c53b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53B4u;
        // 0x1c53b8: 0x26b10044  addiu       $s1, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53b4) {
            ctx->pc = 0x1C54ACu;
            goto label_1c54ac;
        }
    }
    ctx->pc = 0x1C53BCu;
    // 0x1c53bc: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1c53bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c53c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c53c4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C53C4u;
    {
        const bool branch_taken_0x1c53c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53C4u;
        // 0x1c53c8: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53c4) {
            ctx->pc = 0x1C53E8u;
            goto label_1c53e8;
        }
    }
    ctx->pc = 0x1C53CCu;
    // 0x1c53cc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C53CCu;
    {
        const bool branch_taken_0x1c53cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53CCu;
        // 0x1c53d0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53cc) {
            ctx->pc = 0x1C53D8u;
            goto label_1c53d8;
        }
    }
    ctx->pc = 0x1C53D4u;
    // 0x1c53d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c53d8:
    // 0x1c53d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c53dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c53e0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C53E0u;
    {
        const bool branch_taken_0x1c53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53E0u;
        // 0x1c53e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53e0) {
            ctx->pc = 0x1C54ACu;
            goto label_1c54ac;
        }
    }
    ctx->pc = 0x1C53E8u;
label_1c53e8:
    // 0x1c53e8: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x1c53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1c53ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c53f0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1c53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1c53f4: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x1c53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c53f8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1c53fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5400: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5404: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c5404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c5408: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1c5408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1c540c: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1c540cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1c5410: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c5414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5418u;
    {
        const bool branch_taken_0x1c5418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5418u;
        // 0x1c541c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5418) {
            ctx->pc = 0x1C5434u;
            goto label_1c5434;
        }
    }
    ctx->pc = 0x1C5420u;
    // 0x1c5420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5424: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C5424u;
    SET_GPR_U32(ctx, 31, 0x1C542Cu);
    ctx->pc = 0x1C5428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5424u;
    // 0x1c5428: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C5424u, 0x1C542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C542Cu;
label_1c542c:
    // 0x1c542c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C542Cu;
    {
        const bool branch_taken_0x1c542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C542Cu;
        // 0x1c5430: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c542c) {
            ctx->pc = 0x1C543Cu;
            goto label_1c543c;
        }
    }
    ctx->pc = 0x1C5434u;
label_1c5434:
    // 0x1c5434: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c5434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c5438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c543c:
    // 0x1c543c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c543cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5440: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5440u;
    {
        const bool branch_taken_0x1c5440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5440u;
        // 0x1c5444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5440) {
            ctx->pc = 0x1C545Cu;
            goto label_1c545c;
        }
    }
    ctx->pc = 0x1C5448u;
    // 0x1c5448: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c544c: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C544Cu;
    SET_GPR_U32(ctx, 31, 0x1C5454u);
    ctx->pc = 0x1C5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C544Cu;
    // 0x1c5450: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C544Cu, 0x1C5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5454u;
label_1c5454:
    // 0x1c5454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5454u;
    {
        const bool branch_taken_0x1c5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5454u;
        // 0x1c5458: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5454) {
            ctx->pc = 0x1C5460u;
            goto label_1c5460;
        }
    }
    ctx->pc = 0x1C545Cu;
label_1c545c:
    // 0x1c545c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c545cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c5460:
    // 0x1c5460: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5464: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5464u;
    {
        const bool branch_taken_0x1c5464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5464u;
        // 0x1c5468: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5464) {
            ctx->pc = 0x1C5488u;
            goto label_1c5488;
        }
    }
    ctx->pc = 0x1C546Cu;
    // 0x1c546c: 0x0  nop
    ctx->pc = 0x1c546cu;
    // NOP
label_1c5470:
    // 0x1c5470: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c5474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5478: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c5478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c547c: 0x0  nop
    ctx->pc = 0x1c547cu;
    // NOP
    // 0x1c5480: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C5480u;
    {
        const bool branch_taken_0x1c5480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5480u;
        // 0x1c5484: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5480) {
            ctx->pc = 0x1C5470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5470;
        }
    }
    ctx->pc = 0x1C5488u;
label_1c5488:
    // 0x1c5488: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c5488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c548c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C548Cu;
    {
        const bool branch_taken_0x1c548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C548Cu;
        // 0x1c5490: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c548c) {
            ctx->pc = 0x1C54A0u;
            goto label_1c54a0;
        }
    }
    ctx->pc = 0x1C5494u;
    // 0x1c5494: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C5494u;
    SET_GPR_U32(ctx, 31, 0x1C549Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C5494u, 0x1C549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C549Cu;
label_1c549c:
    // 0x1c549c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1c54a0:
    // 0x1c54a0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c54a4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c54a8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1c54ac:
    // 0x1c54ac: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x1c54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1c54b0:
    // 0x1c54b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c54b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C54B4u;
    {
        const bool branch_taken_0x1c54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54B4u;
        // 0x1c54b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54b4) {
            ctx->pc = 0x1C54C0u;
            goto label_1c54c0;
        }
    }
    ctx->pc = 0x1C54BCu;
    // 0x1c54bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c54bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c54c0:
    // 0x1c54c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C54C0u;
    {
        const bool branch_taken_0x1c54c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c54c0) {
            ctx->pc = 0x1C54D0u;
            goto label_1c54d0;
        }
    }
    ctx->pc = 0x1C54C8u;
    // 0x1c54c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c54cc: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x1c54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_1c54d0:
    // 0x1c54d0: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1C54D0u;
    {
        const bool branch_taken_0x1c54d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54d0) {
            ctx->pc = 0x1C5348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5348;
        }
    }
    ctx->pc = 0x1C54D8u;
    // 0x1c54d8: 0x8fc2bd50  lw          $v0, -0x42B0($fp)
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    // 0x1c54dc: 0x10560051  beq         $v0, $s6, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C54DCu;
    {
        const bool branch_taken_0x1c54dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54DCu;
        // 0x1c54e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54dc) {
            ctx->pc = 0x1C5624u;
            goto label_1c5624;
        }
    }
    ctx->pc = 0x1C54E4u;
    // 0x1c54e4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1c54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1c54e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c54e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54ec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c54f0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C54F0u;
    SET_GPR_U32(ctx, 31, 0x1C54F8u);
    ctx->pc = 0x1C54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54F0u;
    // 0x1c54f4: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C54F0u, 0x1C54F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54F8u;
label_1c54f8:
    // 0x1c54f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c54fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c54fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5500: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c5500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c5504: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c5508: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c5508u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c550c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c550cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c5510: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c5510u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c5514: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1c5514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1c5518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c551c: 0x0  nop
    ctx->pc = 0x1c551cu;
    // NOP
    // 0x1c5520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5524: 0x0  nop
    ctx->pc = 0x1c5524u;
    // NOP
    // 0x1c5528: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1C5528u;
    {
        const bool branch_taken_0x1c5528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5528u;
        // 0x1c552c: 0x8fc3bd50  lw          $v1, -0x42B0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5528) {
            ctx->pc = 0x1C5624u;
            goto label_1c5624;
        }
    }
    ctx->pc = 0x1C5530u;
    // 0x1c5530: 0x26b10044  addiu       $s1, $s5, 0x44
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
    // 0x1c5534: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1c5534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1c5538: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1c5538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c553c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c5540: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5540u;
    {
        const bool branch_taken_0x1c5540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5540u;
        // 0x1c5544: 0x27b4002c  addiu       $s4, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5540) {
            ctx->pc = 0x1C5560u;
            goto label_1c5560;
        }
    }
    ctx->pc = 0x1C5548u;
    // 0x1c5548: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C5548u;
    {
        const bool branch_taken_0x1c5548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5548) {
            ctx->pc = 0x1C554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5548u;
            // 0x1c554c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5550u;
            goto label_1c5550;
        }
    }
    ctx->pc = 0x1C5550u;
label_1c5550:
    // 0x1c5550: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5554: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1c5554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c5558: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C5558u;
    {
        const bool branch_taken_0x1c5558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5558u;
        // 0x1c555c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5558) {
            ctx->pc = 0x1C5624u;
            goto label_1c5624;
        }
    }
    ctx->pc = 0x1C5560u;
label_1c5560:
    // 0x1c5560: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x1c5560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1c5564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5568: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1c5568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1c556c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c5570: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c5570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c5574: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c5574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5578: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c557c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c557cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c5580: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1c5580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1c5584: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1c5584u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1c5588: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c5588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c558c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5590: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5590u;
    {
        const bool branch_taken_0x1c5590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5590u;
        // 0x1c5594: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5590) {
            ctx->pc = 0x1C55ACu;
            goto label_1c55ac;
        }
    }
    ctx->pc = 0x1C5598u;
    // 0x1c5598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c559c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C559Cu;
    SET_GPR_U32(ctx, 31, 0x1C55A4u);
    ctx->pc = 0x1C55A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C559Cu;
    // 0x1c55a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C559Cu, 0x1C55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55A4u;
label_1c55a4:
    // 0x1c55a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55A4u;
    {
        const bool branch_taken_0x1c55a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A4u;
        // 0x1c55a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55a4) {
            ctx->pc = 0x1C55B4u;
            goto label_1c55b4;
        }
    }
    ctx->pc = 0x1C55ACu;
label_1c55ac:
    // 0x1c55ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c55acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c55b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c55b4:
    // 0x1c55b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c55b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c55b8: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C55B8u;
    {
        const bool branch_taken_0x1c55b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55B8u;
        // 0x1c55bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55b8) {
            ctx->pc = 0x1C55D4u;
            goto label_1c55d4;
        }
    }
    ctx->pc = 0x1C55C0u;
    // 0x1c55c0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x1c55c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c55c4: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1C55C4u;
    SET_GPR_U32(ctx, 31, 0x1C55CCu);
    ctx->pc = 0x1C55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55C4u;
    // 0x1c55c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1C55C4u, 0x1C55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55CCu;
label_1c55cc:
    // 0x1c55cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C55CCu;
    {
        const bool branch_taken_0x1c55cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55CCu;
        // 0x1c55d0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55cc) {
            ctx->pc = 0x1C55D8u;
            goto label_1c55d8;
        }
    }
    ctx->pc = 0x1C55D4u;
label_1c55d4:
    // 0x1c55d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c55d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c55d8:
    // 0x1c55d8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1c55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1c55dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C55DCu;
    {
        const bool branch_taken_0x1c55dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55DCu;
        // 0x1c55e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55dc) {
            ctx->pc = 0x1C5600u;
            goto label_1c5600;
        }
    }
    ctx->pc = 0x1C55E4u;
    // 0x1c55e4: 0x0  nop
    ctx->pc = 0x1c55e4u;
    // NOP
label_1c55e8:
    // 0x1c55e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c55ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c55f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c55f4: 0x0  nop
    ctx->pc = 0x1c55f4u;
    // NOP
    // 0x1c55f8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C55F8u;
    {
        const bool branch_taken_0x1c55f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55F8u;
        // 0x1c55fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55f8) {
            ctx->pc = 0x1C55E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c55e8;
        }
    }
    ctx->pc = 0x1C5600u;
label_1c5600:
    // 0x1c5600: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c5600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5604: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5604u;
    {
        const bool branch_taken_0x1c5604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5604u;
        // 0x1c5608: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5604) {
            ctx->pc = 0x1C5618u;
            goto label_1c5618;
        }
    }
    ctx->pc = 0x1C560Cu;
    // 0x1c560c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C560Cu;
    SET_GPR_U32(ctx, 31, 0x1C5614u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C560Cu, 0x1C5614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5614u;
label_1c5614:
    // 0x1c5614: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1c5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1c5618:
    // 0x1c5618: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1c5618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1c561c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c561cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c5620: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c5620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1c5624:
    // 0x1c5624: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1c5624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1c5628: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1c5628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1c562c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C562Cu;
    {
        const bool branch_taken_0x1c562c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C562Cu;
        // 0x1c5630: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c562c) {
            ctx->pc = 0x1C5648u;
            goto label_1c5648;
        }
    }
    ctx->pc = 0x1C5634u;
    // 0x1c5634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5638: 0x0  nop
    ctx->pc = 0x1c5638u;
    // NOP
    // 0x1c563c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c563cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5640: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5640u;
    {
        const bool branch_taken_0x1c5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5640) {
            ctx->pc = 0x1C5660u;
            goto label_1c5660;
        }
    }
    ctx->pc = 0x1C5648u;
label_1c5648:
    // 0x1c5648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c564c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c5650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5654: 0x0  nop
    ctx->pc = 0x1c5654u;
    // NOP
    // 0x1c5658: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c565c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c565cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c5660:
    // 0x1c5660: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c5660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c5664: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c5664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c5668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c566c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c566cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5674: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c5674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c5678: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c5678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c567c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c567cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5680: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x1c5680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x1c5684: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c5684u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5688: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1c5688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c568c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c568cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5690: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1c5690u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c5694: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1c5694u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5698: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1c5698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c569c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C569Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C569Cu;
        // 0x1c56a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C569Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C56A4u;
    // 0x1c56a4: 0x0  nop
    ctx->pc = 0x1c56a4u;
    // NOP
    ctx->pc = 0x1c56a8u;
}
