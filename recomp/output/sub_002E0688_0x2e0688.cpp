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

// Function: sub_002E0688
// Address: 0x2e0688 - 0x2e08d8
void sub_002E0688_0x2e0688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0688_0x2e0688");
#endif

    switch (ctx->pc) {
        case 0x2e07f8u: goto label_2e07f8;
        case 0x2e0800u: goto label_2e0800;
        default: break;
    }

    ctx->pc = 0x2e0688u;

    // 0x2e0688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e068c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0690: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e0690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e0694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0698: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2e069c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E069Cu;
    {
        const bool branch_taken_0x2e069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E069Cu;
        // 0x2e06a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e069c) {
            ctx->pc = 0x2E0710u;
            goto label_2e0710;
        }
    }
    ctx->pc = 0x2E06A4u;
    // 0x2e06a4: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e06a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e06a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e06a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e06ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e06acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e06b0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2e06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2e06b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E06B4u;
    {
        const bool branch_taken_0x2e06b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06B4u;
        // 0x2e06b8: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06b4) {
            ctx->pc = 0x2E06D0u;
            goto label_2e06d0;
        }
    }
    ctx->pc = 0x2E06BCu;
    // 0x2e06bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e06bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e06c0: 0x0  nop
    ctx->pc = 0x2e06c0u;
    // NOP
    // 0x2e06c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e06c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e06c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E06C8u;
    {
        const bool branch_taken_0x2e06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e06c8) {
            ctx->pc = 0x2E06ECu;
            goto label_2e06ec;
        }
    }
    ctx->pc = 0x2E06D0u;
label_2e06d0:
    // 0x2e06d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e06d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e06d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e06d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e06d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e06dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e06dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e06e0: 0x0  nop
    ctx->pc = 0x2e06e0u;
    // NOP
    // 0x2e06e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e06e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e06e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e06e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e06ec:
    // 0x2e06ec: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e06ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e06f0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e06f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e06f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e06f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e06f8: 0x0  nop
    ctx->pc = 0x2e06f8u;
    // NOP
    // 0x2e06fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e06fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e0700: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e0700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0704: 0x0  nop
    ctx->pc = 0x2e0704u;
    // NOP
    // 0x2e0708: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0708u;
    {
        const bool branch_taken_0x2e0708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0708) {
            ctx->pc = 0x2E070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0708u;
            // 0x2e070c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0710u;
            goto label_2e0710;
        }
    }
    ctx->pc = 0x2E0710u;
label_2e0710:
    // 0x2e0710: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2e0710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0714: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e0714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e0718: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e071c: 0x0  nop
    ctx->pc = 0x2e071cu;
    // NOP
    // 0x2e0720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0724: 0x0  nop
    ctx->pc = 0x2e0724u;
    // NOP
    // 0x2e0728: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0728u;
    {
        const bool branch_taken_0x2e0728 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0728) {
            ctx->pc = 0x2E072Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0728u;
            // 0x2e072c: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0750u;
            goto label_2e0750;
        }
    }
    ctx->pc = 0x2E0730u;
    // 0x2e0730: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2e0730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2e0734: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0738: 0x0  nop
    ctx->pc = 0x2e0738u;
    // NOP
    // 0x2e073c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e073cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0740: 0x0  nop
    ctx->pc = 0x2e0740u;
    // NOP
    // 0x2e0744: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0744u;
    {
        const bool branch_taken_0x2e0744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0744) {
            ctx->pc = 0x2E0748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0744u;
            // 0x2e0748: 0xc6000034  lwc1        $f0, 0x34($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0754u;
            goto label_2e0754;
        }
    }
    ctx->pc = 0x2E074Cu;
    // 0x2e074c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2e074cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2e0750:
    // 0x2e0750: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2e0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e0754:
    // 0x2e0754: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e0754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e0758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e075c: 0x0  nop
    ctx->pc = 0x2e075cu;
    // NOP
    // 0x2e0760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0764: 0x0  nop
    ctx->pc = 0x2e0764u;
    // NOP
    // 0x2e0768: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0768u;
    {
        const bool branch_taken_0x2e0768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0768) {
            ctx->pc = 0x2E076Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0768u;
            // 0x2e076c: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0790u;
            goto label_2e0790;
        }
    }
    ctx->pc = 0x2E0770u;
    // 0x2e0770: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x2e0770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x2e0774: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0778: 0x0  nop
    ctx->pc = 0x2e0778u;
    // NOP
    // 0x2e077c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e077cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0780: 0x0  nop
    ctx->pc = 0x2e0780u;
    // NOP
    // 0x2e0784: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0784u;
    {
        const bool branch_taken_0x2e0784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0784) {
            ctx->pc = 0x2E0788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0784u;
            // 0x2e0788: 0xc6000038  lwc1        $f0, 0x38($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0794u;
            goto label_2e0794;
        }
    }
    ctx->pc = 0x2E078Cu;
    // 0x2e078c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2e078cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2e0790:
    // 0x2e0790: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2e0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e0794:
    // 0x2e0794: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e0794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e0798: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e079c: 0x0  nop
    ctx->pc = 0x2e079cu;
    // NOP
    // 0x2e07a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e07a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e07a4: 0x0  nop
    ctx->pc = 0x2e07a4u;
    // NOP
    // 0x2e07a8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2E07A8u;
    {
        const bool branch_taken_0x2e07a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e07a8) {
            ctx->pc = 0x2E07ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E07A8u;
            // 0x2e07ac: 0xe6010038  swc1        $f1, 0x38($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E07D0u;
            goto label_2e07d0;
        }
    }
    ctx->pc = 0x2E07B0u;
    // 0x2e07b0: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2e07b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2e07b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e07b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e07b8: 0x0  nop
    ctx->pc = 0x2e07b8u;
    // NOP
    // 0x2e07bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e07bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e07c0: 0x0  nop
    ctx->pc = 0x2e07c0u;
    // NOP
    // 0x2e07c4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E07C4u;
    {
        const bool branch_taken_0x2e07c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e07c4) {
            ctx->pc = 0x2E07C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E07C4u;
            // 0x2e07c8: 0x8e02009c  lw          $v0, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E07D4u;
            goto label_2e07d4;
        }
    }
    ctx->pc = 0x2E07CCu;
    // 0x2e07cc: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x2e07ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2e07d0:
    // 0x2e07d0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x2e07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2e07d4:
    // 0x2e07d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E07D4u;
    {
        const bool branch_taken_0x2e07d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07D4u;
        // 0x2e07d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07d4) {
            ctx->pc = 0x2E07F8u;
            goto label_2e07f8;
        }
    }
    ctx->pc = 0x2E07DCu;
    // 0x2e07dc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2e07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e07e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e07e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e07e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2e07e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e07ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e07f0: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E07F0u;
    SET_GPR_U32(ctx, 31, 0x2E07F8u);
    ctx->pc = 0x2E07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E07F0u;
    // 0x2e07f4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E07F0u, 0x2E07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07F8u;
