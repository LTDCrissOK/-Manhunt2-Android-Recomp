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

// Function: sub_002B24C8
// Address: 0x2b24c8 - 0x2b2520
void sub_002B24C8_0x2b24c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B24C8_0x2b24c8");
#endif

    switch (ctx->pc) {
        case 0x2b24d8u: goto label_2b24d8;
        default: break;
    }

    ctx->pc = 0x2b24c8u;

    // 0x2b24c8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b24cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b24ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b24d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b24d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b24d4: 0x0  nop
    ctx->pc = 0x2b24d4u;
    // NOP
label_2b24d8:
    // 0x2b24d8: 0x54a60003  bnel        $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B24D8u;
    {
        const bool branch_taken_0x2b24d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2b24d8) {
            ctx->pc = 0x2B24DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24D8u;
            // 0x2b24dc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B24E8u;
            goto label_2b24e8;
        }
    }
    ctx->pc = 0x2B24E0u;
    // 0x2b24e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B24E0u;
    {
        const bool branch_taken_0x2b24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E0u;
        // 0x2b24e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24e0) {
            ctx->pc = 0x2B2510u;
            goto label_2b2510;
        }
    }
    ctx->pc = 0x2B24E8u;
label_2b24e8:
    // 0x2b24e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b24ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b24f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B24F4u;
    {
        const bool branch_taken_0x2b24f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b24f4) {
            ctx->pc = 0x2B2510u;
            goto label_2b2510;
        }
    }
    ctx->pc = 0x2B24FCu;
    // 0x2b24fc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x2b24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2b2500: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2b2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x2b2504: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b2504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b2508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2508u;
    {
        const bool branch_taken_0x2b2508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2508) {
            ctx->pc = 0x2B2518u;
            goto label_2b2518;
        }
    }
    ctx->pc = 0x2B2510u;
label_2b2510:
    // 0x2b2510: 0x54a7fff1  bnel        $a1, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B2510u;
    {
        const bool branch_taken_0x2b2510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2b2510) {
            ctx->pc = 0x2B2514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2510u;
            // 0x2b2514: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B24D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b24d8;
        }
    }
    ctx->pc = 0x2B2518u;
label_2b2518:
    // 0x2b2518: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2518u;
        // 0x2b251c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2520u;
}
