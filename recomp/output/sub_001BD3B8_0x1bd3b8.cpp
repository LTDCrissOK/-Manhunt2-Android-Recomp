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

// Function: sub_001BD3B8
// Address: 0x1bd3b8 - 0x1bd7e8
void sub_001BD3B8_0x1bd3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD3B8_0x1bd3b8");
#endif

    switch (ctx->pc) {
        case 0x1bd468u: goto label_1bd468;
        case 0x1bd470u: goto label_1bd470;
        case 0x1bd540u: goto label_1bd540;
        case 0x1bd5fcu: goto label_1bd5fc;
        case 0x1bd60cu: goto label_1bd60c;
        case 0x1bd61cu: goto label_1bd61c;
        case 0x1bd664u: goto label_1bd664;
        case 0x1bd688u: goto label_1bd688;
        case 0x1bd690u: goto label_1bd690;
        case 0x1bd6a0u: goto label_1bd6a0;
        case 0x1bd6c0u: goto label_1bd6c0;
        case 0x1bd6c8u: goto label_1bd6c8;
        case 0x1bd750u: goto label_1bd750;
        case 0x1bd758u: goto label_1bd758;
        default: break;
    }

    ctx->pc = 0x1bd3b8u;

    // 0x1bd3b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1bd3bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1bd3c0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1bd3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1bd3c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bd3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3c8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1bd3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1bd3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bd3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3d0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1bd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1bd3d4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bd3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1bd3d8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1bd3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1bd3dc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1bd3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1bd3e0: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1bd3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1bd3e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD3E4u;
    {
        const bool branch_taken_0x1bd3e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3E4u;
        // 0x1bd3e8: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3e4) {
            ctx->pc = 0x1BD400u;
            goto label_1bd400;
        }
    }
    ctx->pc = 0x1BD3ECu;
    // 0x1bd3ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd3f0: 0x0  nop
    ctx->pc = 0x1bd3f0u;
    // NOP
    // 0x1bd3f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd3f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD3F8u;
    {
        const bool branch_taken_0x1bd3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3f8) {
            ctx->pc = 0x1BD41Cu;
            goto label_1bd41c;
        }
    }
    ctx->pc = 0x1BD400u;
label_1bd400:
    // 0x1bd400: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bd404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd408: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd40c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd410: 0x0  nop
    ctx->pc = 0x1bd410u;
    // NOP
    // 0x1bd414: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd418: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bd418u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bd41c:
    // 0x1bd41c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bd420: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bd424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd428: 0xc621036c  lwc1        $f1, 0x36C($s1)
    ctx->pc = 0x1bd428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd42c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bd430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd434: 0x0  nop
    ctx->pc = 0x1bd434u;
    // NOP
    // 0x1bd438: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1BD438u;
    {
        const bool branch_taken_0x1bd438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD438u;
        // 0x1bd43c: 0x8c822b00  lw          $v0, 0x2B00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd438) {
            ctx->pc = 0x1BD4C8u;
            goto label_1bd4c8;
        }
    }
    ctx->pc = 0x1BD440u;
    // 0x1bd440: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x1bd440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1bd444: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1BD444u;
    {
        const bool branch_taken_0x1bd444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD444u;
        // 0x1bd448: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd444) {
            ctx->pc = 0x1BD7C0u;
            goto label_1bd7c0;
        }
    }
    ctx->pc = 0x1BD44Cu;
    // 0x1bd44c: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1bd44cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1bd450: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd454: 0x26330110  addiu       $s3, $s1, 0x110
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bd458: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD458u;
    {
        const bool branch_taken_0x1bd458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD458u;
        // 0x1bd45c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd458) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD460u;
    // 0x1bd460: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bd460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd464: 0x0  nop
    ctx->pc = 0x1bd464u;
    // NOP
label_1bd468:
    // 0x1bd468: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1BD468u;
    SET_GPR_U32(ctx, 31, 0x1BD470u);
    ctx->pc = 0x1BD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD468u;
    // 0x1bd46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BD468u, 0x1BD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD470u;
label_1bd470:
    // 0x1bd470: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd474: 0x0  nop
    ctx->pc = 0x1bd474u;
    // NOP
    // 0x1bd478: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD478u;
    {
        const bool branch_taken_0x1bd478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd478) {
            ctx->pc = 0x1BD47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD478u;
            // 0x1bd47c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd468;
        }
    }
    ctx->pc = 0x1BD480u;
