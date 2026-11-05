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

// Function: sub_0024A500
// Address: 0x24a500 - 0x24a5b0
void sub_0024A500_0x24a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A500_0x24a500");
#endif

    switch (ctx->pc) {
        case 0x24a500u: goto label_24a500;
        case 0x24a504u: goto label_24a504;
        case 0x24a508u: goto label_24a508;
        case 0x24a50cu: goto label_24a50c;
        case 0x24a510u: goto label_24a510;
        case 0x24a514u: goto label_24a514;
        case 0x24a518u: goto label_24a518;
        case 0x24a51cu: goto label_24a51c;
        case 0x24a520u: goto label_24a520;
        case 0x24a524u: goto label_24a524;
        case 0x24a528u: goto label_24a528;
        case 0x24a52cu: goto label_24a52c;
        case 0x24a530u: goto label_24a530;
        case 0x24a534u: goto label_24a534;
        case 0x24a538u: goto label_24a538;
        case 0x24a53cu: goto label_24a53c;
        case 0x24a540u: goto label_24a540;
        case 0x24a544u: goto label_24a544;
        case 0x24a548u: goto label_24a548;
        case 0x24a54cu: goto label_24a54c;
        case 0x24a550u: goto label_24a550;
        case 0x24a554u: goto label_24a554;
        case 0x24a558u: goto label_24a558;
        case 0x24a55cu: goto label_24a55c;
        case 0x24a560u: goto label_24a560;
        case 0x24a564u: goto label_24a564;
        case 0x24a568u: goto label_24a568;
        case 0x24a56cu: goto label_24a56c;
        case 0x24a570u: goto label_24a570;
        case 0x24a574u: goto label_24a574;
        case 0x24a578u: goto label_24a578;
        case 0x24a57cu: goto label_24a57c;
        case 0x24a580u: goto label_24a580;
        case 0x24a584u: goto label_24a584;
        case 0x24a588u: goto label_24a588;
        case 0x24a58cu: goto label_24a58c;
        case 0x24a590u: goto label_24a590;
        case 0x24a594u: goto label_24a594;
        case 0x24a598u: goto label_24a598;
        case 0x24a59cu: goto label_24a59c;
        case 0x24a5a0u: goto label_24a5a0;
        case 0x24a5a4u: goto label_24a5a4;
        case 0x24a5a8u: goto label_24a5a8;
        case 0x24a5acu: goto label_24a5ac;
        default: break;
    }

    ctx->pc = 0x24a500u;

label_24a500:
    // 0x24a500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24a504:
    // 0x24a504: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24a504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24a508:
    // 0x24a508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24a50c:
    // 0x24a50c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24a510:
    // 0x24a510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a514:
    // 0x24a514: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x24a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_24a518:
    // 0x24a518: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
label_24a51c:
    if (ctx->pc == 0x24A51Cu) {
        ctx->pc = 0x24A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A518u;
        // 0x24a51c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A520u;
        goto label_24a520;
    }
    ctx->pc = 0x24A518u;
    {
        const bool branch_taken_0x24a518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24a518) {
            ctx->pc = 0x24A51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A518u;
            // 0x24a51c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A5A0u;
            goto label_24a5a0;
        }
    }
    ctx->pc = 0x24A520u;
label_24a520:
    // 0x24a520: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24a520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24a524:
    // 0x24a524: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24a528:
    // 0x24a528: 0x40f809  jalr        $v0
label_24a52c:
    if (ctx->pc == 0x24A52Cu) {
        ctx->pc = 0x24A530u;
        goto label_24a530;
    }
    ctx->pc = 0x24A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A530u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A528u, 0x24A530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A530u;
label_24a530:
    // 0x24a530: 0xc08dab6  jal         func_236AD8
label_24a534:
    if (ctx->pc == 0x24A534u) {
        ctx->pc = 0x24A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A530u;
        // 0x24a534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A538u;
        goto label_24a538;
    }
    ctx->pc = 0x24A530u;
    SET_GPR_U32(ctx, 31, 0x24A538u);
    ctx->pc = 0x24A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A530u;
    // 0x24a534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x24A530u, 0x24A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A538u;
label_24a538:
    // 0x24a538: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_24a53c:
    if (ctx->pc == 0x24A53Cu) {
        ctx->pc = 0x24A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A538u;
        // 0x24a53c: 0x8e070334  lw          $a3, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A540u;
        goto label_24a540;
    }
    ctx->pc = 0x24A538u;
    {
        const bool branch_taken_0x24a538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a538) {
            ctx->pc = 0x24A53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A538u;
            // 0x24a53c: 0x8e070334  lw          $a3, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A554u;
            goto label_24a554;
        }
    }
    ctx->pc = 0x24A540u;
