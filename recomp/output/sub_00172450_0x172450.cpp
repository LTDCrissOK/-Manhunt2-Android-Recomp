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

// Function: sub_00172450
// Address: 0x172450 - 0x172500
void sub_00172450_0x172450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172450_0x172450");
#endif

    switch (ctx->pc) {
        case 0x172474u: goto label_172474;
        case 0x172490u: goto label_172490;
        case 0x1724acu: goto label_1724ac;
        case 0x1724ccu: goto label_1724cc;
        default: break;
    }

    ctx->pc = 0x172450u;

    // 0x172450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x172458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17245c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x172460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x172464: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x172464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x172468: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x172468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17246c: 0xc05c880  jal         func_172200
    ctx->pc = 0x17246Cu;
    SET_GPR_U32(ctx, 31, 0x172474u);
    ctx->pc = 0x172470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17246Cu;
    // 0x172470: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172200u, 0x17246Cu, 0x172474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x172474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x172478: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x172478u;
    {
        const bool branch_taken_0x172478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172478u;
        // 0x17247c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172478) {
            ctx->pc = 0x1724E0u;
            goto label_1724e0;
        }
    }
    ctx->pc = 0x172480u;
    // 0x172480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172484: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x172484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x172488: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17248c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x17248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_172490:
    // 0x172490: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x172494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172498: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17249c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x17249Cu;
    {
        const bool branch_taken_0x17249c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17249Cu;
        // 0x1724a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17249c) {
            ctx->pc = 0x1724CCu;
            goto label_1724cc;
        }
    }
    ctx->pc = 0x1724A4u;
    // 0x1724a4: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x1724A4u;
    SET_GPR_U32(ctx, 31, 0x1724ACu);
    ctx->pc = 0x1724A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724A4u;
    // 0x1724a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x1724A4u, 0x1724ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724ACu;
label_1724ac:
    // 0x1724ac: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1724ACu;
    {
        const bool branch_taken_0x1724ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724ACu;
        // 0x1724b0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724ac) {
            ctx->pc = 0x1724CCu;
            goto label_1724cc;
        }
    }
    ctx->pc = 0x1724B4u;
    // 0x1724b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1724b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1724b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1724b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1724bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1724BCu;
    {
        const bool branch_taken_0x1724bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724BCu;
        // 0x1724c0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724bc) {
            ctx->pc = 0x1724D0u;
            goto label_1724d0;
        }
    }
    ctx->pc = 0x1724C4u;
    // 0x1724c4: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x1724C4u;
    SET_GPR_U32(ctx, 31, 0x1724CCu);
    ctx->pc = 0x1724C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724C4u;
    // 0x1724c8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x1724C4u, 0x1724CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724CCu;
label_1724cc:
    // 0x1724cc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1724ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1724d0:
    // 0x1724d0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1724d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1724d4: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1724d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1724d8: 0x5460ffed  bnel        $v1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1724D8u;
    {
        const bool branch_taken_0x1724d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1724d8) {
            ctx->pc = 0x1724DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1724D8u;
            // 0x1724dc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172490;
        }
    }
    ctx->pc = 0x1724E0u;
label_1724e0:
    // 0x1724e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1724e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1724e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1724e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1724e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1724e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1724ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1724ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1724f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1724f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1724f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1724f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1724f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1724F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724F8u;
        // 0x1724fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1724F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172500u;
}
