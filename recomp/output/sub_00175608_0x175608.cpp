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

// Function: sub_00175608
// Address: 0x175608 - 0x175690
void sub_00175608_0x175608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175608_0x175608");
#endif

    switch (ctx->pc) {
        case 0x175608u: goto label_175608;
        case 0x17560cu: goto label_17560c;
        case 0x175610u: goto label_175610;
        case 0x175614u: goto label_175614;
        case 0x175618u: goto label_175618;
        case 0x17561cu: goto label_17561c;
        case 0x175620u: goto label_175620;
        case 0x175624u: goto label_175624;
        case 0x175628u: goto label_175628;
        case 0x17562cu: goto label_17562c;
        case 0x175630u: goto label_175630;
        case 0x175634u: goto label_175634;
        case 0x175638u: goto label_175638;
        case 0x17563cu: goto label_17563c;
        case 0x175640u: goto label_175640;
        case 0x175644u: goto label_175644;
        case 0x175648u: goto label_175648;
        case 0x17564cu: goto label_17564c;
        case 0x175650u: goto label_175650;
        case 0x175654u: goto label_175654;
        case 0x175658u: goto label_175658;
        case 0x17565cu: goto label_17565c;
        case 0x175660u: goto label_175660;
        case 0x175664u: goto label_175664;
        case 0x175668u: goto label_175668;
        case 0x17566cu: goto label_17566c;
        case 0x175670u: goto label_175670;
        case 0x175674u: goto label_175674;
        case 0x175678u: goto label_175678;
        case 0x17567cu: goto label_17567c;
        case 0x175680u: goto label_175680;
        case 0x175684u: goto label_175684;
        case 0x175688u: goto label_175688;
        case 0x17568cu: goto label_17568c;
        default: break;
    }

    ctx->pc = 0x175608u;

label_175608:
    // 0x175608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17560c:
    // 0x17560c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_175610:
    // 0x175610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_175614:
    // 0x175614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175618:
    // 0x175618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17561c:
    // 0x17561c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17561cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175620:
    // 0x175620: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x175620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_175624:
    // 0x175624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x175624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175628:
    // 0x175628: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17562c:
    // 0x17562c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17562cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_175630:
    // 0x175630: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x175630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_175634:
    // 0x175634: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x175634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_175638:
    // 0x175638: 0xc04f750  jal         func_13DD40
label_17563c:
    if (ctx->pc == 0x17563Cu) {
        ctx->pc = 0x17563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175638u;
        // 0x17563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175640u;
        goto label_175640;
    }
    ctx->pc = 0x175638u;
    SET_GPR_U32(ctx, 31, 0x175640u);
    ctx->pc = 0x17563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175638u;
    // 0x17563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x175638u, 0x175640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175640u;
label_175640:
    // 0x175640: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x175640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_175644:
    // 0x175644: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_175648:
    if (ctx->pc == 0x175648u) {
        ctx->pc = 0x175648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175644u;
        // 0x175648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17564Cu;
        goto label_17564c;
    }
    ctx->pc = 0x175644u;
    {
        const bool branch_taken_0x175644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x175644) {
            ctx->pc = 0x175648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175644u;
            // 0x175648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175674u;
            goto label_175674;
        }
    }
    ctx->pc = 0x17564Cu;
label_17564c:
    // 0x17564c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_175650:
    // 0x175650: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_175654:
    if (ctx->pc == 0x175654u) {
        ctx->pc = 0x175654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175650u;
        // 0x175654: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175658u;
        goto label_175658;
    }
    ctx->pc = 0x175650u;
    {
        const bool branch_taken_0x175650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175650u;
        // 0x175654: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175650) {
            ctx->pc = 0x175670u;
            goto label_175670;
        }
    }
    ctx->pc = 0x175658u;
label_175658:
    // 0x175658: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17565c:
    // 0x17565c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17565cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175660:
    // 0x175660: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x175660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175664:
    // 0x175664: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x175664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_175668:
    // 0x175668: 0x40f809  jalr        $v0
label_17566c:
    if (ctx->pc == 0x17566Cu) {
        ctx->pc = 0x17566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175668u;
        // 0x17566c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175670u;
        goto label_175670;
    }
    ctx->pc = 0x175668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175670u);
        ctx->pc = 0x17566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175668u;
        // 0x17566c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175668u, 0x175670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175670u;
label_175670:
    // 0x175670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175674:
    // 0x175674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_175678:
    // 0x175678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17567c:
    // 0x17567c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17567cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_175680:
    // 0x175680: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x175680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175684:
    // 0x175684: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x175684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_175688:
    // 0x175688: 0x3e00008  jr          $ra
label_17568c:
    if (ctx->pc == 0x17568Cu) {
        ctx->pc = 0x17568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175688u;
        // 0x17568c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175690u;
        goto label_fallthrough_0x175688;
    }
    ctx->pc = 0x175688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175688u;
        // 0x17568c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175688:
    ctx->pc = 0x175690u;
}
