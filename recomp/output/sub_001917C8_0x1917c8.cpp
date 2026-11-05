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

// Function: sub_001917C8
// Address: 0x1917c8 - 0x191aa0
void sub_001917C8_0x1917c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001917C8_0x1917c8");
#endif

    switch (ctx->pc) {
        case 0x1917e8u: goto label_1917e8;
        case 0x19182cu: goto label_19182c;
        case 0x191840u: goto label_191840;
        case 0x191854u: goto label_191854;
        case 0x19185cu: goto label_19185c;
        case 0x191864u: goto label_191864;
        case 0x19186cu: goto label_19186c;
        case 0x1918d8u: goto label_1918d8;
        case 0x1918e8u: goto label_1918e8;
        case 0x1918f8u: goto label_1918f8;
        case 0x191964u: goto label_191964;
        case 0x191980u: goto label_191980;
        case 0x191988u: goto label_191988;
        case 0x191998u: goto label_191998;
        case 0x1919d0u: goto label_1919d0;
        case 0x1919e8u: goto label_1919e8;
        case 0x1919f8u: goto label_1919f8;
        case 0x191a08u: goto label_191a08;
        case 0x191a24u: goto label_191a24;
        case 0x191a34u: goto label_191a34;
        case 0x191a40u: goto label_191a40;
        case 0x191a48u: goto label_191a48;
        case 0x191a70u: goto label_191a70;
        default: break;
    }

    ctx->pc = 0x1917c8u;

    // 0x1917c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1917c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1917cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1917ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1917d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1917d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1917d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1917d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1917d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1917d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1917dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1917dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1917e0: 0xc061a22  jal         func_186888
    ctx->pc = 0x1917E0u;
    SET_GPR_U32(ctx, 31, 0x1917E8u);
    ctx->pc = 0x1917E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917E0u;
    // 0x1917e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1917E0u, 0x1917E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917E8u;
