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

// Function: sub_00341600
// Address: 0x341600 - 0x341640
void sub_00341600_0x341600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341600_0x341600");
#endif

    switch (ctx->pc) {
        case 0x341610u: goto label_341610;
        default: break;
    }

    ctx->pc = 0x341600u;

    // 0x341600: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x341600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x341604: 0x24438bf0  addiu       $v1, $v0, -0x7410
    ctx->pc = 0x341604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x341608: 0x24642a00  addiu       $a0, $v1, 0x2A00
    ctx->pc = 0x341608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x34160c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x34160cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B8BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B8BF0u, _value); } while (0);
label_341610:
    // 0x341610: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x341614: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x341614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x341618: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x341618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x34161c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x34161cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x341620: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x341620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x341624: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x341624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x341628: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x341628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34162c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34162Cu;
    {
        const bool branch_taken_0x34162c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34162c) {
            ctx->pc = 0x341630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34162Cu;
            // 0x341630: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341610;
        }
    }
    ctx->pc = 0x341634u;
    // 0x341634: 0x3e00008  jr          $ra
    ctx->pc = 0x341634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34163Cu;
    // 0x34163c: 0x0  nop
    ctx->pc = 0x34163cu;
    // NOP
    ctx->pc = 0x341640u;
}
