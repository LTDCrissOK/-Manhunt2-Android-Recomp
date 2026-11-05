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

// Function: sub_00152508
// Address: 0x152508 - 0x152548
void sub_00152508_0x152508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152508_0x152508");
#endif

    switch (ctx->pc) {
        case 0x152538u: goto label_152538;
        default: break;
    }

    ctx->pc = 0x152508u;

    // 0x152508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15250c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15250cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152514: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x152514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152518: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x152518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15251c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x15251cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x152520: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152524: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152524u;
    {
        const bool branch_taken_0x152524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x152528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152524u;
        // 0x152528: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152524) {
            ctx->pc = 0x15253Cu;
            goto label_15253c;
        }
    }
    ctx->pc = 0x15252Cu;
    // 0x15252c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x152530: 0xc0496f8  jal         func_125BE0
    ctx->pc = 0x152530u;
    SET_GPR_U32(ctx, 31, 0x152538u);
    ctx->pc = 0x152534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152530u;
    // 0x152534: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125BE0u, 0x152530u, 0x152538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152538u;
label_152538:
    // 0x152538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15253c:
    // 0x15253c: 0x3e00008  jr          $ra
    ctx->pc = 0x15253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15253Cu;
        // 0x152540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15253Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152544u;
    // 0x152544: 0x0  nop
    ctx->pc = 0x152544u;
    // NOP
    ctx->pc = 0x152548u;
}