label_1bd480:
    // 0x1bd480: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1bd480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1bd484: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bd488: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bd488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bd48c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bd48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bd490: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1bd490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1bd494: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x1bd494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd498: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x1bd498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x1bd49c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1bd49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd4a0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1bd4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1bd4a4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bd4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd4a8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bd4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1bd4ac: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1bd4b0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1bd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1bd4b4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1bd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1bd4b8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1bd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1bd4bc: 0xae200380  sw          $zero, 0x380($s1)
    ctx->pc = 0x1bd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
    // 0x1bd4c0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1BD4C0u;
    {
        const bool branch_taken_0x1bd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C0u;
        // 0x1bd4c4: 0x8e220370  lw          $v0, 0x370($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4c0) {
            ctx->pc = 0x1BD7C0u;
            goto label_1bd7c0;
        }
    }
    ctx->pc = 0x1BD4C8u;
label_1bd4c8:
    // 0x1bd4c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD4C8u;
    {
        const bool branch_taken_0x1bd4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C8u;
        // 0x1bd4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4c8) {
            ctx->pc = 0x1BD4E4u;
            goto label_1bd4e4;
        }
    }
    ctx->pc = 0x1BD4D0u;
    // 0x1bd4d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd4d4: 0x0  nop
    ctx->pc = 0x1bd4d4u;
    // NOP
    // 0x1bd4d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd4dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD4DCu;
    {
        const bool branch_taken_0x1bd4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4dc) {
            ctx->pc = 0x1BD4FCu;
            goto label_1bd4fc;
        }
    }
    ctx->pc = 0x1BD4E4u;
label_1bd4e4:
    // 0x1bd4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd4e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd4ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bd4f0: 0x0  nop
    ctx->pc = 0x1bd4f0u;
    // NOP
    // 0x1bd4f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bd4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bd4f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bd4f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bd4fc:
    // 0x1bd4fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bd4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bd500: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bd500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bd504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd508: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bd50c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bd510: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bd514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd518: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bd518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd51c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bd51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bd520: 0xe620036c  swc1        $f0, 0x36C($s1)
    ctx->pc = 0x1bd520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 876), bits); }
    // 0x1bd524: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd528: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1bd528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1bd52c: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1BD52Cu;
    {
        const bool branch_taken_0x1bd52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD52Cu;
        // 0x1bd530: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd52c) {
            ctx->pc = 0x1BD7B8u;
            goto label_1bd7b8;
        }
    }
    ctx->pc = 0x1BD534u;
    // 0x1bd534: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1bd534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1bd538: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x1BD538u;
    SET_GPR_U32(ctx, 31, 0x1BD540u);
    ctx->pc = 0x1BD53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD538u;
    // 0x1bd53c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BD538u, 0x1BD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD540u;
