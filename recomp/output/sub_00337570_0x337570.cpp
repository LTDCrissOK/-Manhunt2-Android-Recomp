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

// Function: sub_00337570
// Address: 0x337570 - 0x33759c
void sub_00337570_0x337570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337570_0x337570");
#endif

    switch (ctx->pc) {
        case 0x337570u: goto label_337570;
        case 0x337574u: goto label_337574;
        case 0x337578u: goto label_337578;
        case 0x33757cu: goto label_33757c;
        case 0x337580u: goto label_337580;
        case 0x337584u: goto label_337584;
        case 0x337588u: goto label_337588;
        case 0x33758cu: goto label_33758c;
        case 0x337590u: goto label_337590;
        case 0x337594u: goto label_337594;
        case 0x337598u: goto label_337598;
        default: break;
    }

    ctx->pc = 0x337570u;

label_337570:
    // 0x337570: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x337570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
label_337574:
    // 0x337574: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x337574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_337578:
    // 0x337578: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x337578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_33757c:
    // 0x33757c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_337580:
    if (ctx->pc == 0x337580u) {
        ctx->pc = 0x337580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33757Cu;
        // 0x337580: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337584u;
        goto label_337584;
    }
    ctx->pc = 0x33757Cu;
    {
        const bool branch_taken_0x33757c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33757Cu;
        // 0x337580: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33757c) {
            ctx->pc = 0x3375ACu;
            return;
        }
    }
    ctx->pc = 0x337584u;
label_337584:
    // 0x337584: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x337584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_337588:
    // 0x337588: 0x24425c40  addiu       $v0, $v0, 0x5C40
    ctx->pc = 0x337588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23616));
label_33758c:
    // 0x33758c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_337590:
    // 0x337590: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x337590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_337594:
    // 0x337594: 0x800008  jr          $a0
label_337598:
    if (ctx->pc == 0x337598u) {
        ctx->pc = 0x33759Cu;
        goto label_fallthrough_0x337594;
    }
    ctx->pc = 0x337594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337594u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x337594:
    ctx->pc = 0x33759Cu;
}
