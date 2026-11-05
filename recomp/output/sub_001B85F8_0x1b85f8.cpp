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

// Function: sub_001B85F8
// Address: 0x1b85f8 - 0x1b8710
void sub_001B85F8_0x1b85f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B85F8_0x1b85f8");
#endif

    switch (ctx->pc) {
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b85fcu: goto label_1b85fc;
        case 0x1b8600u: goto label_1b8600;
        case 0x1b8604u: goto label_1b8604;
        case 0x1b8608u: goto label_1b8608;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8614u: goto label_1b8614;
        case 0x1b8618u: goto label_1b8618;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8620u: goto label_1b8620;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8628u: goto label_1b8628;
        case 0x1b862cu: goto label_1b862c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8638u: goto label_1b8638;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8640u: goto label_1b8640;
        case 0x1b8644u: goto label_1b8644;
        case 0x1b8648u: goto label_1b8648;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b8650u: goto label_1b8650;
        case 0x1b8654u: goto label_1b8654;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        default: break;
    }

    ctx->pc = 0x1b85f8u;

label_1b85f8:
    // 0x1b85f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b85f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b85fc:
    // 0x1b85fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1b8600:
    // 0x1b8600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b8604:
    // 0x1b8604: 0x24421360  addiu       $v0, $v0, 0x1360
    ctx->pc = 0x1b8604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4960));
label_1b8608:
    // 0x1b8608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b860c:
    // 0x1b860c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b860cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8610:
    // 0x1b8610: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b8610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1b8614:
    // 0x1b8614: 0x26230160  addiu       $v1, $s1, 0x160
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1b8618:
    // 0x1b8618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b861c:
    // 0x1b861c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b861cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b8620:
    // 0x1b8620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b8624:
    // 0x1b8624: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x1b8624u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
label_1b8628:
    // 0x1b8628: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b8628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1b862c:
    // 0x1b862c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1b8630:
    if (ctx->pc == 0x1B8630u) {
        ctx->pc = 0x1B8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B862Cu;
        // 0x1b8630: 0xae220428  sw          $v0, 0x428($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8634u;
        goto label_1b8634;
    }
    ctx->pc = 0x1B862Cu;
    {
        const bool branch_taken_0x1b862c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B862Cu;
        // 0x1b8630: 0xae220428  sw          $v0, 0x428($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b862c) {
            ctx->pc = 0x1B8664u;
            goto label_1b8664;
        }
    }
    ctx->pc = 0x1B8634u;
label_1b8634:
    // 0x1b8634: 0x263003e0  addiu       $s0, $s1, 0x3E0
    ctx->pc = 0x1b8634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 992));
label_1b8638:
    // 0x1b8638: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
label_1b863c:
    if (ctx->pc == 0x1B863Cu) {
        ctx->pc = 0x1B863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8638u;
        // 0x1b863c: 0x32650001  andi        $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8640u;
        goto label_1b8640;
    }
    ctx->pc = 0x1B8638u;
    {
        const bool branch_taken_0x1b8638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8638u;
        // 0x1b863c: 0x32650001  andi        $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8638) {
            ctx->pc = 0x1B8668u;
            goto label_1b8668;
        }
    }
    ctx->pc = 0x1B8640u;
label_1b8640:
    // 0x1b8640: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1b8640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b8644:
    // 0x1b8644: 0x2610ffb0  addiu       $s0, $s0, -0x50
    ctx->pc = 0x1b8644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
label_1b8648:
    // 0x1b8648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b864c:
    // 0x1b864c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b8650:
    // 0x1b8650: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b8654:
    // 0x1b8654: 0x40f809  jalr        $v0
label_1b8658:
    if (ctx->pc == 0x1B8658u) {
        ctx->pc = 0x1B8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8654u;
        // 0x1b8658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B865Cu;
        goto label_1b865c;
    }
    ctx->pc = 0x1B8654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B865Cu);
        ctx->pc = 0x1B8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8654u;
        // 0x1b8658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8654u, 0x1B865Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B865Cu;
