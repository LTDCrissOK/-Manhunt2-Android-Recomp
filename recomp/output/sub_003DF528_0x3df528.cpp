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

// Function: sub_003DF528
// Address: 0x3df528 - 0x3df588
void sub_003DF528_0x3df528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF528_0x3df528");
#endif

    switch (ctx->pc) {
        case 0x3df528u: goto label_3df528;
        case 0x3df52cu: goto label_3df52c;
        case 0x3df530u: goto label_3df530;
        case 0x3df534u: goto label_3df534;
        case 0x3df538u: goto label_3df538;
        case 0x3df53cu: goto label_3df53c;
        case 0x3df540u: goto label_3df540;
        case 0x3df544u: goto label_3df544;
        case 0x3df548u: goto label_3df548;
        case 0x3df54cu: goto label_3df54c;
        case 0x3df550u: goto label_3df550;
        case 0x3df554u: goto label_3df554;
        case 0x3df558u: goto label_3df558;
        case 0x3df55cu: goto label_3df55c;
        case 0x3df560u: goto label_3df560;
        case 0x3df564u: goto label_3df564;
        case 0x3df568u: goto label_3df568;
        case 0x3df56cu: goto label_3df56c;
        case 0x3df570u: goto label_3df570;
        case 0x3df574u: goto label_3df574;
        case 0x3df578u: goto label_3df578;
        case 0x3df57cu: goto label_3df57c;
        case 0x3df580u: goto label_3df580;
        case 0x3df584u: goto label_3df584;
        default: break;
    }

    ctx->pc = 0x3df528u;

label_3df528:
    // 0x3df528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3df528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3df52c:
    // 0x3df52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3df530:
    // 0x3df530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3df530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3df534:
    // 0x3df534: 0xc0838d0  jal         func_20E340
label_3df538:
    if (ctx->pc == 0x3DF538u) {
        ctx->pc = 0x3DF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF534u;
        // 0x3df538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF53Cu;
        goto label_3df53c;
    }
    ctx->pc = 0x3DF534u;
    SET_GPR_U32(ctx, 31, 0x3DF53Cu);
    ctx->pc = 0x3DF538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF534u;
    // 0x3df538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E340u, 0x3DF534u, 0x3DF53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF53Cu;
label_3df53c:
    // 0x3df53c: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x3df53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_3df540:
    // 0x3df540: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3df544:
    if (ctx->pc == 0x3DF544u) {
        ctx->pc = 0x3DF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF540u;
        // 0x3df544: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF548u;
        goto label_3df548;
    }
    ctx->pc = 0x3DF540u;
    {
        const bool branch_taken_0x3df540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF540u;
        // 0x3df544: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df540) {
            ctx->pc = 0x3DF55Cu;
            goto label_3df55c;
        }
    }
    ctx->pc = 0x3DF548u;
label_3df548:
    // 0x3df548: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x3df548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3df54c:
    // 0x3df54c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3df54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3df550:
    // 0x3df550: 0x40f809  jalr        $v0
label_3df554:
    if (ctx->pc == 0x3DF554u) {
        ctx->pc = 0x3DF558u;
        goto label_3df558;
    }
    ctx->pc = 0x3DF550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF558u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF550u, 0x3DF558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF558u;
label_3df558:
    // 0x3df558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df55c:
    // 0x3df55c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3df55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3df560:
    // 0x3df560: 0x3e00008  jr          $ra
label_3df564:
    if (ctx->pc == 0x3DF564u) {
        ctx->pc = 0x3DF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF560u;
        // 0x3df564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF568u;
        goto label_3df568;
    }
    ctx->pc = 0x3DF560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF560u;
        // 0x3df564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF568u;
label_3df568:
    // 0x3df568: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3df56c:
    // 0x3df56c: 0x0  nop
    ctx->pc = 0x3df56cu;
    // NOP
label_3df570:
    // 0x3df570: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3df574:
    // 0x3df574: 0x0  nop
    ctx->pc = 0x3df574u;
    // NOP
label_3df578:
    // 0x3df578: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3df57c:
    // 0x3df57c: 0x0  nop
    ctx->pc = 0x3df57cu;
    // NOP
label_3df580:
    // 0x3df580: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x3df580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
label_3df584:
    // 0x3df584: 0x0  nop
    ctx->pc = 0x3df584u;
    // NOP
    ctx->pc = 0x3df588u;
}
