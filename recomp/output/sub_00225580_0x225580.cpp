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

// Function: sub_00225580
// Address: 0x225580 - 0x225678
void sub_00225580_0x225580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225580_0x225580");
#endif

    switch (ctx->pc) {
        case 0x225580u: goto label_225580;
        case 0x225584u: goto label_225584;
        case 0x225588u: goto label_225588;
        case 0x22558cu: goto label_22558c;
        case 0x225590u: goto label_225590;
        case 0x225594u: goto label_225594;
        case 0x225598u: goto label_225598;
        case 0x22559cu: goto label_22559c;
        case 0x2255a0u: goto label_2255a0;
        case 0x2255a4u: goto label_2255a4;
        case 0x2255a8u: goto label_2255a8;
        case 0x2255acu: goto label_2255ac;
        case 0x2255b0u: goto label_2255b0;
        case 0x2255b4u: goto label_2255b4;
        case 0x2255b8u: goto label_2255b8;
        case 0x2255bcu: goto label_2255bc;
        case 0x2255c0u: goto label_2255c0;
        case 0x2255c4u: goto label_2255c4;
        case 0x2255c8u: goto label_2255c8;
        case 0x2255ccu: goto label_2255cc;
        case 0x2255d0u: goto label_2255d0;
        case 0x2255d4u: goto label_2255d4;
        case 0x2255d8u: goto label_2255d8;
        case 0x2255dcu: goto label_2255dc;
        case 0x2255e0u: goto label_2255e0;
        case 0x2255e4u: goto label_2255e4;
        case 0x2255e8u: goto label_2255e8;
        case 0x2255ecu: goto label_2255ec;
        case 0x2255f0u: goto label_2255f0;
        case 0x2255f4u: goto label_2255f4;
        case 0x2255f8u: goto label_2255f8;
        case 0x2255fcu: goto label_2255fc;
        case 0x225600u: goto label_225600;
        case 0x225604u: goto label_225604;
        case 0x225608u: goto label_225608;
        case 0x22560cu: goto label_22560c;
        case 0x225610u: goto label_225610;
        case 0x225614u: goto label_225614;
        case 0x225618u: goto label_225618;
        case 0x22561cu: goto label_22561c;
        case 0x225620u: goto label_225620;
        case 0x225624u: goto label_225624;
        case 0x225628u: goto label_225628;
        case 0x22562cu: goto label_22562c;
        case 0x225630u: goto label_225630;
        case 0x225634u: goto label_225634;
        case 0x225638u: goto label_225638;
        case 0x22563cu: goto label_22563c;
        case 0x225640u: goto label_225640;
        case 0x225644u: goto label_225644;
        case 0x225648u: goto label_225648;
        case 0x22564cu: goto label_22564c;
        case 0x225650u: goto label_225650;
        case 0x225654u: goto label_225654;
        case 0x225658u: goto label_225658;
        case 0x22565cu: goto label_22565c;
        case 0x225660u: goto label_225660;
        case 0x225664u: goto label_225664;
        case 0x225668u: goto label_225668;
        case 0x22566cu: goto label_22566c;
        case 0x225670u: goto label_225670;
        case 0x225674u: goto label_225674;
        default: break;
    }

    ctx->pc = 0x225580u;

label_225580:
    // 0x225580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_225584:
    // 0x225584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_225588:
    // 0x225588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22558c:
    // 0x22558c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22558cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225590:
    // 0x225590: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_225594:
    // 0x225594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_225598:
    // 0x225598: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x225598u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_22559c:
    // 0x22559c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2255a0:
    // 0x2255a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2255a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2255a4:
    // 0x2255a4: 0xc0aca04  jal         func_2B2810
label_2255a8:
    if (ctx->pc == 0x2255A8u) {
        ctx->pc = 0x2255A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255A4u;
        // 0x2255a8: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255ACu;
        goto label_2255ac;
    }
    ctx->pc = 0x2255A4u;
    SET_GPR_U32(ctx, 31, 0x2255ACu);
    ctx->pc = 0x2255A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255A4u;
    // 0x2255a8: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2810u, 0x2255A4u, 0x2255ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255ACu;
label_2255ac:
    // 0x2255ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2255acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2255b0:
    // 0x2255b0: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x2255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_2255b4:
    // 0x2255b4: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_2255b8:
    if (ctx->pc == 0x2255B8u) {
        ctx->pc = 0x2255BCu;
        goto label_2255bc;
    }
    ctx->pc = 0x2255B4u;
    {
        const bool branch_taken_0x2255b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2255b4) {
            ctx->pc = 0x2255C4u;
            goto label_2255c4;
        }
    }
    ctx->pc = 0x2255BCu;
label_2255bc:
    // 0x2255bc: 0x10000026  b           . + 4 + (0x26 << 2)
label_2255c0:
    if (ctx->pc == 0x2255C0u) {
        ctx->pc = 0x2255C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255BCu;
        // 0x2255c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255C4u;
        goto label_2255c4;
    }
    ctx->pc = 0x2255BCu;
    {
        const bool branch_taken_0x2255bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255BCu;
        // 0x2255c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255bc) {
            ctx->pc = 0x225658u;
            goto label_225658;
        }
    }
    ctx->pc = 0x2255C4u;
