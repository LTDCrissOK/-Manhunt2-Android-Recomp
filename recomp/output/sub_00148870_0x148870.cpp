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

// Function: sub_00148870
// Address: 0x148870 - 0x1489e8
void sub_00148870_0x148870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148870_0x148870");
#endif

    switch (ctx->pc) {
        case 0x148870u: goto label_148870;
        case 0x148874u: goto label_148874;
        case 0x148878u: goto label_148878;
        case 0x14887cu: goto label_14887c;
        case 0x148880u: goto label_148880;
        case 0x148884u: goto label_148884;
        case 0x148888u: goto label_148888;
        case 0x14888cu: goto label_14888c;
        case 0x148890u: goto label_148890;
        case 0x148894u: goto label_148894;
        case 0x148898u: goto label_148898;
        case 0x14889cu: goto label_14889c;
        case 0x1488a0u: goto label_1488a0;
        case 0x1488a4u: goto label_1488a4;
        case 0x1488a8u: goto label_1488a8;
        case 0x1488acu: goto label_1488ac;
        case 0x1488b0u: goto label_1488b0;
        case 0x1488b4u: goto label_1488b4;
        case 0x1488b8u: goto label_1488b8;
        case 0x1488bcu: goto label_1488bc;
        case 0x1488c0u: goto label_1488c0;
        case 0x1488c4u: goto label_1488c4;
        case 0x1488c8u: goto label_1488c8;
        case 0x1488ccu: goto label_1488cc;
        case 0x1488d0u: goto label_1488d0;
        case 0x1488d4u: goto label_1488d4;
        case 0x1488d8u: goto label_1488d8;
        case 0x1488dcu: goto label_1488dc;
        case 0x1488e0u: goto label_1488e0;
        case 0x1488e4u: goto label_1488e4;
        case 0x1488e8u: goto label_1488e8;
        case 0x1488ecu: goto label_1488ec;
        case 0x1488f0u: goto label_1488f0;
        case 0x1488f4u: goto label_1488f4;
        case 0x1488f8u: goto label_1488f8;
        case 0x1488fcu: goto label_1488fc;
        case 0x148900u: goto label_148900;
        case 0x148904u: goto label_148904;
        case 0x148908u: goto label_148908;
        case 0x14890cu: goto label_14890c;
        case 0x148910u: goto label_148910;
        case 0x148914u: goto label_148914;
        case 0x148918u: goto label_148918;
        case 0x14891cu: goto label_14891c;
        case 0x148920u: goto label_148920;
        case 0x148924u: goto label_148924;
        case 0x148928u: goto label_148928;
        case 0x14892cu: goto label_14892c;
        case 0x148930u: goto label_148930;
        case 0x148934u: goto label_148934;
        case 0x148938u: goto label_148938;
        case 0x14893cu: goto label_14893c;
        case 0x148940u: goto label_148940;
        case 0x148944u: goto label_148944;
        case 0x148948u: goto label_148948;
        case 0x14894cu: goto label_14894c;
        case 0x148950u: goto label_148950;
        case 0x148954u: goto label_148954;
        case 0x148958u: goto label_148958;
        case 0x14895cu: goto label_14895c;
        case 0x148960u: goto label_148960;
        case 0x148964u: goto label_148964;
        case 0x148968u: goto label_148968;
        case 0x14896cu: goto label_14896c;
        case 0x148970u: goto label_148970;
        case 0x148974u: goto label_148974;
        case 0x148978u: goto label_148978;
        case 0x14897cu: goto label_14897c;
        case 0x148980u: goto label_148980;
        case 0x148984u: goto label_148984;
        case 0x148988u: goto label_148988;
        case 0x14898cu: goto label_14898c;
        case 0x148990u: goto label_148990;
        case 0x148994u: goto label_148994;
        case 0x148998u: goto label_148998;
        case 0x14899cu: goto label_14899c;
        case 0x1489a0u: goto label_1489a0;
        case 0x1489a4u: goto label_1489a4;
        case 0x1489a8u: goto label_1489a8;
        case 0x1489acu: goto label_1489ac;
        case 0x1489b0u: goto label_1489b0;
        case 0x1489b4u: goto label_1489b4;
        case 0x1489b8u: goto label_1489b8;
        case 0x1489bcu: goto label_1489bc;
        case 0x1489c0u: goto label_1489c0;
        case 0x1489c4u: goto label_1489c4;
        case 0x1489c8u: goto label_1489c8;
        case 0x1489ccu: goto label_1489cc;
        case 0x1489d0u: goto label_1489d0;
        case 0x1489d4u: goto label_1489d4;
        case 0x1489d8u: goto label_1489d8;
        case 0x1489dcu: goto label_1489dc;
        case 0x1489e0u: goto label_1489e0;
        case 0x1489e4u: goto label_1489e4;
        default: break;
    }

    ctx->pc = 0x148870u;

