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

// Function: sub_00336690
// Address: 0x336690 - 0x336720
void sub_00336690_0x336690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336690_0x336690");
#endif

    switch (ctx->pc) {
        case 0x336690u: goto label_336690;
        case 0x336694u: goto label_336694;
        case 0x336698u: goto label_336698;
        case 0x33669cu: goto label_33669c;
        case 0x3366a0u: goto label_3366a0;
        case 0x3366a4u: goto label_3366a4;
        case 0x3366a8u: goto label_3366a8;
        case 0x3366acu: goto label_3366ac;
        case 0x3366b0u: goto label_3366b0;
        case 0x3366b4u: goto label_3366b4;
        case 0x3366b8u: goto label_3366b8;
        case 0x3366bcu: goto label_3366bc;
        case 0x3366c0u: goto label_3366c0;
        case 0x3366c4u: goto label_3366c4;
        case 0x3366c8u: goto label_3366c8;
        case 0x3366ccu: goto label_3366cc;
        case 0x3366d0u: goto label_3366d0;
        case 0x3366d4u: goto label_3366d4;
        case 0x3366d8u: goto label_3366d8;
        case 0x3366dcu: goto label_3366dc;
        case 0x3366e0u: goto label_3366e0;
        case 0x3366e4u: goto label_3366e4;
        case 0x3366e8u: goto label_3366e8;
        case 0x3366ecu: goto label_3366ec;
        case 0x3366f0u: goto label_3366f0;
        case 0x3366f4u: goto label_3366f4;
        case 0x3366f8u: goto label_3366f8;
        case 0x3366fcu: goto label_3366fc;
        case 0x336700u: goto label_336700;
        case 0x336704u: goto label_336704;
        case 0x336708u: goto label_336708;
        case 0x33670cu: goto label_33670c;
        case 0x336710u: goto label_336710;
        case 0x336714u: goto label_336714;
        case 0x336718u: goto label_336718;
        case 0x33671cu: goto label_33671c;
        default: break;
    }

    ctx->pc = 0x336690u;

label_336690:
    // 0x336690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_336694:
    // 0x336694: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x336694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_336698:
    // 0x336698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33669c:
    // 0x33669c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33669cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3366a0:
    // 0x3366a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3366a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3366a4:
    // 0x3366a4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3366a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_3366a8:
    // 0x3366a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3366a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3366ac:
    // 0x3366ac: 0xc0b2af0  jal         func_2CABC0
label_3366b0:
    if (ctx->pc == 0x3366B0u) {
        ctx->pc = 0x3366B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366ACu;
        // 0x3366b0: 0x24846e80  addiu       $a0, $a0, 0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3366B4u;
        goto label_3366b4;
    }
    ctx->pc = 0x3366ACu;
    SET_GPR_U32(ctx, 31, 0x3366B4u);
    ctx->pc = 0x3366B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3366ACu;
    // 0x3366b0: 0x24846e80  addiu       $a0, $a0, 0x6E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3366ACu, 0x3366B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366B4u;
label_3366b4:
    // 0x3366b4: 0xc0cd4b8  jal         func_3352E0
label_3366b8:
    if (ctx->pc == 0x3366B8u) {
        ctx->pc = 0x3366B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366B4u;
        // 0x3366b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3366BCu;
        goto label_3366bc;
    }
    ctx->pc = 0x3366B4u;
    SET_GPR_U32(ctx, 31, 0x3366BCu);
    ctx->pc = 0x3366B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3366B4u;
    // 0x3366b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352E0u, 0x3366B4u, 0x3366BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366BCu;
label_3366bc:
    // 0x3366bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3366bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3366c0:
    // 0x3366c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3366c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3366c4:
    // 0x3366c4: 0xc0cd544  jal         func_335510
label_3366c8:
    if (ctx->pc == 0x3366C8u) {
        ctx->pc = 0x3366C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366C4u;
        // 0x3366c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3366CCu;
        goto label_3366cc;
    }
    ctx->pc = 0x3366C4u;
    SET_GPR_U32(ctx, 31, 0x3366CCu);
    ctx->pc = 0x3366C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3366C4u;
    // 0x3366c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335510u, 0x3366C4u, 0x3366CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3366CCu;
label_3366cc:
    // 0x3366cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3366ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3366d0:
    // 0x3366d0: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_3366d4:
    if (ctx->pc == 0x3366D4u) {
        ctx->pc = 0x3366D8u;
        goto label_3366d8;
    }
    ctx->pc = 0x3366D0u;
    {
        const bool branch_taken_0x3366d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3366d0) {
            ctx->pc = 0x3366FCu;
            goto label_3366fc;
        }
    }
    ctx->pc = 0x3366D8u;
label_3366d8:
    // 0x3366d8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3366dc:
    if (ctx->pc == 0x3366DCu) {
        ctx->pc = 0x3366DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366D8u;
        // 0x3366dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3366E0u;
        goto label_3366e0;
    }
    ctx->pc = 0x3366D8u;
    {
        const bool branch_taken_0x3366d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3366DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366D8u;
        // 0x3366dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366d8) {
            ctx->pc = 0x33670Cu;
            goto label_33670c;
        }
    }
    ctx->pc = 0x3366E0u;
label_3366e0:
    // 0x3366e0: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x3366e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_3366e4:
    // 0x3366e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3366e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3366e8:
    // 0x3366e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3366ec:
    // 0x3366ec: 0x40f809  jalr        $v0
label_3366f0:
    if (ctx->pc == 0x3366F0u) {
        ctx->pc = 0x3366F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366ECu;
        // 0x3366f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3366F4u;
        goto label_3366f4;
    }
    ctx->pc = 0x3366ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3366F4u);
        ctx->pc = 0x3366F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366ECu;
        // 0x3366f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3366ECu, 0x3366F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3366F4u;
label_3366f4:
    // 0x3366f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3366f8:
    if (ctx->pc == 0x3366F8u) {
        ctx->pc = 0x3366F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366F4u;
        // 0x3366f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3366FCu;
        goto label_3366fc;
    }
    ctx->pc = 0x3366F4u;
    {
        const bool branch_taken_0x3366f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3366F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366F4u;
        // 0x3366f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366f4) {
            ctx->pc = 0x33670Cu;
            goto label_33670c;
        }
    }
    ctx->pc = 0x3366FCu;
label_3366fc:
    // 0x3366fc: 0xc0cd964  jal         func_336590
label_336700:
    if (ctx->pc == 0x336700u) {
        ctx->pc = 0x336700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366FCu;
        // 0x336700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336704u;
        goto label_336704;
    }
    ctx->pc = 0x3366FCu;
    SET_GPR_U32(ctx, 31, 0x336704u);
    ctx->pc = 0x336700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3366FCu;
    // 0x336700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336590u, 0x3366FCu, 0x336704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336704u;
label_336704:
    // 0x336704: 0xae2201b8  sw          $v0, 0x1B8($s1)
    ctx->pc = 0x336704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 2));
label_336708:
    // 0x336708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33670c:
    // 0x33670c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33670cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_336710:
    // 0x336710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336714:
    // 0x336714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336718:
    // 0x336718: 0x3e00008  jr          $ra
label_33671c:
    if (ctx->pc == 0x33671Cu) {
        ctx->pc = 0x33671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336718u;
        // 0x33671c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336720u;
        goto label_fallthrough_0x336718;
    }
    ctx->pc = 0x336718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336718u;
        // 0x33671c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336718:
    ctx->pc = 0x336720u;
}
