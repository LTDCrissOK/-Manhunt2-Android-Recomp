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

// Function: sub_001F3460
// Address: 0x1f3460 - 0x1f3510
void sub_001F3460_0x1f3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3460_0x1f3460");
#endif

    switch (ctx->pc) {
        case 0x1f3460u: goto label_1f3460;
        case 0x1f3464u: goto label_1f3464;
        case 0x1f3468u: goto label_1f3468;
        case 0x1f346cu: goto label_1f346c;
        case 0x1f3470u: goto label_1f3470;
        case 0x1f3474u: goto label_1f3474;
        case 0x1f3478u: goto label_1f3478;
        case 0x1f347cu: goto label_1f347c;
        case 0x1f3480u: goto label_1f3480;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f3488u: goto label_1f3488;
        case 0x1f348cu: goto label_1f348c;
        case 0x1f3490u: goto label_1f3490;
        case 0x1f3494u: goto label_1f3494;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f349cu: goto label_1f349c;
        case 0x1f34a0u: goto label_1f34a0;
        case 0x1f34a4u: goto label_1f34a4;
        case 0x1f34a8u: goto label_1f34a8;
        case 0x1f34acu: goto label_1f34ac;
        case 0x1f34b0u: goto label_1f34b0;
        case 0x1f34b4u: goto label_1f34b4;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34bcu: goto label_1f34bc;
        case 0x1f34c0u: goto label_1f34c0;
        case 0x1f34c4u: goto label_1f34c4;
        case 0x1f34c8u: goto label_1f34c8;
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34d0u: goto label_1f34d0;
        case 0x1f34d4u: goto label_1f34d4;
        case 0x1f34d8u: goto label_1f34d8;
        case 0x1f34dcu: goto label_1f34dc;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34e4u: goto label_1f34e4;
        case 0x1f34e8u: goto label_1f34e8;
        case 0x1f34ecu: goto label_1f34ec;
        case 0x1f34f0u: goto label_1f34f0;
        case 0x1f34f4u: goto label_1f34f4;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f34fcu: goto label_1f34fc;
        case 0x1f3500u: goto label_1f3500;
        case 0x1f3504u: goto label_1f3504;
        case 0x1f3508u: goto label_1f3508;
        case 0x1f350cu: goto label_1f350c;
        default: break;
    }

    ctx->pc = 0x1f3460u;

label_1f3460:
    // 0x1f3460: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f3460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1f3464:
    // 0x1f3464: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f3468:
    // 0x1f3468: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x1f3468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_1f346c:
    // 0x1f346c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f3470:
    // 0x1f3470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f3474:
    // 0x1f3474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f3478:
    // 0x1f3478: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f347c:
    // 0x1f347c: 0xc07c7de  jal         func_1F1F78
label_1f3480:
    if (ctx->pc == 0x1F3480u) {
        ctx->pc = 0x1F3484u;
        goto label_1f3484;
    }
    ctx->pc = 0x1F347Cu;
    SET_GPR_U32(ctx, 31, 0x1F3484u);
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F347Cu, 0x1F3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3484u;
label_1f3484:
    // 0x1f3484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f3484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3488:
    // 0x1f3488: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_1f348c:
    if (ctx->pc == 0x1F348Cu) {
        ctx->pc = 0x1F348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3488u;
        // 0x1f348c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3490u;
        goto label_1f3490;
    }
    ctx->pc = 0x1F3488u;
    {
        const bool branch_taken_0x1f3488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3488u;
        // 0x1f348c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3488) {
            ctx->pc = 0x1F34FCu;
            goto label_1f34fc;
        }
    }
    ctx->pc = 0x1F3490u;
label_1f3490:
    // 0x1f3490: 0xc081d36  jal         func_2074D8
