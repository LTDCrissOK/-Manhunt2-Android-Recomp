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

// Function: sub_001F3300
// Address: 0x1f3300 - 0x1f33b0
void sub_001F3300_0x1f3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3300_0x1f3300");
#endif

    switch (ctx->pc) {
        case 0x1f3300u: goto label_1f3300;
        case 0x1f3304u: goto label_1f3304;
        case 0x1f3308u: goto label_1f3308;
        case 0x1f330cu: goto label_1f330c;
        case 0x1f3310u: goto label_1f3310;
        case 0x1f3314u: goto label_1f3314;
        case 0x1f3318u: goto label_1f3318;
        case 0x1f331cu: goto label_1f331c;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3324u: goto label_1f3324;
        case 0x1f3328u: goto label_1f3328;
        case 0x1f332cu: goto label_1f332c;
        case 0x1f3330u: goto label_1f3330;
        case 0x1f3334u: goto label_1f3334;
        case 0x1f3338u: goto label_1f3338;
        case 0x1f333cu: goto label_1f333c;
        case 0x1f3340u: goto label_1f3340;
        case 0x1f3344u: goto label_1f3344;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f334cu: goto label_1f334c;
        case 0x1f3350u: goto label_1f3350;
        case 0x1f3354u: goto label_1f3354;
        case 0x1f3358u: goto label_1f3358;
        case 0x1f335cu: goto label_1f335c;
        case 0x1f3360u: goto label_1f3360;
        case 0x1f3364u: goto label_1f3364;
        case 0x1f3368u: goto label_1f3368;
        case 0x1f336cu: goto label_1f336c;
        case 0x1f3370u: goto label_1f3370;
        case 0x1f3374u: goto label_1f3374;
        case 0x1f3378u: goto label_1f3378;
        case 0x1f337cu: goto label_1f337c;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f3384u: goto label_1f3384;
        case 0x1f3388u: goto label_1f3388;
        case 0x1f338cu: goto label_1f338c;
        case 0x1f3390u: goto label_1f3390;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f3398u: goto label_1f3398;
        case 0x1f339cu: goto label_1f339c;
        case 0x1f33a0u: goto label_1f33a0;
        case 0x1f33a4u: goto label_1f33a4;
        case 0x1f33a8u: goto label_1f33a8;
        case 0x1f33acu: goto label_1f33ac;
        default: break;
    }

    ctx->pc = 0x1f3300u;

label_1f3300:
    // 0x1f3300: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1f3304:
    // 0x1f3304: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f3308:
    // 0x1f3308: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x1f3308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_1f330c:
    // 0x1f330c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f3310:
    // 0x1f3310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f3314:
    // 0x1f3314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f3318:
    // 0x1f3318: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f3318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f331c:
    // 0x1f331c: 0xc07c7de  jal         func_1F1F78
label_1f3320:
    if (ctx->pc == 0x1F3320u) {
        ctx->pc = 0x1F3324u;
        goto label_1f3324;
    }
    ctx->pc = 0x1F331Cu;
    SET_GPR_U32(ctx, 31, 0x1F3324u);
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F331Cu, 0x1F3324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3324u;
label_1f3324:
    // 0x1f3324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f3324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3328:
    // 0x1f3328: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_1f332c:
    if (ctx->pc == 0x1F332Cu) {
        ctx->pc = 0x1F332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3328u;
        // 0x1f332c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3330u;
        goto label_1f3330;
    }
    ctx->pc = 0x1F3328u;
    {
        const bool branch_taken_0x1f3328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3328u;
        // 0x1f332c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3328) {
            ctx->pc = 0x1F339Cu;
            goto label_1f339c;
        }
    }
    ctx->pc = 0x1F3330u;
label_1f3330:
    // 0x1f3330: 0xc081d36  jal         func_2074D8
