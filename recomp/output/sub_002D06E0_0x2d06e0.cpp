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

// Function: sub_002D06E0
// Address: 0x2d06e0 - 0x2d0a88
void sub_002D06E0_0x2d06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D06E0_0x2d06e0");
#endif

    switch (ctx->pc) {
        case 0x2d073cu: goto label_2d073c;
        case 0x2d0748u: goto label_2d0748;
        case 0x2d0828u: goto label_2d0828;
        case 0x2d0858u: goto label_2d0858;
        case 0x2d0990u: goto label_2d0990;
        case 0x2d0a28u: goto label_2d0a28;
        case 0x2d0a50u: goto label_2d0a50;
        default: break;
    }

    ctx->pc = 0x2d06e0u;

    // 0x2d06e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d06e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d06e4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d06e8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2d06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2d06ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d06ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d06f0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2d06f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2d06f4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2d06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2d06f8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2d06f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2d06fc: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2d06fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0700: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2d0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2d0704: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d0708: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d0708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d070c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2d070cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d0710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0714: 0x26b40078  addiu       $s4, $s5, 0x78
    ctx->pc = 0x2d0714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x2d0718: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2d0718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d071c: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x2d071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0720: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d0720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0724: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d0724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0728: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2d0728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d072c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d072cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d0730: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d0734: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0734u;
    SET_GPR_U32(ctx, 31, 0x2D073Cu);
    ctx->pc = 0x2D0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0734u;
    // 0x2d0738: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0734u, 0x2D073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D073Cu;
label_2d073c:
    // 0x2d073c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2d073cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0740: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D0740u;
    SET_GPR_U32(ctx, 31, 0x2D0748u);
    ctx->pc = 0x2D0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0740u;
    // 0x2d0744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D0740u, 0x2D0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0748u;
label_2d0748:
    // 0x2d0748: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2d0748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d074c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d0750: 0x10c20023  beq         $a2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0750u;
    {
        const bool branch_taken_0x2d0750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0750u;
        // 0x2d0754: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0750) {
            ctx->pc = 0x2D07E0u;
            goto label_2d07e0;
        }
    }
    ctx->pc = 0x2D0758u;
    // 0x2d0758: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D0758u;
    {
        const bool branch_taken_0x2d0758 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0758u;
        // 0x2d075c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0758) {
            ctx->pc = 0x2D07D0u;
            goto label_2d07d0;
        }
    }
    ctx->pc = 0x2D0760u;
    // 0x2d0760: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x2d0760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2d0764: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x2d0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2d0768: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x2d0768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2d076c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2d076cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d0770: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d0770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0774: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2d0774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2d0778: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d077c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d077cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d0780: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0784: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d0784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d0788: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d0788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d078c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2d078cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d0790: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0794: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x2d0794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2d0798: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2d0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d079c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d079cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d07a0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2d07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d07a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d07a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d07a8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2d07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d07ac: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2d07acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d07b0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d07b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d07b4: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x2d07b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2d07b8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2d07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d07bc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d07bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d07c0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2d07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d07c4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d07c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d07c8: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2d07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d07cc: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2d07ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2d07d0:
    // 0x2d07d0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d07d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d07d8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2D07D8u;
    {
        const bool branch_taken_0x2d07d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07D8u;
        // 0x2d07dc: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07d8) {
            ctx->pc = 0x2D0A60u;
            goto label_2d0a60;
        }
    }
    ctx->pc = 0x2D07E0u;
label_2d07e0:
    // 0x2d07e0: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x2d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2d07e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d07e8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2d07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2d07ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d07f0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2d07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2d07f4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2d07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d07f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d07fc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d07fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d0800: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d0800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2d0804: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2d0804u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2d0808: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d0808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d080c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0810u;
    {
        const bool branch_taken_0x2d0810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0810u;
        // 0x2d0814: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0810) {
            ctx->pc = 0x2D0830u;
            goto label_2d0830;
        }
    }
    ctx->pc = 0x2D0818u;
    // 0x2d0818: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d081c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0820: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D0820u;
    SET_GPR_U32(ctx, 31, 0x2D0828u);
    ctx->pc = 0x2D0824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0820u;
    // 0x2d0824: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D0820u, 0x2D0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0828u;
label_2d0828:
    // 0x2d0828: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0828u;
    {
        const bool branch_taken_0x2d0828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0828u;
        // 0x2d082c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0828) {
            ctx->pc = 0x2D083Cu;
            goto label_2d083c;
        }
    }
    ctx->pc = 0x2D0830u;
label_2d0830:
    // 0x2d0830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0834: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d0834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d083c:
    // 0x2d083c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d0840: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2d0840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0844: 0x10720025  beq         $v1, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D0844u;
    {
        const bool branch_taken_0x2d0844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0844u;
        // 0x2d0848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0844) {
            ctx->pc = 0x2D08DCu;
            goto label_2d08dc;
        }
    }
    ctx->pc = 0x2D084Cu;
    // 0x2d084c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d0850: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d0854: 0x0  nop
    ctx->pc = 0x2d0854u;
    // NOP