label_148870:
    // 0x148870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_148874:
    // 0x148874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_148878:
    // 0x148878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x148878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_14887c:
    // 0x14887c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14887cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148880:
    // 0x148880: 0xc04d8dc  jal         func_136370
label_148884:
    if (ctx->pc == 0x148884u) {
        ctx->pc = 0x148884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148880u;
        // 0x148884: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148888u;
        goto label_148888;
    }
    ctx->pc = 0x148880u;
    SET_GPR_U32(ctx, 31, 0x148888u);
    ctx->pc = 0x148884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148880u;
    // 0x148884: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x148880u, 0x148888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148888u;
label_148888:
    // 0x148888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x148888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14888c:
    // 0x14888c: 0x54430052  bnel        $v0, $v1, . + 4 + (0x52 << 2)
label_148890:
    if (ctx->pc == 0x148890u) {
        ctx->pc = 0x148890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14888Cu;
        // 0x148890: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148894u;
        goto label_148894;
    }
    ctx->pc = 0x14888Cu;
    {
        const bool branch_taken_0x14888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14888c) {
            ctx->pc = 0x148890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14888Cu;
            // 0x148890: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1489D8u;
            goto label_1489d8;
        }
    }
    ctx->pc = 0x148894u;
label_148894:
    // 0x148894: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_148898:
    // 0x148898: 0xc0523b8  jal         func_148EE0
label_14889c:
    if (ctx->pc == 0x14889Cu) {
        ctx->pc = 0x14889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148898u;
        // 0x14889c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488A0u;
        goto label_1488a0;
    }
    ctx->pc = 0x148898u;
    SET_GPR_U32(ctx, 31, 0x1488A0u);
    ctx->pc = 0x14889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148898u;
    // 0x14889c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148EE0u, 0x148898u, 0x1488A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488A0u;
label_1488a0:
    // 0x1488a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1488a4:
    if (ctx->pc == 0x1488A4u) {
        ctx->pc = 0x1488A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488A0u;
        // 0x1488a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488A8u;
        goto label_1488a8;
    }
    ctx->pc = 0x1488A0u;
    {
        const bool branch_taken_0x1488a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1488A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488A0u;
        // 0x1488a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488a0) {
            ctx->pc = 0x1488B8u;
            goto label_1488b8;
        }
    }
    ctx->pc = 0x1488A8u;
label_1488a8:
    // 0x1488a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1488ac:
    // 0x1488ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1488acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1488b0:
    // 0x1488b0: 0x40f809  jalr        $v0
label_1488b4:
    if (ctx->pc == 0x1488B4u) {
        ctx->pc = 0x1488B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488B0u;
        // 0x1488b4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488B8u;
        goto label_1488b8;
    }
    ctx->pc = 0x1488B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1488B8u);
        ctx->pc = 0x1488B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488B0u;
        // 0x1488b4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1488B0u, 0x1488B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1488B8u;
label_1488b8:
    // 0x1488b8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1488b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1488bc:
    // 0x1488bc: 0xc052408  jal         func_149020
label_1488c0:
    if (ctx->pc == 0x1488C0u) {
        ctx->pc = 0x1488C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488BCu;
        // 0x1488c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488C4u;
        goto label_1488c4;
    }
    ctx->pc = 0x1488BCu;
    SET_GPR_U32(ctx, 31, 0x1488C4u);
    ctx->pc = 0x1488C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1488BCu;
    // 0x1488c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149020u, 0x1488BCu, 0x1488C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488C4u;
