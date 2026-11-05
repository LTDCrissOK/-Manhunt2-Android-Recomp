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

// Function: sub_002B7430
// Address: 0x2b7430 - 0x2b7678
void sub_002B7430_0x2b7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7430_0x2b7430");
#endif

    switch (ctx->pc) {
        case 0x2b74a0u: goto label_2b74a0;
        case 0x2b74b0u: goto label_2b74b0;
        case 0x2b74c0u: goto label_2b74c0;
        case 0x2b74d0u: goto label_2b74d0;
        case 0x2b74e0u: goto label_2b74e0;
        case 0x2b74f0u: goto label_2b74f0;
        case 0x2b7500u: goto label_2b7500;
        case 0x2b7510u: goto label_2b7510;
        case 0x2b7520u: goto label_2b7520;
        case 0x2b7530u: goto label_2b7530;
        case 0x2b7540u: goto label_2b7540;
        case 0x2b7550u: goto label_2b7550;
        case 0x2b7560u: goto label_2b7560;
        case 0x2b7570u: goto label_2b7570;
        case 0x2b7580u: goto label_2b7580;
        case 0x2b7590u: goto label_2b7590;
        case 0x2b75a0u: goto label_2b75a0;
        case 0x2b75b0u: goto label_2b75b0;
        case 0x2b75c0u: goto label_2b75c0;
        case 0x2b75d0u: goto label_2b75d0;
        case 0x2b75e0u: goto label_2b75e0;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b7600u: goto label_2b7600;
        case 0x2b7610u: goto label_2b7610;
        case 0x2b7620u: goto label_2b7620;
        case 0x2b7630u: goto label_2b7630;
        case 0x2b7648u: goto label_2b7648;
        case 0x2b7660u: goto label_2b7660;
        default: break;
    }

    ctx->pc = 0x2b7430u;

    // 0x2b7430: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2b7434: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2b7434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2b7438: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2b7438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2b743c: 0x8c4305a0  lw          $v1, 0x5A0($v0)
    ctx->pc = 0x2b743cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5205A0u));
    // 0x2b7440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7444: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2B7444u;
    {
        const bool branch_taken_0x2b7444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7444u;
        // 0x2b7448: 0xffbf0108  sd          $ra, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7444) {
            ctx->pc = 0x2B7660u;
            goto label_2b7660;
        }
    }
    ctx->pc = 0x2B744Cu;
    // 0x2b744c: 0x8e03591c  lw          $v1, 0x591C($s0)
    ctx->pc = 0x2b744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22812)));
    // 0x2b7450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7454: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7454u;
    {
        const bool branch_taken_0x2b7454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7454) {
            ctx->pc = 0x2B7458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7454u;
            // 0x2b7458: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7474u;
            goto label_2b7474;
        }
    }
    ctx->pc = 0x2B745Cu;
    // 0x2b745c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7460: 0xae0558f8  sw          $a1, 0x58F8($s0)
    ctx->pc = 0x2b7460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 5));
    // 0x2b7464: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b7464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b7468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b746c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2B746Cu;
    {
        const bool branch_taken_0x2b746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B746Cu;
        // 0x2b7470: 0xae00591c  sw          $zero, 0x591C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b746c) {
            ctx->pc = 0x2B7664u;
            goto label_2b7664;
        }
    }
    ctx->pc = 0x2B7474u;
