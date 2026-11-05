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

// Function: sub_00194760
// Address: 0x194760 - 0x194818
void sub_00194760_0x194760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194760_0x194760");
#endif

    switch (ctx->pc) {
        case 0x194760u: goto label_194760;
        case 0x194764u: goto label_194764;
        case 0x194768u: goto label_194768;
        case 0x19476cu: goto label_19476c;
        case 0x194770u: goto label_194770;
        case 0x194774u: goto label_194774;
        case 0x194778u: goto label_194778;
        case 0x19477cu: goto label_19477c;
        case 0x194780u: goto label_194780;
        case 0x194784u: goto label_194784;
        case 0x194788u: goto label_194788;
        case 0x19478cu: goto label_19478c;
        case 0x194790u: goto label_194790;
        case 0x194794u: goto label_194794;
        case 0x194798u: goto label_194798;
        case 0x19479cu: goto label_19479c;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947a4u: goto label_1947a4;
        case 0x1947a8u: goto label_1947a8;
        case 0x1947acu: goto label_1947ac;
        case 0x1947b0u: goto label_1947b0;
        case 0x1947b4u: goto label_1947b4;
        case 0x1947b8u: goto label_1947b8;
        case 0x1947bcu: goto label_1947bc;
        case 0x1947c0u: goto label_1947c0;
        case 0x1947c4u: goto label_1947c4;
        case 0x1947c8u: goto label_1947c8;
        case 0x1947ccu: goto label_1947cc;
        case 0x1947d0u: goto label_1947d0;
        case 0x1947d4u: goto label_1947d4;
        case 0x1947d8u: goto label_1947d8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947e0u: goto label_1947e0;
        case 0x1947e4u: goto label_1947e4;
        case 0x1947e8u: goto label_1947e8;
        case 0x1947ecu: goto label_1947ec;
        case 0x1947f0u: goto label_1947f0;
        case 0x1947f4u: goto label_1947f4;
        case 0x1947f8u: goto label_1947f8;
        case 0x1947fcu: goto label_1947fc;
        case 0x194800u: goto label_194800;
        case 0x194804u: goto label_194804;
        case 0x194808u: goto label_194808;
        case 0x19480cu: goto label_19480c;
        case 0x194810u: goto label_194810;
        case 0x194814u: goto label_194814;
        default: break;
    }

    ctx->pc = 0x194760u;

label_194760:
    // 0x194760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_194764:
    // 0x194764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194768:
    // 0x194768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x194768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19476c:
    // 0x19476c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_194770:
    // 0x194770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194774:
    // 0x194774: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x194774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_194778:
    // 0x194778: 0x50430023  beql        $v0, $v1, . + 4 + (0x23 << 2)
label_19477c:
    if (ctx->pc == 0x19477Cu) {
        ctx->pc = 0x19477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194778u;
        // 0x19477c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194780u;
        goto label_194780;
    }
    ctx->pc = 0x194778u;
    {
        const bool branch_taken_0x194778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x194778) {
            ctx->pc = 0x19477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194778u;
            // 0x19477c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194808u;
            goto label_194808;
        }
    }
    ctx->pc = 0x194780u;
label_194780:
    // 0x194780: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194784:
    // 0x194784: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_194788:
    if (ctx->pc == 0x194788u) {
        ctx->pc = 0x194788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194784u;
        // 0x194788: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19478Cu;
        goto label_19478c;
    }
    ctx->pc = 0x194784u;
    {
        const bool branch_taken_0x194784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194784u;
        // 0x194788: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194784) {
            ctx->pc = 0x19479Cu;
            goto label_19479c;
        }
    }
    ctx->pc = 0x19478Cu;
label_19478c:
    // 0x19478c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_194790:
    // 0x194790: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194794:
    // 0x194794: 0x40f809  jalr        $v0
label_194798:
    if (ctx->pc == 0x194798u) {
        ctx->pc = 0x19479Cu;
        goto label_19479c;
    }
    ctx->pc = 0x194794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19479Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194794u, 0x19479Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19479Cu;
label_19479c:
    // 0x19479c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x19479cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1947a0:
    // 0x1947a0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1947a4:
    // 0x1947a4: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x1947a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1947a8:
    // 0x1947a8: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1947a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_1947ac:
    // 0x1947ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1947acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1947b0:
    // 0x1947b0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1947b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1947b4:
    // 0x1947b4: 0x60f809  jalr        $v1
