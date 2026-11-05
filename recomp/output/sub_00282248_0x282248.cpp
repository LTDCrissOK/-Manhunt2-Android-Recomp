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

// Function: sub_00282248
// Address: 0x282248 - 0x282268
void sub_00282248_0x282248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282248_0x282248");
#endif

    ctx->pc = 0x282248u;

    // 0x282248: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x282248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28224c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x28224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x282250: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x282250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x282254: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x282254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x282258: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x282258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x28225c: 0x3e00008  jr          $ra
    ctx->pc = 0x28225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28225Cu;
        // 0x282260: 0xaca80008  sw          $t0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282264u;
    // 0x282264: 0x0  nop
    ctx->pc = 0x282264u;
    // NOP
    ctx->pc = 0x282268u;
}