label_1bd540:
    // 0x1bd540: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1bd544: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BD544u;
    {
        const bool branch_taken_0x1bd544 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD544u;
        // 0x1bd548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd544) {
            ctx->pc = 0x1BD5F4u;
            goto label_1bd5f4;
        }
    }
    ctx->pc = 0x1BD54Cu;
    // 0x1bd54c: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1bd54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd550: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bd550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd554: 0x0  nop
    ctx->pc = 0x1bd554u;
    // NOP
    // 0x1bd558: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1bd558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd55c: 0x0  nop
    ctx->pc = 0x1bd55cu;
    // NOP
    // 0x1bd560: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD560u;
    {
        const bool branch_taken_0x1bd560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD560u;
        // 0x1bd564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd560) {
            ctx->pc = 0x1BD56Cu;
            goto label_1bd56c;
        }
    }
    ctx->pc = 0x1BD568u;
    // 0x1bd568: 0x26220270  addiu       $v0, $s1, 0x270
    ctx->pc = 0x1bd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1bd56c:
    // 0x1bd56c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BD56Cu;
    {
        const bool branch_taken_0x1bd56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD56Cu;
        // 0x1bd570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd56c) {
            ctx->pc = 0x1BD5F4u;
            goto label_1bd5f4;
        }
    }
    ctx->pc = 0x1BD574u;
    // 0x1bd574: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x1bd574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bd578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd57c: 0x0  nop
    ctx->pc = 0x1bd57cu;
    // NOP
    // 0x1bd580: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD580u;
    {
        const bool branch_taken_0x1bd580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD580u;
        // 0x1bd584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd580) {
            ctx->pc = 0x1BD58Cu;
            goto label_1bd58c;
        }
    }
    ctx->pc = 0x1BD588u;
    // 0x1bd588: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1bd58c:
    // 0x1bd58c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD58Cu;
    {
        const bool branch_taken_0x1bd58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD58Cu;
        // 0x1bd590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd58c) {
            ctx->pc = 0x1BD5F4u;
            goto label_1bd5f4;
        }
    }
    ctx->pc = 0x1BD594u;
    // 0x1bd594: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1bd594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd598: 0x0  nop
    ctx->pc = 0x1bd598u;
    // NOP
    // 0x1bd59c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD59Cu;
    {
        const bool branch_taken_0x1bd59c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD59Cu;
        // 0x1bd5a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd59c) {
            ctx->pc = 0x1BD5A8u;
            goto label_1bd5a8;
        }
    }
    ctx->pc = 0x1BD5A4u;
    // 0x1bd5a4: 0x26230270  addiu       $v1, $s1, 0x270
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1bd5a8:
    // 0x1bd5a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bd5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd5ac: 0x0  nop
    ctx->pc = 0x1bd5acu;
    // NOP
    // 0x1bd5b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD5B0u;
    {
        const bool branch_taken_0x1bd5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5B0u;
        // 0x1bd5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5b0) {
            ctx->pc = 0x1BD5BCu;
            goto label_1bd5bc;
        }
    }
    ctx->pc = 0x1BD5B8u;
    // 0x1bd5b8: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1bd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1bd5bc:
    // 0x1bd5bc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1bd5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd5c0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1bd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bd5c4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1bd5c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bd5c8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1bd5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd5cc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1bd5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bd5d0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1bd5d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1bd5d4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1bd5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd5d8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1bd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bd5dc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1bd5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bd5e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bd5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bd5e4: 0x0  nop
    ctx->pc = 0x1bd5e4u;
    // NOP
    // 0x1bd5e8: 0x45010075  bc1t        . + 4 + (0x75 << 2)
    ctx->pc = 0x1BD5E8u;
    {
        const bool branch_taken_0x1bd5e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5E8u;
        // 0x1bd5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5e8) {
            ctx->pc = 0x1BD7C0u;
            goto label_1bd7c0;
        }
    }
    ctx->pc = 0x1BD5F0u;
    // 0x1bd5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd5f4:
    // 0x1bd5f4: 0xc06fcc8  jal         func_1BF320
    ctx->pc = 0x1BD5F4u;
    SET_GPR_U32(ctx, 31, 0x1BD5FCu);
    ctx->pc = 0x1BD5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5F4u;
    // 0x1bd5f8: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BD5F4u, 0x1BD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5FCu;
label_1bd5fc:
    // 0x1bd5fc: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1bd5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd604: 0xc06f688  jal         func_1BDA20
    ctx->pc = 0x1BD604u;
    SET_GPR_U32(ctx, 31, 0x1BD60Cu);
    ctx->pc = 0x1BD608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD604u;
    // 0x1bd608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BD604u, 0x1BD60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD60Cu;
label_1bd60c:
    // 0x1bd60c: 0x5040006b  beql        $v0, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x1BD60Cu;
    {
        const bool branch_taken_0x1bd60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd60c) {
            ctx->pc = 0x1BD610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD60Cu;
            // 0x1bd610: 0xae200370  sw          $zero, 0x370($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD7BCu;
            goto label_1bd7bc;
        }
    }
    ctx->pc = 0x1BD614u;
    // 0x1bd614: 0xc06f468  jal         func_1BD1A0
    ctx->pc = 0x1BD614u;
    SET_GPR_U32(ctx, 31, 0x1BD61Cu);
    ctx->pc = 0x1BD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD614u;
    // 0x1bd618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD1A0u, 0x1BD614u, 0x1BD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD61Cu;
