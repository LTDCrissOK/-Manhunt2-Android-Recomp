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

// Function: sub_003A7CF8
// Address: 0x3a7cf8 - 0x3a7d50
void sub_003A7CF8_0x3a7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7CF8_0x3a7cf8");
#endif

    switch (ctx->pc) {
        case 0x3a7d1cu: goto label_3a7d1c;
        default: break;
    }

    ctx->pc = 0x3a7cf8u;

    // 0x3a7cf8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x3a7cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x3a7cfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d00: 0x24c38730  addiu       $v1, $a2, -0x78D0
    ctx->pc = 0x3a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936368));
    // 0x3a7d04: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a7d04u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x418730u));
    // 0x3a7d08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7D08u;
    {
        const bool branch_taken_0x3a7d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D08u;
        // 0x3a7d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d08) {
            ctx->pc = 0x3A7D18u;
            goto label_3a7d18;
        }
    }
    ctx->pc = 0x3A7D10u;
    // 0x3a7d10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A7D10u;
    {
        const bool branch_taken_0x3a7d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D10u;
        // 0x3a7d14: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d10) {
            ctx->pc = 0x3A7D48u;
            goto label_3a7d48;
        }
    }
    ctx->pc = 0x3A7D18u;
label_3a7d18:
    // 0x3a7d18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3a7d1c:
    // 0x3a7d1c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a7d20: 0x28a30028  slti        $v1, $a1, 0x28
    ctx->pc = 0x3a7d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3a7d24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7D24u;
    {
        const bool branch_taken_0x3a7d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D24u;
        // 0x3a7d28: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d24) {
            ctx->pc = 0x3A7D48u;
            goto label_3a7d48;
        }
    }
    ctx->pc = 0x3A7D2Cu;
    // 0x3a7d2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a7d30: 0x24c38730  addiu       $v1, $a2, -0x78D0
    ctx->pc = 0x3a7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936368));
    // 0x3a7d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7d38: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x3a7d38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7d3c: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A7D3Cu;
    {
        const bool branch_taken_0x3a7d3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d3c) {
            ctx->pc = 0x3A7D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7D3Cu;
            // 0x3a7d40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7d1c;
        }
    }
    ctx->pc = 0x3A7D44u;
    // 0x3a7d44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a7d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7d48:
    // 0x3a7d48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D48u;
        // 0x3a7d4c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7D50u;
}
