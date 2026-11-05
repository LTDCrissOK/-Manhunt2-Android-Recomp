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

// Function: sub_00127F50
// Address: 0x127f50 - 0x127f78
void sub_00127F50_0x127f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127F50_0x127f50");
#endif

    ctx->pc = 0x127f50u;

    // 0x127f50: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x127f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x127f54: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x127f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x127f58: 0x24a50a80  addiu       $a1, $a1, 0xA80
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2688));
    // 0x127f5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x127f60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x127f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x127f64: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x127f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x127f68: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x127f68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x127f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x127F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127F74u;
    // 0x127f74: 0x0  nop
    ctx->pc = 0x127f74u;
    // NOP
    ctx->pc = 0x127f78u;
}
