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

// Function: sub_00157580
// Address: 0x157580 - 0x1578f0
void sub_00157580_0x157580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157580_0x157580");
#endif

    switch (ctx->pc) {
        case 0x1575d0u: goto label_1575d0;
        case 0x1575e0u: goto label_1575e0;
        case 0x1575f0u: goto label_1575f0;
        case 0x15760cu: goto label_15760c;
        case 0x157624u: goto label_157624;
        case 0x157634u: goto label_157634;
        case 0x157658u: goto label_157658;
        case 0x157690u: goto label_157690;
        case 0x1576a4u: goto label_1576a4;
        case 0x1576e0u: goto label_1576e0;
        case 0x157708u: goto label_157708;
        case 0x157720u: goto label_157720;
        case 0x157730u: goto label_157730;
        case 0x157738u: goto label_157738;
        case 0x157770u: goto label_157770;
        case 0x157778u: goto label_157778;
        case 0x1577a0u: goto label_1577a0;
        case 0x1577f8u: goto label_1577f8;
        case 0x157808u: goto label_157808;
        case 0x157810u: goto label_157810;
        case 0x157838u: goto label_157838;
        case 0x157848u: goto label_157848;
        case 0x157850u: goto label_157850;
        case 0x157888u: goto label_157888;
        case 0x157898u: goto label_157898;
        case 0x1578a0u: goto label_1578a0;
        default: break;
    }

    ctx->pc = 0x157580u;

    // 0x157580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x157580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x157584: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x157584u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x157588: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x157588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x15758c: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x157590: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x157590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x157594: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x157594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x157598: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x157598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15759c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x15759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1575a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1575a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575a4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1575a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1575a8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1575ac: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1575acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1575b0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1575b4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1575b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1575b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1575b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575bc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1575bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1575c0: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x1575c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x1575c4: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x1575c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x1575c8: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x1575C8u;
    SET_GPR_U32(ctx, 31, 0x1575D0u);
    ctx->pc = 0x1575CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575C8u;
    // 0x1575cc: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x1575C8u, 0x1575D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1575D0u;
label_1575d0:
    // 0x1575d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1575d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1575d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575d8: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x1575D8u;
    SET_GPR_U32(ctx, 31, 0x1575E0u);
    ctx->pc = 0x1575DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575D8u;
    // 0x1575dc: 0x8e16000c  lw          $s6, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x1575D8u, 0x1575E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1575E0u;
label_1575e0:
    // 0x1575e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1575e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1575e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1575e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575e8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x1575E8u;
    SET_GPR_U32(ctx, 31, 0x1575F0u);
    ctx->pc = 0x1575ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575E8u;
    // 0x1575ec: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x1575E8u, 0x1575F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1575F0u;
label_1575f0:
    // 0x1575f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1575f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1575f4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1575f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1575f8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1575f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1575fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1575fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x157600: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x157600u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x157604: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x157604u;
    SET_GPR_U32(ctx, 31, 0x15760Cu);
    ctx->pc = 0x157608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157604u;
    // 0x157608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x157604u, 0x15760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15760Cu;
label_15760c:
    // 0x15760c: 0x8e440218  lw          $a0, 0x218($s2)
    ctx->pc = 0x15760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x157610: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x157610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157614: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x157614u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x157618: 0x92b10020  lbu         $s1, 0x20($s5)
    ctx->pc = 0x157618u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x15761c: 0xc04f898  jal         func_13E260
    ctx->pc = 0x15761Cu;
    SET_GPR_U32(ctx, 31, 0x157624u);
    ctx->pc = 0x157620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15761Cu;
    // 0x157620: 0x2610a080  addiu       $s0, $s0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E260u, 0x15761Cu, 0x157624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157624u;
label_157624:
    // 0x157624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15762c: 0xc0484da  jal         func_121368
    ctx->pc = 0x15762Cu;
    SET_GPR_U32(ctx, 31, 0x157634u);
    ctx->pc = 0x157630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15762Cu;
    // 0x157630: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121368u, 0x15762Cu, 0x157634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157634u;
label_157634:
    // 0x157634: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157638: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x157638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x15763c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15763Cu;
    {
        const bool branch_taken_0x15763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15763Cu;
        // 0x157640: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15763c) {
            ctx->pc = 0x157678u;
            goto label_157678;
        }
    }
    ctx->pc = 0x157644u;
    // 0x157644: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x157644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157648: 0x5051000b  beql        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x157648u;
    {
        const bool branch_taken_0x157648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x157648) {
            ctx->pc = 0x15764Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157648u;
            // 0x15764c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157678u;
            goto label_157678;
        }
    }
    ctx->pc = 0x157650u;
    // 0x157650: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x157650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x157654: 0x0  nop
    ctx->pc = 0x157654u;
    // NOP