label_1917e8:
    // 0x1917e8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1917e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1917ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1917ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1917f0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1917f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1917f4: 0x1072003e  beq         $v1, $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x1917F4u;
    {
        const bool branch_taken_0x1917f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917F4u;
        // 0x1917f8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917f4) {
            ctx->pc = 0x1918F0u;
            goto label_1918f0;
        }
    }
    ctx->pc = 0x1917FCu;
    // 0x1917fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1917FCu;
    {
        const bool branch_taken_0x1917fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1917fc) {
            ctx->pc = 0x191800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917FCu;
            // 0x191800: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191814u;
            goto label_191814;
        }
    }
    ctx->pc = 0x191804u;
    // 0x191804: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x191804u;
    {
        const bool branch_taken_0x191804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191804) {
            ctx->pc = 0x191824u;
            goto label_191824;
        }
    }
    ctx->pc = 0x19180Cu;
    // 0x19180c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x19180Cu;
    {
        const bool branch_taken_0x19180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19180Cu;
        // 0x191810: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19180c) {
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x191814u;
label_191814:
    // 0x191814: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x191814u;
    {
        const bool branch_taken_0x191814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x191814) {
            ctx->pc = 0x191A00u;
            goto label_191a00;
        }
    }
    ctx->pc = 0x19181Cu;
    // 0x19181c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x19181Cu;
    {
        const bool branch_taken_0x19181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19181Cu;
        // 0x191820: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19181c) {
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x191824u;
label_191824:
    // 0x191824: 0xc061a16  jal         func_186858
    ctx->pc = 0x191824u;
    SET_GPR_U32(ctx, 31, 0x19182Cu);
    ctx->pc = 0x191828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191824u;
    // 0x191828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x191824u, 0x19182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19182Cu;
label_19182c:
    // 0x19182c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x191830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191838: 0xc061a16  jal         func_186858
    ctx->pc = 0x191838u;
    SET_GPR_U32(ctx, 31, 0x191840u);
    ctx->pc = 0x19183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191838u;
    // 0x19183c: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x191838u, 0x191840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191840u;
label_191840:
    // 0x191840: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x191844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19184c: 0xc064284  jal         func_190A10
    ctx->pc = 0x19184Cu;
    SET_GPR_U32(ctx, 31, 0x191854u);
    ctx->pc = 0x191850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19184Cu;
    // 0x191850: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190A10u, 0x19184Cu, 0x191854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191854u;
label_191854:
    // 0x191854: 0xc0645dc  jal         func_191770
    ctx->pc = 0x191854u;
    SET_GPR_U32(ctx, 31, 0x19185Cu);
    ctx->pc = 0x191858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191854u;
    // 0x191858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191770u, 0x191854u, 0x19185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19185Cu;
label_19185c:
    // 0x19185c: 0xc064546  jal         func_191518
    ctx->pc = 0x19185Cu;
    SET_GPR_U32(ctx, 31, 0x191864u);
    ctx->pc = 0x191860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19185Cu;
    // 0x191860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191518u, 0x19185Cu, 0x191864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191864u;
label_191864:
    // 0x191864: 0xc064762  jal         func_191D88
    ctx->pc = 0x191864u;
    SET_GPR_U32(ctx, 31, 0x19186Cu);
    ctx->pc = 0x191868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191864u;
    // 0x191868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D88u, 0x191864u, 0x19186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19186Cu;
label_19186c:
    // 0x19186c: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x19186Cu;
    {
        const bool branch_taken_0x19186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19186c) {
            ctx->pc = 0x191870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19186Cu;
            // 0x191870: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x191874u;
    // 0x191874: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x191874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191878: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x19187c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19187cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191880: 0x0  nop
    ctx->pc = 0x191880u;
    // NOP
    // 0x191884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191888: 0x0  nop
    ctx->pc = 0x191888u;
    // NOP
    // 0x19188c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x19188Cu;
    {
        const bool branch_taken_0x19188c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19188c) {
            ctx->pc = 0x191890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19188Cu;
            // 0x191890: 0xe601009c  swc1        $f1, 0x9C($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1918D0u;
            goto label_1918d0;
        }
    }
    ctx->pc = 0x191894u;
    // 0x191894: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x191894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x191898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19189c: 0x0  nop
    ctx->pc = 0x19189cu;
    // NOP
    // 0x1918a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1918a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1918a4: 0x0  nop
    ctx->pc = 0x1918a4u;
    // NOP
    // 0x1918a8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1918A8u;
    {
        const bool branch_taken_0x1918a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1918a8) {
            ctx->pc = 0x1918ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1918A8u;
            // 0x1918ac: 0xe601009c  swc1        $f1, 0x9C($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1918D0u;
            goto label_1918d0;
        }
    }
    ctx->pc = 0x1918B0u;
    // 0x1918b0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1918b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1918b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1918b8: 0x0  nop
    ctx->pc = 0x1918b8u;
    // NOP
    // 0x1918bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1918bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1918c0: 0x0  nop
    ctx->pc = 0x1918c0u;
    // NOP
    // 0x1918c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1918C4u;
    {
        const bool branch_taken_0x1918c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1918c4) {
            ctx->pc = 0x1918E0u;
            goto label_1918e0;
        }
    }
    ctx->pc = 0x1918CCu;
    // 0x1918cc: 0xe601009c  swc1        $f1, 0x9C($s0)
    ctx->pc = 0x1918ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_1918d0:
    // 0x1918d0: 0xc064732  jal         func_191CC8
    ctx->pc = 0x1918D0u;
    SET_GPR_U32(ctx, 31, 0x1918D8u);
    ctx->pc = 0x1918D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1918D0u;
    // 0x1918d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191CC8u, 0x1918D0u, 0x1918D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1918D8u;
label_1918d8:
    // 0x1918d8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1918D8u;
    {
        const bool branch_taken_0x1918d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918D8u;
        // 0x1918dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918d8) {
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x1918E0u;
label_1918e0:
    // 0x1918e0: 0xc06474a  jal         func_191D28
    ctx->pc = 0x1918E0u;
    SET_GPR_U32(ctx, 31, 0x1918E8u);
    ctx->pc = 0x1918E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1918E0u;
    // 0x1918e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D28u, 0x1918E0u, 0x1918E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1918E8u;
label_1918e8:
    // 0x1918e8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1918E8u;
    {
        const bool branch_taken_0x1918e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E8u;
        // 0x1918ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918e8) {
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x1918F0u;
label_1918f0:
    // 0x1918f0: 0xc061a12  jal         func_186848
    ctx->pc = 0x1918F0u;
    SET_GPR_U32(ctx, 31, 0x1918F8u);
    ctx->pc = 0x1918F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1918F0u;
    // 0x1918f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1918F0u, 0x1918F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1918F8u;
label_1918f8:
    // 0x1918f8: 0xac52035c  sw          $s2, 0x35C($v0)
    ctx->pc = 0x1918f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 18));
    // 0x1918fc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1918fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x191900: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x191904: 0x14720006  bne         $v1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x191904u;
    {
        const bool branch_taken_0x191904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x191908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191904u;
        // 0x191908: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191904) {
            ctx->pc = 0x191920u;
            goto label_191920;
        }
    }
    ctx->pc = 0x19190Cu;
    // 0x19190c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x19190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x191910: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x191914: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x191914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x191918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x191918u;
    {
        const bool branch_taken_0x191918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191918u;
        // 0x19191c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191918) {
            ctx->pc = 0x191944u;
            goto label_191944;
        }
    }
    ctx->pc = 0x191920u;
