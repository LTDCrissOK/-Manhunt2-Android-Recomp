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

// Function: sub_003655D8
// Address: 0x3655d8 - 0x3656a8
void sub_003655D8_0x3655d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003655D8_0x3655d8");
#endif

    switch (ctx->pc) {
        case 0x3655d8u: goto label_3655d8;
        case 0x3655dcu: goto label_3655dc;
        case 0x3655e0u: goto label_3655e0;
        case 0x3655e4u: goto label_3655e4;
        case 0x3655e8u: goto label_3655e8;
        case 0x3655ecu: goto label_3655ec;
        case 0x3655f0u: goto label_3655f0;
        case 0x3655f4u: goto label_3655f4;
        case 0x3655f8u: goto label_3655f8;
        case 0x3655fcu: goto label_3655fc;
        case 0x365600u: goto label_365600;
        case 0x365604u: goto label_365604;
        case 0x365608u: goto label_365608;
        case 0x36560cu: goto label_36560c;
        case 0x365610u: goto label_365610;
        case 0x365614u: goto label_365614;
        case 0x365618u: goto label_365618;
        case 0x36561cu: goto label_36561c;
        case 0x365620u: goto label_365620;
        case 0x365624u: goto label_365624;
        case 0x365628u: goto label_365628;
        case 0x36562cu: goto label_36562c;
        case 0x365630u: goto label_365630;
        case 0x365634u: goto label_365634;
        case 0x365638u: goto label_365638;
        case 0x36563cu: goto label_36563c;
        case 0x365640u: goto label_365640;
        case 0x365644u: goto label_365644;
        case 0x365648u: goto label_365648;
        case 0x36564cu: goto label_36564c;
        case 0x365650u: goto label_365650;
        case 0x365654u: goto label_365654;
        case 0x365658u: goto label_365658;
        case 0x36565cu: goto label_36565c;
        case 0x365660u: goto label_365660;
        case 0x365664u: goto label_365664;
        case 0x365668u: goto label_365668;
        case 0x36566cu: goto label_36566c;
        case 0x365670u: goto label_365670;
        case 0x365674u: goto label_365674;
        case 0x365678u: goto label_365678;
        case 0x36567cu: goto label_36567c;
        case 0x365680u: goto label_365680;
        case 0x365684u: goto label_365684;
        case 0x365688u: goto label_365688;
        case 0x36568cu: goto label_36568c;
        case 0x365690u: goto label_365690;
        case 0x365694u: goto label_365694;
        case 0x365698u: goto label_365698;
        case 0x36569cu: goto label_36569c;
        case 0x3656a0u: goto label_3656a0;
        case 0x3656a4u: goto label_3656a4;
        default: break;
    }

    ctx->pc = 0x3655d8u;

label_3655d8:
    // 0x3655d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3655d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3655dc:
    // 0x3655dc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_3655e0:
    // 0x3655e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3655e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3655e4:
    // 0x3655e4: 0x2444dc20  addiu       $a0, $v0, -0x23E0
    ctx->pc = 0x3655e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958112));
label_3655e8:
    // 0x3655e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3655e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3655ec:
    // 0x3655ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3655ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3655f0:
    // 0x3655f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3655f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3655f4:
    // 0x3655f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3655f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3655f8:
    // 0x3655f8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3655f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_3655fc:
    // 0x3655fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3655fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365600:
    // 0x365600: 0x10000008  b           . + 4 + (0x8 << 2)
label_365604:
    if (ctx->pc == 0x365604u) {
        ctx->pc = 0x365604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365600u;
        // 0x365604: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365608u;
        goto label_365608;
    }
    ctx->pc = 0x365600u;
    {
        const bool branch_taken_0x365600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365600u;
        // 0x365604: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365600) {
            ctx->pc = 0x365624u;
            goto label_365624;
        }
    }
    ctx->pc = 0x365608u;
label_365608:
    // 0x365608: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x365608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_36560c:
    // 0x36560c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x36560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_365610:
    // 0x365610: 0x60f809  jalr        $v1
label_365614:
    if (ctx->pc == 0x365614u) {
        ctx->pc = 0x365618u;
        goto label_365618;
    }
    ctx->pc = 0x365610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x365618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365610u, 0x365618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365618u;
label_365618:
    // 0x365618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36561c:
    // 0x36561c: 0xc0fbd4c  jal         func_3EF530
label_365620:
    if (ctx->pc == 0x365620u) {
        ctx->pc = 0x365620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36561Cu;
        // 0x365620: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365624u;
        goto label_365624;
    }
    ctx->pc = 0x36561Cu;
    SET_GPR_U32(ctx, 31, 0x365624u);
    ctx->pc = 0x365620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36561Cu;
    // 0x365620: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF530u, 0x36561Cu, 0x365624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365624u;
