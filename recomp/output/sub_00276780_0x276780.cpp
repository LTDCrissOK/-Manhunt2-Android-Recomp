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

// Function: sub_00276780
// Address: 0x276780 - 0x276a18
void sub_00276780_0x276780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276780_0x276780");
#endif

    switch (ctx->pc) {
        case 0x2767c0u: goto label_2767c0;
        case 0x2767e8u: goto label_2767e8;
        case 0x2767f0u: goto label_2767f0;
        case 0x27681cu: goto label_27681c;
        case 0x276824u: goto label_276824;
        case 0x276834u: goto label_276834;
        case 0x27683cu: goto label_27683c;
        case 0x27684cu: goto label_27684c;
        case 0x27685cu: goto label_27685c;
        case 0x2768f4u: goto label_2768f4;
        case 0x276918u: goto label_276918;
        case 0x276978u: goto label_276978;
        case 0x2769b8u: goto label_2769b8;
        case 0x2769e0u: goto label_2769e0;
        default: break;
    }

    ctx->pc = 0x276780u;

    // 0x276780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x276780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x276784: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x276784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x276788: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x276788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27678c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x27678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x276790: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x276790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x276794: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x276794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276798: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x276798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27679c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767a0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2767a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2767a4: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x2767a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
    // 0x2767a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2767a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2767ac: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2767acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2767b0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2767b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2767b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2767b8: 0xc09d72a  jal         func_275CA8
    ctx->pc = 0x2767B8u;
    SET_GPR_U32(ctx, 31, 0x2767C0u);
    ctx->pc = 0x2767BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767B8u;
    // 0x2767bc: 0x26104890  addiu       $s0, $s0, 0x4890 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CA8u, 0x2767B8u, 0x2767C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767C0u;
label_2767c0:
    // 0x2767c0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2767C0u;
    {
        const bool branch_taken_0x2767c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2767c0) {
            ctx->pc = 0x2767C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2767C0u;
            // 0x2767c4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2767C8u;
            goto label_2767c8;
        }
    }
    ctx->pc = 0x2767C8u;
label_2767c8:
    // 0x2767c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2767c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2767cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2767ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2767d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2767d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2767d4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2767d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2767d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2767d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2767dc: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2767DCu;
    {
        const bool branch_taken_0x2767dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767DCu;
        // 0x2767e0: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767dc) {
            ctx->pc = 0x276804u;
            goto label_276804;
        }
    }
    ctx->pc = 0x2767E4u;
    // 0x2767e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2767e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2767e8:
    // 0x2767e8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2767E8u;
    SET_GPR_U32(ctx, 31, 0x2767F0u);
    ctx->pc = 0x2767ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767E8u;
    // 0x2767ec: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2767E8u, 0x2767F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2767F0u;
label_2767f0:
    // 0x2767f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2767F0u;
    {
        const bool branch_taken_0x2767f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2767F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767F0u;
        // 0x2767f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767f0) {
            ctx->pc = 0x276808u;
            goto label_276808;
        }
    }
    ctx->pc = 0x2767F8u;
    // 0x2767f8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2767f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2767fc: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2767FCu;
    {
        const bool branch_taken_0x2767fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2767fc) {
            ctx->pc = 0x276800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2767FCu;
            // 0x276800: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2767E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2767e8;
        }
    }
    ctx->pc = 0x276804u;
label_276804:
    // 0x276804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276808:
    // 0x276808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x276808u;
    {
        const bool branch_taken_0x276808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276808) {
            ctx->pc = 0x27682Cu;
            goto label_27682c;
        }
    }
    ctx->pc = 0x276810u;
    // 0x276810: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276814: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x276814u;
    SET_GPR_U32(ctx, 31, 0x27681Cu);
    ctx->pc = 0x276818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276814u;
    // 0x276818: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CF8u, 0x276814u, 0x27681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27681Cu;
label_27681c:
    // 0x27681c: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x27681Cu;
    {
        const bool branch_taken_0x27681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27681Cu;
        // 0x276820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27681c) {
            ctx->pc = 0x2769F4u;
            goto label_2769f4;
        }
    }
    ctx->pc = 0x276824u;
label_276824:
    // 0x276824: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x276824u;
    {
        const bool branch_taken_0x276824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276824u;
        // 0x276828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276824) {
            ctx->pc = 0x2769F4u;
            goto label_2769f4;
        }
    }
    ctx->pc = 0x27682Cu;
label_27682c:
    // 0x27682c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x27682Cu;
    SET_GPR_U32(ctx, 31, 0x276834u);
    ctx->pc = 0x276830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27682Cu;
    // 0x276830: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x27682Cu, 0x276834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276834u;
