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

// Function: sub_0012D628
// Address: 0x12d628 - 0x12d738
void sub_0012D628_0x12d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D628_0x12d628");
#endif

    switch (ctx->pc) {
        case 0x12d64cu: goto label_12d64c;
        case 0x12d67cu: goto label_12d67c;
        case 0x12d688u: goto label_12d688;
        case 0x12d6a0u: goto label_12d6a0;
        case 0x12d6acu: goto label_12d6ac;
        case 0x12d6b8u: goto label_12d6b8;
        case 0x12d6c0u: goto label_12d6c0;
        case 0x12d6d0u: goto label_12d6d0;
        case 0x12d6e0u: goto label_12d6e0;
        case 0x12d6f0u: goto label_12d6f0;
        case 0x12d700u: goto label_12d700;
        case 0x12d70cu: goto label_12d70c;
        case 0x12d714u: goto label_12d714;
        case 0x12d71cu: goto label_12d71c;
        default: break;
    }

    ctx->pc = 0x12d628u;

    // 0x12d628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d638: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12d638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12d644: 0xc045616  jal         func_115858
    ctx->pc = 0x12D644u;
    SET_GPR_U32(ctx, 31, 0x12D64Cu);
    ctx->pc = 0x12D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D644u;
    // 0x12d648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x12D644u, 0x12D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D64Cu;
label_12d64c:
    // 0x12d64c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d650: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D650u;
    {
        const bool branch_taken_0x12d650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D650u;
        // 0x12d654: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d650) {
            ctx->pc = 0x12D670u;
            goto label_12d670;
        }
    }
    ctx->pc = 0x12D658u;
    // 0x12d658: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D658u;
    {
        const bool branch_taken_0x12d658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D658u;
        // 0x12d65c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d658) {
            ctx->pc = 0x12D670u;
            goto label_12d670;
        }
    }
    ctx->pc = 0x12D660u;
    // 0x12d660: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D660u;
    {
        const bool branch_taken_0x12d660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D660u;
        // 0x12d664: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d660) {
            ctx->pc = 0x12D670u;
            goto label_12d670;
        }
    }
    ctx->pc = 0x12D668u;
    // 0x12d668: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D668u;
    {
        const bool branch_taken_0x12d668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D668u;
        // 0x12d66c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d668) {
            ctx->pc = 0x12D690u;
            goto label_12d690;
        }
    }
    ctx->pc = 0x12D670u;
label_12d670:
    // 0x12d670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d674: 0xc04ba24  jal         func_12E890
    ctx->pc = 0x12D674u;
    SET_GPR_U32(ctx, 31, 0x12D67Cu);
    ctx->pc = 0x12D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D674u;
    // 0x12d678: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E890u, 0x12D674u, 0x12D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D67Cu;
label_12d67c:
    // 0x12d67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d680: 0xc04b95e  jal         func_12E578
    ctx->pc = 0x12D680u;
    SET_GPR_U32(ctx, 31, 0x12D688u);
    ctx->pc = 0x12D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D680u;
    // 0x12d684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E578u, 0x12D680u, 0x12D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D688u;
label_12d688:
    // 0x12d688: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D688u;
    {
        const bool branch_taken_0x12d688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d688) {
            ctx->pc = 0x12D6B8u;
            goto label_12d6b8;
        }
    }
    ctx->pc = 0x12D690u;
label_12d690:
    // 0x12d690: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12D690u;
    {
        const bool branch_taken_0x12d690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D690u;
        // 0x12d694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d690) {
            ctx->pc = 0x12D6C8u;
            goto label_12d6c8;
        }
    }
    ctx->pc = 0x12D698u;
    // 0x12d698: 0xc04ba24  jal         func_12E890
    ctx->pc = 0x12D698u;
    SET_GPR_U32(ctx, 31, 0x12D6A0u);
    ctx->pc = 0x12D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D698u;
    // 0x12d69c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E890u, 0x12D698u, 0x12D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6A0u;
