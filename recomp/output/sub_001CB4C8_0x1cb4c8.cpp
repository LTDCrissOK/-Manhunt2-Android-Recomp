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

// Function: sub_001CB4C8
// Address: 0x1cb4c8 - 0x1cb568
void sub_001CB4C8_0x1cb4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB4C8_0x1cb4c8");
#endif

    switch (ctx->pc) {
        case 0x1cb4ecu: goto label_1cb4ec;
        case 0x1cb4f8u: goto label_1cb4f8;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb510u: goto label_1cb510;
        case 0x1cb51cu: goto label_1cb51c;
        case 0x1cb524u: goto label_1cb524;
        default: break;
    }

    ctx->pc = 0x1cb4c8u;

    // 0x1cb4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb4d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb4d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb4d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb4dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cb4e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cb4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cb4e4: 0xc072eda  jal         func_1CBB68
    ctx->pc = 0x1CB4E4u;
    SET_GPR_U32(ctx, 31, 0x1CB4ECu);
    ctx->pc = 0x1CB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4E4u;
    // 0x1cb4e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB68u, 0x1CB4E4u, 0x1CB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4ECu;
label_1cb4ec:
    // 0x1cb4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4f0: 0xc072d5a  jal         func_1CB568
    ctx->pc = 0x1CB4F0u;
    SET_GPR_U32(ctx, 31, 0x1CB4F8u);
    ctx->pc = 0x1CB4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4F0u;
    // 0x1cb4f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB568u, 0x1CB4F0u, 0x1CB4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4F8u;
label_1cb4f8:
    // 0x1cb4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb4fc: 0xc072f12  jal         func_1CBC48
    ctx->pc = 0x1CB4FCu;
    SET_GPR_U32(ctx, 31, 0x1CB504u);
    ctx->pc = 0x1CB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4FCu;
    // 0x1cb500: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC48u, 0x1CB4FCu, 0x1CB504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB504u;
label_1cb504:
    // 0x1cb504: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1cb508: 0xc072868  jal         func_1CA1A0
    ctx->pc = 0x1CB508u;
    SET_GPR_U32(ctx, 31, 0x1CB510u);
    ctx->pc = 0x1CB50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB508u;
    // 0x1cb50c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA1A0u, 0x1CB508u, 0x1CB510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB510u;
label_1cb510:
    // 0x1cb510: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1cb510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1cb514: 0xc072be8  jal         func_1CAFA0
    ctx->pc = 0x1CB514u;
    SET_GPR_U32(ctx, 31, 0x1CB51Cu);
    ctx->pc = 0x1CB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB514u;
    // 0x1cb518: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFA0u, 0x1CB514u, 0x1CB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB51Cu;
label_1cb51c:
    // 0x1cb51c: 0xc072954  jal         func_1CA550
    ctx->pc = 0x1CB51Cu;
    SET_GPR_U32(ctx, 31, 0x1CB524u);
    ctx->pc = 0x1CB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB51Cu;
    // 0x1cb520: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA550u, 0x1CB51Cu, 0x1CB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB524u;
label_1cb524:
    // 0x1cb524: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB524u;
    {
        const bool branch_taken_0x1cb524 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB524u;
        // 0x1cb528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb524) {
            ctx->pc = 0x1CB544u;
            goto label_1cb544;
        }
    }
    ctx->pc = 0x1CB52Cu;
    // 0x1cb52c: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB52Cu;
    {
        const bool branch_taken_0x1cb52c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb52c) {
            ctx->pc = 0x1CB530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB52Cu;
            // 0x1cb530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB548u;
            goto label_1cb548;
        }
    }
    ctx->pc = 0x1CB534u;
    // 0x1cb534: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB534u;
    {
        const bool branch_taken_0x1cb534 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb534) {
            ctx->pc = 0x1CB538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB534u;
            // 0x1cb538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB548u;
            goto label_1cb548;
        }
    }
    ctx->pc = 0x1CB53Cu;
    // 0x1cb53c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB53Cu;
    {
        const bool branch_taken_0x1cb53c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB53Cu;
        // 0x1cb540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb53c) {
            ctx->pc = 0x1CB54Cu;
            goto label_1cb54c;
        }
    }
    ctx->pc = 0x1CB544u;
label_1cb544:
    // 0x1cb544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb548:
    // 0x1cb548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb54c:
    // 0x1cb54c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb558: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cb558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb55c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cb55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb560: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB560u;
        // 0x1cb564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB568u;
}