label_1488c4:
    // 0x1488c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1488c8:
    if (ctx->pc == 0x1488C8u) {
        ctx->pc = 0x1488C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488C4u;
        // 0x1488c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488CCu;
        goto label_1488cc;
    }
    ctx->pc = 0x1488C4u;
    {
        const bool branch_taken_0x1488c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1488C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488C4u;
        // 0x1488c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488c4) {
            ctx->pc = 0x1488DCu;
            goto label_1488dc;
        }
    }
    ctx->pc = 0x1488CCu;
label_1488cc:
    // 0x1488cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1488ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1488d0:
    // 0x1488d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1488d4:
    // 0x1488d4: 0x40f809  jalr        $v0
label_1488d8:
    if (ctx->pc == 0x1488D8u) {
        ctx->pc = 0x1488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488D4u;
        // 0x1488d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488DCu;
        goto label_1488dc;
    }
    ctx->pc = 0x1488D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1488DCu);
        ctx->pc = 0x1488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488D4u;
        // 0x1488d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1488D4u, 0x1488DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1488DCu;
label_1488dc:
    // 0x1488dc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1488dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1488e0:
    // 0x1488e0: 0xc05246c  jal         func_1491B0
label_1488e4:
    if (ctx->pc == 0x1488E4u) {
        ctx->pc = 0x1488E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488E0u;
        // 0x1488e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488E8u;
        goto label_1488e8;
    }
    ctx->pc = 0x1488E0u;
    SET_GPR_U32(ctx, 31, 0x1488E8u);
    ctx->pc = 0x1488E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1488E0u;
    // 0x1488e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491B0u, 0x1488E0u, 0x1488E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488E8u;
label_1488e8:
    // 0x1488e8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1488ec:
    if (ctx->pc == 0x1488ECu) {
        ctx->pc = 0x1488ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488E8u;
        // 0x1488ec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1488F0u;
        goto label_1488f0;
    }
    ctx->pc = 0x1488E8u;
    {
        const bool branch_taken_0x1488e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488e8) {
            ctx->pc = 0x1488ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1488E8u;
            // 0x1488ec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14893Cu;
            goto label_14893c;
        }
    }
    ctx->pc = 0x1488F0u;
label_1488f0:
    // 0x1488f0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1488f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1488f4:
    // 0x1488f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1488f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1488f8:
    // 0x1488f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1488f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1488fc:
    // 0x1488fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1488fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_148900:
    // 0x148900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_148904:
    // 0x148904: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_148908:
    if (ctx->pc == 0x148908u) {
        ctx->pc = 0x148908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148904u;
        // 0x148908: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14890Cu;
        goto label_14890c;
    }
    ctx->pc = 0x148904u;
    {
        const bool branch_taken_0x148904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148904u;
        // 0x148908: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148904) {
            ctx->pc = 0x148938u;
            goto label_148938;
        }
    }
    ctx->pc = 0x14890Cu;
label_14890c:
    // 0x14890c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14890cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_148910:
    // 0x148910: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x148910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_148914:
    // 0x148914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_148918:
    // 0x148918: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x148918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_14891c:
    // 0x14891c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_148920:
    if (ctx->pc == 0x148920u) {
        ctx->pc = 0x148920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14891Cu;
        // 0x148920: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148924u;
        goto label_148924;
    }
    ctx->pc = 0x14891Cu;
    {
        const bool branch_taken_0x14891c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14891c) {
            ctx->pc = 0x148920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14891Cu;
            // 0x148920: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14893Cu;
            goto label_14893c;
        }
    }
    ctx->pc = 0x148924u;
label_148924:
    // 0x148924: 0xc094ed4  jal         func_253B50
