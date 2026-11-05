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

// Function: sub_0012D4A8
// Address: 0x12d4a8 - 0x12d600
void sub_0012D4A8_0x12d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D4A8_0x12d4a8");
#endif

    switch (ctx->pc) {
        case 0x12d4e8u: goto label_12d4e8;
        case 0x12d4f8u: goto label_12d4f8;
        case 0x12d508u: goto label_12d508;
        case 0x12d518u: goto label_12d518;
        case 0x12d528u: goto label_12d528;
        case 0x12d538u: goto label_12d538;
        case 0x12d548u: goto label_12d548;
        case 0x12d558u: goto label_12d558;
        case 0x12d568u: goto label_12d568;
        case 0x12d578u: goto label_12d578;
        case 0x12d588u: goto label_12d588;
        case 0x12d598u: goto label_12d598;
        case 0x12d5a8u: goto label_12d5a8;
        case 0x12d5b8u: goto label_12d5b8;
        case 0x12d5c8u: goto label_12d5c8;
        case 0x12d5d8u: goto label_12d5d8;
        case 0x12d5e8u: goto label_12d5e8;
        case 0x12d5f8u: goto label_12d5f8;
        default: break;
    }

    ctx->pc = 0x12d4a8u;

    // 0x12d4a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12d4a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d4b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12d4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4b8: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x12d4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x12d4bc: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x12D4BCu;
    {
        const bool branch_taken_0x12d4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4BCu;
        // 0x12d4c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4bc) {
            ctx->pc = 0x12D618u;
            return;
        }
    }
    ctx->pc = 0x12D4C4u;
    // 0x12d4c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x12d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x12d4c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d4cc: 0x2442dba0  addiu       $v0, $v0, -0x2460
    ctx->pc = 0x12d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957984));
    // 0x12d4d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12d4d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d4d8: 0x800008  jr          $a0
    ctx->pc = 0x12D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D500u: goto label_12d500;
            case 0x12D510u: goto label_12d510;
            case 0x12D520u: goto label_12d520;
            case 0x12D530u: goto label_12d530;
            case 0x12D540u: goto label_12d540;
            case 0x12D550u: goto label_12d550;
            case 0x12D560u: goto label_12d560;
            case 0x12D570u: goto label_12d570;
            case 0x12D580u: goto label_12d580;
            case 0x12D590u: goto label_12d590;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5F0u: goto label_12d5f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D4D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12D4E0u;
label_12d4e0:
    // 0x12d4e0: 0xc04b5ce  jal         func_12D738
    ctx->pc = 0x12D4E0u;
    SET_GPR_U32(ctx, 31, 0x12D4E8u);
    ctx->pc = 0x12D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4E0u;
    // 0x12d4e4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D738u, 0x12D4E0u, 0x12D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4E8u;