label_1bd61c:
    // 0x1bd61c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1BD61Cu;
    {
        const bool branch_taken_0x1bd61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD61Cu;
        // 0x1bd620: 0x263000f0  addiu       $s0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd61c) {
            ctx->pc = 0x1BD7B8u;
            goto label_1bd7b8;
        }
    }
    ctx->pc = 0x1BD624u;
    // 0x1bd624: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1bd628: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bd62c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1BD62Cu;
    {
        const bool branch_taken_0x1bd62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD62Cu;
        // 0x1bd630: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd62c) {
            ctx->pc = 0x1BD738u;
            goto label_1bd738;
        }
    }
    ctx->pc = 0x1BD634u;
    // 0x1bd634: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bd634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bd638: 0x24541380  addiu       $s4, $v0, 0x1380
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1bd63c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bd63cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd640: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bd644: 0xafb40044  sw          $s4, 0x44($sp)
    ctx->pc = 0x1bd644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 20));
    // 0x1bd648: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1bd648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1bd64c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd650: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bd650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bd654: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bd654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bd658: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bd658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bd65c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BD65Cu;
    SET_GPR_U32(ctx, 31, 0x1BD664u);
    ctx->pc = 0x1BD660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD65Cu;
    // 0x1bd660: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BD65Cu, 0x1BD664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD664u;
label_1bd664:
    // 0x1bd664: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1bd668: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bd668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd66c: 0xc440c688  lwc1        $f0, -0x3978($v0)
    ctx->pc = 0x1bd66cu;
    { uint32_t bits = FAST_READ32(0x45C688u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd670: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bd670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd674: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1bd678: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1bd678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1bd67c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bd67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bd680: 0xc06fc2a  jal         func_1BF0A8
    ctx->pc = 0x1BD680u;
    SET_GPR_U32(ctx, 31, 0x1BD688u);
    ctx->pc = 0x1BD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD680u;
    // 0x1bd684: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BD680u, 0x1BD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD688u;
label_1bd688:
    // 0x1bd688: 0xc06fcc8  jal         func_1BF320
    ctx->pc = 0x1BD688u;
    SET_GPR_U32(ctx, 31, 0x1BD690u);
    ctx->pc = 0x1BD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD688u;
    // 0x1bd68c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BD688u, 0x1BD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD690u;
label_1bd690:
    // 0x1bd690: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd698: 0xc06f688  jal         func_1BDA20
    ctx->pc = 0x1BD698u;
    SET_GPR_U32(ctx, 31, 0x1BD6A0u);
    ctx->pc = 0x1BD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD698u;
    // 0x1bd69c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BD698u, 0x1BD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6A0u;
label_1bd6a0:
    // 0x1bd6a0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BD6A0u;
    {
        const bool branch_taken_0x1bd6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6A0u;
        // 0x1bd6a4: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6a0) {
            ctx->pc = 0x1BD730u;
            goto label_1bd730;
        }
    }
    ctx->pc = 0x1BD6A8u;
    // 0x1bd6a8: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1bd6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1bd6ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd6b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD6B0u;
    {
        const bool branch_taken_0x1bd6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6B0u;
        // 0x1bd6b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6b0) {
            ctx->pc = 0x1BD6D8u;
            goto label_1bd6d8;
        }
    }
    ctx->pc = 0x1BD6B8u;
    // 0x1bd6b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd6bc: 0x0  nop
    ctx->pc = 0x1bd6bcu;
    // NOP
label_1bd6c0:
    // 0x1bd6c0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1BD6C0u;
    SET_GPR_U32(ctx, 31, 0x1BD6C8u);
    ctx->pc = 0x1BD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD6C0u;
    // 0x1bd6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BD6C0u, 0x1BD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6C8u;
label_1bd6c8:
    // 0x1bd6c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd6cc: 0x0  nop
    ctx->pc = 0x1bd6ccu;
    // NOP
    // 0x1bd6d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD6D0u;
    {
        const bool branch_taken_0x1bd6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6d0) {
            ctx->pc = 0x1BD6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD6D0u;
            // 0x1bd6d4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd6c0;
        }
    }
    ctx->pc = 0x1BD6D8u;