label_157658:
    // 0x157658: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x157658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15765c: 0x92182b  sltu        $v1, $a0, $s2
    ctx->pc = 0x15765cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x157660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157660u;
    {
        const bool branch_taken_0x157660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157660u;
        // 0x157664: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157660) {
            ctx->pc = 0x157678u;
            goto label_157678;
        }
    }
    ctx->pc = 0x157668u;
    // 0x157668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x157668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15766c: 0x1471fffa  bne         $v1, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15766Cu;
    {
        const bool branch_taken_0x15766c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x157670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15766Cu;
        // 0x157670: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15766c) {
            ctx->pc = 0x157658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157658;
        }
    }
    ctx->pc = 0x157674u;
    // 0x157674: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x157674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157678:
    // 0x157678: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x157678u;
    {
        const bool branch_taken_0x157678 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x157678) {
            ctx->pc = 0x157688u;
            goto label_157688;
        }
    }
    ctx->pc = 0x157680u;
    // 0x157680: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x157680u;
    {
        const bool branch_taken_0x157680 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x157684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157680u;
        // 0x157684: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157680) {
            ctx->pc = 0x1576A8u;
            goto label_1576a8;
        }
    }
    ctx->pc = 0x157688u;
label_157688:
    // 0x157688: 0xc0443a8  jal         func_110EA0
    ctx->pc = 0x157688u;
    SET_GPR_U32(ctx, 31, 0x157690u);
    ctx->pc = 0x15768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157688u;
    // 0x15768c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110EA0u, 0x157688u, 0x157690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157690u;
label_157690:
    // 0x157690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x157690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157694: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157694u;
    {
        const bool branch_taken_0x157694 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x157698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157694u;
        // 0x157698: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157694) {
            ctx->pc = 0x1576B8u;
            goto label_1576b8;
        }
    }
    ctx->pc = 0x15769Cu;
    // 0x15769c: 0xc0443b4  jal         func_110ED0
    ctx->pc = 0x15769Cu;
    SET_GPR_U32(ctx, 31, 0x1576A4u);
    ctx->pc = 0x1576A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15769Cu;
    // 0x1576a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110ED0u, 0x15769Cu, 0x1576A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576A4u;
label_1576a4:
    // 0x1576a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1576a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1576a8:
    // 0x1576a8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1576A8u;
    {
        const bool branch_taken_0x1576a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A8u;
        // 0x1576ac: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576a8) {
            ctx->pc = 0x1576B8u;
            goto label_1576b8;
        }
    }
    ctx->pc = 0x1576B0u;
    // 0x1576b0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1576B0u;
    {
        const bool branch_taken_0x1576b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B0u;
        // 0x1576b4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b0) {
            ctx->pc = 0x1578C4u;
            goto label_1578c4;
        }
    }
    ctx->pc = 0x1576B8u;
label_1576b8:
    // 0x1576b8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1576b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1576bc: 0x245302d8  addiu       $s3, $v0, 0x2D8
    ctx->pc = 0x1576bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x1576c0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1576c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1576c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576c8: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x1576c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x1576cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1576ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1576d0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1576d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1576d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1576d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1576d8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1576D8u;
    SET_GPR_U32(ctx, 31, 0x1576E0u);
    ctx->pc = 0x1576DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576D8u;
    // 0x1576dc: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1576D8u, 0x1576E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576E0u;
label_1576e0:
    // 0x1576e0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1576e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1576e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1576e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1576e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1576e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1576ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1576f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1576f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1576f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1576f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576fc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1576fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157700: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x157700u;
    SET_GPR_U32(ctx, 31, 0x157708u);
    ctx->pc = 0x157704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157700u;
    // 0x157704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x157700u, 0x157708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157708u;
label_157708:
    // 0x157708: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x157708u;
    {
        const bool branch_taken_0x157708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157708u;
        // 0x15770c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157708) {
            ctx->pc = 0x157754u;
            goto label_157754;
        }
    }
    ctx->pc = 0x157710u;
    // 0x157710: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x157710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x157714: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x157718: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x157718u;
    SET_GPR_U32(ctx, 31, 0x157720u);
    ctx->pc = 0x15771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157718u;
    // 0x15771c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x157718u, 0x157720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157720u;
label_157720:
    // 0x157720: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x157720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x157724: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157724u;
    {
        const bool branch_taken_0x157724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157724u;
        // 0x157728: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157724) {
            ctx->pc = 0x157748u;
            goto label_157748;
        }
    }
    ctx->pc = 0x15772Cu;
    // 0x15772c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_157730:
    // 0x157730: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x157730u;
    SET_GPR_U32(ctx, 31, 0x157738u);
    ctx->pc = 0x157734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157730u;
    // 0x157734: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x157730u, 0x157738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157738u;