label_2d0858:
    // 0x2d0858: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D0858u;
    {
        const bool branch_taken_0x2d0858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0858) {
            ctx->pc = 0x2D085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0858u;
            // 0x2d085c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D08CCu;
            goto label_2d08cc;
        }
    }
    ctx->pc = 0x2D0860u;
    // 0x2d0860: 0xc4a0ffd0  lwc1        $f0, -0x30($a1)
    ctx->pc = 0x2d0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0864: 0xe440ffd0  swc1        $f0, -0x30($v0)
    ctx->pc = 0x2d0864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), bits); }
    // 0x2d0868: 0xc4a1ffe0  lwc1        $f1, -0x20($a1)
    ctx->pc = 0x2d0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d086c: 0xe441ffe0  swc1        $f1, -0x20($v0)
    ctx->pc = 0x2d086cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), bits); }
    // 0x2d0870: 0xc4a0ffe4  lwc1        $f0, -0x1C($a1)
    ctx->pc = 0x2d0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0874: 0xe440ffe4  swc1        $f0, -0x1C($v0)
    ctx->pc = 0x2d0874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), bits); }
    // 0x2d0878: 0xc4a1ffe8  lwc1        $f1, -0x18($a1)
    ctx->pc = 0x2d0878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d087c: 0xe441ffe8  swc1        $f1, -0x18($v0)
    ctx->pc = 0x2d087cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), bits); }
    // 0x2d0880: 0xc4a0ffec  lwc1        $f0, -0x14($a1)
    ctx->pc = 0x2d0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0884: 0xe440ffec  swc1        $f0, -0x14($v0)
    ctx->pc = 0x2d0884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), bits); }
    // 0x2d0888: 0xc4a1fff0  lwc1        $f1, -0x10($a1)
    ctx->pc = 0x2d0888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d088c: 0xe441fff0  swc1        $f1, -0x10($v0)
    ctx->pc = 0x2d088cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), bits); }
    // 0x2d0890: 0xc4a0fff4  lwc1        $f0, -0xC($a1)
    ctx->pc = 0x2d0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0894: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x2d0894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
    // 0x2d0898: 0xc4a1fff8  lwc1        $f1, -0x8($a1)
    ctx->pc = 0x2d0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d089c: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x2d089cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2d08a0: 0xc4a0fffc  lwc1        $f0, -0x4($a1)
    ctx->pc = 0x2d08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d08a4: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x2d08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2d08a8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d08ac: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2d08acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d08b0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d08b4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d08b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d08b8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d08bc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d08bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d08c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d08c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d08c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d08c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d08c8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2d08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2d08cc:
    // 0x2d08cc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2d08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2d08d0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d08d4: 0x1472ffe0  bne         $v1, $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D08D4u;
    {
        const bool branch_taken_0x2d08d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08D4u;
        // 0x2d08d8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08d4) {
            ctx->pc = 0x2D0858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0858;
        }
    }
    ctx->pc = 0x2D08DCu;
label_2d08dc:
    // 0x2d08dc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2d08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2d08e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d08e4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D08E4u;
    {
        const bool branch_taken_0x2d08e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08E4u;
        // 0x2d08e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08e4) {
            ctx->pc = 0x2D0978u;
            goto label_2d0978;
        }
    }
    ctx->pc = 0x2D08ECu;
    // 0x2d08ec: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D08ECu;
    {
        const bool branch_taken_0x2d08ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08ECu;
        // 0x2d08f0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08ec) {
            ctx->pc = 0x2D0970u;
            goto label_2d0970;
        }
    }
    ctx->pc = 0x2D08F4u;
    // 0x2d08f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d08f8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2d08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d08fc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2d0900: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d0900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d0904: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d0904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d0908: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x2d0908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2d090c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2d090cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d0910: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2d0910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0914: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2d0914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2d0918: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d091c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d091cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d0920: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0924: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d0924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d0928: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2d0928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d092c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2d092cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2d0930: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2d0930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0934: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2d0934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d0938: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d093c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d093cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d0940: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d0940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0944: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d0944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d0948: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2d0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d094c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2d094cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d0950: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2d0950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0954: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2d0954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d0958: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d095c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2d095cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2d0960: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d0960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0964: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2d0964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2d0968: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2d0968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d096c: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x2d096cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_2d0970:
    // 0x2d0970: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D0970u;
    {
        const bool branch_taken_0x2d0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0970u;
        // 0x2d0974: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0970) {
            ctx->pc = 0x2D0A10u;
            goto label_2d0a10;
        }
    }
    ctx->pc = 0x2D0978u;
