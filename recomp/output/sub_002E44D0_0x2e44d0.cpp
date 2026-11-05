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

// Function: sub_002E44D0
// Address: 0x2e44d0 - 0x2e454c
void sub_002E44D0_0x2e44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E44D0_0x2e44d0");
#endif

    switch (ctx->pc) {
        case 0x2e44d0u: goto label_2e44d0;
        case 0x2e44d4u: goto label_2e44d4;
        case 0x2e44d8u: goto label_2e44d8;
        case 0x2e44dcu: goto label_2e44dc;
        case 0x2e44e0u: goto label_2e44e0;
        case 0x2e44e4u: goto label_2e44e4;
        case 0x2e44e8u: goto label_2e44e8;
        case 0x2e44ecu: goto label_2e44ec;
        case 0x2e44f0u: goto label_2e44f0;
        case 0x2e44f4u: goto label_2e44f4;
        case 0x2e44f8u: goto label_2e44f8;
        case 0x2e44fcu: goto label_2e44fc;
        case 0x2e4500u: goto label_2e4500;
        case 0x2e4504u: goto label_2e4504;
        case 0x2e4508u: goto label_2e4508;
        case 0x2e450cu: goto label_2e450c;
        case 0x2e4510u: goto label_2e4510;
        case 0x2e4514u: goto label_2e4514;
        case 0x2e4518u: goto label_2e4518;
        case 0x2e451cu: goto label_2e451c;
        case 0x2e4520u: goto label_2e4520;
        case 0x2e4524u: goto label_2e4524;
        case 0x2e4528u: goto label_2e4528;
        case 0x2e452cu: goto label_2e452c;
        case 0x2e4530u: goto label_2e4530;
        case 0x2e4534u: goto label_2e4534;
        case 0x2e4538u: goto label_2e4538;
        case 0x2e453cu: goto label_2e453c;
        case 0x2e4540u: goto label_2e4540;
        case 0x2e4544u: goto label_2e4544;
        case 0x2e4548u: goto label_2e4548;
        default: break;
    }

    ctx->pc = 0x2e44d0u;

label_2e44d0:
    // 0x2e44d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e44d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e44d4:
    // 0x2e44d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e44d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e44d8:
    // 0x2e44d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e44d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2e44dc:
    // 0x2e44dc: 0xc0a4758  jal         func_291D60
label_2e44e0:
    if (ctx->pc == 0x2E44E0u) {
        ctx->pc = 0x2E44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44DCu;
        // 0x2e44e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44E4u;
        goto label_2e44e4;
    }
    ctx->pc = 0x2E44DCu;
    SET_GPR_U32(ctx, 31, 0x2E44E4u);
    ctx->pc = 0x2E44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44DCu;
    // 0x2e44e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x2E44DCu, 0x2E44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44E4u;
label_2e44e4:
    // 0x2e44e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e44e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e44e8:
    // 0x2e44e8: 0xc0a51b0  jal         func_2946C0
label_2e44ec:
    if (ctx->pc == 0x2E44ECu) {
        ctx->pc = 0x2E44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44E8u;
        // 0x2e44ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44F0u;
        goto label_2e44f0;
    }
    ctx->pc = 0x2E44E8u;
    SET_GPR_U32(ctx, 31, 0x2E44F0u);
    ctx->pc = 0x2E44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44E8u;
    // 0x2e44ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2946C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946C0u, 0x2E44E8u, 0x2E44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44F0u;
label_2e44f0:
    // 0x2e44f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2e44f4:
    if (ctx->pc == 0x2E44F4u) {
        ctx->pc = 0x2E44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44F0u;
        // 0x2e44f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44F8u;
        goto label_2e44f8;
    }
    ctx->pc = 0x2E44F0u;
    {
        const bool branch_taken_0x2e44f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e44f0) {
            ctx->pc = 0x2E44F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E44F0u;
            // 0x2e44f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4510u;
            goto label_2e4510;
        }
    }
    ctx->pc = 0x2E44F8u;
label_2e44f8:
    // 0x2e44f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2e44f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2e44fc:
    // 0x2e44fc: 0xc0494ea  jal         func_1253A8
label_2e4500:
    if (ctx->pc == 0x2E4500u) {
        ctx->pc = 0x2E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44FCu;
        // 0x2e4500: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4504u;
        goto label_2e4504;
    }
    ctx->pc = 0x2E44FCu;
    SET_GPR_U32(ctx, 31, 0x2E4504u);
    ctx->pc = 0x2E4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44FCu;
    // 0x2e4500: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x2E44FCu, 0x2E4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4504u;
label_2e4504:
    // 0x2e4504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e4508:
    if (ctx->pc == 0x2E4508u) {
        ctx->pc = 0x2E4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4504u;
        // 0x2e4508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E450Cu;
        goto label_2e450c;
    }
    ctx->pc = 0x2E4504u;
    {
        const bool branch_taken_0x2e4504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4504u;
        // 0x2e4508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4504) {
            ctx->pc = 0x2E4514u;
            goto label_2e4514;
        }
    }
    ctx->pc = 0x2E450Cu;
label_2e450c:
    // 0x2e450c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e450cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4510:
    // 0x2e4510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e4510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4514:
    // 0x2e4514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e4518:
    // 0x2e4518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e451c:
    // 0x2e451c: 0x3e00008  jr          $ra
label_2e4520:
    if (ctx->pc == 0x2E4520u) {
        ctx->pc = 0x2E4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E451Cu;
        // 0x2e4520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4524u;
        goto label_2e4524;
    }
    ctx->pc = 0x2E451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E451Cu;
        // 0x2e4520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E451Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4524u;
label_2e4524:
    // 0x2e4524: 0x0  nop
    ctx->pc = 0x2e4524u;
    // NOP
label_2e4528:
    // 0x2e4528: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2e4528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2e452c:
    // 0x2e452c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2e4530:
    if (ctx->pc == 0x2E4530u) {
        ctx->pc = 0x2E4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E452Cu;
        // 0x2e4530: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4534u;
        goto label_2e4534;
    }
    ctx->pc = 0x2E452Cu;
    {
        const bool branch_taken_0x2e452c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E452Cu;
        // 0x2e4530: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e452c) {
            ctx->pc = 0x2E45ACu;
            return;
        }
    }
    ctx->pc = 0x2E4534u;
label_2e4534:
    // 0x2e4534: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2e4534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2e4538:
    // 0x2e4538: 0x24421710  addiu       $v0, $v0, 0x1710
    ctx->pc = 0x2e4538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5904));
label_2e453c:
    // 0x2e453c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e4540:
    // 0x2e4540: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e4540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e4544:
    // 0x2e4544: 0x800008  jr          $a0
label_2e4548:
    if (ctx->pc == 0x2E4548u) {
        ctx->pc = 0x2E454Cu;
        goto label_fallthrough_0x2e4544;
    }
    ctx->pc = 0x2E4544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4544u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2e4544:
    ctx->pc = 0x2E454Cu;
}
