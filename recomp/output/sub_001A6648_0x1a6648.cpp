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

// Function: sub_001A6648
// Address: 0x1a6648 - 0x1a6778
void sub_001A6648_0x1a6648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6648_0x1a6648");
#endif

    switch (ctx->pc) {
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6724u: goto label_1a6724;
        case 0x1a6734u: goto label_1a6734;
        case 0x1a6744u: goto label_1a6744;
        default: break;
    }

    ctx->pc = 0x1a6648u;

    // 0x1a6648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a664c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6658: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A6658u;
    SET_GPR_U32(ctx, 31, 0x1A6660u);
    ctx->pc = 0x1A665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6658u;
    // 0x1a665c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A6658u, 0x1A6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6660u;
label_1a6660:
    // 0x1a6660: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x1A6660u;
    SET_GPR_U32(ctx, 31, 0x1A6668u);
    ctx->pc = 0x1A6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6660u;
    // 0x1a6664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x1A6660u, 0x1A6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6668u;
label_1a6668:
    // 0x1a6668: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A6668u;
    SET_GPR_U32(ctx, 31, 0x1A6670u);
    ctx->pc = 0x1A666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6668u;
    // 0x1a666c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A6668u, 0x1A6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6670u;
label_1a6670:
    // 0x1a6670: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1a6670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1a6674: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6674u;
    {
        const bool branch_taken_0x1a6674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6674u;
        // 0x1a6678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6674) {
            ctx->pc = 0x1A66A0u;
            goto label_1a66a0;
        }
    }
    ctx->pc = 0x1A667Cu;
    // 0x1a667c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a6680: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A6680u;
    SET_GPR_U32(ctx, 31, 0x1A6688u);
    ctx->pc = 0x1A6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6680u;
    // 0x1a6684: 0x2406048c  addiu       $a2, $zero, 0x48C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A6680u, 0x1A6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6688u;
label_1a6688:
    // 0x1a6688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a668c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a668cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a6690: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A6690u;
    SET_GPR_U32(ctx, 31, 0x1A6698u);
    ctx->pc = 0x1A6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6690u;
    // 0x1a6694: 0x24060490  addiu       $a2, $zero, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A6690u, 0x1A6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6698u;
label_1a6698:
    // 0x1a6698: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A6698u;
    {
        const bool branch_taken_0x1a6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6698u;
        // 0x1a669c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6698) {
            ctx->pc = 0x1A6738u;
            goto label_1a6738;
        }
    }
    ctx->pc = 0x1A66A0u;
label_1a66a0:
    // 0x1a66a0: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A66A0u;
    SET_GPR_U32(ctx, 31, 0x1A66A8u);
    ctx->pc = 0x1A66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66A0u;
    // 0x1a66a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A66A0u, 0x1A66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66A8u;
label_1a66a8:
    // 0x1a66a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a66a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a66b0: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A66B0u;
    {
        const bool branch_taken_0x1a66b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66B0u;
        // 0x1a66b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66b0) {
            ctx->pc = 0x1A66DCu;
            goto label_1a66dc;
        }
    }
    ctx->pc = 0x1A66B8u;
    // 0x1a66b8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a66b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a66bc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A66BCu;
    SET_GPR_U32(ctx, 31, 0x1A66C4u);
    ctx->pc = 0x1A66C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66BCu;
    // 0x1a66c0: 0x24060489  addiu       $a2, $zero, 0x489 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A66BCu, 0x1A66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66C4u;
label_1a66c4:
    // 0x1a66c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a66c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66c8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a66c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a66cc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A66CCu;
    SET_GPR_U32(ctx, 31, 0x1A66D4u);
    ctx->pc = 0x1A66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66CCu;
    // 0x1a66d0: 0x2406048d  addiu       $a2, $zero, 0x48D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A66CCu, 0x1A66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66D4u;
label_1a66d4:
    // 0x1a66d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A66D4u;
    {
        const bool branch_taken_0x1a66d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66D4u;
        // 0x1a66d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66d4) {
            ctx->pc = 0x1A6738u;
            goto label_1a6738;
        }
    }
    ctx->pc = 0x1A66DCu;
label_1a66dc:
    // 0x1a66dc: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A66DCu;
    SET_GPR_U32(ctx, 31, 0x1A66E4u);
    ctx->pc = 0x1A66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66DCu;
    // 0x1a66e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A66DCu, 0x1A66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66E4u;
label_1a66e4:
    // 0x1a66e4: 0x10510017  beq         $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A66E4u;
    {
        const bool branch_taken_0x1a66e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66E4u;
        // 0x1a66e8: 0x28420008  slti        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66e4) {
            ctx->pc = 0x1A6744u;
            goto label_1a6744;
        }
    }
    ctx->pc = 0x1A66ECu;
    // 0x1a66ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A66ECu;
    {
        const bool branch_taken_0x1a66ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66ECu;
        // 0x1a66f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66ec) {
            ctx->pc = 0x1A6718u;
            goto label_1a6718;
        }
    }
    ctx->pc = 0x1A66F4u;
    // 0x1a66f4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a66f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a66f8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A66F8u;
    SET_GPR_U32(ctx, 31, 0x1A6700u);
    ctx->pc = 0x1A66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66F8u;
    // 0x1a66fc: 0x2406048a  addiu       $a2, $zero, 0x48A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1162));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A66F8u, 0x1A6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6700u;
label_1a6700:
    // 0x1a6700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6704: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a6704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a6708: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A6708u;
    SET_GPR_U32(ctx, 31, 0x1A6710u);
    ctx->pc = 0x1A670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6708u;
    // 0x1a670c: 0x2406048e  addiu       $a2, $zero, 0x48E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A6708u, 0x1A6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6710u;
label_1a6710:
    // 0x1a6710: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6710u;
    {
        const bool branch_taken_0x1a6710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6710u;
        // 0x1a6714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6710) {
            ctx->pc = 0x1A6738u;
            goto label_1a6738;
        }
    }
    ctx->pc = 0x1A6718u;
label_1a6718:
    // 0x1a6718: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1a6718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a671c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A671Cu;
    SET_GPR_U32(ctx, 31, 0x1A6724u);
    ctx->pc = 0x1A6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A671Cu;
    // 0x1a6720: 0x2406048b  addiu       $a2, $zero, 0x48B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1163));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A671Cu, 0x1A6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6724u;
label_1a6724:
    // 0x1a6724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6728: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a6728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a672c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A672Cu;
    SET_GPR_U32(ctx, 31, 0x1A6734u);
    ctx->pc = 0x1A6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A672Cu;
    // 0x1a6730: 0x2406048f  addiu       $a2, $zero, 0x48F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1167));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A672Cu, 0x1A6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6734u;
label_1a6734:
    // 0x1a6734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6738:
    // 0x1a6738: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1a6738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a673c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A673Cu;
    SET_GPR_U32(ctx, 31, 0x1A6744u);
    ctx->pc = 0x1A6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A673Cu;
    // 0x1a6740: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A673Cu, 0x1A6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6744u;
label_1a6744:
    // 0x1a6744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a674c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6750: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6750u;
        // 0x1a6754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6758u;
    // 0x1a6758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a675c: 0x0  nop
    ctx->pc = 0x1a675cu;
    // NOP
    // 0x1a6760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a6764: 0x0  nop
    ctx->pc = 0x1a6764u;
    // NOP
    // 0x1a6768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a676c: 0x0  nop
    ctx->pc = 0x1a676cu;
    // NOP
    // 0x1a6770: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a6774: 0x0  nop
    ctx->pc = 0x1a6774u;
    // NOP
    ctx->pc = 0x1a6778u;
}
