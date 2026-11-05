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

// Function: sub_0013B0C0
// Address: 0x13b0c0 - 0x13b250
void sub_0013B0C0_0x13b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B0C0_0x13b0c0");
#endif

    switch (ctx->pc) {
        case 0x13b0e8u: goto label_13b0e8;
        case 0x13b0fcu: goto label_13b0fc;
        case 0x13b10cu: goto label_13b10c;
        case 0x13b11cu: goto label_13b11c;
        case 0x13b130u: goto label_13b130;
        case 0x13b140u: goto label_13b140;
        case 0x13b158u: goto label_13b158;
        case 0x13b168u: goto label_13b168;
        case 0x13b178u: goto label_13b178;
        case 0x13b180u: goto label_13b180;
        case 0x13b190u: goto label_13b190;
        case 0x13b1a8u: goto label_13b1a8;
        case 0x13b1ccu: goto label_13b1cc;
        case 0x13b1d8u: goto label_13b1d8;
        case 0x13b1e4u: goto label_13b1e4;
        case 0x13b200u: goto label_13b200;
        case 0x13b214u: goto label_13b214;
        case 0x13b230u: goto label_13b230;
        default: break;
    }

    ctx->pc = 0x13b0c0u;

    // 0x13b0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b0c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b0cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b0ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b0d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b0d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13b0dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13b0e0: 0xc04e866  jal         func_13A198
    ctx->pc = 0x13B0E0u;
    SET_GPR_U32(ctx, 31, 0x13B0E8u);
    ctx->pc = 0x13B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B0E0u;
    // 0x13b0e4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x13B0E0u, 0x13B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0E8u;
label_13b0e8:
    // 0x13b0e8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x13B0E8u;
    {
        const bool branch_taken_0x13b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0E8u;
        // 0x13b0ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0e8) {
            ctx->pc = 0x13B234u;
            goto label_13b234;
        }
    }
    ctx->pc = 0x13B0F0u;
    // 0x13b0f0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b0f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b0f4: 0xc04e872  jal         func_13A1C8
    ctx->pc = 0x13B0F4u;
    SET_GPR_U32(ctx, 31, 0x13B0FCu);
    ctx->pc = 0x13B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B0F4u;
    // 0x13b0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1C8u, 0x13B0F4u, 0x13B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0FCu;
label_13b0fc:
    // 0x13b0fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B0FCu;
    {
        const bool branch_taken_0x13b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b0fc) {
            ctx->pc = 0x13B100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B0FCu;
            // 0x13b100: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B114u;
            goto label_13b114;
        }
    }
    ctx->pc = 0x13B104u;
    // 0x13b104: 0xc04ee18  jal         func_13B860
    ctx->pc = 0x13B104u;
    SET_GPR_U32(ctx, 31, 0x13B10Cu);
    ctx->pc = 0x13B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B104u;
    // 0x13b108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B860u, 0x13B104u, 0x13B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B10Cu;
label_13b10c:
    // 0x13b10c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x13B10Cu;
    {
        const bool branch_taken_0x13b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B10Cu;
        // 0x13b110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b10c) {
            ctx->pc = 0x13B234u;
            goto label_13b234;
        }
    }
    ctx->pc = 0x13B114u;
label_13b114:
    // 0x13b114: 0xc04edd8  jal         func_13B760
    ctx->pc = 0x13B114u;
    SET_GPR_U32(ctx, 31, 0x13B11Cu);
    ctx->pc = 0x13B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B114u;
    // 0x13b118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B760u, 0x13B114u, 0x13B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B11Cu;
label_13b11c:
    // 0x13b11c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13b11cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b120: 0x56600009  bnel        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B120u;
    {
        const bool branch_taken_0x13b120 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b120) {
            ctx->pc = 0x13B124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B120u;
            // 0x13b124: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B148u;
            goto label_13b148;
        }
    }
    ctx->pc = 0x13B128u;
    // 0x13b128: 0xc04ec94  jal         func_13B250
    ctx->pc = 0x13B128u;
    SET_GPR_U32(ctx, 31, 0x13B130u);
    ctx->pc = 0x13B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B128u;
    // 0x13b12c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B250u, 0x13B128u, 0x13B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B130u;
label_13b130:
    // 0x13b130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b138: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B138u;
    SET_GPR_U32(ctx, 31, 0x13B140u);
    ctx->pc = 0x13B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B138u;
    // 0x13b13c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B138u, 0x13B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B140u;
