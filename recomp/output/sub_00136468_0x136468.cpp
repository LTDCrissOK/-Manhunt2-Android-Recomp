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

// Function: sub_00136468
// Address: 0x136468 - 0x1364c0
void sub_00136468_0x136468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136468_0x136468");
#endif

    ctx->pc = 0x136468u;

    // 0x136468: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x136468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13646c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13646Cu;
    {
        const bool branch_taken_0x13646c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x136470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13646Cu;
        // 0x136470: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13646c) {
            ctx->pc = 0x136494u;
            goto label_136494;
        }
    }
    ctx->pc = 0x136474u;
    // 0x136474: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x136474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x136478: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x136478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13647c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x13647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x136480: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x136480u;
    {
        const bool branch_taken_0x136480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136480u;
        // 0x136484: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136480) {
            ctx->pc = 0x1364B4u;
            goto label_1364b4;
        }
    }
    ctx->pc = 0x136488u;
    // 0x136488: 0x90e204bd  lbu         $v0, 0x4BD($a3)
    ctx->pc = 0x136488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1213)));
    // 0x13648c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13648Cu;
    {
        const bool branch_taken_0x13648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13648Cu;
        // 0x136490: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13648c) {
            ctx->pc = 0x1364B0u;
            goto label_1364b0;
        }
    }
    ctx->pc = 0x136494u;
label_136494:
    // 0x136494: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x136494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x136498: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x136498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13649c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x13649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1364a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1364A0u;
    {
        const bool branch_taken_0x1364a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364A0u;
        // 0x1364a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364a0) {
            ctx->pc = 0x1364B4u;
            goto label_1364b4;
        }
    }
    ctx->pc = 0x1364A8u;
    // 0x1364a8: 0x90e204bd  lbu         $v0, 0x4BD($a3)
    ctx->pc = 0x1364a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1213)));
    // 0x1364ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1364b0:
    // 0x1364b0: 0xa0e204bd  sb          $v0, 0x4BD($a3)
    ctx->pc = 0x1364b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1213), (uint8_t)GPR_U32(ctx, 2));
label_1364b4:
    // 0x1364b4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1364b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1364b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1364B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B8u;
        // 0x1364bc: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364C0u;
}
