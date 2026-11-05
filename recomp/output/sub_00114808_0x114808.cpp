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

// Function: sub_00114808
// Address: 0x114808 - 0x114928
void sub_00114808_0x114808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114808_0x114808");
#endif

    switch (ctx->pc) {
        case 0x114840u: goto label_114840;
        case 0x11485cu: goto label_11485c;
        case 0x114870u: goto label_114870;
        case 0x114884u: goto label_114884;
        case 0x114894u: goto label_114894;
        case 0x1148a0u: goto label_1148a0;
        case 0x1148d4u: goto label_1148d4;
        case 0x1148e0u: goto label_1148e0;
        case 0x1148f8u: goto label_1148f8;
        case 0x114908u: goto label_114908;
        case 0x114914u: goto label_114914;
        default: break;
    }

    ctx->pc = 0x114808u;

label_114808:
    // 0x114808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11480c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x114810: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x114810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x114814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114818: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x114818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x11481c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x11481Cu;
    {
        const bool branch_taken_0x11481c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11481Cu;
        // 0x114820: 0x8e0201fc  lw          $v0, 0x1FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11481c) {
            ctx->pc = 0x1148B0u;
            goto label_1148b0;
        }
    }
    ctx->pc = 0x114824u;
    // 0x114824: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x114824u;
    {
        const bool branch_taken_0x114824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114824) {
            ctx->pc = 0x114828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114824u;
            // 0x114828: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114918u;
            goto label_114918;
        }
    }
    ctx->pc = 0x11482Cu;
    // 0x11482c: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x11482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x114830: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x114830u;
    {
        const bool branch_taken_0x114830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114830) {
            ctx->pc = 0x114834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114830u;
            // 0x114834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114918u;
            goto label_114918;
        }
    }
    ctx->pc = 0x114838u;
    // 0x114838: 0xc045280  jal         func_114A00
    ctx->pc = 0x114838u;
    SET_GPR_U32(ctx, 31, 0x114840u);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x114838u, 0x114840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114840u;
label_114840:
    // 0x114840: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114840u;
    {
        const bool branch_taken_0x114840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114840u;
        // 0x114844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114840) {
            ctx->pc = 0x114864u;
            goto label_114864;
        }
    }
    ctx->pc = 0x114848u;
    // 0x114848: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x114848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x11484c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x11484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x114850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114854: 0xc045202  jal         func_114808
    ctx->pc = 0x114854u;
    SET_GPR_U32(ctx, 31, 0x11485Cu);
    ctx->pc = 0x114858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114854u;
    // 0x114858: 0xae0201f8  sw          $v0, 0x1F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114808u;
    goto label_114808;
    ctx->pc = 0x11485Cu;
label_11485c:
    // 0x11485c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11485Cu;
    {
        const bool branch_taken_0x11485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11485Cu;
        // 0x114860: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11485c) {
            ctx->pc = 0x114918u;
            goto label_114918;
        }
    }
    ctx->pc = 0x114864u;
label_114864:
    // 0x114864: 0x8e050200  lw          $a1, 0x200($s0)
    ctx->pc = 0x114864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x114868: 0xc044234  jal         func_1108D0
    ctx->pc = 0x114868u;
    SET_GPR_U32(ctx, 31, 0x114870u);
    ctx->pc = 0x11486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114868u;
    // 0x11486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x114868u, 0x114870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114870u;
label_114870:
    // 0x114870: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x114870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x114874: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114874u;
    {
        const bool branch_taken_0x114874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x114874) {
            ctx->pc = 0x11488Cu;
            goto label_11488c;
        }
    }
    ctx->pc = 0x11487Cu;
    // 0x11487c: 0xc04526e  jal         func_1149B8
    ctx->pc = 0x11487Cu;
    SET_GPR_U32(ctx, 31, 0x114884u);
    ctx->pc = 0x114880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11487Cu;
    // 0x114880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149B8u, 0x11487Cu, 0x114884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114884u;
label_114884:
    // 0x114884: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x114884u;
    {
        const bool branch_taken_0x114884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114884u;
        // 0x114888: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114884) {
            ctx->pc = 0x114918u;
            goto label_114918;
        }
    }
    ctx->pc = 0x11488Cu;
label_11488c:
    // 0x11488c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x11488Cu;
    SET_GPR_U32(ctx, 31, 0x114894u);
    ctx->pc = 0x114890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11488Cu;
    // 0x114890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x11488Cu, 0x114894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114894u;
