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

// Function: sub_00366078
// Address: 0x366078 - 0x366170
void sub_00366078_0x366078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366078_0x366078");
#endif

    switch (ctx->pc) {
        case 0x366094u: goto label_366094;
        case 0x3660ccu: goto label_3660cc;
        case 0x3660dcu: goto label_3660dc;
        case 0x3660ecu: goto label_3660ec;
        case 0x366100u: goto label_366100;
        case 0x366120u: goto label_366120;
        case 0x366130u: goto label_366130;
        case 0x366140u: goto label_366140;
        case 0x366150u: goto label_366150;
        default: break;
    }

    ctx->pc = 0x366078u;

    // 0x366078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36607c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366088: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x366088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36608c: 0xc0d95e0  jal         func_365780
    ctx->pc = 0x36608Cu;
    SET_GPR_U32(ctx, 31, 0x366094u);
    ctx->pc = 0x366090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36608Cu;
    // 0x366090: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365780u, 0x36608Cu, 0x366094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366094u;
label_366094:
    // 0x366094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x366094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366098: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x366098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36609c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x36609cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3660a0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3660A0u;
    {
        const bool branch_taken_0x3660a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660A0u;
        // 0x3660a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660a0) {
            ctx->pc = 0x366154u;
            goto label_366154;
        }
    }
    ctx->pc = 0x3660A8u;
    // 0x3660a8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3660a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x3660ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3660acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3660b0: 0x24427030  addiu       $v0, $v0, 0x7030
    ctx->pc = 0x3660b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28720));
    // 0x3660b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3660b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3660b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3660b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3660bc: 0x800008  jr          $a0
    ctx->pc = 0x3660BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3660C4u: goto label_3660c4;
            case 0x3660E4u: goto label_3660e4;
            case 0x366118u: goto label_366118;
            case 0x366138u: goto label_366138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3660BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3660C4u;
label_3660c4:
    // 0x3660c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3660C4u;
    SET_GPR_U32(ctx, 31, 0x3660CCu);
    ctx->pc = 0x3660C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660C4u;
    // 0x3660c8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3660C4u, 0x3660CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660CCu;
label_3660cc:
    // 0x3660cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3660ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3660d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660d4: 0xc0d8ef2  jal         func_363BC8
    ctx->pc = 0x3660D4u;
    SET_GPR_U32(ctx, 31, 0x3660DCu);
    ctx->pc = 0x3660D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660D4u;
    // 0x3660d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363BC8u, 0x3660D4u, 0x3660DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660DCu;
label_3660dc:
    // 0x3660dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3660DCu;
    {
        const bool branch_taken_0x3660dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660DCu;
        // 0x3660e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660dc) {
            ctx->pc = 0x366154u;
            goto label_366154;
        }
    }
    ctx->pc = 0x3660E4u;
label_3660e4:
    // 0x3660e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3660E4u;
    SET_GPR_U32(ctx, 31, 0x3660ECu);
    ctx->pc = 0x3660E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660E4u;
    // 0x3660e8: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3660E4u, 0x3660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660ECu;
label_3660ec:
    // 0x3660ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3660ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3660f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3660f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3660f8: 0xc0d8d38  jal         func_3634E0
    ctx->pc = 0x3660F8u;
    SET_GPR_U32(ctx, 31, 0x366100u);
    ctx->pc = 0x3660FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660F8u;
    // 0x3660fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634E0u, 0x3660F8u, 0x366100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366100u;
label_366100:
    // 0x366100: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x366100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x366104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366108: 0x246345f8  addiu       $v1, $v1, 0x45F8
    ctx->pc = 0x366108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17912));
    // 0x36610c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x36610cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x366110: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x366110u;
    {
        const bool branch_taken_0x366110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366110u;
        // 0x366114: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366110) {
            ctx->pc = 0x366154u;
            goto label_366154;
        }
    }
    ctx->pc = 0x366118u;
label_366118:
    // 0x366118: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x366118u;
    SET_GPR_U32(ctx, 31, 0x366120u);
    ctx->pc = 0x36611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366118u;
    // 0x36611c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x366118u, 0x366120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366120u;
label_366120:
    // 0x366120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x366120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x366124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366128: 0xc0d9004  jal         func_364010
    ctx->pc = 0x366128u;
    SET_GPR_U32(ctx, 31, 0x366130u);
    ctx->pc = 0x36612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366128u;
    // 0x36612c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364010u, 0x366128u, 0x366130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366130u;
label_366130:
    // 0x366130: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x366130u;
    {
        const bool branch_taken_0x366130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366130u;
        // 0x366134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366130) {
            ctx->pc = 0x366154u;
            goto label_366154;
        }
    }
    ctx->pc = 0x366138u;
label_366138:
    // 0x366138: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x366138u;
    SET_GPR_U32(ctx, 31, 0x366140u);
    ctx->pc = 0x36613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366138u;
    // 0x36613c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x366138u, 0x366140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366140u;
label_366140:
    // 0x366140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x366140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x366144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366148: 0xc0d8d38  jal         func_3634E0
    ctx->pc = 0x366148u;
    SET_GPR_U32(ctx, 31, 0x366150u);
    ctx->pc = 0x36614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366148u;
    // 0x36614c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634E0u, 0x366148u, 0x366150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366150u;
label_366150:
    // 0x366150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x366150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_366154:
    // 0x366154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366158: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x366158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36615c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36615cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366160: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366164: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366168: 0x3e00008  jr          $ra
    ctx->pc = 0x366168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366168u;
        // 0x36616c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366170u;
}