label_276834:
    // 0x276834: 0xc09d73a  jal         func_275CE8
    ctx->pc = 0x276834u;
    SET_GPR_U32(ctx, 31, 0x27683Cu);
    ctx->pc = 0x276838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276834u;
    // 0x276838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CE8u, 0x276834u, 0x27683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27683Cu;
label_27683c:
    // 0x27683c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27683cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276840: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x276840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276844: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x276844u;
    SET_GPR_U32(ctx, 31, 0x27684Cu);
    ctx->pc = 0x276848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276844u;
    // 0x276848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CF8u, 0x276844u, 0x27684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27684Cu;
label_27684c:
    // 0x27684c: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x27684Cu;
    {
        const bool branch_taken_0x27684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27684Cu;
        // 0x276850: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27684c) {
            ctx->pc = 0x276824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276824;
        }
    }
    ctx->pc = 0x276854u;
    // 0x276854: 0xc09d72a  jal         func_275CA8
    ctx->pc = 0x276854u;
    SET_GPR_U32(ctx, 31, 0x27685Cu);
    ctx->pc = 0x276858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276854u;
    // 0x276858: 0x26904890  addiu       $s0, $s4, 0x4890 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 18576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CA8u, 0x276854u, 0x27685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27685Cu;
label_27685c:
    // 0x27685c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27685Cu;
    {
        const bool branch_taken_0x27685c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27685c) {
            ctx->pc = 0x276860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27685Cu;
            // 0x276860: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276864u;
            goto label_276864;
        }
    }
    ctx->pc = 0x276864u;
label_276864:
    // 0x276864: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x276864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276868: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x276868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x27686c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x27686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x276870: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276874: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x276874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x276878: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27687c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x276880: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x276880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x276884: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x276884u;
    {
        const bool branch_taken_0x276884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x276888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276884u;
        // 0x276888: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276884) {
            ctx->pc = 0x2768B0u;
            goto label_2768b0;
        }
    }
    ctx->pc = 0x27688Cu;
    // 0x27688c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27688Cu;
    {
        const bool branch_taken_0x27688c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27688c) {
            ctx->pc = 0x276890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27688Cu;
            // 0x276890: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2768A4u;
            goto label_2768a4;
        }
    }
    ctx->pc = 0x276894u;
    // 0x276894: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x276894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x276898: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x276898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27689c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27689cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2768a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2768a4:
    // 0x2768a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2768a8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2768A8u;
    {
        const bool branch_taken_0x2768a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768A8u;
        // 0x2768ac: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768a8) {
            ctx->pc = 0x2769F0u;
            goto label_2769f0;
        }
    }
    ctx->pc = 0x2768B0u;
label_2768b0:
    // 0x2768b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2768b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2768b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2768b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2768b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2768bc: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2768bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2768c0: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x2768c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2768c4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2768c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2768c8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2768c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2768cc: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x2768ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2768d0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2768d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2768d4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2768d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2768d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2768d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2768dc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2768dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2768e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2768E0u;
    {
        const bool branch_taken_0x2768e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768E0u;
        // 0x2768e4: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768e0) {
            ctx->pc = 0x2768FCu;
            goto label_2768fc;
        }
    }
    ctx->pc = 0x2768E8u;
    // 0x2768e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2768e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768ec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2768ECu;
    SET_GPR_U32(ctx, 31, 0x2768F4u);
    ctx->pc = 0x2768F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2768ECu;
    // 0x2768f0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2768ECu, 0x2768F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768F4u;
label_2768f4:
    // 0x2768f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2768F4u;
    {
        const bool branch_taken_0x2768f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768F4u;
        // 0x2768f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768f4) {
            ctx->pc = 0x276908u;
            goto label_276908;
        }
    }
    ctx->pc = 0x2768FCu;
label_2768fc:
    // 0x2768fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2768fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276900: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x276900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276908:
    // 0x276908: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x276908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27690c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x27690cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276910: 0x1092000a  beq         $a0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x276910u;
    {
        const bool branch_taken_0x276910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x276914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276910u;
        // 0x276914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276910) {
            ctx->pc = 0x27693Cu;
            goto label_27693c;
        }
    }
    ctx->pc = 0x276918u;