label_114894:
    // 0x114894: 0x8e050204  lw          $a1, 0x204($s0)
    ctx->pc = 0x114894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x114898: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x114898u;
    SET_GPR_U32(ctx, 31, 0x1148A0u);
    ctx->pc = 0x11489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114898u;
    // 0x11489c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x114898u, 0x1148A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148A0u;
label_1148a0:
    // 0x1148a0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1148A0u;
    {
        const bool branch_taken_0x1148a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148a0) {
            ctx->pc = 0x1148A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148A0u;
            // 0x1148a4: 0xae0001fc  sw          $zero, 0x1FC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148ECu;
            goto label_1148ec;
        }
    }
    ctx->pc = 0x1148A8u;
    // 0x1148a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1148A8u;
    {
        const bool branch_taken_0x1148a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148A8u;
        // 0x1148ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148a8) {
            ctx->pc = 0x1148F0u;
            goto label_1148f0;
        }
    }
    ctx->pc = 0x1148B0u;
label_1148b0:
    // 0x1148b0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1148B0u;
    {
        const bool branch_taken_0x1148b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148b0) {
            ctx->pc = 0x1148B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148B0u;
            // 0x1148b4: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114914u;
            goto label_114914;
        }
    }
    ctx->pc = 0x1148B8u;
    // 0x1148b8: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1148b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1148bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1148BCu;
    {
        const bool branch_taken_0x1148bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148bc) {
            ctx->pc = 0x1148CCu;
            goto label_1148cc;
        }
    }
    ctx->pc = 0x1148C4u;
    // 0x1148c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1148C4u;
    {
        const bool branch_taken_0x1148c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148C4u;
        // 0x1148c8: 0xae0001f8  sw          $zero, 0x1F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148c4) {
            ctx->pc = 0x114914u;
            goto label_114914;
        }
    }
    ctx->pc = 0x1148CCu;
label_1148cc:
    // 0x1148cc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1148CCu;
    SET_GPR_U32(ctx, 31, 0x1148D4u);
    ctx->pc = 0x1148D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148CCu;
    // 0x1148d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1148CCu, 0x1148D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148D4u;
label_1148d4:
    // 0x1148d4: 0x8e050204  lw          $a1, 0x204($s0)
    ctx->pc = 0x1148d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1148d8: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1148D8u;
    SET_GPR_U32(ctx, 31, 0x1148E0u);
    ctx->pc = 0x1148DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148D8u;
    // 0x1148dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1148D8u, 0x1148E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148E0u;
label_1148e0:
    // 0x1148e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1148E0u;
    {
        const bool branch_taken_0x1148e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148e0) {
            ctx->pc = 0x114900u;
            goto label_114900;
        }
    }
    ctx->pc = 0x1148E8u;
    // 0x1148e8: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x1148e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
label_1148ec:
    // 0x1148ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1148ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1148f0:
    // 0x1148f0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1148F0u;
    SET_GPR_U32(ctx, 31, 0x1148F8u);
    ctx->pc = 0x1148F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148F0u;
    // 0x1148f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1148F0u, 0x1148F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148F8u;
label_1148f8:
    // 0x1148f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1148F8u;
    {
        const bool branch_taken_0x1148f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148F8u;
        // 0x1148fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148f8) {
            ctx->pc = 0x114918u;
            goto label_114918;
        }
    }
    ctx->pc = 0x114900u;
label_114900:
    // 0x114900: 0xc04524a  jal         func_114928
    ctx->pc = 0x114900u;
    SET_GPR_U32(ctx, 31, 0x114908u);
    ctx->pc = 0x114904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114900u;
    // 0x114904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114928u, 0x114900u, 0x114908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114908u;
label_114908:
    // 0x114908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x114908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11490c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x11490Cu;
    SET_GPR_U32(ctx, 31, 0x114914u);
    ctx->pc = 0x114910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11490Cu;
    // 0x114910: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x11490Cu, 0x114914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114914u;
label_114914:
    // 0x114914: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_114918:
    // 0x114918: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x114918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11491c: 0x3e00008  jr          $ra
    ctx->pc = 0x11491Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11491Cu;
        // 0x114920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11491Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114924u;
    // 0x114924: 0x0  nop
    ctx->pc = 0x114924u;
    // NOP
    ctx->pc = 0x114928u;
}
