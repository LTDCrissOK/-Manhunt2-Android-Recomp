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

// Function: sub_00170318
// Address: 0x170318 - 0x1703a0
void sub_00170318_0x170318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170318_0x170318");
#endif

    switch (ctx->pc) {
        case 0x170318u: goto label_170318;
        case 0x17031cu: goto label_17031c;
        case 0x170320u: goto label_170320;
        case 0x170324u: goto label_170324;
        case 0x170328u: goto label_170328;
        case 0x17032cu: goto label_17032c;
        case 0x170330u: goto label_170330;
        case 0x170334u: goto label_170334;
        case 0x170338u: goto label_170338;
        case 0x17033cu: goto label_17033c;
        case 0x170340u: goto label_170340;
        case 0x170344u: goto label_170344;
        case 0x170348u: goto label_170348;
        case 0x17034cu: goto label_17034c;
        case 0x170350u: goto label_170350;
        case 0x170354u: goto label_170354;
        case 0x170358u: goto label_170358;
        case 0x17035cu: goto label_17035c;
        case 0x170360u: goto label_170360;
        case 0x170364u: goto label_170364;
        case 0x170368u: goto label_170368;
        case 0x17036cu: goto label_17036c;
        case 0x170370u: goto label_170370;
        case 0x170374u: goto label_170374;
        case 0x170378u: goto label_170378;
        case 0x17037cu: goto label_17037c;
        case 0x170380u: goto label_170380;
        case 0x170384u: goto label_170384;
        case 0x170388u: goto label_170388;
        case 0x17038cu: goto label_17038c;
        case 0x170390u: goto label_170390;
        case 0x170394u: goto label_170394;
        case 0x170398u: goto label_170398;
        case 0x17039cu: goto label_17039c;
        default: break;
    }

    ctx->pc = 0x170318u;

label_170318:
    // 0x170318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17031c:
    // 0x17031c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_170320:
    // 0x170320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_170324:
    // 0x170324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170328:
    // 0x170328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17032c:
    // 0x17032c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_170330:
    // 0x170330: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x170330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_170334:
    // 0x170334: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x170334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_170338:
    // 0x170338: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x170338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17033c:
    // 0x17033c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17033cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_170340:
    // 0x170340: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x170340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_170344:
    // 0x170344: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_170348:
    // 0x170348: 0xc04f750  jal         func_13DD40
label_17034c:
    if (ctx->pc == 0x17034Cu) {
        ctx->pc = 0x17034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170348u;
        // 0x17034c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170350u;
        goto label_170350;
    }
    ctx->pc = 0x170348u;
    SET_GPR_U32(ctx, 31, 0x170350u);
    ctx->pc = 0x17034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170348u;
    // 0x17034c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x170348u, 0x170350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170350u;
label_170350:
    // 0x170350: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x170350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_170354:
    // 0x170354: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_170358:
    if (ctx->pc == 0x170358u) {
        ctx->pc = 0x170358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170354u;
        // 0x170358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17035Cu;
        goto label_17035c;
    }
    ctx->pc = 0x170354u;
    {
        const bool branch_taken_0x170354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x170354) {
            ctx->pc = 0x170358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170354u;
            // 0x170358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170384u;
            goto label_170384;
        }
    }
    ctx->pc = 0x17035Cu;
label_17035c:
    // 0x17035c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_170360:
    // 0x170360: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_170364:
    if (ctx->pc == 0x170364u) {
        ctx->pc = 0x170364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170360u;
        // 0x170364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170368u;
        goto label_170368;
    }
    ctx->pc = 0x170360u;
    {
        const bool branch_taken_0x170360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x170364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170360u;
        // 0x170364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170360) {
            ctx->pc = 0x170380u;
            goto label_170380;
        }
    }
    ctx->pc = 0x170368u;
label_170368:
    // 0x170368: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x170368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17036c:
    // 0x17036c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17036cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170370:
    // 0x170370: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x170370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_170374:
    // 0x170374: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x170374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_170378:
    // 0x170378: 0x40f809  jalr        $v0
label_17037c:
    if (ctx->pc == 0x17037Cu) {
        ctx->pc = 0x17037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170378u;
        // 0x17037c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170380u;
        goto label_170380;
    }
    ctx->pc = 0x170378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170380u);
        ctx->pc = 0x17037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170378u;
        // 0x17037c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170378u, 0x170380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170380u;
label_170380:
    // 0x170380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170384:
    // 0x170384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_170388:
    // 0x170388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17038c:
    // 0x17038c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17038cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_170390:
    // 0x170390: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x170390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_170394:
    // 0x170394: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x170394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_170398:
    // 0x170398: 0x3e00008  jr          $ra
label_17039c:
    if (ctx->pc == 0x17039Cu) {
        ctx->pc = 0x17039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170398u;
        // 0x17039c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1703A0u;
        goto label_fallthrough_0x170398;
    }
    ctx->pc = 0x170398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170398u;
        // 0x17039c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170398:
    ctx->pc = 0x1703A0u;
}
