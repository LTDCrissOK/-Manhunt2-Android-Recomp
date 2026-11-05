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

// Function: sub_00140DD0
// Address: 0x140dd0 - 0x140e18
void sub_00140DD0_0x140dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140DD0_0x140dd0");
#endif

    switch (ctx->pc) {
        case 0x140de8u: goto label_140de8;
        case 0x140e04u: goto label_140e04;
        default: break;
    }

    ctx->pc = 0x140dd0u;

    // 0x140dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x140dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140de0: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x140DE0u;
    SET_GPR_U32(ctx, 31, 0x140DE8u);
    ctx->pc = 0x140DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140DE0u;
    // 0x140de4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x140DE0u, 0x140DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140DE8u;
label_140de8:
    // 0x140de8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140dec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140DECu;
    {
        const bool branch_taken_0x140dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x140DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DECu;
        // 0x140df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140dec) {
            ctx->pc = 0x140E08u;
            goto label_140e08;
        }
    }
    ctx->pc = 0x140DF4u;
    // 0x140df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140df8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140dfc: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x140DFCu;
    SET_GPR_U32(ctx, 31, 0x140E04u);
    ctx->pc = 0x140E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140DFCu;
    // 0x140e00: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x140DFCu, 0x140E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E04u;
label_140e04:
    // 0x140e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140e08:
    // 0x140e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140e0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x140e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140e10: 0x3e00008  jr          $ra
    ctx->pc = 0x140E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E10u;
        // 0x140e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140E18u;
}
