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

// Function: sub_002CA6D8
// Address: 0x2ca6d8 - 0x2ca740
void sub_002CA6D8_0x2ca6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA6D8_0x2ca6d8");
#endif

    switch (ctx->pc) {
        case 0x2ca6f0u: goto label_2ca6f0;
        default: break;
    }

    ctx->pc = 0x2ca6d8u;

    // 0x2ca6d8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ca6d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ca6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6e0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2ca6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2ca6e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ca6e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ca6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ca6ec: 0x0  nop
    ctx->pc = 0x2ca6ecu;
    // NOP
label_2ca6f0:
    // 0x2ca6f0: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x2ca6f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2ca6f4: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2ca6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2ca6f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2ca6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ca6fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ca6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ca700: 0x29050080  slti        $a1, $t0, 0x80
    ctx->pc = 0x2ca700u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ca704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca708: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2ca708u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2ca70c: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x2ca70cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2ca710: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ca710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ca714: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2ca718: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2ca718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ca71c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca720: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CA720u;
    {
        const bool branch_taken_0x2ca720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA720u;
        // 0x2ca724: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca720) {
            ctx->pc = 0x2CA6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca6f0;
        }
    }
    ctx->pc = 0x2CA728u;
    // 0x2ca728: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA730u;
    // 0x2ca730: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ca730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ca734: 0x0  nop
    ctx->pc = 0x2ca734u;
    // NOP
    // 0x2ca738: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ca738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca73c: 0x0  nop
    ctx->pc = 0x2ca73cu;
    // NOP
    ctx->pc = 0x2ca740u;
}
