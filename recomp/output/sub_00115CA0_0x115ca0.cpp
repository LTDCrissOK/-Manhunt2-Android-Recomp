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

// Function: sub_00115CA0
// Address: 0x115ca0 - 0x115d10
void sub_00115CA0_0x115ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115CA0_0x115ca0");
#endif

    switch (ctx->pc) {
        case 0x115cc0u: goto label_115cc0;
        default: break;
    }

    ctx->pc = 0x115ca0u;

    // 0x115ca0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x115ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ca4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x115ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x115ca8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115cac: 0x90e20074  lbu         $v0, 0x74($a3)
    ctx->pc = 0x115cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x115cb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x115cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115cb4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x115cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115cb8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x115CB8u;
    {
        const bool branch_taken_0x115cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CB8u;
        // 0x115cbc: 0x24e80044  addiu       $t0, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cb8) {
            ctx->pc = 0x115CF4u;
            goto label_115cf4;
        }
    }
    ctx->pc = 0x115CC0u;
label_115cc0:
    // 0x115cc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x115cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115cc4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115cc8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x115cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x115ccc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x115cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x115cd0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x115cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115cd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115cd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115cdc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x115cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115ce0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x115ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x115ce4: 0x90e20074  lbu         $v0, 0x74($a3)
    ctx->pc = 0x115ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x115ce8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x115ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115cec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x115CECu;
    {
        const bool branch_taken_0x115cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CECu;
        // 0x115cf0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cec) {
            ctx->pc = 0x115CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115cc0;
        }
    }
    ctx->pc = 0x115CF4u;
label_115cf4:
    // 0x115cf4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x115cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115cf8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x115cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x115cfc: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x115cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x115d00: 0x90e30074  lbu         $v1, 0x74($a3)
    ctx->pc = 0x115d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x115d04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115d08: 0x3e00008  jr          $ra
    ctx->pc = 0x115D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D08u;
        // 0x115d0c: 0xa0e30074  sb          $v1, 0x74($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D10u;
}
