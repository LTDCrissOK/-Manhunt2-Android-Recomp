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

// Function: sub_003656A8
// Address: 0x3656a8 - 0x365780
void sub_003656A8_0x3656a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003656A8_0x3656a8");
#endif

    switch (ctx->pc) {
        case 0x3656a8u: goto label_3656a8;
        case 0x3656acu: goto label_3656ac;
        case 0x3656b0u: goto label_3656b0;
        case 0x3656b4u: goto label_3656b4;
        case 0x3656b8u: goto label_3656b8;
        case 0x3656bcu: goto label_3656bc;
        case 0x3656c0u: goto label_3656c0;
        case 0x3656c4u: goto label_3656c4;
        case 0x3656c8u: goto label_3656c8;
        case 0x3656ccu: goto label_3656cc;
        case 0x3656d0u: goto label_3656d0;
        case 0x3656d4u: goto label_3656d4;
        case 0x3656d8u: goto label_3656d8;
        case 0x3656dcu: goto label_3656dc;
        case 0x3656e0u: goto label_3656e0;
        case 0x3656e4u: goto label_3656e4;
        case 0x3656e8u: goto label_3656e8;
        case 0x3656ecu: goto label_3656ec;
        case 0x3656f0u: goto label_3656f0;
        case 0x3656f4u: goto label_3656f4;
        case 0x3656f8u: goto label_3656f8;
        case 0x3656fcu: goto label_3656fc;
        case 0x365700u: goto label_365700;
        case 0x365704u: goto label_365704;
        case 0x365708u: goto label_365708;
        case 0x36570cu: goto label_36570c;
        case 0x365710u: goto label_365710;
        case 0x365714u: goto label_365714;
        case 0x365718u: goto label_365718;
        case 0x36571cu: goto label_36571c;
        case 0x365720u: goto label_365720;
        case 0x365724u: goto label_365724;
        case 0x365728u: goto label_365728;
        case 0x36572cu: goto label_36572c;
        case 0x365730u: goto label_365730;
        case 0x365734u: goto label_365734;
        case 0x365738u: goto label_365738;
        case 0x36573cu: goto label_36573c;
        case 0x365740u: goto label_365740;
        case 0x365744u: goto label_365744;
        case 0x365748u: goto label_365748;
        case 0x36574cu: goto label_36574c;
        case 0x365750u: goto label_365750;
        case 0x365754u: goto label_365754;
        case 0x365758u: goto label_365758;
        case 0x36575cu: goto label_36575c;
        case 0x365760u: goto label_365760;
        case 0x365764u: goto label_365764;
        case 0x365768u: goto label_365768;
        case 0x36576cu: goto label_36576c;
        case 0x365770u: goto label_365770;
        case 0x365774u: goto label_365774;
        case 0x365778u: goto label_365778;
        case 0x36577cu: goto label_36577c;
        default: break;
    }

    ctx->pc = 0x3656a8u;

label_3656a8:
    // 0x3656a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3656a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3656ac:
    // 0x3656ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3656acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3656b0:
    // 0x3656b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3656b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3656b4:
    // 0x3656b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3656b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3656b8:
    // 0x3656b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3656b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3656bc:
    // 0x3656bc: 0xc0d9576  jal         func_3655D8
label_3656c0:
    if (ctx->pc == 0x3656C0u) {
        ctx->pc = 0x3656C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656BCu;
        // 0x3656c0: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656C4u;
        goto label_3656c4;
    }
    ctx->pc = 0x3656BCu;
    SET_GPR_U32(ctx, 31, 0x3656C4u);
    ctx->pc = 0x3656C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3656BCu;
    // 0x3656c0: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3655D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3655D8u, 0x3656BCu, 0x3656C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656C4u;
label_3656c4:
    // 0x3656c4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_3656c8:
    // 0x3656c8: 0x2444dc00  addiu       $a0, $v0, -0x2400
    ctx->pc = 0x3656c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
label_3656cc:
    // 0x3656cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3656ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3656d0:
    // 0x3656d0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3656d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_3656d4:
    // 0x3656d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3656d8:
    if (ctx->pc == 0x3656D8u) {
        ctx->pc = 0x3656D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656D4u;
        // 0x3656d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656DCu;
        goto label_3656dc;
    }
    ctx->pc = 0x3656D4u;
    {
        const bool branch_taken_0x3656d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3656D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656D4u;
        // 0x3656d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656d4) {
            ctx->pc = 0x3656FCu;
            goto label_3656fc;
        }
    }
    ctx->pc = 0x3656DCu;
label_3656dc:
    // 0x3656dc: 0x0  nop
    ctx->pc = 0x3656dcu;
    // NOP
label_3656e0:
    // 0x3656e0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3656e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3656e4:
    // 0x3656e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3656e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3656e8:
    // 0x3656e8: 0x60f809  jalr        $v1
label_3656ec:
    if (ctx->pc == 0x3656ECu) {
        ctx->pc = 0x3656F0u;
        goto label_3656f0;
    }
    ctx->pc = 0x3656E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3656F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3656E8u, 0x3656F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3656F0u;
