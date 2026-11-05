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

// Function: sub_00225678
// Address: 0x225678 - 0x225740
void sub_00225678_0x225678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225678_0x225678");
#endif

    switch (ctx->pc) {
        case 0x225678u: goto label_225678;
        case 0x22567cu: goto label_22567c;
        case 0x225680u: goto label_225680;
        case 0x225684u: goto label_225684;
        case 0x225688u: goto label_225688;
        case 0x22568cu: goto label_22568c;
        case 0x225690u: goto label_225690;
        case 0x225694u: goto label_225694;
        case 0x225698u: goto label_225698;
        case 0x22569cu: goto label_22569c;
        case 0x2256a0u: goto label_2256a0;
        case 0x2256a4u: goto label_2256a4;
        case 0x2256a8u: goto label_2256a8;
        case 0x2256acu: goto label_2256ac;
        case 0x2256b0u: goto label_2256b0;
        case 0x2256b4u: goto label_2256b4;
        case 0x2256b8u: goto label_2256b8;
        case 0x2256bcu: goto label_2256bc;
        case 0x2256c0u: goto label_2256c0;
        case 0x2256c4u: goto label_2256c4;
        case 0x2256c8u: goto label_2256c8;
        case 0x2256ccu: goto label_2256cc;
        case 0x2256d0u: goto label_2256d0;
        case 0x2256d4u: goto label_2256d4;
        case 0x2256d8u: goto label_2256d8;
        case 0x2256dcu: goto label_2256dc;
        case 0x2256e0u: goto label_2256e0;
        case 0x2256e4u: goto label_2256e4;
        case 0x2256e8u: goto label_2256e8;
        case 0x2256ecu: goto label_2256ec;
        case 0x2256f0u: goto label_2256f0;
        case 0x2256f4u: goto label_2256f4;
        case 0x2256f8u: goto label_2256f8;
        case 0x2256fcu: goto label_2256fc;
        case 0x225700u: goto label_225700;
        case 0x225704u: goto label_225704;
        case 0x225708u: goto label_225708;
        case 0x22570cu: goto label_22570c;
        case 0x225710u: goto label_225710;
        case 0x225714u: goto label_225714;
        case 0x225718u: goto label_225718;
        case 0x22571cu: goto label_22571c;
        case 0x225720u: goto label_225720;
        case 0x225724u: goto label_225724;
        case 0x225728u: goto label_225728;
        case 0x22572cu: goto label_22572c;
        case 0x225730u: goto label_225730;
        case 0x225734u: goto label_225734;
        case 0x225738u: goto label_225738;
        case 0x22573cu: goto label_22573c;
        default: break;
    }

    ctx->pc = 0x225678u;

label_225678:
    // 0x225678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22567c:
    // 0x22567c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_225680:
    // 0x225680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_225684:
    // 0x225684: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225688:
    // 0x225688: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22568c:
    // 0x22568c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22568cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225690:
    // 0x225690: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_225694:
    // 0x225694: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_225698:
    // 0x225698: 0xc097f26  jal         func_25FC98
label_22569c:
    if (ctx->pc == 0x22569Cu) {
        ctx->pc = 0x22569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225698u;
        // 0x22569c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256A0u;
        goto label_2256a0;
    }
    ctx->pc = 0x225698u;
    SET_GPR_U32(ctx, 31, 0x2256A0u);
    ctx->pc = 0x22569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225698u;
    // 0x22569c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x225698u, 0x2256A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256A0u;
label_2256a0:
    // 0x2256a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2256a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2256a4:
    // 0x2256a4: 0x50430021  beql        $v0, $v1, . + 4 + (0x21 << 2)
label_2256a8:
    if (ctx->pc == 0x2256A8u) {
        ctx->pc = 0x2256A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256A4u;
        // 0x2256a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256ACu;
        goto label_2256ac;
    }
    ctx->pc = 0x2256A4u;
    {
        const bool branch_taken_0x2256a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2256a4) {
            ctx->pc = 0x2256A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2256A4u;
            // 0x2256a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22572Cu;
            goto label_22572c;
        }
    }
    ctx->pc = 0x2256ACu;
label_2256ac:
    // 0x2256ac: 0xc0899bc  jal         func_2266F0
label_2256b0:
    if (ctx->pc == 0x2256B0u) {
        ctx->pc = 0x2256B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256ACu;
        // 0x2256b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256B4u;
        goto label_2256b4;
    }
    ctx->pc = 0x2256ACu;
    SET_GPR_U32(ctx, 31, 0x2256B4u);
    ctx->pc = 0x2256B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256ACu;
    // 0x2256b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2256ACu, 0x2256B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256B4u;
label_2256b4:
    // 0x2256b4: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
label_2256b8:
    if (ctx->pc == 0x2256B8u) {
        ctx->pc = 0x2256B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256B4u;
        // 0x2256b8: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256BCu;
        goto label_2256bc;
    }
    ctx->pc = 0x2256B4u;
    {
        const bool branch_taken_0x2256b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2256b4) {
            ctx->pc = 0x2256B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2256B4u;
            // 0x2256b8: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2256E8u;
            goto label_2256e8;
        }
    }
    ctx->pc = 0x2256BCu;