label_2e07f8:
    // 0x2e07f8: 0xc0b72da  jal         func_2DCB68
    ctx->pc = 0x2E07F8u;
    SET_GPR_U32(ctx, 31, 0x2E0800u);
    ctx->pc = 0x2E07FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E07F8u;
    // 0x2e07fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB68u, 0x2E07F8u, 0x2E0800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0800u;
label_2e0800:
    // 0x2e0800: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e0804: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E0804u;
    {
        const bool branch_taken_0x2e0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0804) {
            ctx->pc = 0x2E0808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0804u;
            // 0x2e0808: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08C0u;
            goto label_2e08c0;
        }
    }
    ctx->pc = 0x2E080Cu;
    // 0x2e080c: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x2e080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0810: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e0810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0814: 0x0  nop
    ctx->pc = 0x2e0814u;
    // NOP
    // 0x2e0818: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e081c: 0x0  nop
    ctx->pc = 0x2e081cu;
    // NOP
    // 0x2e0820: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x2E0820u;
    {
        const bool branch_taken_0x2e0820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0820u;
        // 0x2e0824: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0820) {
            ctx->pc = 0x2E08BCu;
            goto label_2e08bc;
        }
    }
    ctx->pc = 0x2E0828u;
    // 0x2e0828: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x2e0828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e082c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E082Cu;
    {
        const bool branch_taken_0x2e082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e082c) {
            ctx->pc = 0x2E0830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E082Cu;
            // 0x2e0830: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08C0u;
            goto label_2e08c0;
        }
    }
    ctx->pc = 0x2E0834u;
    // 0x2e0834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0838: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2e0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2e083c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2e083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2e0840: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0840u;
    {
        const bool branch_taken_0x2e0840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0840u;
        // 0x2e0844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0840) {
            ctx->pc = 0x2E0854u;
            goto label_2e0854;
        }
    }
    ctx->pc = 0x2E0848u;
    // 0x2e0848: 0x8c6211c0  lw          $v0, 0x11C0($v1)
    ctx->pc = 0x2e0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x2e084c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e0850: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2e0850u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e0854:
    // 0x2e0854: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0858: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2e0858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2e085c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E085Cu;
    {
        const bool branch_taken_0x2e085c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E085Cu;
        // 0x2e0860: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e085c) {
            ctx->pc = 0x2E0870u;
            goto label_2e0870;
        }
    }
    ctx->pc = 0x2E0864u;
    // 0x2e0864: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e0868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0868u;
    {
        const bool branch_taken_0x2e0868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0868u;
        // 0x2e086c: 0xc4422b30  lwc1        $f2, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0868) {
            ctx->pc = 0x2E087Cu;
            goto label_2e087c;
        }
    }
    ctx->pc = 0x2E0870u;
label_2e0870:
    // 0x2e0870: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e0870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e0874: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e0874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e0878: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e0878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e087c:
    // 0x2e087c: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x2e087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0880: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2e0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0884: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e0884u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e0888: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e0888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e088c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e088cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e0890: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0890u;
    {
        const bool branch_taken_0x2e0890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0890u;
        // 0x2e0894: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0890) {
            ctx->pc = 0x2E08ACu;
            goto label_2e08ac;
        }
    }
    ctx->pc = 0x2E0898u;
    // 0x2e0898: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x2e0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e089c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e089cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e08a0: 0x0  nop
    ctx->pc = 0x2e08a0u;
    // NOP
    // 0x2e08a4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2E08A4u;
    {
        const bool branch_taken_0x2e08a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e08a4) {
            ctx->pc = 0x2E08A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E08A4u;
            // 0x2e08a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08C0u;
            goto label_2e08c0;
        }
    }
    ctx->pc = 0x2E08ACu;
label_2e08ac:
    // 0x2e08ac: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x2e08acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e08b0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2e08b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e08b4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2e08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2e08b8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x2e08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_2e08bc:
    // 0x2e08bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e08bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e08c0:
    // 0x2e08c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e08c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e08c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E08C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08C4u;
        // 0x2e08c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E08C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E08CCu;
    // 0x2e08cc: 0x0  nop
    ctx->pc = 0x2e08ccu;
    // NOP
    // 0x2e08d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e08d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e08d4: 0x0  nop
    ctx->pc = 0x2e08d4u;
    // NOP
    ctx->pc = 0x2e08d8u;
}