label_2b7474:
    // 0x2b7474: 0x2c620031  sltiu       $v0, $v1, 0x31
    ctx->pc = 0x2b7474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x2b7478: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2B7478u;
    {
        const bool branch_taken_0x2b7478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7478u;
        // 0x2b747c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7478) {
            ctx->pc = 0x2B7638u;
            goto label_2b7638;
        }
    }
    ctx->pc = 0x2B7480u;
    // 0x2b7480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b7480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b7484: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x2b7488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b7488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b748c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7490: 0x800008  jr          $a0
    ctx->pc = 0x2B7490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7498u: goto label_2b7498;
            case 0x2B74A8u: goto label_2b74a8;
            case 0x2B74B8u: goto label_2b74b8;
            case 0x2B74C8u: goto label_2b74c8;
            case 0x2B74D8u: goto label_2b74d8;
            case 0x2B74E8u: goto label_2b74e8;
            case 0x2B74F8u: goto label_2b74f8;
            case 0x2B7508u: goto label_2b7508;
            case 0x2B7518u: goto label_2b7518;
            case 0x2B7528u: goto label_2b7528;
            case 0x2B7538u: goto label_2b7538;
            case 0x2B7548u: goto label_2b7548;
            case 0x2B7558u: goto label_2b7558;
            case 0x2B7568u: goto label_2b7568;
            case 0x2B7578u: goto label_2b7578;
            case 0x2B7588u: goto label_2b7588;
            case 0x2B7598u: goto label_2b7598;
            case 0x2B75A8u: goto label_2b75a8;
            case 0x2B75B8u: goto label_2b75b8;
            case 0x2B75C8u: goto label_2b75c8;
            case 0x2B75D8u: goto label_2b75d8;
            case 0x2B75E8u: goto label_2b75e8;
            case 0x2B75F8u: goto label_2b75f8;
            case 0x2B7608u: goto label_2b7608;
            case 0x2B7618u: goto label_2b7618;
            case 0x2B7628u: goto label_2b7628;
            case 0x2B7638u: goto label_2b7638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B7498u;
label_2b7498:
    // 0x2b7498: 0xc0ae04e  jal         func_2B8138
    ctx->pc = 0x2B7498u;
    SET_GPR_U32(ctx, 31, 0x2B74A0u);
    ctx->pc = 0x2B749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7498u;
    // 0x2b749c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8138u, 0x2B7498u, 0x2B74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74A0u;