label_24a540:
    // 0x24a540: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_24a544:
    // 0x24a544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a548:
    // 0x24a548: 0xc0bf056  jal         func_2FC158
label_24a54c:
    if (ctx->pc == 0x24A54Cu) {
        ctx->pc = 0x24A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A548u;
        // 0x24a54c: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A550u;
        goto label_24a550;
    }
    ctx->pc = 0x24A548u;
    SET_GPR_U32(ctx, 31, 0x24A550u);
    ctx->pc = 0x24A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A548u;
    // 0x24a54c: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC158u, 0x24A548u, 0x24A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A550u;
label_24a550:
    // 0x24a550: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a554:
    // 0x24a554: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x24a554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_24a558:
    // 0x24a558: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_24a55c:
    if (ctx->pc == 0x24A55Cu) {
        ctx->pc = 0x24A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A558u;
        // 0x24a55c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A560u;
        goto label_24a560;
    }
    ctx->pc = 0x24A558u;
    {
        const bool branch_taken_0x24a558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A558u;
        // 0x24a55c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a558) {
            ctx->pc = 0x24A584u;
            goto label_24a584;
        }
    }
    ctx->pc = 0x24A560u;
label_24a560:
    // 0x24a560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a564:
    // 0x24a564: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x24a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_24a568:
    // 0x24a568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24a56c:
    // 0x24a56c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_24a570:
    if (ctx->pc == 0x24A570u) {
        ctx->pc = 0x24A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A56Cu;
        // 0x24a570: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A574u;
        goto label_24a574;
    }
    ctx->pc = 0x24A56Cu;
    {
        const bool branch_taken_0x24a56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A56Cu;
        // 0x24a570: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a56c) {
            ctx->pc = 0x24A584u;
            goto label_24a584;
        }
    }
    ctx->pc = 0x24A574u;
label_24a574:
    // 0x24a574: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x24a574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_24a578:
    // 0x24a578: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24a57c:
    if (ctx->pc == 0x24A57Cu) {
        ctx->pc = 0x24A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A578u;
        // 0x24a57c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A580u;
        goto label_24a580;
    }
    ctx->pc = 0x24A578u;
    {
        const bool branch_taken_0x24a578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A578u;
        // 0x24a57c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a578) {
            ctx->pc = 0x24A568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a568;
        }
    }
    ctx->pc = 0x24A580u;
label_24a580:
    // 0x24a580: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_24a584:
    // 0x24a584: 0x24a59dc0  addiu       $a1, $a1, -0x6240
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942144));
label_24a588:
    // 0x24a588: 0xc073fde  jal         func_1CFF78
label_24a58c:
    if (ctx->pc == 0x24A58Cu) {
        ctx->pc = 0x24A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A588u;
        // 0x24a58c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A590u;
        goto label_24a590;
    }
    ctx->pc = 0x24A588u;
    SET_GPR_U32(ctx, 31, 0x24A590u);
    ctx->pc = 0x24A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A588u;
    // 0x24a58c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x24A588u, 0x24A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A590u;
label_24a590:
    // 0x24a590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a594:
    // 0x24a594: 0xc08a15a  jal         func_228568
label_24a598:
    if (ctx->pc == 0x24A598u) {
        ctx->pc = 0x24A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A594u;
        // 0x24a598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A59Cu;
        goto label_24a59c;
    }
    ctx->pc = 0x24A594u;
    SET_GPR_U32(ctx, 31, 0x24A59Cu);
    ctx->pc = 0x24A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A594u;
    // 0x24a598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x24A594u, 0x24A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A59Cu;
label_24a59c:
    // 0x24a59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a5a0:
    // 0x24a5a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24a5a4:
    // 0x24a5a4: 0x3e00008  jr          $ra
label_24a5a8:
    if (ctx->pc == 0x24A5A8u) {
        ctx->pc = 0x24A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5A4u;
        // 0x24a5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5ACu;
        goto label_24a5ac;
    }
    ctx->pc = 0x24A5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5A4u;
        // 0x24a5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A5ACu;
label_24a5ac:
    // 0x24a5ac: 0x0  nop
    ctx->pc = 0x24a5acu;
    // NOP
    ctx->pc = 0x24a5b0u;
}