label_276918:
    // 0x276918: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x276918u;
    {
        const bool branch_taken_0x276918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x276918) {
            ctx->pc = 0x27691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276918u;
            // 0x27691c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276934u;
            goto label_276934;
        }
    }
    ctx->pc = 0x276920u;
    // 0x276920: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x276920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276924: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x276924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x276928: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x276928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27692c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27692cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x276930: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_276934:
    // 0x276934: 0x1492fff8  bne         $a0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x276934u;
    {
        const bool branch_taken_0x276934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x276938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276934u;
        // 0x276938: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276934) {
            ctx->pc = 0x276918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276918;
        }
    }
    ctx->pc = 0x27693Cu;
label_27693c:
    // 0x27693c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x27693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276944: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x276944u;
    {
        const bool branch_taken_0x276944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x276948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276944u;
        // 0x276948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276944) {
            ctx->pc = 0x27696Cu;
            goto label_27696c;
        }
    }
    ctx->pc = 0x27694Cu;
    // 0x27694c: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x27694Cu;
    {
        const bool branch_taken_0x27694c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27694c) {
            ctx->pc = 0x276950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27694Cu;
            // 0x276950: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2769A0u;
            goto label_2769a0;
        }
    }
    ctx->pc = 0x276954u;
    // 0x276954: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x276954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x276958: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x276958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x27695c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x276960: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x276960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x276964: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x276964u;
    {
        const bool branch_taken_0x276964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276964u;
        // 0x276968: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276964) {
            ctx->pc = 0x2769A0u;
            goto label_2769a0;
        }
    }
    ctx->pc = 0x27696Cu;
label_27696c:
    // 0x27696c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27696cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276970: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x276970u;
    {
        const bool branch_taken_0x276970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x276974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276970u;
        // 0x276974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276970) {
            ctx->pc = 0x276998u;
            goto label_276998;
        }
    }
    ctx->pc = 0x276978u;
label_276978:
    // 0x276978: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276978u;
    {
        const bool branch_taken_0x276978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276978u;
        // 0x27697c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276978) {
            ctx->pc = 0x276990u;
            goto label_276990;
        }
    }
    ctx->pc = 0x276980u;
    // 0x276980: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x276980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x276984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x276984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x276988: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x276988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27698c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27698cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_276990:
    // 0x276990: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x276990u;
    {
        const bool branch_taken_0x276990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x276994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276990u;
        // 0x276994: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276990) {
            ctx->pc = 0x276978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276978;
        }
    }
    ctx->pc = 0x276998u;
label_276998:
    // 0x276998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27699c: 0x0  nop
    ctx->pc = 0x27699cu;
    // NOP
label_2769a0:
    // 0x2769a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2769a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2769a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2769a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2769a8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2769A8u;
    {
        const bool branch_taken_0x2769a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2769ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769A8u;
        // 0x2769ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769a8) {
            ctx->pc = 0x2769D0u;
            goto label_2769d0;
        }
    }
    ctx->pc = 0x2769B0u;
    // 0x2769b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2769b4: 0x0  nop
    ctx->pc = 0x2769b4u;
    // NOP
label_2769b8:
    // 0x2769b8: 0x0  nop
    ctx->pc = 0x2769b8u;
    // NOP
    // 0x2769bc: 0x0  nop
    ctx->pc = 0x2769bcu;
    // NOP
    // 0x2769c0: 0x0  nop
    ctx->pc = 0x2769c0u;
    // NOP
    // 0x2769c4: 0x0  nop
    ctx->pc = 0x2769c4u;
    // NOP
    // 0x2769c8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2769C8u;
    {
        const bool branch_taken_0x2769c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2769CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769C8u;
        // 0x2769cc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769c8) {
            ctx->pc = 0x2769B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2769b8;
        }
    }
    ctx->pc = 0x2769D0u;
label_2769d0:
    // 0x2769d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2769D0u;
    {
        const bool branch_taken_0x2769d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D0u;
        // 0x2769d4: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769d0) {
            ctx->pc = 0x2769E4u;
            goto label_2769e4;
        }
    }
    ctx->pc = 0x2769D8u;
    // 0x2769d8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2769D8u;
    SET_GPR_U32(ctx, 31, 0x2769E0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2769D8u, 0x2769E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769E0u;
label_2769e0:
    // 0x2769e0: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x2769e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_2769e4:
    // 0x2769e4: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x2769e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x2769e8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2769e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2769ec: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2769ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2769f0:
    // 0x2769f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2769f4:
    // 0x2769f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2769f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2769f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2769f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2769fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2769fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276a00: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x276a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x276a04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x276a04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276a08: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x276a08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x276a0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x276a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276a10: 0x3e00008  jr          $ra
    ctx->pc = 0x276A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A10u;
        // 0x276a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276A18u;
}
