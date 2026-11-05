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

// Function: sub_00248840
// Address: 0x248840 - 0x248960
void sub_00248840_0x248840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248840_0x248840");
#endif

    switch (ctx->pc) {
        case 0x248868u: goto label_248868;
        case 0x24889cu: goto label_24889c;
        case 0x2488b0u: goto label_2488b0;
        case 0x2488e4u: goto label_2488e4;
        case 0x2488f4u: goto label_2488f4;
        case 0x248930u: goto label_248930;
        case 0x248940u: goto label_248940;
        default: break;
    }

    ctx->pc = 0x248840u;

    // 0x248840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248844: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x248844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x248848: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x248848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24884c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24884cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248850: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x248850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x248854: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x248854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x248858: 0x2612016c  addiu       $s2, $s0, 0x16C
    ctx->pc = 0x248858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x24885c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x24885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x248860: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x248860u;
    SET_GPR_U32(ctx, 31, 0x248868u);
    ctx->pc = 0x248864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248860u;
    // 0x248864: 0x8c510110  lw          $s1, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x248860u, 0x248868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248868u;
label_248868:
    // 0x248868: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x248868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24886c: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x24886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248870: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x248870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x248874: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x248874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x248878: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x248878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24887c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x24887cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x248880: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x248880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x248884: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x248884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x248888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24888c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x24888Cu;
    {
        const bool branch_taken_0x24888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24888Cu;
        // 0x248890: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24888c) {
            ctx->pc = 0x2488FCu;
            goto label_2488fc;
        }
    }
    ctx->pc = 0x248894u;
    // 0x248894: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x248894u;
    SET_GPR_U32(ctx, 31, 0x24889Cu);
    ctx->pc = 0x248898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248894u;
    // 0x248898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x248894u, 0x24889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24889Cu;
label_24889c:
    // 0x24889c: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x24889cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2488a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2488a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2488a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2488a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2488a8: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x2488A8u;
    SET_GPR_U32(ctx, 31, 0x2488B0u);
    ctx->pc = 0x2488ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488A8u;
    // 0x2488ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x2488A8u, 0x2488B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488B0u;
label_2488b0:
    // 0x2488b0: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x2488b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x2488b4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2488b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2488b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2488B8u;
    {
        const bool branch_taken_0x2488b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488B8u;
        // 0x2488bc: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488b8) {
            ctx->pc = 0x2488C8u;
            goto label_2488c8;
        }
    }
    ctx->pc = 0x2488C0u;
    // 0x2488c0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2488C0u;
    {
        const bool branch_taken_0x2488c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2488c0) {
            ctx->pc = 0x2488C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2488C0u;
            // 0x2488c4: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2488E8u;
            goto label_2488e8;
        }
    }
    ctx->pc = 0x2488C8u;
label_2488c8:
    // 0x2488c8: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2488cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2488ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2488d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2488d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2488d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2488d8: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x2488d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2488dc: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2488DCu;
    SET_GPR_U32(ctx, 31, 0x2488E4u);
    ctx->pc = 0x2488E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488DCu;
    // 0x2488e0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2488DCu, 0x2488E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488E4u;
label_2488e4:
    // 0x2488e4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x2488e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_2488e8:
    // 0x2488e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2488e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2488ec: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2488ECu;
    SET_GPR_U32(ctx, 31, 0x2488F4u);
    ctx->pc = 0x2488F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488ECu;
    // 0x2488f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2488ECu, 0x2488F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488F4u;
label_2488f4:
    // 0x2488f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2488F4u;
    {
        const bool branch_taken_0x2488f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488F4u;
        // 0x2488f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488f4) {
            ctx->pc = 0x248944u;
            goto label_248944;
        }
    }
    ctx->pc = 0x2488FCu;
label_2488fc:
    // 0x2488fc: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x2488fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x248900: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x248900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x248904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248908: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x248908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24890c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24890cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248910: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x248910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x248914: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x248914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x248918: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x248918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x24891c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24891cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248920: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x248920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x248924: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x248924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x248928: 0xc0c32b4  jal         func_30CAD0
    ctx->pc = 0x248928u;
    SET_GPR_U32(ctx, 31, 0x248930u);
    ctx->pc = 0x24892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248928u;
    // 0x24892c: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAD0u, 0x248928u, 0x248930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248930u;
label_248930:
    // 0x248930: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x248930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x248934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248938: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x248938u;
    SET_GPR_U32(ctx, 31, 0x248940u);
    ctx->pc = 0x24893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248938u;
    // 0x24893c: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x248938u, 0x248940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248940u;
label_248940:
    // 0x248940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248944:
    // 0x248944: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x248944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x248948: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x248948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24894c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24894cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248950: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x248950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248954: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x248954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x248958: 0x3e00008  jr          $ra
    ctx->pc = 0x248958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248958u;
        // 0x24895c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248960u;
}
