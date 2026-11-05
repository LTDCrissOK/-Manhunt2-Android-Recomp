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

// Function: sub_0035D740
// Address: 0x35d740 - 0x35d770
void sub_0035D740_0x35d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D740_0x35d740");
#endif

    ctx->pc = 0x35d740u;

    // 0x35d740: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x35d740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35d744: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x35d744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35d748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D748u;
    {
        const bool branch_taken_0x35d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D748u;
        // 0x35d74c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d748) {
            ctx->pc = 0x35D764u;
            goto label_35d764;
        }
    }
    ctx->pc = 0x35D750u;
    // 0x35d750: 0xa4850004  sh          $a1, 0x4($a0)
    ctx->pc = 0x35d750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x35d754: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d758: 0x9044caf0  lbu         $a0, -0x3510($v0)
    ctx->pc = 0x35d758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294953712)));
    // 0x35d75c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35d760: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35d760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_35d764:
    // 0x35d764: 0x3e00008  jr          $ra
    ctx->pc = 0x35D764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D76Cu;
    // 0x35d76c: 0x0  nop
    ctx->pc = 0x35d76cu;
    // NOP
    ctx->pc = 0x35d770u;
}