label_1947b8:
    if (ctx->pc == 0x1947B8u) {
        ctx->pc = 0x1947B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B4u;
        // 0x1947b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947BCu;
        goto label_1947bc;
    }
    ctx->pc = 0x1947B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1947BCu);
        ctx->pc = 0x1947B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B4u;
        // 0x1947b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1947B4u, 0x1947BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1947BCu;
label_1947bc:
    // 0x1947bc: 0xc061a16  jal         func_186858
label_1947c0:
    if (ctx->pc == 0x1947C0u) {
        ctx->pc = 0x1947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947BCu;
        // 0x1947c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947C4u;
        goto label_1947c4;
    }
    ctx->pc = 0x1947BCu;
    SET_GPR_U32(ctx, 31, 0x1947C4u);
    ctx->pc = 0x1947C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947BCu;
    // 0x1947c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1947BCu, 0x1947C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947C4u;
label_1947c4:
    // 0x1947c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1947c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1947c8:
    // 0x1947c8: 0xc061a16  jal         func_186858
label_1947cc:
    if (ctx->pc == 0x1947CCu) {
        ctx->pc = 0x1947CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947C8u;
        // 0x1947cc: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947D0u;
        goto label_1947d0;
    }
    ctx->pc = 0x1947C8u;
    SET_GPR_U32(ctx, 31, 0x1947D0u);
    ctx->pc = 0x1947CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947C8u;
    // 0x1947cc: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1947C8u, 0x1947D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947D0u;
label_1947d0:
    // 0x1947d0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1947d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1947d4:
    // 0x1947d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1947d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1947d8:
    // 0x1947d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1947d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1947dc:
    // 0x1947dc: 0xc061a16  jal         func_186858
label_1947e0:
    if (ctx->pc == 0x1947E0u) {
        ctx->pc = 0x1947E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947DCu;
        // 0x1947e0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947E4u;
        goto label_1947e4;
    }
    ctx->pc = 0x1947DCu;
    SET_GPR_U32(ctx, 31, 0x1947E4u);
    ctx->pc = 0x1947E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947DCu;
    // 0x1947e0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1947DCu, 0x1947E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947E4u;
label_1947e4:
    // 0x1947e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1947e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1947e8:
    // 0x1947e8: 0xc06ee66  jal         func_1BB998
label_1947ec:
    if (ctx->pc == 0x1947ECu) {
        ctx->pc = 0x1947ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947E8u;
        // 0x1947ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947F0u;
        goto label_1947f0;
    }
    ctx->pc = 0x1947E8u;
    SET_GPR_U32(ctx, 31, 0x1947F0u);
    ctx->pc = 0x1947ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947E8u;
    // 0x1947ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1947E8u, 0x1947F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947F0u;
label_1947f0:
    // 0x1947f0: 0xc061a16  jal         func_186858
label_1947f4:
    if (ctx->pc == 0x1947F4u) {
        ctx->pc = 0x1947F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947F0u;
        // 0x1947f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947F8u;
        goto label_1947f8;
    }
    ctx->pc = 0x1947F0u;
    SET_GPR_U32(ctx, 31, 0x1947F8u);
    ctx->pc = 0x1947F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947F0u;
    // 0x1947f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1947F0u, 0x1947F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947F8u;
label_1947f8:
    // 0x1947f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1947f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1947fc:
    // 0x1947fc: 0xc06eebe  jal         func_1BBAF8
label_194800:
    if (ctx->pc == 0x194800u) {
        ctx->pc = 0x194800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947FCu;
        // 0x194800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194804u;
        goto label_194804;
    }
    ctx->pc = 0x1947FCu;
    SET_GPR_U32(ctx, 31, 0x194804u);
    ctx->pc = 0x194800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947FCu;
    // 0x194800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1947FCu, 0x194804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194804u;
label_194804:
    // 0x194804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x194804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194808:
    // 0x194808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x194808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19480c:
    // 0x19480c: 0x3e00008  jr          $ra
label_194810:
    if (ctx->pc == 0x194810u) {
        ctx->pc = 0x194810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19480Cu;
        // 0x194810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194814u;
        goto label_194814;
    }
    ctx->pc = 0x19480Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19480Cu;
        // 0x194810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19480Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194814u;
label_194814:
    // 0x194814: 0x0  nop
    ctx->pc = 0x194814u;
    // NOP
    ctx->pc = 0x194818u;
}