label_1f3494:
    if (ctx->pc == 0x1F3494u) {
        ctx->pc = 0x1F3498u;
        goto label_1f3498;
    }
    ctx->pc = 0x1F3490u;
    SET_GPR_U32(ctx, 31, 0x1F3498u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3490u, 0x1F3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3498u;
label_1f3498:
    // 0x1f3498: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f3498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1f349c:
    // 0x1f349c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f34a0:
    // 0x1f34a0: 0xc08217a  jal         func_2085E8
label_1f34a4:
    if (ctx->pc == 0x1F34A4u) {
        ctx->pc = 0x1F34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34A0u;
        // 0x1f34a4: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34A8u;
        goto label_1f34a8;
    }
    ctx->pc = 0x1F34A0u;
    SET_GPR_U32(ctx, 31, 0x1F34A8u);
    ctx->pc = 0x1F34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34A0u;
    // 0x1f34a4: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F34A0u, 0x1F34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34A8u;
label_1f34a8:
    // 0x1f34a8: 0xc081d36  jal         func_2074D8
label_1f34ac:
    if (ctx->pc == 0x1F34ACu) {
        ctx->pc = 0x1F34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34A8u;
        // 0x1f34ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34B0u;
        goto label_1f34b0;
    }
    ctx->pc = 0x1F34A8u;
    SET_GPR_U32(ctx, 31, 0x1F34B0u);
    ctx->pc = 0x1F34ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34A8u;
    // 0x1f34ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F34A8u, 0x1F34B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34B0u;
label_1f34b0:
    // 0x1f34b0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1f34b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f34b4:
    // 0x1f34b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f34b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f34b8:
    // 0x1f34b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f34b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f34bc:
    // 0x1f34bc: 0xc0820dc  jal         func_208370
label_1f34c0:
    if (ctx->pc == 0x1F34C0u) {
        ctx->pc = 0x1F34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34BCu;
        // 0x1f34c0: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34C4u;
        goto label_1f34c4;
    }
    ctx->pc = 0x1F34BCu;
    SET_GPR_U32(ctx, 31, 0x1F34C4u);
    ctx->pc = 0x1F34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34BCu;
    // 0x1f34c0: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1F34BCu, 0x1F34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34C4u;
label_1f34c4:
    // 0x1f34c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f34c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f34c8:
    // 0x1f34c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f34cc:
    // 0x1f34cc: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
label_1f34d0:
    if (ctx->pc == 0x1F34D0u) {
        ctx->pc = 0x1F34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34CCu;
        // 0x1f34d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34D4u;
        goto label_1f34d4;
    }
    ctx->pc = 0x1F34CCu;
    {
        const bool branch_taken_0x1f34cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f34cc) {
            ctx->pc = 0x1F34D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F34CCu;
            // 0x1f34d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F34FCu;
            goto label_1f34fc;
        }
    }
    ctx->pc = 0x1F34D4u;
label_1f34d4:
    // 0x1f34d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f34d8:
    // 0x1f34d8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f34dc:
    // 0x1f34dc: 0x40f809  jalr        $v0
label_1f34e0:
    if (ctx->pc == 0x1F34E0u) {
        ctx->pc = 0x1F34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34DCu;
        // 0x1f34e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34E4u;
        goto label_1f34e4;
    }
    ctx->pc = 0x1F34DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F34E4u);
        ctx->pc = 0x1F34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34DCu;
        // 0x1f34e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F34DCu, 0x1F34E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F34E4u;
label_1f34e4:
    // 0x1f34e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f34e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f34e8:
    // 0x1f34e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f34e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f34ec:
    // 0x1f34ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f34ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f34f0:
    // 0x1f34f0: 0xc081436  jal         func_2050D8
label_1f34f4:
    if (ctx->pc == 0x1F34F4u) {
        ctx->pc = 0x1F34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34F0u;
        // 0x1f34f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F34F8u;
        goto label_1f34f8;
    }
    ctx->pc = 0x1F34F0u;
    SET_GPR_U32(ctx, 31, 0x1F34F8u);
    ctx->pc = 0x1F34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34F0u;
    // 0x1f34f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1F34F0u, 0x1F34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34F8u;
label_1f34f8:
    // 0x1f34f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f34f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f34fc:
    // 0x1f34fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f34fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f3500:
    // 0x1f3500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3504:
    // 0x1f3504: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f3504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f3508:
    // 0x1f3508: 0x3e00008  jr          $ra
label_1f350c:
    if (ctx->pc == 0x1F350Cu) {
        ctx->pc = 0x1F350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3508u;
        // 0x1f350c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3510u;
        goto label_fallthrough_0x1f3508;
    }
    ctx->pc = 0x1F3508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3508u;
        // 0x1f350c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f3508:
    ctx->pc = 0x1F3510u;
}