label_12d4e8:
    // 0x12d4e8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x12D4E8u;
    {
        const bool branch_taken_0x12d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4E8u;
        // 0x12d4ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4e8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D4F0u;
label_12d4f0:
    // 0x12d4f0: 0xc04b5d6  jal         func_12D758
    ctx->pc = 0x12D4F0u;
    SET_GPR_U32(ctx, 31, 0x12D4F8u);
    ctx->pc = 0x12D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D4F0u;
    // 0x12d4f4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D758u, 0x12D4F0u, 0x12D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4F8u;
label_12d4f8:
    // 0x12d4f8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x12D4F8u;
    {
        const bool branch_taken_0x12d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4F8u;
        // 0x12d4fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D500u;
label_12d500:
    // 0x12d500: 0xc04b5de  jal         func_12D778
    ctx->pc = 0x12D500u;
    SET_GPR_U32(ctx, 31, 0x12D508u);
    ctx->pc = 0x12D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D500u;
    // 0x12d504: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D778u, 0x12D500u, 0x12D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D508u;
label_12d508:
    // 0x12d508: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x12D508u;
    {
        const bool branch_taken_0x12d508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D508u;
        // 0x12d50c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d508) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D510u;
label_12d510:
    // 0x12d510: 0xc04b5ee  jal         func_12D7B8
    ctx->pc = 0x12D510u;
    SET_GPR_U32(ctx, 31, 0x12D518u);
    ctx->pc = 0x12D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D510u;
    // 0x12d514: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7B8u, 0x12D510u, 0x12D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D518u;
label_12d518:
    // 0x12d518: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x12D518u;
    {
        const bool branch_taken_0x12d518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D518u;
        // 0x12d51c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d518) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D520u;
label_12d520:
    // 0x12d520: 0xc04b5fe  jal         func_12D7F8
    ctx->pc = 0x12D520u;
    SET_GPR_U32(ctx, 31, 0x12D528u);
    ctx->pc = 0x12D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D520u;
    // 0x12d524: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7F8u, 0x12D520u, 0x12D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D528u;
label_12d528:
    // 0x12d528: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x12D528u;
    {
        const bool branch_taken_0x12d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D528u;
        // 0x12d52c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d528) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D530u;
label_12d530:
    // 0x12d530: 0xc04b606  jal         func_12D818
    ctx->pc = 0x12D530u;
    SET_GPR_U32(ctx, 31, 0x12D538u);
    ctx->pc = 0x12D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D530u;
    // 0x12d534: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D818u, 0x12D530u, 0x12D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D538u;
label_12d538:
    // 0x12d538: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x12D538u;
    {
        const bool branch_taken_0x12d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D538u;
        // 0x12d53c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d538) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D540u;
label_12d540:
    // 0x12d540: 0xc04b60e  jal         func_12D838
    ctx->pc = 0x12D540u;
    SET_GPR_U32(ctx, 31, 0x12D548u);
    ctx->pc = 0x12D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D540u;
    // 0x12d544: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D838u, 0x12D540u, 0x12D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D548u;
label_12d548:
    // 0x12d548: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x12D548u;
    {
        const bool branch_taken_0x12d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D548u;
        // 0x12d54c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d548) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D550u;
label_12d550:
    // 0x12d550: 0xc04b616  jal         func_12D858
    ctx->pc = 0x12D550u;
    SET_GPR_U32(ctx, 31, 0x12D558u);
    ctx->pc = 0x12D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D550u;
    // 0x12d554: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D858u, 0x12D550u, 0x12D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D558u;
label_12d558:
    // 0x12d558: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x12D558u;
    {
        const bool branch_taken_0x12d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D558u;
        // 0x12d55c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d558) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D560u;
label_12d560:
    // 0x12d560: 0xc04b61e  jal         func_12D878
    ctx->pc = 0x12D560u;
    SET_GPR_U32(ctx, 31, 0x12D568u);
    ctx->pc = 0x12D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D560u;
    // 0x12d564: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D878u, 0x12D560u, 0x12D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D568u;
label_12d568:
    // 0x12d568: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12D568u;
    {
        const bool branch_taken_0x12d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D568u;
        // 0x12d56c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d568) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D570u;
label_12d570:
    // 0x12d570: 0xc04b626  jal         func_12D898
    ctx->pc = 0x12D570u;
    SET_GPR_U32(ctx, 31, 0x12D578u);
    ctx->pc = 0x12D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D570u;
    // 0x12d574: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D898u, 0x12D570u, 0x12D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D578u;
label_12d578:
    // 0x12d578: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x12D578u;
    {
        const bool branch_taken_0x12d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D578u;
        // 0x12d57c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d578) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D580u;
label_12d580:
    // 0x12d580: 0xc04b62e  jal         func_12D8B8
    ctx->pc = 0x12D580u;
    SET_GPR_U32(ctx, 31, 0x12D588u);
    ctx->pc = 0x12D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D580u;
    // 0x12d584: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D8B8u, 0x12D580u, 0x12D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D588u;
label_12d588:
    // 0x12d588: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x12D588u;
    {
        const bool branch_taken_0x12d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D588u;
        // 0x12d58c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d588) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D590u;
label_12d590:
    // 0x12d590: 0xc04b636  jal         func_12D8D8
    ctx->pc = 0x12D590u;
    SET_GPR_U32(ctx, 31, 0x12D598u);
    ctx->pc = 0x12D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D590u;
    // 0x12d594: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D8D8u, 0x12D590u, 0x12D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D598u;
label_12d598:
    // 0x12d598: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12D598u;
    {
        const bool branch_taken_0x12d598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D598u;
        // 0x12d59c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d598) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D5A0u;
label_12d5a0:
    // 0x12d5a0: 0xc04b63e  jal         func_12D8F8
    ctx->pc = 0x12D5A0u;
    SET_GPR_U32(ctx, 31, 0x12D5A8u);
    ctx->pc = 0x12D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5A0u;
    // 0x12d5a4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D8F8u, 0x12D5A0u, 0x12D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5A8u;
label_12d5a8:
    // 0x12d5a8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12D5A8u;
    {
        const bool branch_taken_0x12d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5A8u;
        // 0x12d5ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5a8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D5B0u;
label_12d5b0:
    // 0x12d5b0: 0xc04b646  jal         func_12D918
    ctx->pc = 0x12D5B0u;
    SET_GPR_U32(ctx, 31, 0x12D5B8u);
    ctx->pc = 0x12D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5B0u;
    // 0x12d5b4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D918u, 0x12D5B0u, 0x12D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5B8u;
label_12d5b8:
    // 0x12d5b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12D5B8u;
    {
        const bool branch_taken_0x12d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5B8u;
        // 0x12d5bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5b8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D5C0u;
label_12d5c0:
    // 0x12d5c0: 0xc04b64e  jal         func_12D938
    ctx->pc = 0x12D5C0u;
    SET_GPR_U32(ctx, 31, 0x12D5C8u);
    ctx->pc = 0x12D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5C0u;
    // 0x12d5c4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D938u, 0x12D5C0u, 0x12D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5C8u;
label_12d5c8:
    // 0x12d5c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12D5C8u;
    {
        const bool branch_taken_0x12d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5C8u;
        // 0x12d5cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5c8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D5D0u;
label_12d5d0:
    // 0x12d5d0: 0xc04b656  jal         func_12D958
    ctx->pc = 0x12D5D0u;
    SET_GPR_U32(ctx, 31, 0x12D5D8u);
    ctx->pc = 0x12D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5D0u;
    // 0x12d5d4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D958u, 0x12D5D0u, 0x12D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5D8u;
label_12d5d8:
    // 0x12d5d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12D5D8u;
    {
        const bool branch_taken_0x12d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5D8u;
        // 0x12d5dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5d8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D5E0u;
label_12d5e0:
    // 0x12d5e0: 0xc04b65e  jal         func_12D978
    ctx->pc = 0x12D5E0u;
    SET_GPR_U32(ctx, 31, 0x12D5E8u);
    ctx->pc = 0x12D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5E0u;
    // 0x12d5e4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D978u, 0x12D5E0u, 0x12D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5E8u;
label_12d5e8:
    // 0x12d5e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12D5E8u;
    {
        const bool branch_taken_0x12d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5E8u;
        // 0x12d5ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5e8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D5F0u;
label_12d5f0:
    // 0x12d5f0: 0xc04b666  jal         func_12D998
    ctx->pc = 0x12D5F0u;
    SET_GPR_U32(ctx, 31, 0x12D5F8u);
    ctx->pc = 0x12D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5F0u;
    // 0x12d5f4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D998u, 0x12D5F0u, 0x12D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5F8u;
label_12d5f8:
    // 0x12d5f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D5F8u;
    {
        const bool branch_taken_0x12d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5F8u;
        // 0x12d5fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5f8) {
            ctx->pc = 0x12D61Cu;
            return;
        }
    }
    ctx->pc = 0x12D600u;
}
