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

// Function: sub_002918F0
// Address: 0x2918f0 - 0x291918
void sub_002918F0_0x2918f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002918F0_0x2918f0");
#endif

    switch (ctx->pc) {
        case 0x29190cu: goto label_29190c;
        default: break;
    }

    ctx->pc = 0x2918f0u;

    // 0x2918f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2918f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2918f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2918f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2918f8: 0x908201f8  lbu         $v0, 0x1F8($a0)
    ctx->pc = 0x2918f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2918fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2918FCu;
    {
        const bool branch_taken_0x2918fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918FCu;
        // 0x291900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918fc) {
            ctx->pc = 0x291910u;
            goto label_291910;
        }
    }
    ctx->pc = 0x291904u;
    // 0x291904: 0xc0a44e0  jal         func_291380
    ctx->pc = 0x291904u;
    SET_GPR_U32(ctx, 31, 0x29190Cu);
    ctx->pc = 0x291380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291380u, 0x291904u, 0x29190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29190Cu;
label_29190c:
    // 0x29190c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291910:
    // 0x291910: 0x3e00008  jr          $ra
    ctx->pc = 0x291910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291910u;
        // 0x291914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291918u;
}