label_1f3334:
    if (ctx->pc == 0x1F3334u) {
        ctx->pc = 0x1F3338u;
        goto label_1f3338;
    }
    ctx->pc = 0x1F3330u;
    SET_GPR_U32(ctx, 31, 0x1F3338u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3330u, 0x1F3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3338u;
label_1f3338:
    // 0x1f3338: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f3338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1f333c:
    // 0x1f333c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3340:
    // 0x1f3340: 0xc08217a  jal         func_2085E8
label_1f3344:
    if (ctx->pc == 0x1F3344u) {
        ctx->pc = 0x1F3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3340u;
        // 0x1f3344: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3348u;
        goto label_1f3348;
    }
    ctx->pc = 0x1F3340u;
    SET_GPR_U32(ctx, 31, 0x1F3348u);
    ctx->pc = 0x1F3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3340u;
    // 0x1f3344: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F3340u, 0x1F3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3348u;
label_1f3348:
    // 0x1f3348: 0xc081d36  jal         func_2074D8
label_1f334c:
    if (ctx->pc == 0x1F334Cu) {
        ctx->pc = 0x1F334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3348u;
        // 0x1f334c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3350u;
        goto label_1f3350;
    }
    ctx->pc = 0x1F3348u;
    SET_GPR_U32(ctx, 31, 0x1F3350u);
    ctx->pc = 0x1F334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3348u;
    // 0x1f334c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3348u, 0x1F3350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3350u;
label_1f3350:
    // 0x1f3350: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1f3350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f3354:
    // 0x1f3354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3358:
    // 0x1f3358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f335c:
    // 0x1f335c: 0xc0820dc  jal         func_208370
label_1f3360:
    if (ctx->pc == 0x1F3360u) {
        ctx->pc = 0x1F3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F335Cu;
        // 0x1f3360: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3364u;
        goto label_1f3364;
    }
    ctx->pc = 0x1F335Cu;
    SET_GPR_U32(ctx, 31, 0x1F3364u);
    ctx->pc = 0x1F3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F335Cu;
    // 0x1f3360: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1F335Cu, 0x1F3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3364u;
label_1f3364:
    // 0x1f3364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3368:
    // 0x1f3368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f336c:
    // 0x1f336c: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
label_1f3370:
    if (ctx->pc == 0x1F3370u) {
        ctx->pc = 0x1F3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F336Cu;
        // 0x1f3370: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3374u;
        goto label_1f3374;
    }
    ctx->pc = 0x1F336Cu;
    {
        const bool branch_taken_0x1f336c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f336c) {
            ctx->pc = 0x1F3370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F336Cu;
            // 0x1f3370: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F339Cu;
            goto label_1f339c;
        }
    }
    ctx->pc = 0x1F3374u;
label_1f3374:
    // 0x1f3374: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f3374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f3378:
    // 0x1f3378: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f337c:
    // 0x1f337c: 0x40f809  jalr        $v0
label_1f3380:
    if (ctx->pc == 0x1F3380u) {
        ctx->pc = 0x1F3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F337Cu;
        // 0x1f3380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3384u;
        goto label_1f3384;
    }
    ctx->pc = 0x1F337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3384u);
        ctx->pc = 0x1F3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F337Cu;
        // 0x1f3380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F337Cu, 0x1F3384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3384u;
label_1f3384:
    // 0x1f3384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3388:
    // 0x1f3388: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f338c:
    // 0x1f338c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f338cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3390:
    // 0x1f3390: 0xc081436  jal         func_2050D8
label_1f3394:
    if (ctx->pc == 0x1F3394u) {
        ctx->pc = 0x1F3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3390u;
        // 0x1f3394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3398u;
        goto label_1f3398;
    }
    ctx->pc = 0x1F3390u;
    SET_GPR_U32(ctx, 31, 0x1F3398u);
    ctx->pc = 0x1F3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3390u;
    // 0x1f3394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1F3390u, 0x1F3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3398u;
label_1f3398:
    // 0x1f3398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f339c:
    // 0x1f339c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f339cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f33a0:
    // 0x1f33a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f33a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f33a4:
    // 0x1f33a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f33a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f33a8:
    // 0x1f33a8: 0x3e00008  jr          $ra
label_1f33ac:
    if (ctx->pc == 0x1F33ACu) {
        ctx->pc = 0x1F33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33A8u;
        // 0x1f33ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33B0u;
        goto label_fallthrough_0x1f33a8;
    }
    ctx->pc = 0x1F33A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33A8u;
        // 0x1f33ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F33A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f33a8:
    ctx->pc = 0x1F33B0u;
}
