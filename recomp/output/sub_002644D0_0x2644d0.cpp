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

// Function: sub_002644D0
// Address: 0x2644d0 - 0x264568
void sub_002644D0_0x2644d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002644D0_0x2644d0");
#endif

    switch (ctx->pc) {
        case 0x2644d0u: goto label_2644d0;
        case 0x2644d4u: goto label_2644d4;
        case 0x2644d8u: goto label_2644d8;
        case 0x2644dcu: goto label_2644dc;
        case 0x2644e0u: goto label_2644e0;
        case 0x2644e4u: goto label_2644e4;
        case 0x2644e8u: goto label_2644e8;
        case 0x2644ecu: goto label_2644ec;
        case 0x2644f0u: goto label_2644f0;
        case 0x2644f4u: goto label_2644f4;
        case 0x2644f8u: goto label_2644f8;
        case 0x2644fcu: goto label_2644fc;
        case 0x264500u: goto label_264500;
        case 0x264504u: goto label_264504;
        case 0x264508u: goto label_264508;
        case 0x26450cu: goto label_26450c;
        case 0x264510u: goto label_264510;
        case 0x264514u: goto label_264514;
        case 0x264518u: goto label_264518;
        case 0x26451cu: goto label_26451c;
        case 0x264520u: goto label_264520;
        case 0x264524u: goto label_264524;
        case 0x264528u: goto label_264528;
        case 0x26452cu: goto label_26452c;
        case 0x264530u: goto label_264530;
        case 0x264534u: goto label_264534;
        case 0x264538u: goto label_264538;
        case 0x26453cu: goto label_26453c;
        case 0x264540u: goto label_264540;
        case 0x264544u: goto label_264544;
        case 0x264548u: goto label_264548;
        case 0x26454cu: goto label_26454c;
        case 0x264550u: goto label_264550;
        case 0x264554u: goto label_264554;
        case 0x264558u: goto label_264558;
        case 0x26455cu: goto label_26455c;
        case 0x264560u: goto label_264560;
        case 0x264564u: goto label_264564;
        default: break;
    }

    ctx->pc = 0x2644d0u;

label_2644d0:
    // 0x2644d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2644d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2644d4:
    // 0x2644d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2644d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2644d8:
    // 0x2644d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2644d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2644dc:
    // 0x2644dc: 0xc098374  jal         func_260DD0
label_2644e0:
    if (ctx->pc == 0x2644E0u) {
        ctx->pc = 0x2644E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644DCu;
        // 0x2644e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644E4u;
        goto label_2644e4;
    }
    ctx->pc = 0x2644DCu;
    SET_GPR_U32(ctx, 31, 0x2644E4u);
    ctx->pc = 0x2644E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644DCu;
    // 0x2644e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260DD0u, 0x2644DCu, 0x2644E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644E4u;
label_2644e4:
    // 0x2644e4: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x2644e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_2644e8:
    // 0x2644e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2644ec:
    if (ctx->pc == 0x2644ECu) {
        ctx->pc = 0x2644ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644E8u;
        // 0x2644ec: 0x8e040278  lw          $a0, 0x278($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644F0u;
        goto label_2644f0;
    }
    ctx->pc = 0x2644E8u;
    {
        const bool branch_taken_0x2644e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644e8) {
            ctx->pc = 0x2644ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2644E8u;
            // 0x2644ec: 0x8e040278  lw          $a0, 0x278($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264504u;
            goto label_264504;
        }
    }
    ctx->pc = 0x2644F0u;
label_2644f0:
    // 0x2644f0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2644f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2644f4:
    // 0x2644f4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2644f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2644f8:
    // 0x2644f8: 0x40f809  jalr        $v0
label_2644fc:
    if (ctx->pc == 0x2644FCu) {
        ctx->pc = 0x264500u;
        goto label_264500;
    }
    ctx->pc = 0x2644F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2644F8u, 0x264500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264500u;
