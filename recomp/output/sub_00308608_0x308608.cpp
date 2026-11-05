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

// Function: sub_00308608
// Address: 0x308608 - 0x3086e8
void sub_00308608_0x308608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308608_0x308608");
#endif

    switch (ctx->pc) {
        case 0x308608u: goto label_308608;
        case 0x30860cu: goto label_30860c;
        case 0x308610u: goto label_308610;
        case 0x308614u: goto label_308614;
        case 0x308618u: goto label_308618;
        case 0x30861cu: goto label_30861c;
        case 0x308620u: goto label_308620;
        case 0x308624u: goto label_308624;
        case 0x308628u: goto label_308628;
        case 0x30862cu: goto label_30862c;
        case 0x308630u: goto label_308630;
        case 0x308634u: goto label_308634;
        case 0x308638u: goto label_308638;
        case 0x30863cu: goto label_30863c;
        case 0x308640u: goto label_308640;
        case 0x308644u: goto label_308644;
        case 0x308648u: goto label_308648;
        case 0x30864cu: goto label_30864c;
        case 0x308650u: goto label_308650;
        case 0x308654u: goto label_308654;
        case 0x308658u: goto label_308658;
        case 0x30865cu: goto label_30865c;
        case 0x308660u: goto label_308660;
        case 0x308664u: goto label_308664;
        case 0x308668u: goto label_308668;
        case 0x30866cu: goto label_30866c;
        case 0x308670u: goto label_308670;
        case 0x308674u: goto label_308674;
        case 0x308678u: goto label_308678;
        case 0x30867cu: goto label_30867c;
        case 0x308680u: goto label_308680;
        case 0x308684u: goto label_308684;
        case 0x308688u: goto label_308688;
        case 0x30868cu: goto label_30868c;
        case 0x308690u: goto label_308690;
        case 0x308694u: goto label_308694;
        case 0x308698u: goto label_308698;
        case 0x30869cu: goto label_30869c;
        case 0x3086a0u: goto label_3086a0;
        case 0x3086a4u: goto label_3086a4;
        case 0x3086a8u: goto label_3086a8;
        case 0x3086acu: goto label_3086ac;
        case 0x3086b0u: goto label_3086b0;
        case 0x3086b4u: goto label_3086b4;
        case 0x3086b8u: goto label_3086b8;
        case 0x3086bcu: goto label_3086bc;
        case 0x3086c0u: goto label_3086c0;
        case 0x3086c4u: goto label_3086c4;
        case 0x3086c8u: goto label_3086c8;
        case 0x3086ccu: goto label_3086cc;
        case 0x3086d0u: goto label_3086d0;
        case 0x3086d4u: goto label_3086d4;
        case 0x3086d8u: goto label_3086d8;
        case 0x3086dcu: goto label_3086dc;
        case 0x3086e0u: goto label_3086e0;
        case 0x3086e4u: goto label_3086e4;
        default: break;
    }

    ctx->pc = 0x308608u;

label_308608:
    // 0x308608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30860c:
    // 0x30860c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_308610:
    // 0x308610: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x308610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_308614:
    // 0x308614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308618:
    // 0x308618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_30861c:
    // 0x30861c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_308620:
    // 0x308620: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_308624:
    // 0x308624: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x308624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_308628:
    // 0x308628: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x308628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_30862c:
    // 0x30862c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_308630:
    if (ctx->pc == 0x308630u) {
        ctx->pc = 0x308630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30862Cu;
        // 0x308630: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308634u;
        goto label_308634;
    }
    ctx->pc = 0x30862Cu;
    {
        const bool branch_taken_0x30862c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30862Cu;
        // 0x308630: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30862c) {
            ctx->pc = 0x3086BCu;
            goto label_3086bc;
        }
    }
    ctx->pc = 0x308634u;
label_308634:
    // 0x308634: 0xc0797fe  jal         func_1E5FF8
label_308638:
    if (ctx->pc == 0x308638u) {
        ctx->pc = 0x30863Cu;
        goto label_30863c;
    }
    ctx->pc = 0x308634u;
    SET_GPR_U32(ctx, 31, 0x30863Cu);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x308634u, 0x30863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30863Cu;
label_30863c:
    // 0x30863c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_308640:
    if (ctx->pc == 0x308640u) {
        ctx->pc = 0x308640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30863Cu;
        // 0x308640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308644u;
        goto label_308644;
    }
    ctx->pc = 0x30863Cu;
    {
        const bool branch_taken_0x30863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30863Cu;
        // 0x308640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30863c) {
            ctx->pc = 0x3086BCu;
            goto label_3086bc;
        }
    }
    ctx->pc = 0x308644u;
label_308644:
    // 0x308644: 0x10000018  b           . + 4 + (0x18 << 2)
label_308648:
    if (ctx->pc == 0x308648u) {
        ctx->pc = 0x308648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308644u;
        // 0x308648: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30864Cu;
        goto label_30864c;
    }
    ctx->pc = 0x308644u;
    {
        const bool branch_taken_0x308644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308644u;
        // 0x308648: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308644) {
            ctx->pc = 0x3086A8u;
            goto label_3086a8;
        }
    }
    ctx->pc = 0x30864Cu;