label_13b140:
    // 0x13b140: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x13B140u;
    {
        const bool branch_taken_0x13b140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B140u;
        // 0x13b144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b140) {
            ctx->pc = 0x13B234u;
            goto label_13b234;
        }
    }
    ctx->pc = 0x13B148u;
label_13b148:
    // 0x13b148: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b150: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13B150u;
    SET_GPR_U32(ctx, 31, 0x13B158u);
    ctx->pc = 0x13B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B150u;
    // 0x13b154: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13B150u, 0x13B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B158u;
label_13b158:
    // 0x13b158: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x13b158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b15c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b15cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b160: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13B160u;
    SET_GPR_U32(ctx, 31, 0x13B168u);
    ctx->pc = 0x13B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B160u;
    // 0x13b164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13B160u, 0x13B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B168u;
label_13b168:
    // 0x13b168: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b168u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b170: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B170u;
    SET_GPR_U32(ctx, 31, 0x13B178u);
    ctx->pc = 0x13B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B170u;
    // 0x13b174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B170u, 0x13B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B178u;
label_13b178:
    // 0x13b178: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x13B178u;
    SET_GPR_U32(ctx, 31, 0x13B180u);
    ctx->pc = 0x13B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B178u;
    // 0x13b17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x13B178u, 0x13B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B180u;
label_13b180:
    // 0x13b180: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b188: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x13B188u;
    SET_GPR_U32(ctx, 31, 0x13B190u);
    ctx->pc = 0x13B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B188u;
    // 0x13b18c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x13B188u, 0x13B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B190u;
label_13b190:
    // 0x13b190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B190u;
    {
        const bool branch_taken_0x13b190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B190u;
        // 0x13b194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b190) {
            ctx->pc = 0x13B1A0u;
            goto label_13b1a0;
        }
    }
    ctx->pc = 0x13B198u;
    // 0x13b198: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x13b198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b19c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b1a0:
    // 0x13b1a0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13B1A0u;
    SET_GPR_U32(ctx, 31, 0x13B1A8u);
    ctx->pc = 0x13B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1A0u;
    // 0x13b1a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13B1A0u, 0x13B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1A8u;
label_13b1a8:
    // 0x13b1a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x13b1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x13b1acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b1b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13b1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1bc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x13b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13b1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1c4: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13B1C4u;
    SET_GPR_U32(ctx, 31, 0x13B1CCu);
    ctx->pc = 0x13B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1C4u;
    // 0x13b1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13B1C4u, 0x13B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1CCu;
label_13b1cc:
    // 0x13b1cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13b1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1d0: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x13B1D0u;
    SET_GPR_U32(ctx, 31, 0x13B1D8u);
    ctx->pc = 0x13B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1D0u;
    // 0x13b1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x13B1D0u, 0x13B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1D8u;
label_13b1d8:
    // 0x13b1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1dc: 0xc046104  jal         func_118410
    ctx->pc = 0x13B1DCu;
    SET_GPR_U32(ctx, 31, 0x13B1E4u);
    ctx->pc = 0x13B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1DCu;
    // 0x13b1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x13B1DCu, 0x13B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1E4u;
label_13b1e4:
    // 0x13b1e4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b1e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b1f0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b1f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b1f8: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13B1F8u;
    SET_GPR_U32(ctx, 31, 0x13B200u);
    ctx->pc = 0x13B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B1F8u;
    // 0x13b1fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13B1F8u, 0x13B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B200u;
label_13b200:
    // 0x13b200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b208: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13b208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b20c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13B20Cu;
    SET_GPR_U32(ctx, 31, 0x13B214u);
    ctx->pc = 0x13B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B20Cu;
    // 0x13b210: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13B20Cu, 0x13B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B214u;
label_13b214:
    // 0x13b214: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13b218: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13b218u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13b21c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13b220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b224: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13b228: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13B228u;
    SET_GPR_U32(ctx, 31, 0x13B230u);
    ctx->pc = 0x13B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B228u;
    // 0x13b22c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13B228u, 0x13B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B230u;
label_13b230:
    // 0x13b230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b234:
    // 0x13b234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b23c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b23cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b240: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13b240u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b244: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13b244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b248: 0x3e00008  jr          $ra
    ctx->pc = 0x13B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B248u;
        // 0x13b24c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B250u;
}
