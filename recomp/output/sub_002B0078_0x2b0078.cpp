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

// Function: sub_002B0078
// Address: 0x2b0078 - 0x2b0098
void sub_002B0078_0x2b0078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0078_0x2b0078");
#endif

    ctx->pc = 0x2b0078u;

    // 0x2b0078: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b007c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2b007cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0080: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2b0080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b0084: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2b0084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b0088: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b0088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b008c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B008Cu;
        // 0x2b0090: 0xc48003f8  lwc1        $f0, 0x3F8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0094u;
    // 0x2b0094: 0x0  nop
    ctx->pc = 0x2b0094u;
    // NOP
    ctx->pc = 0x2b0098u;
}
