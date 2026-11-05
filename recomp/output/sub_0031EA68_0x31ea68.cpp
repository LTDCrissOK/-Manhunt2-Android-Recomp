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

// Function: sub_0031EA68
// Address: 0x31ea68 - 0x31ea80
void sub_0031EA68_0x31ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA68_0x31ea68");
#endif

    ctx->pc = 0x31ea68u;

    // 0x31ea68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31ea6c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x31ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31ea70: 0x9043bdbc  lbu         $v1, -0x4244($v0)
    ctx->pc = 0x31ea70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBDBCu));
    // 0x31ea74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ea78: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA78u;
        // 0x31ea7c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA80u;
}
