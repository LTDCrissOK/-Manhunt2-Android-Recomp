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

// Function: sub_003E3E58
// Address: 0x3e3e58 - 0x3e3ea8
void sub_003E3E58_0x3e3e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3E58_0x3e3e58");
#endif

    ctx->pc = 0x3e3e58u;

    // 0x3e3e58: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x3e3e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e3e5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3e3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3e3e60: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e3e64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3e3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3e3e68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E3E68u;
    {
        const bool branch_taken_0x3e3e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3e68) {
            ctx->pc = 0x3E3E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3E68u;
            // 0x3e3e6c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3E70u;
            goto label_3e3e70;
        }
    }
    ctx->pc = 0x3E3E70u;
label_3e3e70:
    // 0x3e3e70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e3e74: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3e3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x3e3e78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3e3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e3e7c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3E7Cu;
    {
        const bool branch_taken_0x3e3e7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3e7c) {
            ctx->pc = 0x3E3E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3E7Cu;
            // 0x3e3e80: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3E8Cu;
            goto label_3e3e8c;
        }
    }
    ctx->pc = 0x3E3E84u;
    // 0x3e3e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3E84u;
    {
        const bool branch_taken_0x3e3e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E84u;
        // 0x3e3e88: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e84) {
            ctx->pc = 0x3E3E9Cu;
            goto label_3e3e9c;
        }
    }
    ctx->pc = 0x3E3E8Cu;
label_3e3e8c:
    // 0x3e3e8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3e3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3e3e90: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3E90u;
    {
        const bool branch_taken_0x3e3e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e3e90) {
            ctx->pc = 0x3E3E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3E90u;
            // 0x3e3e94: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3E9Cu;
            goto label_3e3e9c;
        }
    }
    ctx->pc = 0x3E3E98u;
    // 0x3e3e98: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x3e3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_3e3e9c:
    // 0x3e3e9c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x3e3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x3e3ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3EA0u;
        // 0x3e3ea4: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3EA8u;
}
