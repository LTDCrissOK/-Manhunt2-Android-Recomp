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

// Function: sub_00219828
// Address: 0x219828 - 0x219978
void sub_00219828_0x219828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219828_0x219828");
#endif

    switch (ctx->pc) {
        case 0x21984cu: goto label_21984c;
        case 0x21985cu: goto label_21985c;
        case 0x219878u: goto label_219878;
        case 0x219884u: goto label_219884;
        case 0x219894u: goto label_219894;
        case 0x2198a4u: goto label_2198a4;
        case 0x2198b0u: goto label_2198b0;
        case 0x2198b8u: goto label_2198b8;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198e0u: goto label_2198e0;
        case 0x2198e8u: goto label_2198e8;
        case 0x219900u: goto label_219900;
        case 0x21990cu: goto label_21990c;
        case 0x21991cu: goto label_21991c;
        case 0x219928u: goto label_219928;
        case 0x219938u: goto label_219938;
        case 0x219940u: goto label_219940;
        case 0x21994cu: goto label_21994c;
        case 0x219958u: goto label_219958;
        default: break;
    }

    ctx->pc = 0x219828u;

    // 0x219828: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21982c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x21982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219830: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x219830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x219834: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x219834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x219838: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x219838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x21983c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x21983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x219840: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x219844: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219844u;
    SET_GPR_U32(ctx, 31, 0x21984Cu);
    ctx->pc = 0x219848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219844u;
    // 0x219848: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219844u, 0x21984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21984Cu;
label_21984c:
    // 0x21984c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x21984cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219850: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219854: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219854u;
    SET_GPR_U32(ctx, 31, 0x21985Cu);
    ctx->pc = 0x219858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219854u;
    // 0x219858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219854u, 0x21985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21985Cu;
label_21985c:
    // 0x21985c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x219860: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x219860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x219864: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x219864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x219868: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x21986c: 0x26103570  addiu       $s0, $s0, 0x3570
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
    // 0x219870: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x219870u;
    SET_GPR_U32(ctx, 31, 0x219878u);
    ctx->pc = 0x219874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219870u;
    // 0x219874: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x219870u, 0x219878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219878u;
label_219878:
    // 0x219878: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21987c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x21987Cu;
    SET_GPR_U32(ctx, 31, 0x219884u);
    ctx->pc = 0x219880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21987Cu;
    // 0x219880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x21987Cu, 0x219884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219884u;
label_219884:
    // 0x219884: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x219888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21988c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x21988Cu;
    SET_GPR_U32(ctx, 31, 0x219894u);
    ctx->pc = 0x219890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21988Cu;
    // 0x219890: 0x24a5ee68  addiu       $a1, $a1, -0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x21988Cu, 0x219894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219894u;
label_219894:
    // 0x219894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21989c: 0xc09dd98  jal         func_277660
    ctx->pc = 0x21989Cu;
    SET_GPR_U32(ctx, 31, 0x2198A4u);
    ctx->pc = 0x2198A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21989Cu;
    // 0x2198a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x21989Cu, 0x2198A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198A4u;
label_2198a4:
    // 0x2198a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2198A4u;
    {
        const bool branch_taken_0x2198a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198A4u;
        // 0x2198a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198a4) {
            ctx->pc = 0x219920u;
            goto label_219920;
        }
    }
    ctx->pc = 0x2198ACu;
    // 0x2198ac: 0x0  nop
    ctx->pc = 0x2198acu;
    // NOP
label_2198b0:
    // 0x2198b0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2198B0u;
    SET_GPR_U32(ctx, 31, 0x2198B8u);
    ctx->pc = 0x2198B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198B0u;
    // 0x2198b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2198B0u, 0x2198B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198B8u;
label_2198b8:
    // 0x2198b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2198b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2198bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2198bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2198C0u;
    SET_GPR_U32(ctx, 31, 0x2198C8u);
    ctx->pc = 0x2198C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198C0u;
    // 0x2198c4: 0x24a516e0  addiu       $a1, $a1, 0x16E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2198C0u, 0x2198C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198C8u;