label_1b865c:
    // 0x1b865c: 0x5650fffa  bnel        $s2, $s0, . + 4 + (-0x6 << 2)
label_1b8660:
    if (ctx->pc == 0x1B8660u) {
        ctx->pc = 0x1B8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B865Cu;
        // 0x1b8660: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8664u;
        goto label_1b8664;
    }
    ctx->pc = 0x1B865Cu;
    {
        const bool branch_taken_0x1b865c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x1b865c) {
            ctx->pc = 0x1B8660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B865Cu;
            // 0x1b8660: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8648;
        }
    }
    ctx->pc = 0x1B8664u;
label_1b8664:
    // 0x1b8664: 0x32650001  andi        $a1, $s3, 0x1
    ctx->pc = 0x1b8664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1b8668:
    // 0x1b8668: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_1b866c:
    // 0x1b866c: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x1b866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1b8670:
    // 0x1b8670: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1b8674:
    if (ctx->pc == 0x1B8674u) {
        ctx->pc = 0x1B8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8670u;
        // 0x1b8674: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8678u;
        goto label_1b8678;
    }
    ctx->pc = 0x1B8670u;
    {
        const bool branch_taken_0x1b8670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8670u;
        // 0x1b8674: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8670) {
            ctx->pc = 0x1B86A8u;
            goto label_1b86a8;
        }
    }
    ctx->pc = 0x1B8678u;
label_1b8678:
    // 0x1b8678: 0x26220160  addiu       $v0, $s1, 0x160
    ctx->pc = 0x1b8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1b867c:
    // 0x1b867c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_1b8680:
    if (ctx->pc == 0x1B8680u) {
        ctx->pc = 0x1B8684u;
        goto label_1b8684;
    }
    ctx->pc = 0x1B867Cu;
    {
        const bool branch_taken_0x1b867c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b867c) {
            ctx->pc = 0x1B86A8u;
            goto label_1b86a8;
        }
    }
    ctx->pc = 0x1B8684u;
label_1b8684:
    // 0x1b8684: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b8684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8688:
    // 0x1b8688: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1b868c:
    // 0x1b868c: 0x0  nop
    ctx->pc = 0x1b868cu;
    // NOP
label_1b8690:
    // 0x1b8690: 0x0  nop
    ctx->pc = 0x1b8690u;
    // NOP
label_1b8694:
    // 0x1b8694: 0x0  nop
    ctx->pc = 0x1b8694u;
    // NOP
label_1b8698:
    // 0x1b8698: 0x0  nop
    ctx->pc = 0x1b8698u;
    // NOP
label_1b869c:
    // 0x1b869c: 0x0  nop
    ctx->pc = 0x1b869cu;
    // NOP
label_1b86a0:
    // 0x1b86a0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
label_1b86a4:
    if (ctx->pc == 0x1B86A4u) {
        ctx->pc = 0x1B86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86A0u;
        // 0x1b86a4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86A8u;
        goto label_1b86a8;
    }
    ctx->pc = 0x1B86A0u;
    {
        const bool branch_taken_0x1b86a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86A0u;
        // 0x1b86a4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86a0) {
            ctx->pc = 0x1B8690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8690;
        }
    }
    ctx->pc = 0x1B86A8u;
label_1b86a8:
    // 0x1b86a8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_1b86ac:
    if (ctx->pc == 0x1B86ACu) {
        ctx->pc = 0x1B86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86A8u;
        // 0x1b86ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86B0u;
        goto label_1b86b0;
    }
    ctx->pc = 0x1B86A8u;
    {
        const bool branch_taken_0x1b86a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86A8u;
        // 0x1b86ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86a8) {
            ctx->pc = 0x1B86D8u;
            goto label_1b86d8;
        }
    }
    ctx->pc = 0x1B86B0u;
