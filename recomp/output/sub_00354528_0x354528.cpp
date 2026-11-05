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

// Function: sub_00354528
// Address: 0x354528 - 0x354554
void sub_00354528_0x354528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354528_0x354528");
#endif

    switch (ctx->pc) {
        case 0x354528u: goto label_354528;
        case 0x35452cu: goto label_35452c;
        case 0x354530u: goto label_354530;
        case 0x354534u: goto label_354534;
        case 0x354538u: goto label_354538;
        case 0x35453cu: goto label_35453c;
        case 0x354540u: goto label_354540;
        case 0x354544u: goto label_354544;
        case 0x354548u: goto label_354548;
        case 0x35454cu: goto label_35454c;
        case 0x354550u: goto label_354550;
        default: break;
    }

    ctx->pc = 0x354528u;

label_354528:
    // 0x354528: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x354528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_35452c:
    // 0x35452c: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x35452cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
label_354530:
    // 0x354530: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x354530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_354534:
    // 0x354534: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_354538:
    if (ctx->pc == 0x354538u) {
        ctx->pc = 0x354538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354534u;
        // 0x354538: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35453Cu;
        goto label_35453c;
    }
    ctx->pc = 0x354534u;
    {
        const bool branch_taken_0x354534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354534u;
        // 0x354538: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354534) {
            ctx->pc = 0x354574u;
            return;
        }
    }
    ctx->pc = 0x35453Cu;
label_35453c:
    // 0x35453c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35453cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_354540:
    // 0x354540: 0x244268a0  addiu       $v0, $v0, 0x68A0
    ctx->pc = 0x354540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26784));
label_354544:
    // 0x354544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_354548:
    // 0x354548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x354548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35454c:
    // 0x35454c: 0x800008  jr          $a0
label_354550:
    if (ctx->pc == 0x354550u) {
        ctx->pc = 0x354554u;
        goto label_fallthrough_0x35454c;
    }
    ctx->pc = 0x35454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35454Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x35454c:
    ctx->pc = 0x354554u;
}
