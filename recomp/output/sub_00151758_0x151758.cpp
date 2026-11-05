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

// Function: sub_00151758
// Address: 0x151758 - 0x151998
void sub_00151758_0x151758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151758_0x151758");
#endif

    switch (ctx->pc) {
        case 0x151794u: goto label_151794;
        case 0x1517a8u: goto label_1517a8;
        case 0x1517bcu: goto label_1517bc;
        case 0x1517ccu: goto label_1517cc;
        case 0x151860u: goto label_151860;
        case 0x1518b4u: goto label_1518b4;
        case 0x151950u: goto label_151950;
        default: break;
    }

    ctx->pc = 0x151758u;

    // 0x151758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15175c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x151760: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x151760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x151764: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x151764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x151768: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x151768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15176c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15176cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151770: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x151770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x151774: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x151774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151778: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x151778u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15177c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x15177cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151780: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x151780u;
    {
        const bool branch_taken_0x151780 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151780u;
        // 0x151784: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151780) {
            ctx->pc = 0x15196Cu;
            goto label_15196c;
        }
    }
    ctx->pc = 0x151788u;
    // 0x151788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15178c: 0xc053d8a  jal         func_14F628
    ctx->pc = 0x15178Cu;
    SET_GPR_U32(ctx, 31, 0x151794u);
    ctx->pc = 0x151790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15178Cu;
    // 0x151790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F628u, 0x15178Cu, 0x151794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151794u;
label_151794:
    // 0x151794: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x151794u;
    {
        const bool branch_taken_0x151794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151794u;
        // 0x151798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151794) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x15179Cu;
    // 0x15179c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517a0: 0xc053d92  jal         func_14F648
    ctx->pc = 0x1517A0u;
    SET_GPR_U32(ctx, 31, 0x1517A8u);
    ctx->pc = 0x1517A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517A0u;
    // 0x1517a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F648u, 0x1517A0u, 0x1517A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517A8u;
label_1517a8:
    // 0x1517a8: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1517A8u;
    {
        const bool branch_taken_0x1517a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1517ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517A8u;
        // 0x1517ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517a8) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x1517B0u;
    // 0x1517b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1517b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517b4: 0xc053d9a  jal         func_14F668
    ctx->pc = 0x1517B4u;
    SET_GPR_U32(ctx, 31, 0x1517BCu);
    ctx->pc = 0x1517B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517B4u;
    // 0x1517b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F668u, 0x1517B4u, 0x1517BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517BCu;
label_1517bc:
    // 0x1517bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1517BCu;
    {
        const bool branch_taken_0x1517bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517BCu;
        // 0x1517c0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517bc) {
            ctx->pc = 0x1517D4u;
            goto label_1517d4;
        }
    }
    ctx->pc = 0x1517C4u;
    // 0x1517c4: 0xc04990a  jal         func_126428
    ctx->pc = 0x1517C4u;
    SET_GPR_U32(ctx, 31, 0x1517CCu);
    ctx->pc = 0x1517C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517C4u;
    // 0x1517c8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126428u, 0x1517C4u, 0x1517CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517CCu;
label_1517cc:
    // 0x1517cc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1517CCu;
    {
        const bool branch_taken_0x1517cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517CCu;
        // 0x1517d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517cc) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x1517D4u;
label_1517d4:
    // 0x1517d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1517d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1517dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1517dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1517e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1517e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1517e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1517e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1517e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1517ec: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1517ECu;
    {
        const bool branch_taken_0x1517ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517ECu;
        // 0x1517f0: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517ec) {
            ctx->pc = 0x15196Cu;
            goto label_15196c;
        }
    }
    ctx->pc = 0x1517F4u;
    // 0x1517f4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1517f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1517f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1517f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1517fc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1517fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x151800: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151804: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x151808: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x151808u;
    {
        const bool branch_taken_0x151808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151808) {
            ctx->pc = 0x15180Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151808u;
            // 0x15180c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x151810u;
    // 0x151810: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x151814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151818: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15181c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x15181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x151820: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x151820u;
    {
        const bool branch_taken_0x151820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151820) {
            ctx->pc = 0x151824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151820u;
            // 0x151824: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151830u;
            goto label_151830;
        }
    }
    ctx->pc = 0x151828u;
    // 0x151828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151828u;
    {
        const bool branch_taken_0x151828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151828u;
        // 0x15182c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151828) {
            ctx->pc = 0x151838u;
            goto label_151838;
        }
    }
    ctx->pc = 0x151830u;
label_151830:
    // 0x151830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151834: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x151834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_151838:
    // 0x151838: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x151838u;
    {
        const bool branch_taken_0x151838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151838u;
        // 0x15183c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151838) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x151840u;
    // 0x151840: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x151844: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x151844u;
    {
        const bool branch_taken_0x151844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151844u;
        // 0x151848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151844) {
            ctx->pc = 0x151850u;
            goto label_151850;
        }
    }
    ctx->pc = 0x15184Cu;
    // 0x15184c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_151850:
    // 0x151850: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x151850u;
    {
        const bool branch_taken_0x151850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x151854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151850u;
        // 0x151854: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151850) {
            ctx->pc = 0x15196Cu;
            goto label_15196c;
        }
    }
    ctx->pc = 0x151858u;
    // 0x151858: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x151858u;
    SET_GPR_U32(ctx, 31, 0x151860u);
    ctx->pc = 0x15185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151858u;
    // 0x15185c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x151858u, 0x151860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151860u;
