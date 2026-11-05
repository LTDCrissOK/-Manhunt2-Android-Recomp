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

// Function: sub_001F33B0
// Address: 0x1f33b0 - 0x1f3460
void sub_001F33B0_0x1f33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F33B0_0x1f33b0");
#endif

    switch (ctx->pc) {
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f33b4u: goto label_1f33b4;
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33bcu: goto label_1f33bc;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33c4u: goto label_1f33c4;
        case 0x1f33c8u: goto label_1f33c8;
        case 0x1f33ccu: goto label_1f33cc;
        case 0x1f33d0u: goto label_1f33d0;
        case 0x1f33d4u: goto label_1f33d4;
        case 0x1f33d8u: goto label_1f33d8;
        case 0x1f33dcu: goto label_1f33dc;
        case 0x1f33e0u: goto label_1f33e0;
        case 0x1f33e4u: goto label_1f33e4;
        case 0x1f33e8u: goto label_1f33e8;
        case 0x1f33ecu: goto label_1f33ec;
        case 0x1f33f0u: goto label_1f33f0;
        case 0x1f33f4u: goto label_1f33f4;
        case 0x1f33f8u: goto label_1f33f8;
        case 0x1f33fcu: goto label_1f33fc;
        case 0x1f3400u: goto label_1f3400;
        case 0x1f3404u: goto label_1f3404;
        case 0x1f3408u: goto label_1f3408;
        case 0x1f340cu: goto label_1f340c;
        case 0x1f3410u: goto label_1f3410;
        case 0x1f3414u: goto label_1f3414;
        case 0x1f3418u: goto label_1f3418;
        case 0x1f341cu: goto label_1f341c;
        case 0x1f3420u: goto label_1f3420;
        case 0x1f3424u: goto label_1f3424;
        case 0x1f3428u: goto label_1f3428;
        case 0x1f342cu: goto label_1f342c;
        case 0x1f3430u: goto label_1f3430;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3438u: goto label_1f3438;
        case 0x1f343cu: goto label_1f343c;
        case 0x1f3440u: goto label_1f3440;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3448u: goto label_1f3448;
        case 0x1f344cu: goto label_1f344c;
        case 0x1f3450u: goto label_1f3450;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3458u: goto label_1f3458;
        case 0x1f345cu: goto label_1f345c;
        default: break;
    }

    ctx->pc = 0x1f33b0u;

label_1f33b0:
    // 0x1f33b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1f33b4:
    // 0x1f33b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f33b8:
    // 0x1f33b8: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x1f33b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_1f33bc:
    // 0x1f33bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f33bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f33c0:
    // 0x1f33c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f33c4:
    // 0x1f33c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f33c8:
    // 0x1f33c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f33cc:
    // 0x1f33cc: 0xc07c7de  jal         func_1F1F78
label_1f33d0:
    if (ctx->pc == 0x1F33D0u) {
        ctx->pc = 0x1F33D4u;
        goto label_1f33d4;
    }
    ctx->pc = 0x1F33CCu;
    SET_GPR_U32(ctx, 31, 0x1F33D4u);
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F33CCu, 0x1F33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33D4u;
label_1f33d4:
    // 0x1f33d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f33d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f33d8:
    // 0x1f33d8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_1f33dc:
    if (ctx->pc == 0x1F33DCu) {
        ctx->pc = 0x1F33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33D8u;
        // 0x1f33dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33E0u;
        goto label_1f33e0;
    }
    ctx->pc = 0x1F33D8u;
    {
        const bool branch_taken_0x1f33d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33D8u;
        // 0x1f33dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33d8) {
            ctx->pc = 0x1F344Cu;
            goto label_1f344c;
        }
    }
    ctx->pc = 0x1F33E0u;
label_1f33e0:
    // 0x1f33e0: 0xc081d36  jal         func_2074D8