label_1b86b0:
    // 0x1b86b0: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
label_1b86b4:
    if (ctx->pc == 0x1B86B4u) {
        ctx->pc = 0x1B86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86B0u;
        // 0x1b86b4: 0x26820f90  addiu       $v0, $s4, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86B8u;
        goto label_1b86b8;
    }
    ctx->pc = 0x1B86B0u;
    {
        const bool branch_taken_0x1b86b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b86b0) {
            ctx->pc = 0x1B86B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B86B0u;
            // 0x1b86b4: 0x26820f90  addiu       $v0, $s4, 0xF90 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B86DCu;
            goto label_1b86dc;
        }
    }
    ctx->pc = 0x1B86B8u;
label_1b86b8:
    // 0x1b86b8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1b86b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b86bc:
    // 0x1b86bc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1b86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1b86c0:
    // 0x1b86c0: 0x0  nop
    ctx->pc = 0x1b86c0u;
    // NOP
label_1b86c4:
    // 0x1b86c4: 0x0  nop
    ctx->pc = 0x1b86c4u;
    // NOP
label_1b86c8:
    // 0x1b86c8: 0x0  nop
    ctx->pc = 0x1b86c8u;
    // NOP
label_1b86cc:
    // 0x1b86cc: 0x0  nop
    ctx->pc = 0x1b86ccu;
    // NOP
label_1b86d0:
    // 0x1b86d0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
label_1b86d4:
    if (ctx->pc == 0x1B86D4u) {
        ctx->pc = 0x1B86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86D0u;
        // 0x1b86d4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86D8u;
        goto label_1b86d8;
    }
    ctx->pc = 0x1B86D0u;
    {
        const bool branch_taken_0x1b86d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86D0u;
        // 0x1b86d4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86d0) {
            ctx->pc = 0x1B86C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b86c0;
        }
    }
    ctx->pc = 0x1B86D8u;
label_1b86d8:
    // 0x1b86d8: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x1b86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
label_1b86dc:
    // 0x1b86dc: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x1b86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_1b86e0:
    // 0x1b86e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1b86e4:
    if (ctx->pc == 0x1B86E4u) {
        ctx->pc = 0x1B86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86E0u;
        // 0x1b86e4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86E8u;
        goto label_1b86e8;
    }
    ctx->pc = 0x1B86E0u;
    {
        const bool branch_taken_0x1b86e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86E0u;
        // 0x1b86e4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86e0) {
            ctx->pc = 0x1B86F0u;
            goto label_1b86f0;
        }
    }
    ctx->pc = 0x1B86E8u;
label_1b86e8:
    // 0x1b86e8: 0xc0f5222  jal         func_3D4888
label_1b86ec:
    if (ctx->pc == 0x1B86ECu) {
        ctx->pc = 0x1B86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86E8u;
        // 0x1b86ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86F0u;
        goto label_1b86f0;
    }
    ctx->pc = 0x1B86E8u;
    SET_GPR_U32(ctx, 31, 0x1B86F0u);
    ctx->pc = 0x1B86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86E8u;
    // 0x1b86ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1B86E8u, 0x1B86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86F0u;
label_1b86f0:
    // 0x1b86f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b86f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b86f4:
    // 0x1b86f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b86f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b86f8:
    // 0x1b86f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b86f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b86fc:
    // 0x1b86fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b86fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b8700:
    // 0x1b8700: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b8700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8704:
    // 0x1b8704: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b8704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b8708:
    // 0x1b8708: 0x3e00008  jr          $ra
label_1b870c:
    if (ctx->pc == 0x1B870Cu) {
        ctx->pc = 0x1B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8708u;
        // 0x1b870c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8710u;
        goto label_fallthrough_0x1b8708;
    }
    ctx->pc = 0x1B8708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8708u;
        // 0x1b870c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8708:
    ctx->pc = 0x1B8710u;
}