label_2d0978:
    // 0x2d0978: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D0978u;
    {
        const bool branch_taken_0x2d0978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0978u;
        // 0x2d097c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0978) {
            ctx->pc = 0x2D0A0Cu;
            goto label_2d0a0c;
        }
    }
    ctx->pc = 0x2D0980u;
    // 0x2d0980: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d0984: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x2d0984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d0988: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2d0988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2d098c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2d098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2d0990:
    // 0x2d0990: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D0990u;
    {
        const bool branch_taken_0x2d0990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0990u;
        // 0x2d0994: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0990) {
            ctx->pc = 0x2D0A00u;
            goto label_2d0a00;
        }
    }
    ctx->pc = 0x2D0998u;
    // 0x2d0998: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d099c: 0xe440ffd0  swc1        $f0, -0x30($v0)
    ctx->pc = 0x2d099cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), bits); }
    // 0x2d09a0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2d09a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09a4: 0xe441ffe0  swc1        $f1, -0x20($v0)
    ctx->pc = 0x2d09a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), bits); }
    // 0x2d09a8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2d09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d09ac: 0xe440ffe4  swc1        $f0, -0x1C($v0)
    ctx->pc = 0x2d09acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), bits); }
    // 0x2d09b0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2d09b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09b4: 0xe441ffe8  swc1        $f1, -0x18($v0)
    ctx->pc = 0x2d09b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), bits); }
    // 0x2d09b8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2d09b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d09bc: 0xe440ffec  swc1        $f0, -0x14($v0)
    ctx->pc = 0x2d09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), bits); }
    // 0x2d09c0: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2d09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09c4: 0xe441fff0  swc1        $f1, -0x10($v0)
    ctx->pc = 0x2d09c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), bits); }
    // 0x2d09c8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2d09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d09cc: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x2d09ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
    // 0x2d09d0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2d09d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09d4: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x2d09d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2d09d8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2d09d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d09dc: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x2d09dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2d09e0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2d09e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09e4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2d09e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d09e8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d09e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d09ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d09ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d09f0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d09f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09f4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d09f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d09f8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d09f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d09fc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d09fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2d0a00:
    // 0x2d0a00: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d0a04: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2D0A04u;
    {
        const bool branch_taken_0x2d0a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A04u;
        // 0x2d0a08: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a04) {
            ctx->pc = 0x2D0990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0990;
        }
    }
    ctx->pc = 0x2D0A0Cu;
label_2d0a0c:
    // 0x2d0a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0a10:
    // 0x2d0a10: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d0a14: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2d0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d0a18: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0A18u;
    {
        const bool branch_taken_0x2d0a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A18u;
        // 0x2d0a1c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a18) {
            ctx->pc = 0x2D0A40u;
            goto label_2d0a40;
        }
    }
    ctx->pc = 0x2D0A20u;
    // 0x2d0a20: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d0a24: 0x0  nop
    ctx->pc = 0x2d0a24u;
    // NOP
label_2d0a28:
    // 0x2d0a28: 0x0  nop
    ctx->pc = 0x2d0a28u;
    // NOP
    // 0x2d0a2c: 0x0  nop
    ctx->pc = 0x2d0a2cu;
    // NOP
    // 0x2d0a30: 0x0  nop
    ctx->pc = 0x2d0a30u;
    // NOP
    // 0x2d0a34: 0x0  nop
    ctx->pc = 0x2d0a34u;
    // NOP
    // 0x2d0a38: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0A38u;
    {
        const bool branch_taken_0x2d0a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A38u;
        // 0x2d0a3c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a38) {
            ctx->pc = 0x2D0A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0a28;
        }
    }
    ctx->pc = 0x2D0A40u;
label_2d0a40:
    // 0x2d0a40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0A40u;
    {
        const bool branch_taken_0x2d0a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A40u;
        // 0x2d0a44: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a40) {
            ctx->pc = 0x2D0A54u;
            goto label_2d0a54;
        }
    }
    ctx->pc = 0x2D0A48u;
    // 0x2d0a48: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D0A48u;
    SET_GPR_U32(ctx, 31, 0x2D0A50u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D0A48u, 0x2D0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A50u;
label_2d0a50:
    // 0x2d0a50: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2d0a54:
    // 0x2d0a54: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x2d0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x2d0a58: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2d0a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2d0a5c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x2d0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_2d0a60:
    // 0x2d0a60: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d0a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0a64: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2d0a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0a68: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2d0a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0a6c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2d0a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a70: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2d0a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d0a74: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2d0a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d0a78: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d0a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d0a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A7Cu;
        // 0x2d0a80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0A84u;
    // 0x2d0a84: 0x0  nop
    ctx->pc = 0x2d0a84u;
    // NOP
    ctx->pc = 0x2d0a88u;
}