label_2b74a0:
    // 0x2b74a0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2B74A0u;
    {
        const bool branch_taken_0x2b74a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74A0u;
        // 0x2b74a4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74a0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B74A8u;
label_2b74a8:
    // 0x2b74a8: 0xc0ae106  jal         func_2B8418
    ctx->pc = 0x2B74A8u;
    SET_GPR_U32(ctx, 31, 0x2B74B0u);
    ctx->pc = 0x2B74ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74A8u;
    // 0x2b74ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8418u, 0x2B74A8u, 0x2B74B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74B0u;
label_2b74b0:
    // 0x2b74b0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2B74B0u;
    {
        const bool branch_taken_0x2b74b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74B0u;
        // 0x2b74b4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74b0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B74B8u;
label_2b74b8:
    // 0x2b74b8: 0xc0ae2ba  jal         func_2B8AE8
    ctx->pc = 0x2B74B8u;
    SET_GPR_U32(ctx, 31, 0x2B74C0u);
    ctx->pc = 0x2B74BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74B8u;
    // 0x2b74bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8AE8u, 0x2B74B8u, 0x2B74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74C0u;
label_2b74c0:
    // 0x2b74c0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2B74C0u;
    {
        const bool branch_taken_0x2b74c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74C0u;
        // 0x2b74c4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74c0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B74C8u;
label_2b74c8:
    // 0x2b74c8: 0xc0adf9a  jal         func_2B7E68
    ctx->pc = 0x2B74C8u;
    SET_GPR_U32(ctx, 31, 0x2B74D0u);
    ctx->pc = 0x2B74CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74C8u;
    // 0x2b74cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7E68u, 0x2B74C8u, 0x2B74D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74D0u;
label_2b74d0:
    // 0x2b74d0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2B74D0u;
    {
        const bool branch_taken_0x2b74d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74D0u;
        // 0x2b74d4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74d0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B74D8u;
label_2b74d8:
    // 0x2b74d8: 0xc0adfbe  jal         func_2B7EF8
    ctx->pc = 0x2B74D8u;
    SET_GPR_U32(ctx, 31, 0x2B74E0u);
    ctx->pc = 0x2B74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74D8u;
    // 0x2b74dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EF8u, 0x2B74D8u, 0x2B74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74E0u;
label_2b74e0:
    // 0x2b74e0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2B74E0u;
    {
        const bool branch_taken_0x2b74e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74E0u;
        // 0x2b74e4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74e0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B74E8u;
label_2b74e8:
    // 0x2b74e8: 0xc0ae05e  jal         func_2B8178
    ctx->pc = 0x2B74E8u;
    SET_GPR_U32(ctx, 31, 0x2B74F0u);
    ctx->pc = 0x2B74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74E8u;
    // 0x2b74ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8178u, 0x2B74E8u, 0x2B74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74F0u;
label_2b74f0:
    // 0x2b74f0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B74F0u;
    {
        const bool branch_taken_0x2b74f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F0u;
        // 0x2b74f4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B74F8u;
label_2b74f8:
    // 0x2b74f8: 0xc0ae1b4  jal         func_2B86D0
    ctx->pc = 0x2B74F8u;
    SET_GPR_U32(ctx, 31, 0x2B7500u);
    ctx->pc = 0x2B74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74F8u;
    // 0x2b74fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B86D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B86D0u, 0x2B74F8u, 0x2B7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7500u;
label_2b7500:
    // 0x2b7500: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7500u;
        // 0x2b7504: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7508u;
label_2b7508:
    // 0x2b7508: 0xc0ae114  jal         func_2B8450
    ctx->pc = 0x2B7508u;
    SET_GPR_U32(ctx, 31, 0x2B7510u);
    ctx->pc = 0x2B750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7508u;
    // 0x2b750c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8450u, 0x2B7508u, 0x2B7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7510u;
label_2b7510:
    // 0x2b7510: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2B7510u;
    {
        const bool branch_taken_0x2b7510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7510u;
        // 0x2b7514: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7510) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7518u;
label_2b7518:
    // 0x2b7518: 0xc0ae17a  jal         func_2B85E8
    ctx->pc = 0x2B7518u;
    SET_GPR_U32(ctx, 31, 0x2B7520u);
    ctx->pc = 0x2B751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7518u;
    // 0x2b751c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85E8u, 0x2B7518u, 0x2B7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7520u;
label_2b7520:
    // 0x2b7520: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2B7520u;
    {
        const bool branch_taken_0x2b7520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7520u;
        // 0x2b7524: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7520) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7528u;
label_2b7528:
    // 0x2b7528: 0xc0ae144  jal         func_2B8510
    ctx->pc = 0x2B7528u;
    SET_GPR_U32(ctx, 31, 0x2B7530u);
    ctx->pc = 0x2B752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7528u;
    // 0x2b752c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8510u, 0x2B7528u, 0x2B7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7530u;
label_2b7530:
    // 0x2b7530: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2B7530u;
    {
        const bool branch_taken_0x2b7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7530u;
        // 0x2b7534: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7530) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7538u;
label_2b7538:
    // 0x2b7538: 0xc0ae1e4  jal         func_2B8790
    ctx->pc = 0x2B7538u;
    SET_GPR_U32(ctx, 31, 0x2B7540u);
    ctx->pc = 0x2B753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7538u;
    // 0x2b753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8790u, 0x2B7538u, 0x2B7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7540u;
label_2b7540:
    // 0x2b7540: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2B7540u;
    {
        const bool branch_taken_0x2b7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7540u;
        // 0x2b7544: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7540) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7548u;
label_2b7548:
    // 0x2b7548: 0xc0ae0c2  jal         func_2B8308
    ctx->pc = 0x2B7548u;
    SET_GPR_U32(ctx, 31, 0x2B7550u);
    ctx->pc = 0x2B754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7548u;
    // 0x2b754c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8308u, 0x2B7548u, 0x2B7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7550u;
label_2b7550:
    // 0x2b7550: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2B7550u;
    {
        const bool branch_taken_0x2b7550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7550u;
        // 0x2b7554: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7550) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7558u;
label_2b7558:
    // 0x2b7558: 0xc0ae0e8  jal         func_2B83A0
    ctx->pc = 0x2B7558u;
    SET_GPR_U32(ctx, 31, 0x2B7560u);
    ctx->pc = 0x2B755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7558u;
    // 0x2b755c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B83A0u, 0x2B7558u, 0x2B7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7560u;
label_2b7560:
    // 0x2b7560: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2B7560u;
    {
        const bool branch_taken_0x2b7560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7560u;
        // 0x2b7564: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7560) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7568u;
label_2b7568:
    // 0x2b7568: 0xc0add9e  jal         func_2B7678
    ctx->pc = 0x2B7568u;
    SET_GPR_U32(ctx, 31, 0x2B7570u);
    ctx->pc = 0x2B756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7568u;
    // 0x2b756c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7678u, 0x2B7568u, 0x2B7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7570u;
label_2b7570:
    // 0x2b7570: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2B7570u;
    {
        const bool branch_taken_0x2b7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7570u;
        // 0x2b7574: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7570) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7578u;
label_2b7578:
    // 0x2b7578: 0xc0ae288  jal         func_2B8A20
    ctx->pc = 0x2B7578u;
    SET_GPR_U32(ctx, 31, 0x2B7580u);
    ctx->pc = 0x2B757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7578u;
    // 0x2b757c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A20u, 0x2B7578u, 0x2B7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7580u;
label_2b7580:
    // 0x2b7580: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2B7580u;
    {
        const bool branch_taken_0x2b7580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7580u;
        // 0x2b7584: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7580) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7588u;
label_2b7588:
    // 0x2b7588: 0xc0ae216  jal         func_2B8858
    ctx->pc = 0x2B7588u;
    SET_GPR_U32(ctx, 31, 0x2B7590u);
    ctx->pc = 0x2B758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7588u;
    // 0x2b758c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8858u, 0x2B7588u, 0x2B7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7590u;
label_2b7590:
    // 0x2b7590: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2B7590u;
    {
        const bool branch_taken_0x2b7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7590u;
        // 0x2b7594: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7590) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7598u;
label_2b7598:
    // 0x2b7598: 0xc0ae242  jal         func_2B8908
    ctx->pc = 0x2B7598u;
    SET_GPR_U32(ctx, 31, 0x2B75A0u);
    ctx->pc = 0x2B759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7598u;
    // 0x2b759c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8908u, 0x2B7598u, 0x2B75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75A0u;
label_2b75a0:
    // 0x2b75a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2B75A0u;
    {
        const bool branch_taken_0x2b75a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75A0u;
        // 0x2b75a4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75a0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B75A8u;
label_2b75a8:
    // 0x2b75a8: 0xc0ae254  jal         func_2B8950
    ctx->pc = 0x2B75A8u;
    SET_GPR_U32(ctx, 31, 0x2B75B0u);
    ctx->pc = 0x2B75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75A8u;
    // 0x2b75ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8950u, 0x2B75A8u, 0x2B75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75B0u;
label_2b75b0:
    // 0x2b75b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B75B0u;
    {
        const bool branch_taken_0x2b75b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75B0u;
        // 0x2b75b4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75b0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B75B8u;
label_2b75b8:
    // 0x2b75b8: 0xc0ad72a  jal         func_2B5CA8
    ctx->pc = 0x2B75B8u;
    SET_GPR_U32(ctx, 31, 0x2B75C0u);
    ctx->pc = 0x2B75BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75B8u;
    // 0x2b75bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5CA8u, 0x2B75B8u, 0x2B75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75C0u;
label_2b75c0:
    // 0x2b75c0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B75C0u;
    {
        const bool branch_taken_0x2b75c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75C0u;
        // 0x2b75c4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75c0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B75C8u;
label_2b75c8:
    // 0x2b75c8: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x2B75C8u;
    SET_GPR_U32(ctx, 31, 0x2B75D0u);
    ctx->pc = 0x2B75CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75C8u;
    // 0x2b75cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x2B75C8u, 0x2B75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75D0u;
label_2b75d0:
    // 0x2b75d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2B75D0u;
    {
        const bool branch_taken_0x2b75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75D0u;
        // 0x2b75d4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75d0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B75D8u;
label_2b75d8:
    // 0x2b75d8: 0xc0ad77e  jal         func_2B5DF8
    ctx->pc = 0x2B75D8u;
    SET_GPR_U32(ctx, 31, 0x2B75E0u);
    ctx->pc = 0x2B75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75D8u;
    // 0x2b75dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5DF8u, 0x2B75D8u, 0x2B75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75E0u;
label_2b75e0:
    // 0x2b75e0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B75E0u;
    {
        const bool branch_taken_0x2b75e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75E0u;
        // 0x2b75e4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75e0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B75E8u;
label_2b75e8:
    // 0x2b75e8: 0xc0ad92a  jal         func_2B64A8
    ctx->pc = 0x2B75E8u;
    SET_GPR_U32(ctx, 31, 0x2B75F0u);
    ctx->pc = 0x2B75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75E8u;
    // 0x2b75ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B64A8u, 0x2B75E8u, 0x2B75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75F0u;
label_2b75f0:
    // 0x2b75f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B75F0u;
    {
        const bool branch_taken_0x2b75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B75F0u;
        // 0x2b75f4: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75f0) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B75F8u;
label_2b75f8:
    // 0x2b75f8: 0xc0ad8aa  jal         func_2B62A8
    ctx->pc = 0x2B75F8u;
    SET_GPR_U32(ctx, 31, 0x2B7600u);
    ctx->pc = 0x2B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75F8u;
    // 0x2b75fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62A8u, 0x2B75F8u, 0x2B7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7600u;
label_2b7600:
    // 0x2b7600: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B7600u;
    {
        const bool branch_taken_0x2b7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7600u;
        // 0x2b7604: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7600) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7608u;
label_2b7608:
    // 0x2b7608: 0xc0ad8bc  jal         func_2B62F0
    ctx->pc = 0x2B7608u;
    SET_GPR_U32(ctx, 31, 0x2B7610u);
    ctx->pc = 0x2B760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7608u;
    // 0x2b760c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F0u, 0x2B7608u, 0x2B7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7610u;
label_2b7610:
    // 0x2b7610: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B7610u;
    {
        const bool branch_taken_0x2b7610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7610u;
        // 0x2b7614: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7610) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7618u;
label_2b7618:
    // 0x2b7618: 0xc0ad8e4  jal         func_2B6390
    ctx->pc = 0x2B7618u;
    SET_GPR_U32(ctx, 31, 0x2B7620u);
    ctx->pc = 0x2B761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7618u;
    // 0x2b761c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6390u, 0x2B7618u, 0x2B7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7620u;
label_2b7620:
    // 0x2b7620: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7620u;
    {
        const bool branch_taken_0x2b7620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7620u;
        // 0x2b7624: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7620) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7628u;
label_2b7628:
    // 0x2b7628: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7628u;
    SET_GPR_U32(ctx, 31, 0x2B7630u);
    ctx->pc = 0x2B762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7628u;
    // 0x2b762c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7628u, 0x2B7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7630u;
label_2b7630:
    // 0x2b7630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B7630u;
    {
        const bool branch_taken_0x2b7630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7630u;
        // 0x2b7634: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7630) {
            ctx->pc = 0x2B7668u;
            goto label_2b7668;
        }
    }
    ctx->pc = 0x2B7638u;
label_2b7638:
    // 0x2b7638: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b763c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2b763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b7640: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B7640u;
    SET_GPR_U32(ctx, 31, 0x2B7648u);
    ctx->pc = 0x2B7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7640u;
    // 0x2b7644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B7640u, 0x2B7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7648u;
label_2b7648:
    // 0x2b7648: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b7648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b764c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2b764cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2b7650: 0x24c6fb98  addiu       $a2, $a2, -0x468
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966168));
    // 0x2b7654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7658: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x2B7658u;
    SET_GPR_U32(ctx, 31, 0x2B7660u);
    ctx->pc = 0x2B765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7658u;
    // 0x2b765c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2B7658u, 0x2B7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7660u;
label_2b7660:
    // 0x2b7660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7664:
    // 0x2b7664: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b7664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2b7668:
    // 0x2b7668: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x2b7668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2b766c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B766Cu;
        // 0x2b7670: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7674u;
    // 0x2b7674: 0x0  nop
    ctx->pc = 0x2b7674u;
    // NOP
    ctx->pc = 0x2b7678u;
}
