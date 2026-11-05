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

// Function: sub_0010F900
// Address: 0x10f900 - 0x10f940
void sub_0010F900_0x10f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F900_0x10f900");
#endif

    switch (ctx->pc) {
        case 0x10f924u: goto label_10f924;
        default: break;
    }

    ctx->pc = 0x10f900u;

    // 0x10f900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10f90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f910: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x10f914: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F914u;
    {
        const bool branch_taken_0x10f914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F914u;
        // 0x10f918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f914) {
            ctx->pc = 0x10F92Cu;
            goto label_10f92c;
        }
    }
    ctx->pc = 0x10F91Cu;
    // 0x10f91c: 0xc043eba  jal         func_10FAE8
    ctx->pc = 0x10F91Cu;
    SET_GPR_U32(ctx, 31, 0x10F924u);
    ctx->pc = 0x10FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAE8u, 0x10F91Cu, 0x10F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F924u;
label_10f924:
    // 0x10f924: 0xa20001f0  sb          $zero, 0x1F0($s0)
    ctx->pc = 0x10f924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 496), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f92c:
    // 0x10f92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10f930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f934: 0x3e00008  jr          $ra
    ctx->pc = 0x10F934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F934u;
        // 0x10f938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F93Cu;
    // 0x10f93c: 0x0  nop
    ctx->pc = 0x10f93cu;
    // NOP
    ctx->pc = 0x10f940u;
}
