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

// Function: sub_00225080
// Address: 0x225080 - 0x2251e0
void sub_00225080_0x225080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225080_0x225080");
#endif

    switch (ctx->pc) {
        case 0x2250acu: goto label_2250ac;
        case 0x2250bcu: goto label_2250bc;
        case 0x2250d0u: goto label_2250d0;
        case 0x2250e8u: goto label_2250e8;
        case 0x2250fcu: goto label_2250fc;
        case 0x225114u: goto label_225114;
        case 0x225128u: goto label_225128;
        case 0x225140u: goto label_225140;
        case 0x225154u: goto label_225154;
        case 0x22516cu: goto label_22516c;
        case 0x22519cu: goto label_22519c;
        case 0x2251a8u: goto label_2251a8;
        case 0x2251c0u: goto label_2251c0;
        default: break;
    }

    ctx->pc = 0x225080u;

    // 0x225080: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x225080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x225084: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x225088: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x225088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x22508c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x22508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x225090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225094: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x225094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x225098: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22509c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250a0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2250a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2250a4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2250A4u;
    SET_GPR_U32(ctx, 31, 0x2250ACu);
    ctx->pc = 0x2250A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250A4u;
    // 0x2250a8: 0x2452fe40  addiu       $s2, $v0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2250A4u, 0x2250ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250ACu;
label_2250ac:
    // 0x2250ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2250acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2250b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2250b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2250B4u;
    SET_GPR_U32(ctx, 31, 0x2250BCu);
    ctx->pc = 0x2250B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250B4u;
    // 0x2250b8: 0x24a53e78  addiu       $a1, $a1, 0x3E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2250B4u, 0x2250BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250BCu;
label_2250bc:
    // 0x2250bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2250bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2250c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2250C0u;
    {
        const bool branch_taken_0x2250c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250C0u;
        // 0x2250c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250c0) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x2250C8u;
    // 0x2250c8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2250C8u;
    SET_GPR_U32(ctx, 31, 0x2250D0u);
    ctx->pc = 0x2250CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250C8u;
    // 0x2250cc: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2250C8u, 0x2250D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250D0u;
label_2250d0:
    // 0x2250d0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2250D0u;
    {
        const bool branch_taken_0x2250d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250D0u;
        // 0x2250d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250d0) {
            ctx->pc = 0x2251B8u;
            goto label_2251b8;
        }
    }
    ctx->pc = 0x2250D8u;
label_2250d8:
    // 0x2250d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2250d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2250dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2250dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2250e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2250E0u;
    SET_GPR_U32(ctx, 31, 0x2250E8u);
    ctx->pc = 0x2250E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250E0u;
    // 0x2250e4: 0x24a53e80  addiu       $a1, $a1, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2250E0u, 0x2250E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250E8u;
label_2250e8:
    // 0x2250e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2250e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2250ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2250ECu;
    {
        const bool branch_taken_0x2250ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250ECu;
        // 0x2250f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250ec) {
            ctx->pc = 0x225104u;
            goto label_225104;
        }
    }
    ctx->pc = 0x2250F4u;
    // 0x2250f4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2250F4u;
    SET_GPR_U32(ctx, 31, 0x2250FCu);
    ctx->pc = 0x2250F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250F4u;
    // 0x2250f8: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2250F4u, 0x2250FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250FCu;
label_2250fc:
    // 0x2250fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2250FCu;
    {
        const bool branch_taken_0x2250fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250FCu;
        // 0x225100: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250fc) {
            ctx->pc = 0x2251B8u;
            goto label_2251b8;
        }
    }
    ctx->pc = 0x225104u;
label_225104:
    // 0x225104: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x225104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x225108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22510c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22510Cu;
    SET_GPR_U32(ctx, 31, 0x225114u);
    ctx->pc = 0x225110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22510Cu;
    // 0x225110: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22510Cu, 0x225114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225114u;