label_30864c:
    // 0x30864c: 0x0  nop
    ctx->pc = 0x30864cu;
    // NOP
label_308650:
    // 0x308650: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x308650u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_308654:
    // 0x308654: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x308654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_308658:
    // 0x308658: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x308658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30865c:
    // 0x30865c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x30865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_308660:
    // 0x308660: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x308660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_308664:
    // 0x308664: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_308668:
    if (ctx->pc == 0x308668u) {
        ctx->pc = 0x308668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308664u;
        // 0x308668: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30866Cu;
        goto label_30866c;
    }
    ctx->pc = 0x308664u;
    {
        const bool branch_taken_0x308664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308664u;
        // 0x308668: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308664) {
            ctx->pc = 0x308694u;
            goto label_308694;
        }
    }
    ctx->pc = 0x30866Cu;
label_30866c:
    // 0x30866c: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x30866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_308670:
    // 0x308670: 0x8cc291dc  lw          $v0, -0x6E24($a2)
    ctx->pc = 0x308670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939100)));
label_308674:
    // 0x308674: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x308674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308678:
    // 0x308678: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x308678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_30867c:
    // 0x30867c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x30867cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_308680:
    // 0x308680: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x308680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_308684:
    // 0x308684: 0x60f809  jalr        $v1
label_308688:
    if (ctx->pc == 0x308688u) {
        ctx->pc = 0x308688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308684u;
        // 0x308688: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30868Cu;
        goto label_30868c;
    }
    ctx->pc = 0x308684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30868Cu);
        ctx->pc = 0x308688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308684u;
        // 0x308688: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308684u, 0x30868Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30868Cu;
label_30868c:
    // 0x30868c: 0x10000006  b           . + 4 + (0x6 << 2)
label_308690:
    if (ctx->pc == 0x308690u) {
        ctx->pc = 0x308690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30868Cu;
        // 0x308690: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308694u;
        goto label_308694;
    }
    ctx->pc = 0x30868Cu;
    {
        const bool branch_taken_0x30868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30868Cu;
        // 0x308690: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30868c) {
            ctx->pc = 0x3086A8u;
            goto label_3086a8;
        }
    }
    ctx->pc = 0x308694u;
label_308694:
    // 0x308694: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x308694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_308698:
    // 0x308698: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x308698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_30869c:
    // 0x30869c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x30869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3086a0:
    // 0x3086a0: 0x40f809  jalr        $v0
label_3086a4:
    if (ctx->pc == 0x3086A4u) {
        ctx->pc = 0x3086A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086A0u;
        // 0x3086a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086A8u;
        goto label_3086a8;
    }
    ctx->pc = 0x3086A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3086A8u);
        ctx->pc = 0x3086A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086A0u;
        // 0x3086a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3086A0u, 0x3086A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3086A8u;
label_3086a8:
    // 0x3086a8: 0xc0796ac  jal         func_1E5AB0
label_3086ac:
    if (ctx->pc == 0x3086ACu) {
        ctx->pc = 0x3086B0u;
        goto label_3086b0;
    }
    ctx->pc = 0x3086A8u;
    SET_GPR_U32(ctx, 31, 0x3086B0u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x3086A8u, 0x3086B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086B0u;
label_3086b0:
    // 0x3086b0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3086b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3086b4:
    // 0x3086b4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_3086b8:
    if (ctx->pc == 0x3086B8u) {
        ctx->pc = 0x3086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086B4u;
        // 0x3086b8: 0x8e6391dc  lw          $v1, -0x6E24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086BCu;
        goto label_3086bc;
    }
    ctx->pc = 0x3086B4u;
    {
        const bool branch_taken_0x3086b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086B4u;
        // 0x3086b8: 0x8e6391dc  lw          $v1, -0x6E24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086b4) {
            ctx->pc = 0x308650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308650;
        }
    }
    ctx->pc = 0x3086BCu;
label_3086bc:
    // 0x3086bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3086bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3086c0:
    // 0x3086c0: 0xc083e40  jal         func_20F900
label_3086c4:
    if (ctx->pc == 0x3086C4u) {
        ctx->pc = 0x3086C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086C0u;
        // 0x3086c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086C8u;
        goto label_3086c8;
    }
    ctx->pc = 0x3086C0u;
    SET_GPR_U32(ctx, 31, 0x3086C8u);
    ctx->pc = 0x3086C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086C0u;
    // 0x3086c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F900u, 0x3086C0u, 0x3086C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086C8u;
label_3086c8:
    // 0x3086c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3086c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3086cc:
    // 0x3086cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3086ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3086d0:
    // 0x3086d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3086d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3086d4:
    // 0x3086d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3086d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3086d8:
    // 0x3086d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3086d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3086dc:
    // 0x3086dc: 0x3e00008  jr          $ra
label_3086e0:
    if (ctx->pc == 0x3086E0u) {
        ctx->pc = 0x3086E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086DCu;
        // 0x3086e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086E4u;
        goto label_3086e4;
    }
    ctx->pc = 0x3086DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3086E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086DCu;
        // 0x3086e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3086DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3086E4u;
label_3086e4:
    // 0x3086e4: 0x0  nop
    ctx->pc = 0x3086e4u;
    // NOP
    ctx->pc = 0x3086e8u;
}