label_151860:
    // 0x151860: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x151860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151864: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x151864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151868: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x151868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15186c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15186cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x151870: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x151870u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x151874: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x151874u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x151878: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x151878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x15187c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15187cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x151880: 0x0  nop
    ctx->pc = 0x151880u;
    // NOP
    // 0x151884: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x151884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151888: 0x0  nop
    ctx->pc = 0x151888u;
    // NOP
    // 0x15188c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15188Cu;
    {
        const bool branch_taken_0x15188c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15188c) {
            ctx->pc = 0x151890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15188Cu;
            // 0x151890: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151894u;
            goto label_151894;
        }
    }
    ctx->pc = 0x151894u;
label_151894:
    // 0x151894: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x151898: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151898u;
    {
        const bool branch_taken_0x151898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151898u;
        // 0x15189c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151898) {
            ctx->pc = 0x1518A4u;
            goto label_1518a4;
        }
    }
    ctx->pc = 0x1518A0u;
    // 0x1518a0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1518a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1518a4:
    // 0x1518a4: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1518A4u;
    {
        const bool branch_taken_0x1518a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518A4u;
        // 0x1518a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518a4) {
            ctx->pc = 0x15196Cu;
            goto label_15196c;
        }
    }
    ctx->pc = 0x1518ACu;
    // 0x1518ac: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1518ACu;
    SET_GPR_U32(ctx, 31, 0x1518B4u);
    ctx->pc = 0x1518B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518ACu;
    // 0x1518b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1518ACu, 0x1518B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518B4u;
label_1518b4:
    // 0x1518b4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1518b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1518b8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1518b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1518bc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1518bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1518c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1518c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1518c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1518c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1518c8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1518c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1518cc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1518ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1518d0: 0x0  nop
    ctx->pc = 0x1518d0u;
    // NOP
    // 0x1518d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1518D4u;
    {
        const bool branch_taken_0x1518d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1518d4) {
            ctx->pc = 0x1518D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1518D4u;
            // 0x1518d8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1518DCu;
            goto label_1518dc;
        }
    }
    ctx->pc = 0x1518DCu;
label_1518dc:
    // 0x1518dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1518dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1518e0: 0x0  nop
    ctx->pc = 0x1518e0u;
    // NOP
    // 0x1518e4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1518e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1518e8: 0x0  nop
    ctx->pc = 0x1518e8u;
    // NOP
    // 0x1518ec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1518ECu;
    {
        const bool branch_taken_0x1518ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1518ec) {
            ctx->pc = 0x15191Cu;
            goto label_15191c;
        }
    }
    ctx->pc = 0x1518F4u;
    // 0x1518f4: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x1518f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1518f8: 0x0  nop
    ctx->pc = 0x1518f8u;
    // NOP
    // 0x1518fc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1518FCu;
    {
        const bool branch_taken_0x1518fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1518fc) {
            ctx->pc = 0x15191Cu;
            goto label_15191c;
        }
    }
    ctx->pc = 0x151904u;
    // 0x151904: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x151904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151908: 0x0  nop
    ctx->pc = 0x151908u;
    // NOP
    // 0x15190c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x15190Cu;
    {
        const bool branch_taken_0x15190c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15190Cu;
        // 0x151910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15190c) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x151914u;
    // 0x151914: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x151914u;
    {
        const bool branch_taken_0x151914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151914u;
        // 0x151918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151914) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x15191Cu;
label_15191c:
    // 0x15191c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x15191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x151920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151924: 0x0  nop
    ctx->pc = 0x151924u;
    // NOP
    // 0x151928: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x151928u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15192c: 0x0  nop
    ctx->pc = 0x15192cu;
    // NOP
    // 0x151930: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x151930u;
    {
        const bool branch_taken_0x151930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151930) {
            ctx->pc = 0x151960u;
            goto label_151960;
        }
    }
    ctx->pc = 0x151938u;
    // 0x151938: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x151938u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15193c: 0x0  nop
    ctx->pc = 0x15193cu;
    // NOP
    // 0x151940: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x151940u;
    {
        const bool branch_taken_0x151940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151940) {
            ctx->pc = 0x15195Cu;
            goto label_15195c;
        }
    }
    ctx->pc = 0x151948u;
    // 0x151948: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x151948u;
    SET_GPR_U32(ctx, 31, 0x151950u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x151948u, 0x151950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151950u;
label_151950:
    // 0x151950: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151954u;
    {
        const bool branch_taken_0x151954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151954u;
        // 0x151958: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151954) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x15195Cu;
label_15195c:
    // 0x15195c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x15195cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_151960:
    // 0x151960: 0x0  nop
    ctx->pc = 0x151960u;
    // NOP
    // 0x151964: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x151964u;
    {
        const bool branch_taken_0x151964 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151964u;
        // 0x151968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151964) {
            ctx->pc = 0x151970u;
            goto label_151970;
        }
    }
    ctx->pc = 0x15196Cu;
label_15196c:
    // 0x15196c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151970:
    // 0x151970: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x151970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151974: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x151974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151978: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x151978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15197c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15197cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x151980: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x151980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x151984: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x151984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x151988: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x151988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15198c: 0x3e00008  jr          $ra
    ctx->pc = 0x15198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15198Cu;
        // 0x151990: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151994u;
    // 0x151994: 0x0  nop
    ctx->pc = 0x151994u;
    // NOP
    ctx->pc = 0x151998u;
}