label_148928:
    if (ctx->pc == 0x148928u) {
        ctx->pc = 0x14892Cu;
        goto label_14892c;
    }
    ctx->pc = 0x148924u;
    SET_GPR_U32(ctx, 31, 0x14892Cu);
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x148924u, 0x14892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14892Cu;
label_14892c:
    // 0x14892c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14892cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_148930:
    // 0x148930: 0xc05248c  jal         func_149230
label_148934:
    if (ctx->pc == 0x148934u) {
        ctx->pc = 0x148934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148930u;
        // 0x148934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148938u;
        goto label_148938;
    }
    ctx->pc = 0x148930u;
    SET_GPR_U32(ctx, 31, 0x148938u);
    ctx->pc = 0x148934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148930u;
    // 0x148934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149230u, 0x148930u, 0x148938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148938u;
label_148938:
    // 0x148938: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148938u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14893c:
    // 0x14893c: 0xc0527a8  jal         func_149EA0
label_148940:
    if (ctx->pc == 0x148940u) {
        ctx->pc = 0x148940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14893Cu;
        // 0x148940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148944u;
        goto label_148944;
    }
    ctx->pc = 0x14893Cu;
    SET_GPR_U32(ctx, 31, 0x148944u);
    ctx->pc = 0x148940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14893Cu;
    // 0x148940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EA0u, 0x14893Cu, 0x148944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148944u;
label_148944:
    // 0x148944: 0x8e0204cc  lw          $v0, 0x4CC($s0)
    ctx->pc = 0x148944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
label_148948:
    // 0x148948: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_14894c:
    if (ctx->pc == 0x14894Cu) {
        ctx->pc = 0x148950u;
        goto label_148950;
    }
    ctx->pc = 0x148948u;
    {
        const bool branch_taken_0x148948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148948) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x148950u;
label_148950:
    // 0x148950: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148950u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_148954:
    // 0x148954: 0xc05238e  jal         func_148E38
label_148958:
    if (ctx->pc == 0x148958u) {
        ctx->pc = 0x148958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148954u;
        // 0x148958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14895Cu;
        goto label_14895c;
    }
    ctx->pc = 0x148954u;
    SET_GPR_U32(ctx, 31, 0x14895Cu);
    ctx->pc = 0x148958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148954u;
    // 0x148958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x148954u, 0x14895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14895Cu;
label_14895c:
    // 0x14895c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14895cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148960:
    // 0x148960: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x148960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_148964:
    // 0x148964: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_148968:
    if (ctx->pc == 0x148968u) {
        ctx->pc = 0x14896Cu;
        goto label_14896c;
    }
    ctx->pc = 0x148964u;
    {
        const bool branch_taken_0x148964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148964) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x14896Cu;
label_14896c:
    // 0x14896c: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
label_148970:
    if (ctx->pc == 0x148970u) {
        ctx->pc = 0x148974u;
        goto label_148974;
    }
    ctx->pc = 0x14896Cu;
    {
        const bool branch_taken_0x14896c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x14896c) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x148974u;
label_148974:
    // 0x148974: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148974u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_148978:
    // 0x148978: 0xc04df04  jal         func_137C10
label_14897c:
    if (ctx->pc == 0x14897Cu) {
        ctx->pc = 0x14897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148978u;
        // 0x14897c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148980u;
        goto label_148980;
    }
    ctx->pc = 0x148978u;
    SET_GPR_U32(ctx, 31, 0x148980u);
    ctx->pc = 0x14897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148978u;
    // 0x14897c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C10u, 0x148978u, 0x148980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148980u;
