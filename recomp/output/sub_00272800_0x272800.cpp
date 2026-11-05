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

// Function: sub_00272800
// Address: 0x272800 - 0x272828
void sub_00272800_0x272800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272800_0x272800");
#endif

    ctx->pc = 0x272800u;

    // 0x272800: 0x90820220  lbu         $v0, 0x220($a0)
    ctx->pc = 0x272800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x272804: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x272804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x272808: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x272808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27280c: 0x2c6300b5  sltiu       $v1, $v1, 0xB5
    ctx->pc = 0x27280cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)181) ? 1 : 0);
    // 0x272810: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272810u;
    {
        const bool branch_taken_0x272810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272810u;
        // 0x272814: 0xa0820220  sb          $v0, 0x220($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272810) {
            ctx->pc = 0x272820u;
            goto label_272820;
        }
    }
    ctx->pc = 0x272818u;
    // 0x272818: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x27281c: 0xa0820220  sb          $v0, 0x220($a0)
    ctx->pc = 0x27281cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 2));
label_272820:
    // 0x272820: 0x3e00008  jr          $ra
    ctx->pc = 0x272820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272828u;
}