label_2256bc:
    // 0x2256bc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2256c0:
    // 0x2256c0: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_2256c4:
    // 0x2256c4: 0x40f809  jalr        $v0
label_2256c8:
    if (ctx->pc == 0x2256C8u) {
        ctx->pc = 0x2256C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C4u;
        // 0x2256c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256CCu;
        goto label_2256cc;
    }
    ctx->pc = 0x2256C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2256CCu);
        ctx->pc = 0x2256C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C4u;
        // 0x2256c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256C4u, 0x2256CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2256CCu;
label_2256cc:
    // 0x2256cc: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2256ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2256d0:
    // 0x2256d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2256d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2256d4:
    // 0x2256d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2256d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2256d8:
    // 0x2256d8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2256dc:
    // 0x2256dc: 0x40f809  jalr        $v0
label_2256e0:
    if (ctx->pc == 0x2256E0u) {
        ctx->pc = 0x2256E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256DCu;
        // 0x2256e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256E4u;
        goto label_2256e4;
    }
    ctx->pc = 0x2256DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2256E4u);
        ctx->pc = 0x2256E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256DCu;
        // 0x2256e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256DCu, 0x2256E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2256E4u;
label_2256e4:
    // 0x2256e4: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2256e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2256e8:
    // 0x2256e8: 0xc0ac90e  jal         func_2B2438
label_2256ec:
    if (ctx->pc == 0x2256ECu) {
        ctx->pc = 0x2256ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256E8u;
        // 0x2256ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256F0u;
        goto label_2256f0;
    }
    ctx->pc = 0x2256E8u;
    SET_GPR_U32(ctx, 31, 0x2256F0u);
    ctx->pc = 0x2256ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256E8u;
    // 0x2256ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2438u, 0x2256E8u, 0x2256F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256F0u;
label_2256f0:
    // 0x2256f0: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_2256f4:
    if (ctx->pc == 0x2256F4u) {
        ctx->pc = 0x2256F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F0u;
        // 0x2256f4: 0xae000234  sw          $zero, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256F8u;
        goto label_2256f8;
    }
    ctx->pc = 0x2256F0u;
    {
        const bool branch_taken_0x2256f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F0u;
        // 0x2256f4: 0xae000234  sw          $zero, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256f0) {
            ctx->pc = 0x22571Cu;
            goto label_22571c;
        }
    }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0xc097f26  jal         func_25FC98
label_2256fc:
    if (ctx->pc == 0x2256FCu) {
        ctx->pc = 0x2256FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256F8u;
        // 0x2256fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225700u;
        goto label_225700;
    }
    ctx->pc = 0x2256F8u;
    SET_GPR_U32(ctx, 31, 0x225700u);
    ctx->pc = 0x2256FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256F8u;
    // 0x2256fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2256F8u, 0x225700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225700u;
label_225700:
    // 0x225700: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x225700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_225704:
    // 0x225704: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_225708:
    if (ctx->pc == 0x225708u) {
        ctx->pc = 0x22570Cu;
        goto label_22570c;
    }
    ctx->pc = 0x225704u;
    {
        const bool branch_taken_0x225704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225704) {
            ctx->pc = 0x225714u;
            goto label_225714;
        }
    }
    ctx->pc = 0x22570Cu;
label_22570c:
    // 0x22570c: 0xc083bc0  jal         func_20EF00
label_225710:
    if (ctx->pc == 0x225710u) {
        ctx->pc = 0x225710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22570Cu;
        // 0x225710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225714u;
        goto label_225714;
    }
    ctx->pc = 0x22570Cu;
    SET_GPR_U32(ctx, 31, 0x225714u);
    ctx->pc = 0x225710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22570Cu;
    // 0x225710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x22570Cu, 0x225714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225714u;
label_225714:
    // 0x225714: 0xc0837b4  jal         func_20DED0
label_225718:
    if (ctx->pc == 0x225718u) {
        ctx->pc = 0x225718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225714u;
        // 0x225718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22571Cu;
        goto label_22571c;
    }
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 31, 0x22571Cu);
    ctx->pc = 0x225718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225714u;
    // 0x225718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x225714u, 0x22571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22571Cu;
label_22571c:
    // 0x22571c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225720:
    // 0x225720: 0xc0cda26  jal         func_336898
label_225724:
    if (ctx->pc == 0x225724u) {
        ctx->pc = 0x225724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225720u;
        // 0x225724: 0x24050053  addiu       $a1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225728u;
        goto label_225728;
    }
    ctx->pc = 0x225720u;
    SET_GPR_U32(ctx, 31, 0x225728u);
    ctx->pc = 0x225724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225720u;
    // 0x225724: 0x24050053  addiu       $a1, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x225720u, 0x225728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225728u;
label_225728:
    // 0x225728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22572c:
    // 0x22572c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22572cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_225730:
    // 0x225730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225734:
    // 0x225734: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_225738:
    // 0x225738: 0x3e00008  jr          $ra
label_22573c:
    if (ctx->pc == 0x22573Cu) {
        ctx->pc = 0x22573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225738u;
        // 0x22573c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225740u;
        goto label_fallthrough_0x225738;
    }
    ctx->pc = 0x225738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225738u;
        // 0x22573c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225738:
    ctx->pc = 0x225740u;
}