label_157738:
    // 0x157738: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15773c: 0x0  nop
    ctx->pc = 0x15773cu;
    // NOP
    // 0x157740: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157740u;
    {
        const bool branch_taken_0x157740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157740u;
        // 0x157744: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157740) {
            ctx->pc = 0x157730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157730;
        }
    }
    ctx->pc = 0x157748u;
label_157748:
    // 0x157748: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x157748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15774c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x15774Cu;
    {
        const bool branch_taken_0x15774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15774Cu;
        // 0x157750: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15774c) {
            ctx->pc = 0x1578B8u;
            goto label_1578b8;
        }
    }
    ctx->pc = 0x157754u;
label_157754:
    // 0x157754: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157754u;
    {
        const bool branch_taken_0x157754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x157758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157754u;
        // 0x157758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157754) {
            ctx->pc = 0x157760u;
            goto label_157760;
        }
    }
    ctx->pc = 0x15775Cu;
    // 0x15775c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_157760:
    // 0x157760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x157760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157764: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x157764u;
    {
        const bool branch_taken_0x157764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x157768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157764u;
        // 0x157768: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157764) {
            ctx->pc = 0x157874u;
            goto label_157874;
        }
    }
    ctx->pc = 0x15776Cu;
    // 0x15776c: 0x0  nop
    ctx->pc = 0x15776cu;
    // NOP
label_157770:
    // 0x157770: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x157770u;
    SET_GPR_U32(ctx, 31, 0x157778u);
    ctx->pc = 0x157774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157770u;
    // 0x157774: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x157770u, 0x157778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157778u;
label_157778:
    // 0x157778: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x157778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x15777c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157784: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x157784u;
    {
        const bool branch_taken_0x157784 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x157788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157784u;
        // 0x157788: 0x92060020  lbu         $a2, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157784) {
            ctx->pc = 0x1577C0u;
            goto label_1577c0;
        }
    }
    ctx->pc = 0x15778Cu;
    // 0x15778c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x15778cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157790: 0x5046000b  beql        $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x157790u;
    {
        const bool branch_taken_0x157790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x157790) {
            ctx->pc = 0x157794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157790u;
            // 0x157794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1577C0u;
            goto label_1577c0;
        }
    }
    ctx->pc = 0x157798u;
    // 0x157798: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x157798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15779c: 0x0  nop
    ctx->pc = 0x15779cu;
    // NOP
label_1577a0:
    // 0x1577a0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1577a4: 0x92182b  sltu        $v1, $a0, $s2
    ctx->pc = 0x1577a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1577a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1577A8u;
    {
        const bool branch_taken_0x1577a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577A8u;
        // 0x1577ac: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577a8) {
            ctx->pc = 0x1577C0u;
            goto label_1577c0;
        }
    }
    ctx->pc = 0x1577B0u;
    // 0x1577b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1577b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1577b4: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1577B4u;
    {
        const bool branch_taken_0x1577b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1577B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577B4u;
        // 0x1577b8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577b4) {
            ctx->pc = 0x1577A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1577a0;
        }
    }
    ctx->pc = 0x1577BCu;
    // 0x1577bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1577bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1577c0:
    // 0x1577c0: 0x16850008  bne         $s4, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1577C0u;
    {
        const bool branch_taken_0x1577c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        ctx->pc = 0x1577C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577C0u;
        // 0x1577c4: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577c0) {
            ctx->pc = 0x1577E4u;
            goto label_1577e4;
        }
    }
    ctx->pc = 0x1577C8u;
    // 0x1577c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1577c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1577ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1577D0u;
    {
        const bool branch_taken_0x1577d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577D0u;
        // 0x1577d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d0) {
            ctx->pc = 0x1577DCu;
            goto label_1577dc;
        }
    }
    ctx->pc = 0x1577D8u;
    // 0x1577d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1577dc:
    // 0x1577dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1577DCu;
    {
        const bool branch_taken_0x1577dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577DCu;
        // 0x1577e0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577dc) {
            ctx->pc = 0x15786Cu;
            goto label_15786c;
        }
    }
    ctx->pc = 0x1577E4u;
label_1577e4:
    // 0x1577e4: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1577E4u;
    {
        const bool branch_taken_0x1577e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577E4u;
        // 0x1577e8: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577e4) {
            ctx->pc = 0x15782Cu;
            goto label_15782c;
        }
    }
    ctx->pc = 0x1577ECu;
    // 0x1577ec: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x1577ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x1577f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1577F0u;
    SET_GPR_U32(ctx, 31, 0x1577F8u);
    ctx->pc = 0x1577F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577F0u;
    // 0x1577f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1577F0u, 0x1577F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577F8u;
