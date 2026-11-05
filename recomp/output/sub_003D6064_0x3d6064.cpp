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

// Function: sub_003D6064
// Address: 0x3d6064 - 0x3d6070
void sub_003D6064_0x3d6064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6064_0x3d6064");
#endif

    ctx->pc = 0x3d6064u;

    // 0x3d6064: 0x26422470  addiu       $v0, $s2, 0x2470
    ctx->pc = 0x3d6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9328));
    // 0x3d6068: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3D6068u;
    {
        const bool branch_taken_0x3d6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6068u;
        // 0x3d606c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6068) {
            ctx->pc = 0x3D6028u;
            return;
        }
    }
    ctx->pc = 0x3D6070u;
}