label_191920:
    // 0x191920: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x191920u;
    {
        const bool branch_taken_0x191920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191920u;
        // 0x191924: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191920) {
            ctx->pc = 0x19193Cu;
            goto label_19193c;
        }
    }
    ctx->pc = 0x191928u;
    // 0x191928: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19192c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19192Cu;
    {
        const bool branch_taken_0x19192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19192Cu;
        // 0x191930: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19192c) {
            ctx->pc = 0x19193Cu;
            goto label_19193c;
        }
    }
    ctx->pc = 0x191934u;
    // 0x191934: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191934u;
    {
        const bool branch_taken_0x191934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191934u;
        // 0x191938: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191934) {
            ctx->pc = 0x191944u;
            goto label_191944;
        }
    }
    ctx->pc = 0x19193Cu;
label_19193c:
    // 0x19193c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191940: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x191940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191944:
    // 0x191944: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x191944u;
    {
        const bool branch_taken_0x191944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191944) {
            ctx->pc = 0x191980u;
            goto label_191980;
        }
    }
    ctx->pc = 0x19194Cu;
    // 0x19194c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x191950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191950u;
    {
        const bool branch_taken_0x191950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191950u;
        // 0x191954: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191950) {
            ctx->pc = 0x19196Cu;
            goto label_19196c;
        }
    }
    ctx->pc = 0x191958u;
    // 0x191958: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19195c: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x19195Cu;
    SET_GPR_U32(ctx, 31, 0x191964u);
    ctx->pc = 0x191960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19195Cu;
    // 0x191960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19195Cu, 0x191964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191964u;
label_191964:
    // 0x191964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x191964u;
    {
        const bool branch_taken_0x191964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191964) {
            ctx->pc = 0x191980u;
            goto label_191980;
        }
    }
    ctx->pc = 0x19196Cu;
label_19196c:
    // 0x19196c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19196Cu;
    {
        const bool branch_taken_0x19196c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19196c) {
            ctx->pc = 0x191980u;
            goto label_191980;
        }
    }
    ctx->pc = 0x191974u;
    // 0x191974: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x191974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x191978: 0xc06fb1e  jal         func_1BEC78
    ctx->pc = 0x191978u;
    SET_GPR_U32(ctx, 31, 0x191980u);
    ctx->pc = 0x19197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191978u;
    // 0x19197c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x191978u, 0x191980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191980u;
label_191980:
    // 0x191980: 0xc061a12  jal         func_186848
    ctx->pc = 0x191980u;
    SET_GPR_U32(ctx, 31, 0x191988u);
    ctx->pc = 0x191984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191980u;
    // 0x191984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191980u, 0x191988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191988u;
label_191988:
    // 0x191988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19198c: 0x244601e0  addiu       $a2, $v0, 0x1E0
    ctx->pc = 0x19198cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x191990: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x191990u;
    SET_GPR_U32(ctx, 31, 0x191998u);
    ctx->pc = 0x191994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191990u;
    // 0x191994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x191990u, 0x191998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191998u;
label_191998:
    // 0x191998: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x191998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19199c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1919a0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1919a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1919a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1919a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1919a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1919a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1919ac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1919acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1919b0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x1919b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1919b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1919b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1919b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1919b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1919bc: 0x0  nop
    ctx->pc = 0x1919bcu;
    // NOP
    // 0x1919c0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1919C0u;
    {
        const bool branch_taken_0x1919c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1919c0) {
            ctx->pc = 0x1919C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1919C0u;
            // 0x1919c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1919D4u;
            goto label_1919d4;
        }
    }
    ctx->pc = 0x1919C8u;
    // 0x1919c8: 0xc064700  jal         func_191C00
    ctx->pc = 0x1919C8u;
    SET_GPR_U32(ctx, 31, 0x1919D0u);
    ctx->pc = 0x1919CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919C8u;
    // 0x1919cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C00u, 0x1919C8u, 0x1919D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919D0u;
