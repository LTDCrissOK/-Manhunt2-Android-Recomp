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

// Function: sub_00165078
// Address: 0x165078 - 0x165238
void sub_00165078_0x165078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165078_0x165078");
#endif

    switch (ctx->pc) {
        case 0x165098u: goto label_165098;
        case 0x1650b0u: goto label_1650b0;
        case 0x1650d8u: goto label_1650d8;
        case 0x1650e0u: goto label_1650e0;
        case 0x165104u: goto label_165104;
        case 0x165118u: goto label_165118;
        case 0x165128u: goto label_165128;
        case 0x16515cu: goto label_16515c;
        case 0x165180u: goto label_165180;
        case 0x165194u: goto label_165194;
        case 0x1651a4u: goto label_1651a4;
        case 0x1651b4u: goto label_1651b4;
        case 0x1651c8u: goto label_1651c8;
        case 0x16521cu: goto label_16521c;
        default: break;
    }

    ctx->pc = 0x165078u;

    // 0x165078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16507c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16507cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16508c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165090: 0xc059cfc  jal         func_1673F0
    ctx->pc = 0x165090u;
    SET_GPR_U32(ctx, 31, 0x165098u);
    ctx->pc = 0x165094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165090u;
    // 0x165094: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1673F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1673F0u, 0x165090u, 0x165098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165098u;
label_165098:
    // 0x165098: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16509c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16509Cu;
    {
        const bool branch_taken_0x16509c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16509Cu;
        // 0x1650a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16509c) {
            ctx->pc = 0x1650B4u;
            goto label_1650b4;
        }
    }
    ctx->pc = 0x1650A4u;
    // 0x1650a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1650a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650a8: 0xc059d1a  jal         func_167468
    ctx->pc = 0x1650A8u;
    SET_GPR_U32(ctx, 31, 0x1650B0u);
    ctx->pc = 0x1650ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650A8u;
    // 0x1650ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167468u, 0x1650A8u, 0x1650B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650B0u;
label_1650b0:
    // 0x1650b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1650b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1650b4:
    // 0x1650b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1650b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1650b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1650bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1650bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1650c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650C0u;
    {
        const bool branch_taken_0x1650c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1650c0) {
            ctx->pc = 0x1650D0u;
            goto label_1650d0;
        }
    }
    ctx->pc = 0x1650C8u;
    // 0x1650c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1650C8u;
    {
        const bool branch_taken_0x1650c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650c8) {
            ctx->pc = 0x1650E8u;
            goto label_1650e8;
        }
    }
    ctx->pc = 0x1650D0u;
label_1650d0:
    // 0x1650d0: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x1650D0u;
    SET_GPR_U32(ctx, 31, 0x1650D8u);
    ctx->pc = 0x1650D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650D0u;
    // 0x1650d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x1650D0u, 0x1650D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650D8u;
label_1650d8:
    // 0x1650d8: 0xc059634  jal         func_1658D0
    ctx->pc = 0x1650D8u;
    SET_GPR_U32(ctx, 31, 0x1650E0u);
    ctx->pc = 0x1650DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650D8u;
    // 0x1650dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x1650D8u, 0x1650E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650E0u;
label_1650e0:
    // 0x1650e0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1650E0u;
    {
        const bool branch_taken_0x1650e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650E0u;
        // 0x1650e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650e0) {
            ctx->pc = 0x165224u;
            goto label_165224;
        }
    }
    ctx->pc = 0x1650E8u;
label_1650e8:
    // 0x1650e8: 0x5640004e  bnel        $s2, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1650E8u;
    {
        const bool branch_taken_0x1650e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1650e8) {
            ctx->pc = 0x1650ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1650E8u;
            // 0x1650ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165224u;
            goto label_165224;
        }
    }
    ctx->pc = 0x1650F0u;
    // 0x1650f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1650f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1650f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1650f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1650fc: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1650FCu;
    SET_GPR_U32(ctx, 31, 0x165104u);
    ctx->pc = 0x165100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650FCu;
    // 0x165100: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1650FCu, 0x165104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165104u;
label_165104:
    // 0x165104: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x165104u;
    {
        const bool branch_taken_0x165104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165104u;
        // 0x165108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165104) {
            ctx->pc = 0x165170u;
            goto label_165170;
        }
    }
    ctx->pc = 0x16510Cu;
    // 0x16510c: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x16510cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x165110: 0xc04f582  jal         func_13D608
    ctx->pc = 0x165110u;
    SET_GPR_U32(ctx, 31, 0x165118u);
    ctx->pc = 0x165114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165110u;
    // 0x165114: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D608u, 0x165110u, 0x165118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165118u;
label_165118:
    // 0x165118: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165118u;
    {
        const bool branch_taken_0x165118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165118) {
            ctx->pc = 0x16511Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165118u;
            // 0x16511c: 0x8e0203ac  lw          $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165130u;
            goto label_165130;
        }
    }
    ctx->pc = 0x165120u;
    // 0x165120: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x165120u;
    SET_GPR_U32(ctx, 31, 0x165128u);
    ctx->pc = 0x165124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165120u;
    // 0x165124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x165120u, 0x165128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165128u;
label_165128:
    // 0x165128: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x165128u;
    {
        const bool branch_taken_0x165128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165128u;
        // 0x16512c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165128) {
            ctx->pc = 0x165214u;
            goto label_165214;
        }
    }
    ctx->pc = 0x165130u;
