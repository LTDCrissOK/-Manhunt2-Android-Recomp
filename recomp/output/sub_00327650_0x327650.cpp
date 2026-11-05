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

// Function: sub_00327650
// Address: 0x327650 - 0x327668
void sub_00327650_0x327650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327650_0x327650");
#endif

    ctx->pc = 0x327650u;

    // 0x327650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327654: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x327654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327658: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x327658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32765c: 0x3e00008  jr          $ra
    ctx->pc = 0x32765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32765Cu;
        // 0x327660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32765Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327664u;
    // 0x327664: 0x0  nop
    ctx->pc = 0x327664u;
    // NOP
    ctx->pc = 0x327668u;
}
