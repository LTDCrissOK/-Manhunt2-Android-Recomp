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

// Function: sub_00134BE8
// Address: 0x134be8 - 0x134c30
void sub_00134BE8_0x134be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134BE8_0x134be8");
#endif

    ctx->pc = 0x134be8u;

    // 0x134be8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x134be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x134bec: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x134becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x134bf0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x134BF0u;
    {
        const bool branch_taken_0x134bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BF0u;
        // 0x134bf4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bf0) {
            ctx->pc = 0x134C24u;
            goto label_134c24;
        }
    }
    ctx->pc = 0x134BF8u;
    // 0x134bf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x134bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x134bfc: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x134bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x134c00: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x134c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134c04: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134c08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134c0c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x134c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x134c10: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x134c14: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x134c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x134c18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x134c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c1c: 0xa4c50008  sh          $a1, 0x8($a2)
    ctx->pc = 0x134c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x134c20: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x134c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_134c24:
    // 0x134c24: 0x3e00008  jr          $ra
    ctx->pc = 0x134C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134C2Cu;
    // 0x134c2c: 0x0  nop
    ctx->pc = 0x134c2cu;
    // NOP
    ctx->pc = 0x134c30u;
}