label_12d6a0:
    // 0x12d6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6a4: 0xc04b9ec  jal         func_12E7B0
    ctx->pc = 0x12D6A4u;
    SET_GPR_U32(ctx, 31, 0x12D6ACu);
    ctx->pc = 0x12D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6A4u;
    // 0x12d6a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E7B0u, 0x12D6A4u, 0x12D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6ACu;
label_12d6ac:
    // 0x12d6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6b0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x12D6B0u;
    SET_GPR_U32(ctx, 31, 0x12D6B8u);
    ctx->pc = 0x12D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6B0u;
    // 0x12d6b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E850u, 0x12D6B0u, 0x12D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6B8u;
label_12d6b8:
    // 0x12d6b8: 0xc04baea  jal         func_12EBA8
    ctx->pc = 0x12D6B8u;
    SET_GPR_U32(ctx, 31, 0x12D6C0u);
    ctx->pc = 0x12D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6B8u;
    // 0x12d6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBA8u, 0x12D6B8u, 0x12D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6C0u;
label_12d6c0:
    // 0x12d6c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12D6C0u;
    {
        const bool branch_taken_0x12d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6C0u;
        // 0x12d6c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6c0) {
            ctx->pc = 0x12D720u;
            goto label_12d720;
        }
    }
    ctx->pc = 0x12D6C8u;
label_12d6c8:
    // 0x12d6c8: 0xc04b522  jal         func_12D488
    ctx->pc = 0x12D6C8u;
    SET_GPR_U32(ctx, 31, 0x12D6D0u);
    ctx->pc = 0x12D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6C8u;
    // 0x12d6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D488u, 0x12D6C8u, 0x12D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6D0u;
label_12d6d0:
    // 0x12d6d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6d8: 0xc04ba24  jal         func_12E890
    ctx->pc = 0x12D6D8u;
    SET_GPR_U32(ctx, 31, 0x12D6E0u);
    ctx->pc = 0x12D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6D8u;
    // 0x12d6dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E890u, 0x12D6D8u, 0x12D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6E0u;
label_12d6e0:
    // 0x12d6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6e8: 0xc04ba3a  jal         func_12E8E8
    ctx->pc = 0x12D6E8u;
    SET_GPR_U32(ctx, 31, 0x12D6F0u);
    ctx->pc = 0x12D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6E8u;
    // 0x12d6ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8E8u, 0x12D6E8u, 0x12D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6F0u;
label_12d6f0:
    // 0x12d6f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12d6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6f8: 0xc04ba84  jal         func_12EA10
    ctx->pc = 0x12D6F8u;
    SET_GPR_U32(ctx, 31, 0x12D700u);
    ctx->pc = 0x12D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6F8u;
    // 0x12d6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA10u, 0x12D6F8u, 0x12D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D700u;
label_12d700:
    // 0x12d700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d704: 0xc04bac6  jal         func_12EB18
    ctx->pc = 0x12D704u;
    SET_GPR_U32(ctx, 31, 0x12D70Cu);
    ctx->pc = 0x12D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D704u;
    // 0x12d708: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB18u, 0x12D704u, 0x12D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D70Cu;
label_12d70c:
    // 0x12d70c: 0xc04baea  jal         func_12EBA8
    ctx->pc = 0x12D70Cu;
    SET_GPR_U32(ctx, 31, 0x12D714u);
    ctx->pc = 0x12D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D70Cu;
    // 0x12d710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBA8u, 0x12D70Cu, 0x12D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D714u;
label_12d714:
    // 0x12d714: 0xc045660  jal         func_115980
    ctx->pc = 0x12D714u;
    SET_GPR_U32(ctx, 31, 0x12D71Cu);
    ctx->pc = 0x12D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D714u;
    // 0x12d718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115980u, 0x12D714u, 0x12D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D71Cu;
label_12d71c:
    // 0x12d71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d720:
    // 0x12d720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d728: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12d728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d72c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D72Cu;
        // 0x12d730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D734u;
    // 0x12d734: 0x0  nop
    ctx->pc = 0x12d734u;
    // NOP
    ctx->pc = 0x12d738u;
}
