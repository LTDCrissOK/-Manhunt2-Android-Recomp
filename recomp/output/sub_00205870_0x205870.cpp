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

// Function: sub_00205870
// Address: 0x205870 - 0x205920
void sub_00205870_0x205870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205870_0x205870");
#endif

    switch (ctx->pc) {
        case 0x2058b4u: goto label_2058b4;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058e0u: goto label_2058e0;
        case 0x205900u: goto label_205900;
        default: break;
    }

    ctx->pc = 0x205870u;

    // 0x205870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x205878: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x205878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20587c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20587cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205880: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x205880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x205884: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x205884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205888: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x205888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20588c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20588cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205894: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x205894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x205898: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x205898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20589c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20589Cu;
    {
        const bool branch_taken_0x20589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20589Cu;
        // 0x2058a0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20589c) {
            ctx->pc = 0x205900u;
            goto label_205900;
        }
    }
    ctx->pc = 0x2058A4u;
    // 0x2058a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2058a8: 0x24a50b20  addiu       $a1, $a1, 0xB20
    ctx->pc = 0x2058a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2848));
    // 0x2058ac: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2058ACu;
    SET_GPR_U32(ctx, 31, 0x2058B4u);
    ctx->pc = 0x2058B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058ACu;
    // 0x2058b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2058ACu, 0x2058B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058B4u;
label_2058b4:
    // 0x2058b4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2058b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2058b8: 0xc0e7e2c  jal         func_39F8B0
    ctx->pc = 0x2058B8u;
    SET_GPR_U32(ctx, 31, 0x2058C0u);
    ctx->pc = 0x2058BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058B8u;
    // 0x2058bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F8B0u, 0x2058B8u, 0x2058C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058C0u;
label_2058c0:
    // 0x2058c0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2058c4: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2058C4u;
    {
        const bool branch_taken_0x2058c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2058c4) {
            ctx->pc = 0x2058C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058C4u;
            // 0x2058c8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058F4u;
            goto label_2058f4;
        }
    }
    ctx->pc = 0x2058CCu;
    // 0x2058cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2058ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2058d0:
    // 0x2058d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2058d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058d4: 0x2406fc40  addiu       $a2, $zero, -0x3C0
    ctx->pc = 0x2058d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x2058d8: 0xc0816d6  jal         func_205B58
    ctx->pc = 0x2058D8u;
    SET_GPR_U32(ctx, 31, 0x2058E0u);
    ctx->pc = 0x2058DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058D8u;
    // 0x2058dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B58u, 0x2058D8u, 0x2058E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058E0u;
label_2058e0:
    // 0x2058e0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2058e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2058e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2058e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2058E8u;
    {
        const bool branch_taken_0x2058e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058e8) {
            ctx->pc = 0x2058D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2058d0;
        }
    }
    ctx->pc = 0x2058F0u;
    // 0x2058f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2058f4:
    // 0x2058f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2058f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2058f8: 0xc0e7d32  jal         func_39F4C8
    ctx->pc = 0x2058F8u;
    SET_GPR_U32(ctx, 31, 0x205900u);
    ctx->pc = 0x2058FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058F8u;
    // 0x2058fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F4C8u, 0x2058F8u, 0x205900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205900u;
label_205900:
    // 0x205900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205908: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20590c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20590cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205910: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x205910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205914: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x205914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205918: 0x3e00008  jr          $ra
    ctx->pc = 0x205918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205918u;
        // 0x20591c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205920u;
}