label_1f33e4:
    if (ctx->pc == 0x1F33E4u) {
        ctx->pc = 0x1F33E8u;
        goto label_1f33e8;
    }
    ctx->pc = 0x1F33E0u;
    SET_GPR_U32(ctx, 31, 0x1F33E8u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F33E0u, 0x1F33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33E8u;
label_1f33e8:
    // 0x1f33e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f33e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1f33ec:
    // 0x1f33ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f33ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f33f0:
    // 0x1f33f0: 0xc08217a  jal         func_2085E8
label_1f33f4:
    if (ctx->pc == 0x1F33F4u) {
        ctx->pc = 0x1F33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33F0u;
        // 0x1f33f4: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33F8u;
        goto label_1f33f8;
    }
    ctx->pc = 0x1F33F0u;
    SET_GPR_U32(ctx, 31, 0x1F33F8u);
    ctx->pc = 0x1F33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33F0u;
    // 0x1f33f4: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F33F0u, 0x1F33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33F8u;
label_1f33f8:
    // 0x1f33f8: 0xc081d36  jal         func_2074D8
label_1f33fc:
    if (ctx->pc == 0x1F33FCu) {
        ctx->pc = 0x1F33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33F8u;
        // 0x1f33fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3400u;
        goto label_1f3400;
    }
    ctx->pc = 0x1F33F8u;
    SET_GPR_U32(ctx, 31, 0x1F3400u);
    ctx->pc = 0x1F33FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33F8u;
    // 0x1f33fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F33F8u, 0x1F3400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3400u;
label_1f3400:
    // 0x1f3400: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1f3400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f3404:
    // 0x1f3404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3408:
    // 0x1f3408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f340c:
    // 0x1f340c: 0xc0820dc  jal         func_208370
label_1f3410:
    if (ctx->pc == 0x1F3410u) {
        ctx->pc = 0x1F3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F340Cu;
        // 0x1f3410: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3414u;
        goto label_1f3414;
    }
    ctx->pc = 0x1F340Cu;
    SET_GPR_U32(ctx, 31, 0x1F3414u);
    ctx->pc = 0x1F3410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F340Cu;
    // 0x1f3410: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1F340Cu, 0x1F3414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3414u;
label_1f3414:
    // 0x1f3414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3418:
    // 0x1f3418: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f341c:
    // 0x1f341c: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
label_1f3420:
    if (ctx->pc == 0x1F3420u) {
        ctx->pc = 0x1F3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F341Cu;
        // 0x1f3420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3424u;
        goto label_1f3424;
    }
    ctx->pc = 0x1F341Cu;
    {
        const bool branch_taken_0x1f341c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f341c) {
            ctx->pc = 0x1F3420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F341Cu;
            // 0x1f3420: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F344Cu;
            goto label_1f344c;
        }
    }
    ctx->pc = 0x1F3424u;
label_1f3424:
    // 0x1f3424: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f3428:
    // 0x1f3428: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f3428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f342c:
    // 0x1f342c: 0x40f809  jalr        $v0
label_1f3430:
    if (ctx->pc == 0x1F3430u) {
        ctx->pc = 0x1F3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F342Cu;
        // 0x1f3430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3434u;
        goto label_1f3434;
    }
    ctx->pc = 0x1F342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3434u);
        ctx->pc = 0x1F3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F342Cu;
        // 0x1f3430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F342Cu, 0x1F3434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3434u;
label_1f3434:
    // 0x1f3434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3438:
    // 0x1f3438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f343c:
    // 0x1f343c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f343cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3440:
    // 0x1f3440: 0xc081436  jal         func_2050D8
label_1f3444:
    if (ctx->pc == 0x1F3444u) {
        ctx->pc = 0x1F3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3440u;
        // 0x1f3444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3448u;
        goto label_1f3448;
    }
    ctx->pc = 0x1F3440u;
    SET_GPR_U32(ctx, 31, 0x1F3448u);
    ctx->pc = 0x1F3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3440u;
    // 0x1f3444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1F3440u, 0x1F3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3448u;
label_1f3448:
    // 0x1f3448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f344c:
    // 0x1f344c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f344cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f3450:
    // 0x1f3450: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3454:
    // 0x1f3454: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f3454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f3458:
    // 0x1f3458: 0x3e00008  jr          $ra
label_1f345c:
    if (ctx->pc == 0x1F345Cu) {
        ctx->pc = 0x1F345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3458u;
        // 0x1f345c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3460u;
        goto label_fallthrough_0x1f3458;
    }
    ctx->pc = 0x1F3458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3458u;
        // 0x1f345c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f3458:
    ctx->pc = 0x1F3460u;
}
