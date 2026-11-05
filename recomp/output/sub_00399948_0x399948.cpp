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

// Function: sub_00399948
// Address: 0x399948 - 0x399980
void sub_00399948_0x399948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399948_0x399948");
#endif

    switch (ctx->pc) {
        case 0x39995cu: goto label_39995c;
        case 0x399960u: goto label_399960;
        case 0x399968u: goto label_399968;
        default: break;
    }

    ctx->pc = 0x399948u;

    // 0x399948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39994c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399950: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399954: 0xc0e65f8  jal         func_3997E0
    ctx->pc = 0x399954u;
    SET_GPR_U32(ctx, 31, 0x39995Cu);
    ctx->pc = 0x399958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399954u;
    // 0x399958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3997E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3997E0u, 0x399954u, 0x39995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39995Cu;
label_39995c:
    // 0x39995c: 0x0  nop
    ctx->pc = 0x39995cu;
    // NOP
label_399960:
    // 0x399960: 0xc0e57a4  jal         func_395E90
    ctx->pc = 0x399960u;
    SET_GPR_U32(ctx, 31, 0x399968u);
    ctx->pc = 0x395E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E90u, 0x399960u, 0x399968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399968u;
label_399968:
    // 0x399968: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x399968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x39996c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x39996Cu;
    {
        const bool branch_taken_0x39996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39996Cu;
        // 0x399970: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39996c) {
            ctx->pc = 0x399960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399960;
        }
    }
    ctx->pc = 0x399974u;
    // 0x399974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399978: 0x3e00008  jr          $ra
    ctx->pc = 0x399978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399978u;
        // 0x39997c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399980u;
}
