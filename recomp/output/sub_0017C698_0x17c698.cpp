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

// Function: sub_0017C698
// Address: 0x17c698 - 0x17c7b0
void sub_0017C698_0x17c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C698_0x17c698");
#endif

    switch (ctx->pc) {
        case 0x17c6c4u: goto label_17c6c4;
        case 0x17c6e0u: goto label_17c6e0;
        case 0x17c6ecu: goto label_17c6ec;
        case 0x17c70cu: goto label_17c70c;
        case 0x17c718u: goto label_17c718;
        case 0x17c738u: goto label_17c738;
        case 0x17c758u: goto label_17c758;
        case 0x17c764u: goto label_17c764;
        case 0x17c770u: goto label_17c770;
        case 0x17c78cu: goto label_17c78c;
        case 0x17c798u: goto label_17c798;
        default: break;
    }

    ctx->pc = 0x17c698u;

    // 0x17c698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c69c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c6a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c6a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6ac: 0x1222003a  beq         $s1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x17C6ACu;
    {
        const bool branch_taken_0x17c6ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6ACu;
        // 0x17c6b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6ac) {
            ctx->pc = 0x17C798u;
            goto label_17c798;
        }
    }
    ctx->pc = 0x17C6B4u;
    // 0x17c6b4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x17c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17c6b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17c6bc: 0xc047866  jal         func_11E198
    ctx->pc = 0x17C6BCu;
    SET_GPR_U32(ctx, 31, 0x17C6C4u);
    ctx->pc = 0x17C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6BCu;
    // 0x17c6c0: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x17C6BCu, 0x17C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6C4u;
label_17c6c4:
    // 0x17c6c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c6cc: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17C6CCu;
    {
        const bool branch_taken_0x17c6cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6CCu;
        // 0x17c6d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6cc) {
            ctx->pc = 0x17C6F8u;
            goto label_17c6f8;
        }
    }
    ctx->pc = 0x17C6D4u;
    // 0x17c6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6d8: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C6D8u;
    SET_GPR_U32(ctx, 31, 0x17C6E0u);
    ctx->pc = 0x17C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6D8u;
    // 0x17c6dc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C6D8u, 0x17C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6E0u;
label_17c6e0:
    // 0x17c6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6e4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C6E4u;
    SET_GPR_U32(ctx, 31, 0x17C6ECu);
    ctx->pc = 0x17C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6E4u;
    // 0x17c6e8: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C6E4u, 0x17C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6ECu;
label_17c6ec:
    // 0x17c6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17C6F0u;
    {
        const bool branch_taken_0x17c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6F0u;
        // 0x17c6f4: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6f0) {
            ctx->pc = 0x17C750u;
            goto label_17c750;
        }
    }
    ctx->pc = 0x17C6F8u;
label_17c6f8:
    // 0x17c6f8: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17C6F8u;
    {
        const bool branch_taken_0x17c6f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6F8u;
        // 0x17c6fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6f8) {
            ctx->pc = 0x17C724u;
            goto label_17c724;
        }
    }
    ctx->pc = 0x17C700u;
    // 0x17c700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c704: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C704u;
    SET_GPR_U32(ctx, 31, 0x17C70Cu);
    ctx->pc = 0x17C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C704u;
    // 0x17c708: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C704u, 0x17C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C70Cu;
label_17c70c:
    // 0x17c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c710: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C710u;
    SET_GPR_U32(ctx, 31, 0x17C718u);
    ctx->pc = 0x17C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C710u;
    // 0x17c714: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C710u, 0x17C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C718u;
label_17c718:
    // 0x17c718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c71c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17C71Cu;
    {
        const bool branch_taken_0x17c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C71Cu;
        // 0x17c720: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c71c) {
            ctx->pc = 0x17C750u;
            goto label_17c750;
        }
    }
    ctx->pc = 0x17C724u;
label_17c724:
    // 0x17c724: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C724u;
    {
        const bool branch_taken_0x17c724 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C724u;
        // 0x17c728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c724) {
            ctx->pc = 0x17C744u;
            goto label_17c744;
        }
    }
    ctx->pc = 0x17C72Cu;
    // 0x17c72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c730: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C730u;
    SET_GPR_U32(ctx, 31, 0x17C738u);
    ctx->pc = 0x17C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C730u;
    // 0x17c734: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C730u, 0x17C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C738u;
label_17c738:
    // 0x17c738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c73c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17C73Cu;
    {
        const bool branch_taken_0x17c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C73Cu;
        // 0x17c740: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c73c) {
            ctx->pc = 0x17C750u;
            goto label_17c750;
        }
    }
    ctx->pc = 0x17C744u;
label_17c744:
    // 0x17c744: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17C744u;
    {
        const bool branch_taken_0x17c744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C744u;
        // 0x17c748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c744) {
            ctx->pc = 0x17C778u;
            goto label_17c778;
        }
    }
    ctx->pc = 0x17C74Cu;
    // 0x17c74c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x17c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_17c750:
    // 0x17c750: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C750u;
    SET_GPR_U32(ctx, 31, 0x17C758u);
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C750u, 0x17C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C758u;
label_17c758:
    // 0x17c758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c75c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C75Cu;
    SET_GPR_U32(ctx, 31, 0x17C764u);
    ctx->pc = 0x17C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C75Cu;
    // 0x17c760: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C75Cu, 0x17C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C764u;
label_17c764:
    // 0x17c764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c768: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C768u;
    SET_GPR_U32(ctx, 31, 0x17C770u);
    ctx->pc = 0x17C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C768u;
    // 0x17c76c: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C768u, 0x17C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C770u;
label_17c770:
    // 0x17c770: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17C770u;
    {
        const bool branch_taken_0x17c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C770u;
        // 0x17c774: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c770) {
            ctx->pc = 0x17C79Cu;
            goto label_17c79c;
        }
    }
    ctx->pc = 0x17C778u;
label_17c778:
    // 0x17c778: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C778u;
    {
        const bool branch_taken_0x17c778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c778) {
            ctx->pc = 0x17C77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C778u;
            // 0x17c77c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C79Cu;
            goto label_17c79c;
        }
    }
    ctx->pc = 0x17C780u;
    // 0x17c780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c784: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C784u;
    SET_GPR_U32(ctx, 31, 0x17C78Cu);
    ctx->pc = 0x17C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C784u;
    // 0x17c788: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C784u, 0x17C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C78Cu;
label_17c78c:
    // 0x17c78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c790: 0xc0cda26  jal         func_336898
    ctx->pc = 0x17C790u;
    SET_GPR_U32(ctx, 31, 0x17C798u);
    ctx->pc = 0x17C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C790u;
    // 0x17c794: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x17C790u, 0x17C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C798u;
label_17c798:
    // 0x17c798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c79c:
    // 0x17c79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7A4u;
        // 0x17c7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C7ACu;
    // 0x17c7ac: 0x0  nop
    ctx->pc = 0x17c7acu;
    // NOP
    ctx->pc = 0x17c7b0u;
}