label_365624:
    // 0x365624: 0x2630dc20  addiu       $s0, $s1, -0x23E0
    ctx->pc = 0x365624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958112));
label_365628:
    // 0x365628: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36562c:
    // 0x36562c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x36562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_365630:
    // 0x365630: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_365634:
    if (ctx->pc == 0x365634u) {
        ctx->pc = 0x365634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365630u;
        // 0x365634: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365638u;
        goto label_365638;
    }
    ctx->pc = 0x365630u;
    {
        const bool branch_taken_0x365630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365630u;
        // 0x365634: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365630) {
            ctx->pc = 0x36563Cu;
            goto label_36563c;
        }
    }
    ctx->pc = 0x365638u;
label_365638:
    // 0x365638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x365638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36563c:
    // 0x36563c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_365640:
    if (ctx->pc == 0x365640u) {
        ctx->pc = 0x365640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36563Cu;
        // 0x365640: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365644u;
        goto label_365644;
    }
    ctx->pc = 0x36563Cu;
    {
        const bool branch_taken_0x36563c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x365640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36563Cu;
        // 0x365640: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36563c) {
            ctx->pc = 0x365608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365608;
        }
    }
    ctx->pc = 0x365644u;
label_365644:
    // 0x365644: 0x2642dc30  addiu       $v0, $s2, -0x23D0
    ctx->pc = 0x365644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958128));
label_365648:
    // 0x365648: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x365648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36564c:
    // 0x36564c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36564cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365650:
    // 0x365650: 0x10000008  b           . + 4 + (0x8 << 2)
label_365654:
    if (ctx->pc == 0x365654u) {
        ctx->pc = 0x365654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365650u;
        // 0x365654: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365658u;
        goto label_365658;
    }
    ctx->pc = 0x365650u;
    {
        const bool branch_taken_0x365650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365650u;
        // 0x365654: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365650) {
            ctx->pc = 0x365674u;
            goto label_365674;
        }
    }
    ctx->pc = 0x365658u;
label_365658:
    // 0x365658: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x365658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_36565c:
    // 0x36565c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x36565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_365660:
    // 0x365660: 0x60f809  jalr        $v1
label_365664:
    if (ctx->pc == 0x365664u) {
        ctx->pc = 0x365668u;
        goto label_365668;
    }
    ctx->pc = 0x365660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x365668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365660u, 0x365668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365668u;
label_365668:
    // 0x365668: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x365668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_36566c:
    // 0x36566c: 0xc0fbcc6  jal         func_3EF318
label_365670:
    if (ctx->pc == 0x365670u) {
        ctx->pc = 0x365670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36566Cu;
        // 0x365670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365674u;
        goto label_365674;
    }
    ctx->pc = 0x36566Cu;
    SET_GPR_U32(ctx, 31, 0x365674u);
    ctx->pc = 0x365670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36566Cu;
    // 0x365670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF318u, 0x36566Cu, 0x365674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365674u;
label_365674:
    // 0x365674: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x365674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_365678:
    // 0x365678: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36567c:
    // 0x36567c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_365680:
    if (ctx->pc == 0x365680u) {
        ctx->pc = 0x365680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36567Cu;
        // 0x365680: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365684u;
        goto label_365684;
    }
    ctx->pc = 0x36567Cu;
    {
        const bool branch_taken_0x36567c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36567Cu;
        // 0x365680: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36567c) {
            ctx->pc = 0x365688u;
            goto label_365688;
        }
    }
    ctx->pc = 0x365684u;
label_365684:
    // 0x365684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x365684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365688:
    // 0x365688: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_36568c:
    if (ctx->pc == 0x36568Cu) {
        ctx->pc = 0x36568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365688u;
        // 0x36568c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365690u;
        goto label_365690;
    }
    ctx->pc = 0x365688u;
    {
        const bool branch_taken_0x365688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365688u;
        // 0x36568c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365688) {
            ctx->pc = 0x365658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365658;
        }
    }
    ctx->pc = 0x365690u;
label_365690:
    // 0x365690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_365694:
    // 0x365694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x365694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_365698:
    // 0x365698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36569c:
    // 0x36569c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36569cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3656a0:
    // 0x3656a0: 0x3e00008  jr          $ra
label_3656a4:
    if (ctx->pc == 0x3656A4u) {
        ctx->pc = 0x3656A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656A0u;
        // 0x3656a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656A8u;
        goto label_fallthrough_0x3656a0;
    }
    ctx->pc = 0x3656A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3656A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656A0u;
        // 0x3656a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3656A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3656a0:
    ctx->pc = 0x3656A8u;
}