label_264500:
    // 0x264500: 0x8e040278  lw          $a0, 0x278($s0)
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_264504:
    // 0x264504: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_264508:
    if (ctx->pc == 0x264508u) {
        ctx->pc = 0x264508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264504u;
        // 0x264508: 0x8e04027c  lw          $a0, 0x27C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26450Cu;
        goto label_26450c;
    }
    ctx->pc = 0x264504u;
    {
        const bool branch_taken_0x264504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264504) {
            ctx->pc = 0x264508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264504u;
            // 0x264508: 0x8e04027c  lw          $a0, 0x27C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264520u;
            goto label_264520;
        }
    }
    ctx->pc = 0x26450Cu;
label_26450c:
    // 0x26450c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x26450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_264510:
    // 0x264510: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x264510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_264514:
    // 0x264514: 0x40f809  jalr        $v0
label_264518:
    if (ctx->pc == 0x264518u) {
        ctx->pc = 0x26451Cu;
        goto label_26451c;
    }
    ctx->pc = 0x264514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26451Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264514u, 0x26451Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26451Cu;
label_26451c:
    // 0x26451c: 0x8e04027c  lw          $a0, 0x27C($s0)
    ctx->pc = 0x26451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_264520:
    // 0x264520: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_264524:
    if (ctx->pc == 0x264524u) {
        ctx->pc = 0x264524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264520u;
        // 0x264524: 0x8e050298  lw          $a1, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264528u;
        goto label_264528;
    }
    ctx->pc = 0x264520u;
    {
        const bool branch_taken_0x264520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264520) {
            ctx->pc = 0x264524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264520u;
            // 0x264524: 0x8e050298  lw          $a1, 0x298($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26453Cu;
            goto label_26453c;
        }
    }
    ctx->pc = 0x264528u;
label_264528:
    // 0x264528: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x264528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_26452c:
    // 0x26452c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_264530:
    // 0x264530: 0x40f809  jalr        $v0
label_264534:
    if (ctx->pc == 0x264534u) {
        ctx->pc = 0x264538u;
        goto label_264538;
    }
    ctx->pc = 0x264530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264538u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264530u, 0x264538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264538u;
label_264538:
    // 0x264538: 0x8e050298  lw          $a1, 0x298($s0)
    ctx->pc = 0x264538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_26453c:
    // 0x26453c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_264540:
    if (ctx->pc == 0x264540u) {
        ctx->pc = 0x264540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26453Cu;
        // 0x264540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264544u;
        goto label_264544;
    }
    ctx->pc = 0x26453Cu;
    {
        const bool branch_taken_0x26453c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x264540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26453Cu;
        // 0x264540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26453c) {
            ctx->pc = 0x26455Cu;
            goto label_26455c;
        }
    }
    ctx->pc = 0x264544u;
label_264544:
    // 0x264544: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_264548:
    // 0x264548: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_26454c:
    if (ctx->pc == 0x26454Cu) {
        ctx->pc = 0x26454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264548u;
        // 0x26454c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264550u;
        goto label_264550;
    }
    ctx->pc = 0x264548u;
    {
        const bool branch_taken_0x264548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264548u;
        // 0x26454c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264548) {
            ctx->pc = 0x264560u;
            goto label_264560;
        }
    }
    ctx->pc = 0x264550u;
label_264550:
    // 0x264550: 0xc0c8716  jal         func_321C58
label_264554:
    if (ctx->pc == 0x264554u) {
        ctx->pc = 0x264558u;
        goto label_264558;
    }
    ctx->pc = 0x264550u;
    SET_GPR_U32(ctx, 31, 0x264558u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x264550u, 0x264558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264558u;
label_264558:
    // 0x264558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26455c:
    // 0x26455c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_264560:
    // 0x264560: 0x3e00008  jr          $ra
label_264564:
    if (ctx->pc == 0x264564u) {
        ctx->pc = 0x264564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264560u;
        // 0x264564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264568u;
        goto label_fallthrough_0x264560;
    }
    ctx->pc = 0x264560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264560u;
        // 0x264564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x264560:
    ctx->pc = 0x264568u;
}