label_148980:
    // 0x148980: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_148984:
    if (ctx->pc == 0x148984u) {
        ctx->pc = 0x148984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148980u;
        // 0x148984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148988u;
        goto label_148988;
    }
    ctx->pc = 0x148980u;
    {
        const bool branch_taken_0x148980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148980u;
        // 0x148984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148980) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x148988u;
label_148988:
    // 0x148988: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148988u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14898c:
    // 0x14898c: 0xc04df1e  jal         func_137C78
label_148990:
    if (ctx->pc == 0x148990u) {
        ctx->pc = 0x148990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14898Cu;
        // 0x148990: 0x8e0606a0  lw          $a2, 0x6A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148994u;
        goto label_148994;
    }
    ctx->pc = 0x14898Cu;
    SET_GPR_U32(ctx, 31, 0x148994u);
    ctx->pc = 0x148990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14898Cu;
    // 0x148990: 0x8e0606a0  lw          $a2, 0x6A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C78u, 0x14898Cu, 0x148994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148994u;
label_148994:
    // 0x148994: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_148998:
    if (ctx->pc == 0x148998u) {
        ctx->pc = 0x14899Cu;
        goto label_14899c;
    }
    ctx->pc = 0x148994u;
    {
        const bool branch_taken_0x148994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148994) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x14899Cu;
label_14899c:
    // 0x14899c: 0xc04df94  jal         func_137E50
label_1489a0:
    if (ctx->pc == 0x1489A0u) {
        ctx->pc = 0x1489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14899Cu;
        // 0x1489a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489A4u;
        goto label_1489a4;
    }
    ctx->pc = 0x14899Cu;
    SET_GPR_U32(ctx, 31, 0x1489A4u);
    ctx->pc = 0x1489A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14899Cu;
    // 0x1489a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E50u, 0x14899Cu, 0x1489A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489A4u;
label_1489a4:
    // 0x1489a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1489a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1489a8:
    // 0x1489a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1489a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1489ac:
    // 0x1489ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1489acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1489b0:
    // 0x1489b0: 0x40f809  jalr        $v0
label_1489b4:
    if (ctx->pc == 0x1489B4u) {
        ctx->pc = 0x1489B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489B0u;
        // 0x1489b4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489B8u;
        goto label_1489b8;
    }
    ctx->pc = 0x1489B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1489B8u);
        ctx->pc = 0x1489B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489B0u;
        // 0x1489b4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1489B0u, 0x1489B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1489B8u;
label_1489b8:
    // 0x1489b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1489bc:
    if (ctx->pc == 0x1489BCu) {
        ctx->pc = 0x1489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489B8u;
        // 0x1489bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489C0u;
        goto label_1489c0;
    }
    ctx->pc = 0x1489B8u;
    {
        const bool branch_taken_0x1489b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489B8u;
        // 0x1489bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489b8) {
            ctx->pc = 0x1489D8u;
            goto label_1489d8;
        }
    }
    ctx->pc = 0x1489C0u;
label_1489c0:
    // 0x1489c0: 0xc05227a  jal         func_1489E8
label_1489c4:
    if (ctx->pc == 0x1489C4u) {
        ctx->pc = 0x1489C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489C0u;
        // 0x1489c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489C8u;
        goto label_1489c8;
    }
    ctx->pc = 0x1489C0u;
    SET_GPR_U32(ctx, 31, 0x1489C8u);
    ctx->pc = 0x1489C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489C0u;
    // 0x1489c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1489E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1489E8u, 0x1489C0u, 0x1489C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489C8u;
label_1489c8:
    // 0x1489c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1489c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1489cc:
    // 0x1489cc: 0xc052296  jal         func_148A58
label_1489d0:
    if (ctx->pc == 0x1489D0u) {
        ctx->pc = 0x1489D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489CCu;
        // 0x1489d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489D4u;
        goto label_1489d4;
    }
    ctx->pc = 0x1489CCu;
    SET_GPR_U32(ctx, 31, 0x1489D4u);
    ctx->pc = 0x1489D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489CCu;
    // 0x1489d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148A58u, 0x1489CCu, 0x1489D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489D4u;
label_1489d4:
    // 0x1489d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1489d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1489d8:
    // 0x1489d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1489d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1489dc:
    // 0x1489dc: 0x3e00008  jr          $ra
label_1489e0:
    if (ctx->pc == 0x1489E0u) {
        ctx->pc = 0x1489E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489DCu;
        // 0x1489e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489E4u;
        goto label_1489e4;
    }
    ctx->pc = 0x1489DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1489E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489DCu;
        // 0x1489e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1489DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1489E4u;
label_1489e4:
    // 0x1489e4: 0x0  nop
    ctx->pc = 0x1489e4u;
    // NOP
    ctx->pc = 0x1489e8u;
}