label_1bd6d8:
    // 0x1bd6d8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1bd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1bd6dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bd6e4: 0x26a61380  addiu       $a2, $s5, 0x1380
    ctx->pc = 0x1bd6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4992));
    // 0x1bd6e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bd6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1bd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1bd6f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bd6f8: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x1bd6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd6fc: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x1bd6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x1bd700: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1bd700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd704: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1bd704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1bd708: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bd708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd70c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bd70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1bd710: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1bd714: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1bd714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1bd718: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1bd718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1bd71c: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x1bd71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
    // 0x1bd720: 0xae250370  sw          $a1, 0x370($s1)
    ctx->pc = 0x1bd720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 5));
    // 0x1bd724: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x1bd724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x1bd728: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1BD728u;
    {
        const bool branch_taken_0x1bd728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD728u;
        // 0x1bd72c: 0xae200380  sw          $zero, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd728) {
            ctx->pc = 0x1BD7C0u;
            goto label_1bd7c0;
        }
    }
    ctx->pc = 0x1BD730u;
label_1bd730:
    // 0x1bd730: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BD730u;
    {
        const bool branch_taken_0x1bd730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD730u;
        // 0x1bd734: 0xafb40044  sw          $s4, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd730) {
            ctx->pc = 0x1BD7B8u;
            goto label_1bd7b8;
        }
    }
    ctx->pc = 0x1BD738u;
label_1bd738:
    // 0x1bd738: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1bd73c: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1bd740: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd744: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD744u;
    {
        const bool branch_taken_0x1bd744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD744u;
        // 0x1bd748: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd744) {
            ctx->pc = 0x1BD768u;
            goto label_1bd768;
        }
    }
    ctx->pc = 0x1BD74Cu;
    // 0x1bd74c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bd74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd750:
    // 0x1bd750: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1BD750u;
    SET_GPR_U32(ctx, 31, 0x1BD758u);
    ctx->pc = 0x1BD754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD750u;
    // 0x1bd754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BD750u, 0x1BD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD758u;
label_1bd758:
    // 0x1bd758: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd75c: 0x0  nop
    ctx->pc = 0x1bd75cu;
    // NOP
    // 0x1bd760: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD760u;
    {
        const bool branch_taken_0x1bd760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd760) {
            ctx->pc = 0x1BD764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD760u;
            // 0x1bd764: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd750;
        }
    }
    ctx->pc = 0x1BD768u;
label_1bd768:
    // 0x1bd768: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1bd768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1bd76c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd770: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bd774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd778: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bd778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bd77c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bd77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bd780: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1bd780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1bd784: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x1bd784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd788: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x1bd788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x1bd78c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1bd78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd790: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1bd790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1bd794: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bd794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd798: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1bd79c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1bd79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1bd7a0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1bd7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1bd7a4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1bd7a8: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x1bd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
    // 0x1bd7ac: 0xae250370  sw          $a1, 0x370($s1)
    ctx->pc = 0x1bd7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 5));
    // 0x1bd7b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD7B0u;
    {
        const bool branch_taken_0x1bd7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7B0u;
        // 0x1bd7b4: 0xae200380  sw          $zero, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7b0) {
            ctx->pc = 0x1BD7C0u;
            goto label_1bd7c0;
        }
    }
    ctx->pc = 0x1BD7B8u;
label_1bd7b8:
    // 0x1bd7b8: 0xae200370  sw          $zero, 0x370($s1)
    ctx->pc = 0x1bd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 0));
label_1bd7bc:
    // 0x1bd7bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bd7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd7c0:
    // 0x1bd7c0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1bd7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd7c4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1bd7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bd7c8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd7cc: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1bd7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd7d0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1bd7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bd7d4: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1bd7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bd7d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bd7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7DCu;
        // 0x1bd7e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD7E4u;
    // 0x1bd7e4: 0x0  nop
    ctx->pc = 0x1bd7e4u;
    // NOP
    ctx->pc = 0x1bd7e8u;
}
