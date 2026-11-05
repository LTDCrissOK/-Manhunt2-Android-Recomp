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

// Function: sub_0016C620
// Address: 0x16c620 - 0x16c6a8
void sub_0016C620_0x16c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C620_0x16c620");
#endif

    switch (ctx->pc) {
        case 0x16c620u: goto label_16c620;
        case 0x16c624u: goto label_16c624;
        case 0x16c628u: goto label_16c628;
        case 0x16c62cu: goto label_16c62c;
        case 0x16c630u: goto label_16c630;
        case 0x16c634u: goto label_16c634;
        case 0x16c638u: goto label_16c638;
        case 0x16c63cu: goto label_16c63c;
        case 0x16c640u: goto label_16c640;
        case 0x16c644u: goto label_16c644;
        case 0x16c648u: goto label_16c648;
        case 0x16c64cu: goto label_16c64c;
        case 0x16c650u: goto label_16c650;
        case 0x16c654u: goto label_16c654;
        case 0x16c658u: goto label_16c658;
        case 0x16c65cu: goto label_16c65c;
        case 0x16c660u: goto label_16c660;
        case 0x16c664u: goto label_16c664;
        case 0x16c668u: goto label_16c668;
        case 0x16c66cu: goto label_16c66c;
        case 0x16c670u: goto label_16c670;
        case 0x16c674u: goto label_16c674;
        case 0x16c678u: goto label_16c678;
        case 0x16c67cu: goto label_16c67c;
        case 0x16c680u: goto label_16c680;
        case 0x16c684u: goto label_16c684;
        case 0x16c688u: goto label_16c688;
        case 0x16c68cu: goto label_16c68c;
        case 0x16c690u: goto label_16c690;
        case 0x16c694u: goto label_16c694;
        case 0x16c698u: goto label_16c698;
        case 0x16c69cu: goto label_16c69c;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6a4u: goto label_16c6a4;
        default: break;
    }

    ctx->pc = 0x16c620u;

label_16c620:
    // 0x16c620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c624:
    // 0x16c624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16c628:
    // 0x16c628: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16c62c:
    // 0x16c62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c630:
    // 0x16c630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16c634:
    // 0x16c634: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16c634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c638:
    // 0x16c638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16c63c:
    // 0x16c63c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c640:
    // 0x16c640: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16c640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16c644:
    // 0x16c644: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16c644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c648:
    // 0x16c648: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_16c64c:
    // 0x16c64c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x16c64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16c650:
    // 0x16c650: 0xc04f750  jal         func_13DD40
label_16c654:
    if (ctx->pc == 0x16C654u) {
        ctx->pc = 0x16C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C650u;
        // 0x16c654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C658u;
        goto label_16c658;
    }
    ctx->pc = 0x16C650u;
    SET_GPR_U32(ctx, 31, 0x16C658u);
    ctx->pc = 0x16C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C650u;
    // 0x16c654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x16C650u, 0x16C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C658u;
label_16c658:
    // 0x16c658: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x16c658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16c65c:
    // 0x16c65c: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_16c660:
    if (ctx->pc == 0x16C660u) {
        ctx->pc = 0x16C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C65Cu;
        // 0x16c660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C664u;
        goto label_16c664;
    }
    ctx->pc = 0x16C65Cu;
    {
        const bool branch_taken_0x16c65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c65c) {
            ctx->pc = 0x16C660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C65Cu;
            // 0x16c660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C68Cu;
            goto label_16c68c;
        }
    }
    ctx->pc = 0x16C664u;
label_16c664:
    // 0x16c664: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16c668:
    // 0x16c668: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_16c66c:
    if (ctx->pc == 0x16C66Cu) {
        ctx->pc = 0x16C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C668u;
        // 0x16c66c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C670u;
        goto label_16c670;
    }
    ctx->pc = 0x16C668u;
    {
        const bool branch_taken_0x16c668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C668u;
        // 0x16c66c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c668) {
            ctx->pc = 0x16C688u;
            goto label_16c688;
        }
    }
    ctx->pc = 0x16C670u;
label_16c670:
    // 0x16c670: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16c674:
    // 0x16c674: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16c674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c678:
    // 0x16c678: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16c678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c67c:
    // 0x16c67c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_16c680:
    // 0x16c680: 0x40f809  jalr        $v0
label_16c684:
    if (ctx->pc == 0x16C684u) {
        ctx->pc = 0x16C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C680u;
        // 0x16c684: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C688u;
        goto label_16c688;
    }
    ctx->pc = 0x16C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C688u);
        ctx->pc = 0x16C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C680u;
        // 0x16c684: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C680u, 0x16C688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C688u;
label_16c688:
    // 0x16c688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c68c:
    // 0x16c68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16c690:
    // 0x16c690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c694:
    // 0x16c694: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16c698:
    // 0x16c698: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c69c:
    // 0x16c69c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16c69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16c6a0:
    // 0x16c6a0: 0x3e00008  jr          $ra
label_16c6a4:
    if (ctx->pc == 0x16C6A4u) {
        ctx->pc = 0x16C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6A0u;
        // 0x16c6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C6A8u;
        goto label_fallthrough_0x16c6a0;
    }
    ctx->pc = 0x16C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6A0u;
        // 0x16c6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c6a0:
    ctx->pc = 0x16C6A8u;
}