label_1577f8:
    // 0x1577f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1577fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1577FCu;
    {
        const bool branch_taken_0x1577fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577FCu;
        // 0x157800: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577fc) {
            ctx->pc = 0x157820u;
            goto label_157820;
        }
    }
    ctx->pc = 0x157804u;
    // 0x157804: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x157804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_157808:
    // 0x157808: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x157808u;
    SET_GPR_U32(ctx, 31, 0x157810u);
    ctx->pc = 0x15780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157808u;
    // 0x15780c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x157808u, 0x157810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157810u;
label_157810:
    // 0x157810: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x157810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x157814: 0x0  nop
    ctx->pc = 0x157814u;
    // NOP
    // 0x157818: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157818u;
    {
        const bool branch_taken_0x157818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157818u;
        // 0x15781c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157818) {
            ctx->pc = 0x157808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157808;
        }
    }
    ctx->pc = 0x157820u;
label_157820:
    // 0x157820: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x157820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157824: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x157824u;
    {
        const bool branch_taken_0x157824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157824u;
        // 0x157828: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157824) {
            ctx->pc = 0x1578B8u;
            goto label_1578b8;
        }
    }
    ctx->pc = 0x15782Cu;
label_15782c:
    // 0x15782c: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x15782cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x157830: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x157830u;
    SET_GPR_U32(ctx, 31, 0x157838u);
    ctx->pc = 0x157834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157830u;
    // 0x157834: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x157830u, 0x157838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157838u;
label_157838:
    // 0x157838: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15783c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15783Cu;
    {
        const bool branch_taken_0x15783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15783Cu;
        // 0x157840: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15783c) {
            ctx->pc = 0x157860u;
            goto label_157860;
        }
    }
    ctx->pc = 0x157844u;
    // 0x157844: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x157844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_157848:
    // 0x157848: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x157848u;
    SET_GPR_U32(ctx, 31, 0x157850u);
    ctx->pc = 0x15784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157848u;
    // 0x15784c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x157848u, 0x157850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157850u;
label_157850:
    // 0x157850: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x157854: 0x0  nop
    ctx->pc = 0x157854u;
    // NOP
    // 0x157858: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157858u;
    {
        const bool branch_taken_0x157858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157858u;
        // 0x15785c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157858) {
            ctx->pc = 0x157848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157848;
        }
    }
    ctx->pc = 0x157860u;
label_157860:
    // 0x157860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x157860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157864: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x157864u;
    {
        const bool branch_taken_0x157864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157864u;
        // 0x157868: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157864) {
            ctx->pc = 0x1578B8u;
            goto label_1578b8;
        }
    }
    ctx->pc = 0x15786Cu;
label_15786c:
    // 0x15786c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x15786Cu;
    {
        const bool branch_taken_0x15786c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15786c) {
            ctx->pc = 0x157770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157770;
        }
    }
    ctx->pc = 0x157874u;
label_157874:
    // 0x157874: 0x26c202d8  addiu       $v0, $s6, 0x2D8
    ctx->pc = 0x157874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 728));
    // 0x157878: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x157878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x15787c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x15787cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x157880: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x157880u;
    SET_GPR_U32(ctx, 31, 0x157888u);
    ctx->pc = 0x157884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157880u;
    // 0x157884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x157880u, 0x157888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157888u;
label_157888:
    // 0x157888: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x157888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15788c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15788Cu;
    {
        const bool branch_taken_0x15788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15788Cu;
        // 0x157890: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15788c) {
            ctx->pc = 0x1578B0u;
            goto label_1578b0;
        }
    }
    ctx->pc = 0x157894u;
    // 0x157894: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_157898:
    // 0x157898: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x157898u;
    SET_GPR_U32(ctx, 31, 0x1578A0u);
    ctx->pc = 0x15789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157898u;
    // 0x15789c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x157898u, 0x1578A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578A0u;
label_1578a0:
    // 0x1578a0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1578a4: 0x0  nop
    ctx->pc = 0x1578a4u;
    // NOP
    // 0x1578a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1578A8u;
    {
        const bool branch_taken_0x1578a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578A8u;
        // 0x1578ac: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578a8) {
            ctx->pc = 0x157898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157898;
        }
    }
    ctx->pc = 0x1578B0u;
label_1578b0:
    // 0x1578b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1578b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1578b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1578b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1578b8:
    // 0x1578b8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1578b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1578bc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1578bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1578c0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1578c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_1578c4:
    // 0x1578c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1578c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1578c8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1578c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1578cc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1578ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1578d0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1578d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1578d4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1578d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1578d8: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1578d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1578dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1578dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1578e0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1578e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1578e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1578E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1578E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E4u;
        // 0x1578e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1578E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1578ECu;
    // 0x1578ec: 0x0  nop
    ctx->pc = 0x1578ecu;
    // NOP
    ctx->pc = 0x1578f0u;
}
