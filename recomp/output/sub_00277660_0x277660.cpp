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

// Function: sub_00277660
// Address: 0x277660 - 0x277730
void sub_00277660_0x277660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277660_0x277660");
#endif

    switch (ctx->pc) {
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        default: break;
    }

    ctx->pc = 0x277660u;

label_277660:
    // 0x277660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_277664:
    // 0x277664: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x277664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_277668:
    // 0x277668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_27766c:
    // 0x27766c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_277670:
    // 0x277670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277674:
    // 0x277674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_277678:
    // 0x277678: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x277678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_27767c:
    // 0x27767c: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x27767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
label_277680:
    // 0x277680: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x277680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_277684:
    // 0x277684: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x277684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_277688:
    // 0x277688: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x277688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27768c:
    // 0x27768c: 0xc09dcc6  jal         func_277318
label_277690:
    if (ctx->pc == 0x277690u) {
        ctx->pc = 0x277690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27768Cu;
        // 0x277690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277694u;
        goto label_277694;
    }
    ctx->pc = 0x27768Cu;
    SET_GPR_U32(ctx, 31, 0x277694u);
    ctx->pc = 0x277690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27768Cu;
    // 0x277690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x27768Cu, 0x277694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277694u;
label_277694:
    // 0x277694: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_277698:
    if (ctx->pc == 0x277698u) {
        ctx->pc = 0x277698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277694u;
        // 0x277698: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27769Cu;
        goto label_27769c;
    }
    ctx->pc = 0x277694u;
    {
        const bool branch_taken_0x277694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277694u;
        // 0x277698: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277694) {
            ctx->pc = 0x277718u;
            goto label_277718;
        }
    }
    ctx->pc = 0x27769Cu;
label_27769c:
    // 0x27769c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2776a0:
    // 0x2776a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2776a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2776a4:
    // 0x2776a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2776a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2776a8:
    // 0x2776a8: 0x40f809  jalr        $v0
label_2776ac:
    if (ctx->pc == 0x2776ACu) {
        ctx->pc = 0x2776B0u;
        goto label_2776b0;
    }
    ctx->pc = 0x2776A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2776B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2776A8u, 0x2776B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2776B0u;
label_2776b0:
    // 0x2776b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2776b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2776b4:
    // 0x2776b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2776b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2776b8:
    // 0x2776b8: 0xc09ddcc  jal         func_277730
label_2776bc:
    if (ctx->pc == 0x2776BCu) {
        ctx->pc = 0x2776BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776B8u;
        // 0x2776bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776C0u;
        goto label_2776c0;
    }
    ctx->pc = 0x2776B8u;
    SET_GPR_U32(ctx, 31, 0x2776C0u);
    ctx->pc = 0x2776BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776B8u;
    // 0x2776bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277730u, 0x2776B8u, 0x2776C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776C0u;
label_2776c0:
    // 0x2776c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2776c4:
    if (ctx->pc == 0x2776C4u) {
        ctx->pc = 0x2776C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776C0u;
        // 0x2776c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776C8u;
        goto label_2776c8;
    }
    ctx->pc = 0x2776C0u;
    {
        const bool branch_taken_0x2776c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2776C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776C0u;
        // 0x2776c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776c0) {
            ctx->pc = 0x277704u;
            goto label_277704;
        }
    }
    ctx->pc = 0x2776C8u;
label_2776c8:
    // 0x2776c8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2776c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2776cc:
    // 0x2776cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2776d0:
    // 0x2776d0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2776d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2776d4:
    // 0x2776d4: 0x40f809  jalr        $v0
label_2776d8:
    if (ctx->pc == 0x2776D8u) {
        ctx->pc = 0x2776D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776D4u;
        // 0x2776d8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776DCu;
        goto label_2776dc;
    }
    ctx->pc = 0x2776D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2776DCu);
        ctx->pc = 0x2776D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776D4u;
        // 0x2776d8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2776D4u, 0x2776DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2776DCu;
label_2776dc:
    // 0x2776dc: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2776dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_2776e0:
    // 0x2776e0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2776e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2776e4:
    // 0x2776e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2776e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2776e8:
    // 0x2776e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2776ec:
    // 0x2776ec: 0x40f809  jalr        $v0
label_2776f0:
    if (ctx->pc == 0x2776F0u) {
        ctx->pc = 0x2776F4u;
        goto label_2776f4;
    }
    ctx->pc = 0x2776ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2776F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2776ECu, 0x2776F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2776F4u;
label_2776f4:
    // 0x2776f4: 0xc09dde0  jal         func_277780
label_2776f8:
    if (ctx->pc == 0x2776F8u) {
        ctx->pc = 0x2776F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776F4u;
        // 0x2776f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776FCu;
        goto label_2776fc;
    }
    ctx->pc = 0x2776F4u;
    SET_GPR_U32(ctx, 31, 0x2776FCu);
    ctx->pc = 0x2776F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776F4u;
    // 0x2776f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277780u, 0x2776F4u, 0x2776FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776FCu;
label_2776fc:
    // 0x2776fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_277700:
    if (ctx->pc == 0x277700u) {
        ctx->pc = 0x277700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776FCu;
        // 0x277700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277704u;
        goto label_277704;
    }
    ctx->pc = 0x2776FCu;
    {
        const bool branch_taken_0x2776fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776FCu;
        // 0x277700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776fc) {
            ctx->pc = 0x27771Cu;
            goto label_27771c;
        }
    }
    ctx->pc = 0x277704u;
label_277704:
    // 0x277704: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x277704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_277708:
    // 0x277708: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27770c:
    // 0x27770c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x27770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_277710:
    // 0x277710: 0x40f809  jalr        $v0
label_277714:
    if (ctx->pc == 0x277714u) {
        ctx->pc = 0x277718u;
        goto label_277718;
    }
    ctx->pc = 0x277710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277710u, 0x277718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277718u;
label_277718:
    // 0x277718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27771c:
    // 0x27771c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27771cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_277720:
    // 0x277720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x277720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_277724:
    // 0x277724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_277728:
    // 0x277728: 0x3e00008  jr          $ra
label_27772c:
    if (ctx->pc == 0x27772Cu) {
        ctx->pc = 0x27772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277728u;
        // 0x27772c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277730u;
        goto label_fallthrough_0x277728;
    }
    ctx->pc = 0x277728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277728u;
        // 0x27772c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x277728:
    ctx->pc = 0x277730u;
}