label_225114:
    // 0x225114: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225118u;
    {
        const bool branch_taken_0x225118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225118u;
        // 0x22511c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225118) {
            ctx->pc = 0x225130u;
            goto label_225130;
        }
    }
    ctx->pc = 0x225120u;
    // 0x225120: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x225120u;
    SET_GPR_U32(ctx, 31, 0x225128u);
    ctx->pc = 0x225124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225120u;
    // 0x225124: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x225120u, 0x225128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225128u;
label_225128:
    // 0x225128: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x225128u;
    {
        const bool branch_taken_0x225128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225128u;
        // 0x22512c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225128) {
            ctx->pc = 0x2251B8u;
            goto label_2251b8;
        }
    }
    ctx->pc = 0x225130u;
label_225130:
    // 0x225130: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x225130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x225134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225138: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x225138u;
    SET_GPR_U32(ctx, 31, 0x225140u);
    ctx->pc = 0x22513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225138u;
    // 0x22513c: 0x24a53e90  addiu       $a1, $a1, 0x3E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x225138u, 0x225140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225140u;
label_225140:
    // 0x225140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x225140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225144u;
    {
        const bool branch_taken_0x225144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225144u;
        // 0x225148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225144) {
            ctx->pc = 0x22515Cu;
            goto label_22515c;
        }
    }
    ctx->pc = 0x22514Cu;
    // 0x22514c: 0xc09e056  jal         func_278158
    ctx->pc = 0x22514Cu;
    SET_GPR_U32(ctx, 31, 0x225154u);
    ctx->pc = 0x225150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22514Cu;
    // 0x225150: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x22514Cu, 0x225154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225154u;
label_225154:
    // 0x225154: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x225154u;
    {
        const bool branch_taken_0x225154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225154u;
        // 0x225158: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225154) {
            ctx->pc = 0x2251B8u;
            goto label_2251b8;
        }
    }
    ctx->pc = 0x22515Cu;
label_22515c:
    // 0x22515c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22515cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x225160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225164: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x225164u;
    SET_GPR_U32(ctx, 31, 0x22516Cu);
    ctx->pc = 0x225168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225164u;
    // 0x225168: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x225164u, 0x22516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22516Cu;
label_22516c:
    // 0x22516c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225170: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x225170u;
    {
        const bool branch_taken_0x225170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225170u;
        // 0x225174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225170) {
            ctx->pc = 0x2251B0u;
            goto label_2251b0;
        }
    }
    ctx->pc = 0x225178u;
    // 0x225178: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x225178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22517c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x225180: 0x24a51db0  addiu       $a1, $a1, 0x1DB0
    ctx->pc = 0x225180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
    // 0x225184: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x225184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x225188: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x225188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22518c: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x22518cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225190: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x225190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225194: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x225194u;
    SET_GPR_U32(ctx, 31, 0x22519Cu);
    ctx->pc = 0x225198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225194u;
    // 0x225198: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x225194u, 0x22519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22519Cu;
label_22519c:
    // 0x22519c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251a0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2251A0u;
    SET_GPR_U32(ctx, 31, 0x2251A8u);
    ctx->pc = 0x2251A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251A0u;
    // 0x2251a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2251A0u, 0x2251A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251A8u;
label_2251a8:
    // 0x2251a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2251A8u;
    {
        const bool branch_taken_0x2251a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2251ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251A8u;
        // 0x2251ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251a8) {
            ctx->pc = 0x2251C4u;
            goto label_2251c4;
        }
    }
    ctx->pc = 0x2251B0u;
label_2251b0:
    // 0x2251b0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2251b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2251b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2251b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2251b8:
    // 0x2251b8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2251B8u;
    SET_GPR_U32(ctx, 31, 0x2251C0u);
    ctx->pc = 0x2251BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251B8u;
    // 0x2251bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2251B8u, 0x2251C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251C0u;
label_2251c0:
    // 0x2251c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2251c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2251c4:
    // 0x2251c4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2251c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2251c8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2251c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2251cc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2251ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2251d0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2251d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2251d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2251D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2251D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251D4u;
        // 0x2251d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2251DCu;
    // 0x2251dc: 0x0  nop
    ctx->pc = 0x2251dcu;
    // NOP
    ctx->pc = 0x2251e0u;
}