label_165130:
    // 0x165130: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x165130u;
    {
        const bool branch_taken_0x165130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165130) {
            ctx->pc = 0x165134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165130u;
            // 0x165134: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165224u;
            goto label_165224;
        }
    }
    ctx->pc = 0x165138u;
    // 0x165138: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x165138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x16513c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x16513Cu;
    {
        const bool branch_taken_0x16513c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16513Cu;
        // 0x165140: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16513c) {
            ctx->pc = 0x165220u;
            goto label_165220;
        }
    }
    ctx->pc = 0x165144u;
    // 0x165144: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x165144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x165148: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x165148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16514c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16514cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165154: 0xc043996  jal         func_10E658
    ctx->pc = 0x165154u;
    SET_GPR_U32(ctx, 31, 0x16515Cu);
    ctx->pc = 0x165158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165154u;
    // 0x165158: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x165154u, 0x16515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16515Cu;
label_16515c:
    // 0x16515c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x16515Cu;
    {
        const bool branch_taken_0x16515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16515Cu;
        // 0x165160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16515c) {
            ctx->pc = 0x165220u;
            goto label_165220;
        }
    }
    ctx->pc = 0x165164u;
    // 0x165164: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x165164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x165168: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x165168u;
    {
        const bool branch_taken_0x165168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165168u;
        // 0x16516c: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165168) {
            ctx->pc = 0x165220u;
            goto label_165220;
        }
    }
    ctx->pc = 0x165170u;
label_165170:
    // 0x165170: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x165170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165178: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x165178u;
    SET_GPR_U32(ctx, 31, 0x165180u);
    ctx->pc = 0x16517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165178u;
    // 0x16517c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x165178u, 0x165180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165180u;
label_165180:
    // 0x165180: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165180) {
            ctx->pc = 0x165184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165180u;
            // 0x165184: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165224u;
            goto label_165224;
        }
    }
    ctx->pc = 0x165188u;
    // 0x165188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16518c: 0xc04f480  jal         func_13D200
    ctx->pc = 0x16518Cu;
    SET_GPR_U32(ctx, 31, 0x165194u);
    ctx->pc = 0x165190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16518Cu;
    // 0x165190: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D200u, 0x16518Cu, 0x165194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165194u;
label_165194:
    // 0x165194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165194u;
    {
        const bool branch_taken_0x165194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165194u;
        // 0x165198: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165194) {
            ctx->pc = 0x1651ACu;
            goto label_1651ac;
        }
    }
    ctx->pc = 0x16519Cu;
    // 0x16519c: 0xc059dac  jal         func_1676B0
    ctx->pc = 0x16519Cu;
    SET_GPR_U32(ctx, 31, 0x1651A4u);
    ctx->pc = 0x1651A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16519Cu;
    // 0x1651a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1676B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1676B0u, 0x16519Cu, 0x1651A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651A4u;
label_1651a4:
    // 0x1651a4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1651A4u;
    {
        const bool branch_taken_0x1651a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1651a4) {
            ctx->pc = 0x1651A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651A4u;
            // 0x1651a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165224u;
            goto label_165224;
        }
    }
    ctx->pc = 0x1651ACu;
label_1651ac:
    // 0x1651ac: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x1651ACu;
    SET_GPR_U32(ctx, 31, 0x1651B4u);
    ctx->pc = 0x1651B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651ACu;
    // 0x1651b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x1651ACu, 0x1651B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651B4u;
label_1651b4:
    // 0x1651b4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1651b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1651b8: 0x8e0502e0  lw          $a1, 0x2E0($s0)
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1651bc: 0x24519a08  addiu       $s1, $v0, -0x65F8
    ctx->pc = 0x1651bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1651c0: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x1651C0u;
    SET_GPR_U32(ctx, 31, 0x1651C8u);
    ctx->pc = 0x1651C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651C0u;
    // 0x1651c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x1651C0u, 0x1651C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651C8u;
label_1651c8:
    // 0x1651c8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1651C8u;
    {
        const bool branch_taken_0x1651c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651c8) {
            ctx->pc = 0x1651CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651C8u;
            // 0x1651cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165214u;
            goto label_165214;
        }
    }
    ctx->pc = 0x1651D0u;
    // 0x1651d0: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x1651d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1651d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1651d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1651d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1651dc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1651e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1651E0u;
    {
        const bool branch_taken_0x1651e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651e0) {
            ctx->pc = 0x1651E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651E0u;
            // 0x1651e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165214u;
            goto label_165214;
        }
    }
    ctx->pc = 0x1651E8u;
    // 0x1651e8: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1651e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1651ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1651ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1651f0: 0x0  nop
    ctx->pc = 0x1651f0u;
    // NOP
    // 0x1651f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1651f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1651f8: 0x0  nop
    ctx->pc = 0x1651f8u;
    // NOP
    // 0x1651fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1651FCu;
    {
        const bool branch_taken_0x1651fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651FCu;
        // 0x165200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651fc) {
            ctx->pc = 0x165210u;
            goto label_165210;
        }
    }
    ctx->pc = 0x165204u;
    // 0x165204: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x165204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x165208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165208u;
    {
        const bool branch_taken_0x165208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165208u;
        // 0x16520c: 0xac62006c  sw          $v0, 0x6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165208) {
            ctx->pc = 0x165220u;
            goto label_165220;
        }
    }
    ctx->pc = 0x165210u;
label_165210:
    // 0x165210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165214:
    // 0x165214: 0xc059710  jal         func_165C40
    ctx->pc = 0x165214u;
    SET_GPR_U32(ctx, 31, 0x16521Cu);
    ctx->pc = 0x165218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165214u;
    // 0x165218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C40u, 0x165214u, 0x16521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16521Cu;
label_16521c:
    // 0x16521c: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x16521cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_165220:
    // 0x165220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165224:
    // 0x165224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165228: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16522c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16522cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165230: 0x3e00008  jr          $ra
    ctx->pc = 0x165230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165230u;
        // 0x165234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165238u;
}