label_2198c8:
    // 0x2198c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2198c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2198cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2198CCu;
    {
        const bool branch_taken_0x2198cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2198cc) {
            ctx->pc = 0x2198D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2198CCu;
            // 0x2198d0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2198F0u;
            goto label_2198f0;
        }
    }
    ctx->pc = 0x2198D4u;
    // 0x2198d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2198d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2198d8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2198D8u;
    SET_GPR_U32(ctx, 31, 0x2198E0u);
    ctx->pc = 0x2198DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198D8u;
    // 0x2198dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2198D8u, 0x2198E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198E0u;
label_2198e0:
    // 0x2198e0: 0xc0833de  jal         func_20CF78
    ctx->pc = 0x2198E0u;
    SET_GPR_U32(ctx, 31, 0x2198E8u);
    ctx->pc = 0x2198E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198E0u;
    // 0x2198e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CF78u, 0x2198E0u, 0x2198E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198E8u;
label_2198e8:
    // 0x2198e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2198E8u;
    {
        const bool branch_taken_0x2198e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198E8u;
        // 0x2198ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198e8) {
            ctx->pc = 0x219900u;
            goto label_219900;
        }
    }
    ctx->pc = 0x2198F0u;
label_2198f0:
    // 0x2198f0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2198f4: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x2198f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
    // 0x2198f8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2198F8u;
    SET_GPR_U32(ctx, 31, 0x219900u);
    ctx->pc = 0x2198FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198F8u;
    // 0x2198fc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2198F8u, 0x219900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219900u;
label_219900:
    // 0x219900: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x219900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219904: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x219904u;
    SET_GPR_U32(ctx, 31, 0x21990Cu);
    ctx->pc = 0x219908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219904u;
    // 0x219908: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x219904u, 0x21990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21990Cu;
label_21990c:
    // 0x21990c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21990cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x219910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219914: 0xc0f7858  jal         func_3DE160
    ctx->pc = 0x219914u;
    SET_GPR_U32(ctx, 31, 0x21991Cu);
    ctx->pc = 0x219918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219914u;
    // 0x219918: 0x248434d0  addiu       $a0, $a0, 0x34D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE160u, 0x219914u, 0x21991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21991Cu;
label_21991c:
    // 0x21991c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219920:
    // 0x219920: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x219920u;
    SET_GPR_U32(ctx, 31, 0x219928u);
    ctx->pc = 0x219924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219920u;
    // 0x219924: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x219920u, 0x219928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219928u;
label_219928:
    // 0x219928: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x219928u;
    {
        const bool branch_taken_0x219928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219928u;
        // 0x21992c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219928) {
            ctx->pc = 0x2198B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2198b0;
        }
    }
    ctx->pc = 0x219930u;
    // 0x219930: 0xc09dd92  jal         func_277648
    ctx->pc = 0x219930u;
    SET_GPR_U32(ctx, 31, 0x219938u);
    ctx->pc = 0x219934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219930u;
    // 0x219934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x219930u, 0x219938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219938u;
label_219938:
    // 0x219938: 0xc0865be  jal         func_2196F8
    ctx->pc = 0x219938u;
    SET_GPR_U32(ctx, 31, 0x219940u);
    ctx->pc = 0x21993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219938u;
    // 0x21993c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2196F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196F8u, 0x219938u, 0x219940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219940u;
label_219940:
    // 0x219940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219944: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219944u;
    SET_GPR_U32(ctx, 31, 0x21994Cu);
    ctx->pc = 0x219948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219944u;
    // 0x219948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219944u, 0x21994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21994Cu;
label_21994c:
    // 0x21994c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219950: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219950u;
    SET_GPR_U32(ctx, 31, 0x219958u);
    ctx->pc = 0x219954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219950u;
    // 0x219954: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219950u, 0x219958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219958u;
label_219958:
    // 0x219958: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x219958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21995c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x21995cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x219960: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x219960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219964: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x219964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219968: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21996c: 0x3e00008  jr          $ra
    ctx->pc = 0x21996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21996Cu;
        // 0x219970: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219974u;
    // 0x219974: 0x0  nop
    ctx->pc = 0x219974u;
    // NOP
    ctx->pc = 0x219978u;
}
