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

// Function: sub_0016D668
// Address: 0x16d668 - 0x16d750
void sub_0016D668_0x16d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D668_0x16d668");
#endif

    switch (ctx->pc) {
        case 0x16d67cu: goto label_16d67c;
        case 0x16d68cu: goto label_16d68c;
        case 0x16d694u: goto label_16d694;
        case 0x16d6a4u: goto label_16d6a4;
        case 0x16d6b4u: goto label_16d6b4;
        case 0x16d6bcu: goto label_16d6bc;
        case 0x16d6ccu: goto label_16d6cc;
        case 0x16d6e4u: goto label_16d6e4;
        case 0x16d6f4u: goto label_16d6f4;
        case 0x16d704u: goto label_16d704;
        case 0x16d714u: goto label_16d714;
        case 0x16d71cu: goto label_16d71c;
        case 0x16d72cu: goto label_16d72c;
        case 0x16d738u: goto label_16d738;
        case 0x16d740u: goto label_16d740;
        default: break;
    }

    ctx->pc = 0x16d668u;

    // 0x16d668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16d670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16d674: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D674u;
    SET_GPR_U32(ctx, 31, 0x16D67Cu);
    ctx->pc = 0x16D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D674u;
    // 0x16d678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D674u, 0x16D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D67Cu;
label_16d67c:
    // 0x16d67c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D67Cu;
    {
        const bool branch_taken_0x16d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d67c) {
            ctx->pc = 0x16D69Cu;
            goto label_16d69c;
        }
    }
    ctx->pc = 0x16D684u;
    // 0x16d684: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16D684u;
    SET_GPR_U32(ctx, 31, 0x16D68Cu);
    ctx->pc = 0x16D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D684u;
    // 0x16d688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E670u, 0x16D684u, 0x16D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D68Cu;
label_16d68c:
    // 0x16d68c: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D68Cu;
    SET_GPR_U32(ctx, 31, 0x16D694u);
    ctx->pc = 0x16D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D68Cu;
    // 0x16d690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D68Cu, 0x16D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D694u;
label_16d694:
    // 0x16d694: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16D694u;
    {
        const bool branch_taken_0x16d694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D694u;
        // 0x16d698: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d694) {
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D69Cu;
label_16d69c:
    // 0x16d69c: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D69Cu;
    SET_GPR_U32(ctx, 31, 0x16D6A4u);
    ctx->pc = 0x16D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D69Cu;
    // 0x16d6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D69Cu, 0x16D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6A4u;
label_16d6a4:
    // 0x16d6a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D6A4u;
    {
        const bool branch_taken_0x16d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6a4) {
            ctx->pc = 0x16D6C4u;
            goto label_16d6c4;
        }
    }
    ctx->pc = 0x16D6ACu;
    // 0x16d6ac: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16D6ACu;
    SET_GPR_U32(ctx, 31, 0x16D6B4u);
    ctx->pc = 0x16D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6ACu;
    // 0x16d6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E670u, 0x16D6ACu, 0x16D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6B4u;
label_16d6b4:
    // 0x16d6b4: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D6B4u;
    SET_GPR_U32(ctx, 31, 0x16D6BCu);
    ctx->pc = 0x16D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6B4u;
    // 0x16d6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D6B4u, 0x16D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6BCu;
label_16d6bc:
    // 0x16d6bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x16D6BCu;
    {
        const bool branch_taken_0x16d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6BCu;
        // 0x16d6c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6bc) {
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D6C4u;
label_16d6c4:
    // 0x16d6c4: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D6C4u;
    SET_GPR_U32(ctx, 31, 0x16D6CCu);
    ctx->pc = 0x16D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6C4u;
    // 0x16d6c8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D6C4u, 0x16D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6CCu;
label_16d6cc:
    // 0x16d6cc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d6d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d6d4: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d6d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d6dc: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D6DCu;
    SET_GPR_U32(ctx, 31, 0x16D6E4u);
    ctx->pc = 0x16D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6DCu;
    // 0x16d6e0: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D6DCu, 0x16D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6E4u;
label_16d6e4:
    // 0x16d6e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16D6E4u;
    {
        const bool branch_taken_0x16d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6e4) {
            ctx->pc = 0x16D724u;
            goto label_16d724;
        }
    }
    ctx->pc = 0x16D6ECu;
    // 0x16d6ec: 0xc05bc9c  jal         func_16F270
    ctx->pc = 0x16D6ECu;
    SET_GPR_U32(ctx, 31, 0x16D6F4u);
    ctx->pc = 0x16D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6ECu;
    // 0x16d6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F270u, 0x16D6ECu, 0x16D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6F4u;
label_16d6f4:
    // 0x16d6f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D6F4u;
    {
        const bool branch_taken_0x16d6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6F4u;
        // 0x16d6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6f4) {
            ctx->pc = 0x16D70Cu;
            goto label_16d70c;
        }
    }
    ctx->pc = 0x16D6FCu;
    // 0x16d6fc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x16D6FCu;
    SET_GPR_U32(ctx, 31, 0x16D704u);
    ctx->pc = 0x16D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6FCu;
    // 0x16d700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3A0u, 0x16D6FCu, 0x16D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D704u;
label_16d704:
    // 0x16d704: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16D704u;
    {
        const bool branch_taken_0x16d704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D704u;
        // 0x16d708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d704) {
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D70Cu;
label_16d70c:
    // 0x16d70c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16D70Cu;
    SET_GPR_U32(ctx, 31, 0x16D714u);
    ctx->pc = 0x16D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D70Cu;
    // 0x16d710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E670u, 0x16D70Cu, 0x16D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D714u;
label_16d714:
    // 0x16d714: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16D714u;
    SET_GPR_U32(ctx, 31, 0x16D71Cu);
    ctx->pc = 0x16D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D714u;
    // 0x16d718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16D714u, 0x16D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D71Cu;
label_16d71c:
    // 0x16d71c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16D71Cu;
    {
        const bool branch_taken_0x16d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D71Cu;
        // 0x16d720: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d71c) {
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D724u;
label_16d724:
    // 0x16d724: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16D724u;
    SET_GPR_U32(ctx, 31, 0x16D72Cu);
    ctx->pc = 0x16D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D724u;
    // 0x16d728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E670u, 0x16D724u, 0x16D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D72Cu;
label_16d72c:
    // 0x16d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d730: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D730u;
    SET_GPR_U32(ctx, 31, 0x16D738u);
    ctx->pc = 0x16D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D730u;
    // 0x16d734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D730u, 0x16D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D738u;
label_16d738:
    // 0x16d738: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D738u;
    SET_GPR_U32(ctx, 31, 0x16D740u);
    ctx->pc = 0x16D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D738u;
    // 0x16d73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D738u, 0x16D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D740u;
label_16d740:
    // 0x16d740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d744:
    // 0x16d744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16d744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d748: 0x3e00008  jr          $ra
    ctx->pc = 0x16D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D748u;
        // 0x16d74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D750u;
}
