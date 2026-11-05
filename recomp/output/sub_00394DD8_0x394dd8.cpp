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

// Function: sub_00394DD8
// Address: 0x394dd8 - 0x394e20
void sub_00394DD8_0x394dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394DD8_0x394dd8");
#endif

    switch (ctx->pc) {
        case 0x394df4u: goto label_394df4;
        case 0x394e00u: goto label_394e00;
        case 0x394e08u: goto label_394e08;
        default: break;
    }

    ctx->pc = 0x394dd8u;

    // 0x394dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x394ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x394de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x394dec: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x394DECu;
    SET_GPR_U32(ctx, 31, 0x394DF4u);
    ctx->pc = 0x394DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DECu;
    // 0x394df0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x394DECu, 0x394DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394DF4u;
label_394df4:
    // 0x394df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394df8: 0xc0e5388  jal         func_394E20
    ctx->pc = 0x394DF8u;
    SET_GPR_U32(ctx, 31, 0x394E00u);
    ctx->pc = 0x394DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394DF8u;
    // 0x394dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394E20u, 0x394DF8u, 0x394E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E00u;
label_394e00:
    // 0x394e00: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x394E00u;
    SET_GPR_U32(ctx, 31, 0x394E08u);
    ctx->pc = 0x394E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394E00u;
    // 0x394e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x394E00u, 0x394E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394E08u;
label_394e08:
    // 0x394e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x394e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x394e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394e18: 0x3e00008  jr          $ra
    ctx->pc = 0x394E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E18u;
        // 0x394e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394E20u;
}