label_2255c4:
    // 0x2255c4: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_2255c8:
    if (ctx->pc == 0x2255C8u) {
        ctx->pc = 0x2255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255C4u;
        // 0x2255c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255CCu;
        goto label_2255cc;
    }
    ctx->pc = 0x2255C4u;
    {
        const bool branch_taken_0x2255c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255C4u;
        // 0x2255c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255c4) {
            ctx->pc = 0x2255ECu;
            goto label_2255ec;
        }
    }
    ctx->pc = 0x2255CCu;
label_2255cc:
    // 0x2255cc: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2255ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2255d0:
    // 0x2255d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2255d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2255d4:
    // 0x2255d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2255d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2255d8:
    // 0x2255d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2255dc:
    // 0x2255dc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2255dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2255e0:
    // 0x2255e0: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2255e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2255e4:
    // 0x2255e4: 0x40f809  jalr        $v0
label_2255e8:
    if (ctx->pc == 0x2255E8u) {
        ctx->pc = 0x2255E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255E4u;
        // 0x2255e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255ECu;
        goto label_2255ec;
    }
    ctx->pc = 0x2255E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2255ECu);
        ctx->pc = 0x2255E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255E4u;
        // 0x2255e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2255E4u, 0x2255ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2255ECu;
label_2255ec:
    // 0x2255ec: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
label_2255f0:
    if (ctx->pc == 0x2255F0u) {
        ctx->pc = 0x2255F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255ECu;
        // 0x2255f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2255F4u;
        goto label_2255f4;
    }
    ctx->pc = 0x2255ECu;
    {
        const bool branch_taken_0x2255ec = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2255F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255ECu;
        // 0x2255f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255ec) {
            ctx->pc = 0x225610u;
            goto label_225610;
        }
    }
    ctx->pc = 0x2255F4u;
label_2255f4:
    // 0x2255f4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2255f8:
    // 0x2255f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2255f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2255fc:
    // 0x2255fc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2255fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_225600:
    // 0x225600: 0x40f809  jalr        $v0
label_225604:
    if (ctx->pc == 0x225604u) {
        ctx->pc = 0x225604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225600u;
        // 0x225604: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225608u;
        goto label_225608;
    }
    ctx->pc = 0x225600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225608u);
        ctx->pc = 0x225604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225600u;
        // 0x225604: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225600u, 0x225608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225608u;
label_225608:
    // 0x225608: 0x10000013  b           . + 4 + (0x13 << 2)
label_22560c:
    if (ctx->pc == 0x22560Cu) {
        ctx->pc = 0x22560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225608u;
        // 0x22560c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225610u;
        goto label_225610;
    }
    ctx->pc = 0x225608u;
    {
        const bool branch_taken_0x225608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225608u;
        // 0x22560c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225608) {
            ctx->pc = 0x225658u;
            goto label_225658;
        }
    }
    ctx->pc = 0x225610u;
label_225610:
    // 0x225610: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_225614:
    // 0x225614: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x225614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_225618:
    // 0x225618: 0x8c6495a8  lw          $a0, -0x6A58($v1)
    ctx->pc = 0x225618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940072)));
label_22561c:
    // 0x22561c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225620:
    // 0x225620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225624:
    // 0x225624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225628:
    // 0x225628: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22562c:
    // 0x22562c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22562cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225630:
    // 0x225630: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x225630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_225634:
    // 0x225634: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x225634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_225638:
    // 0x225638: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_22563c:
    // 0x22563c: 0x40f809  jalr        $v0
label_225640:
    if (ctx->pc == 0x225640u) {
        ctx->pc = 0x225640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22563Cu;
        // 0x225640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225644u;
        goto label_225644;
    }
    ctx->pc = 0x22563Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225644u);
        ctx->pc = 0x225640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22563Cu;
        // 0x225640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22563Cu, 0x225644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225644u;
label_225644:
    // 0x225644: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x225644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_225648:
    // 0x225648: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x225648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_22564c:
    // 0x22564c: 0x40f809  jalr        $v0
label_225650:
    if (ctx->pc == 0x225650u) {
        ctx->pc = 0x225650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22564Cu;
        // 0x225650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225654u;
        goto label_225654;
    }
    ctx->pc = 0x22564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225654u);
        ctx->pc = 0x225650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22564Cu;
        // 0x225650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22564Cu, 0x225654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225654u;
label_225654:
    // 0x225654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225658:
    // 0x225658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22565c:
    // 0x22565c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22565cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_225660:
    // 0x225660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225664:
    // 0x225664: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_225668:
    // 0x225668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22566c:
    // 0x22566c: 0x3e00008  jr          $ra
label_225670:
    if (ctx->pc == 0x225670u) {
        ctx->pc = 0x225670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22566Cu;
        // 0x225670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225674u;
        goto label_225674;
    }
    ctx->pc = 0x22566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22566Cu;
        // 0x225670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225674u;
label_225674:
    // 0x225674: 0x0  nop
    ctx->pc = 0x225674u;
    // NOP
    ctx->pc = 0x225678u;
}
