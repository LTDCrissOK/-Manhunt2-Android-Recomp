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

// Function: sub_001FC868
// Address: 0x1fc868 - 0x1fc888
void sub_001FC868_0x1fc868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC868_0x1fc868");
#endif

    switch (ctx->pc) {
        case 0x1fc87cu: goto label_1fc87c;
        default: break;
    }

    ctx->pc = 0x1fc868u;

    // 0x1fc868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc86c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fc870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc874: 0xc080a74  jal         func_2029D0
    ctx->pc = 0x1FC874u;
    SET_GPR_U32(ctx, 31, 0x1FC87Cu);
    ctx->pc = 0x1FC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC874u;
    // 0x1fc878: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029D0u, 0x1FC874u, 0x1FC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC87Cu;
label_1fc87c:
    // 0x1fc87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc880: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC880u;
        // 0x1fc884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC888u;
}