label_1919d0:
    // 0x1919d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1919d4:
    // 0x1919d4: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1919d8: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1919D8u;
    {
        const bool branch_taken_0x1919d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919d8) {
            ctx->pc = 0x1919DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1919D8u;
            // 0x1919dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x1919E0u;
    // 0x1919e0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1919E0u;
    SET_GPR_U32(ctx, 31, 0x1919E8u);
    ctx->pc = 0x1919E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919E0u;
    // 0x1919e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1919E0u, 0x1919E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919E8u;
label_1919e8:
    // 0x1919e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1919ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1919ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919f0: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1919F0u;
    SET_GPR_U32(ctx, 31, 0x1919F8u);
    ctx->pc = 0x1919F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919F0u;
    // 0x1919f4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1919F0u, 0x1919F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919F8u;
label_1919f8:
    // 0x1919f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1919F8u;
    {
        const bool branch_taken_0x1919f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f8) {
            ctx->pc = 0x191A88u;
            goto label_191a88;
        }
    }
    ctx->pc = 0x191A00u;
label_191a00:
    // 0x191a00: 0xc061a12  jal         func_186848
    ctx->pc = 0x191A00u;
    SET_GPR_U32(ctx, 31, 0x191A08u);
    ctx->pc = 0x191A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A00u;
    // 0x191a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191A00u, 0x191A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A08u;
label_191a08:
    // 0x191a08: 0xac52035c  sw          $s2, 0x35C($v0)
    ctx->pc = 0x191a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 18));
    // 0x191a0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x191a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191a10: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x191a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x191a14: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x191A14u;
    {
        const bool branch_taken_0x191a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a14) {
            ctx->pc = 0x191A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A14u;
            // 0x191a18: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A38u;
            goto label_191a38;
        }
    }
    ctx->pc = 0x191A1Cu;
    // 0x191a1c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x191A1Cu;
    SET_GPR_U32(ctx, 31, 0x191A24u);
    ctx->pc = 0x191A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A1Cu;
    // 0x191a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x191A1Cu, 0x191A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A24u;
label_191a24:
    // 0x191a24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x191a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a2c: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x191A2Cu;
    SET_GPR_U32(ctx, 31, 0x191A34u);
    ctx->pc = 0x191A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A2Cu;
    // 0x191a30: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x191A2Cu, 0x191A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A34u;
label_191a34:
    // 0x191a34: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x191a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_191a38:
    // 0x191a38: 0xc064284  jal         func_190A10
    ctx->pc = 0x191A38u;
    SET_GPR_U32(ctx, 31, 0x191A40u);
    ctx->pc = 0x191A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A38u;
    // 0x191a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190A10u, 0x191A38u, 0x191A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A40u;
label_191a40:
    // 0x191a40: 0xc061a12  jal         func_186848
    ctx->pc = 0x191A40u;
    SET_GPR_U32(ctx, 31, 0x191A48u);
    ctx->pc = 0x191A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A40u;
    // 0x191a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191A40u, 0x191A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A48u;
label_191a48:
    // 0x191a48: 0xc441033c  lwc1        $f1, 0x33C($v0)
    ctx->pc = 0x191a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191a4c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x191a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x191a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191a54: 0x0  nop
    ctx->pc = 0x191a54u;
    // NOP
    // 0x191a58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191a5c: 0x0  nop
    ctx->pc = 0x191a5cu;
    // NOP
    // 0x191a60: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x191A60u;
    {
        const bool branch_taken_0x191a60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A60u;
        // 0x191a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a60) {
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A68u;
    // 0x191a68: 0xc064762  jal         func_191D88
    ctx->pc = 0x191A68u;
    SET_GPR_U32(ctx, 31, 0x191A70u);
    ctx->pc = 0x191A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A68u;
    // 0x191a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D88u, 0x191A68u, 0x191A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191A70u;
label_191a70:
    // 0x191a70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191A70u;
    {
        const bool branch_taken_0x191a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A70u;
        // 0x191a74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a70) {
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A78u;
    // 0x191a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191A78u;
    {
        const bool branch_taken_0x191a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A78u;
        // 0x191a7c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a78) {
            ctx->pc = 0x191A84u;
            goto label_191a84;
        }
    }
    ctx->pc = 0x191A80u;
label_191a80:
    // 0x191a80: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x191a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_191a84:
    // 0x191a84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x191a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_191a88:
    // 0x191a88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x191a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x191a8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x191a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191a90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x191a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191a94: 0x3e00008  jr          $ra
    ctx->pc = 0x191A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A94u;
        // 0x191a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191A9Cu;
    // 0x191a9c: 0x0  nop
    ctx->pc = 0x191a9cu;
    // NOP
    ctx->pc = 0x191aa0u;
}