label_3656f0:
    // 0x3656f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3656f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3656f4:
    // 0x3656f4: 0xc0fbd92  jal         func_3EF648
label_3656f8:
    if (ctx->pc == 0x3656F8u) {
        ctx->pc = 0x3656F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656F4u;
        // 0x3656f8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3656FCu;
        goto label_3656fc;
    }
    ctx->pc = 0x3656F4u;
    SET_GPR_U32(ctx, 31, 0x3656FCu);
    ctx->pc = 0x3656F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3656F4u;
    // 0x3656f8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF648u, 0x3656F4u, 0x3656FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656FCu;
label_3656fc:
    // 0x3656fc: 0x2630dc00  addiu       $s0, $s1, -0x2400
    ctx->pc = 0x3656fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958080));
label_365700:
    // 0x365700: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_365704:
    // 0x365704: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x365704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_365708:
    // 0x365708: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_36570c:
    if (ctx->pc == 0x36570Cu) {
        ctx->pc = 0x36570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365708u;
        // 0x36570c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365710u;
        goto label_365710;
    }
    ctx->pc = 0x365708u;
    {
        const bool branch_taken_0x365708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365708u;
        // 0x36570c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365708) {
            ctx->pc = 0x365714u;
            goto label_365714;
        }
    }
    ctx->pc = 0x365710u;
label_365710:
    // 0x365710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x365710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365714:
    // 0x365714: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_365718:
    if (ctx->pc == 0x365718u) {
        ctx->pc = 0x365718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365714u;
        // 0x365718: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36571Cu;
        goto label_36571c;
    }
    ctx->pc = 0x365714u;
    {
        const bool branch_taken_0x365714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x365718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365714u;
        // 0x365718: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365714) {
            ctx->pc = 0x3656E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3656e0;
        }
    }
    ctx->pc = 0x36571Cu;
label_36571c:
    // 0x36571c: 0x2642dc10  addiu       $v0, $s2, -0x23F0
    ctx->pc = 0x36571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958096));
label_365720:
    // 0x365720: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x365720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_365724:
    // 0x365724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365728:
    // 0x365728: 0x10000008  b           . + 4 + (0x8 << 2)
label_36572c:
    if (ctx->pc == 0x36572Cu) {
        ctx->pc = 0x36572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365728u;
        // 0x36572c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365730u;
        goto label_365730;
    }
    ctx->pc = 0x365728u;
    {
        const bool branch_taken_0x365728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365728u;
        // 0x36572c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365728) {
            ctx->pc = 0x36574Cu;
            goto label_36574c;
        }
    }
    ctx->pc = 0x365730u;
label_365730:
    // 0x365730: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x365730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_365734:
    // 0x365734: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x365734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_365738:
    // 0x365738: 0x60f809  jalr        $v1
label_36573c:
    if (ctx->pc == 0x36573Cu) {
        ctx->pc = 0x365740u;
        goto label_365740;
    }
    ctx->pc = 0x365738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x365740u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365738u, 0x365740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365740u;
label_365740:
    // 0x365740: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x365740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_365744:
    // 0x365744: 0xc0fbdb6  jal         func_3EF6D8
label_365748:
    if (ctx->pc == 0x365748u) {
        ctx->pc = 0x365748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365744u;
        // 0x365748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36574Cu;
        goto label_36574c;
    }
    ctx->pc = 0x365744u;
    SET_GPR_U32(ctx, 31, 0x36574Cu);
    ctx->pc = 0x365748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365744u;
    // 0x365748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF6D8u, 0x365744u, 0x36574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36574Cu;
label_36574c:
    // 0x36574c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x36574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_365750:
    // 0x365750: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_365754:
    // 0x365754: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_365758:
    if (ctx->pc == 0x365758u) {
        ctx->pc = 0x365758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365754u;
        // 0x365758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36575Cu;
        goto label_36575c;
    }
    ctx->pc = 0x365754u;
    {
        const bool branch_taken_0x365754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365754u;
        // 0x365758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365754) {
            ctx->pc = 0x365760u;
            goto label_365760;
        }
    }
    ctx->pc = 0x36575Cu;
label_36575c:
    // 0x36575c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365760:
    // 0x365760: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_365764:
    if (ctx->pc == 0x365764u) {
        ctx->pc = 0x365764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365760u;
        // 0x365764: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365768u;
        goto label_365768;
    }
    ctx->pc = 0x365760u;
    {
        const bool branch_taken_0x365760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x365764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365760u;
        // 0x365764: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365760) {
            ctx->pc = 0x365730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365730;
        }
    }
    ctx->pc = 0x365768u;
label_365768:
    // 0x365768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36576c:
    // 0x36576c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36576cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_365770:
    // 0x365770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x365770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_365774:
    // 0x365774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x365774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_365778:
    // 0x365778: 0x3e00008  jr          $ra
label_36577c:
    if (ctx->pc == 0x36577Cu) {
        ctx->pc = 0x36577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365778u;
        // 0x36577c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365780u;
        goto label_fallthrough_0x365778;
    }
    ctx->pc = 0x365778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365778u;
        // 0x36577c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x365778:
    ctx->pc = 0x365780u;
}
