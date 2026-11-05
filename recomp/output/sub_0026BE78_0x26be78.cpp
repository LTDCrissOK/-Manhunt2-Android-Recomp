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

// Function: sub_0026BE78
// Address: 0x26be78 - 0x26bec0
void sub_0026BE78_0x26be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BE78_0x26be78");
#endif

    switch (ctx->pc) {
        case 0x26bea0u: goto label_26bea0;
        case 0x26beacu: goto label_26beac;
        default: break;
    }

    ctx->pc = 0x26be78u;

    // 0x26be78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26be78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26be7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x26be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x26be80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26be84: 0x244228e0  addiu       $v0, $v0, 0x28E0
    ctx->pc = 0x26be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x26be88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26be8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26be8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26be94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26be94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be98: 0xc09aff2  jal         func_26BFC8
    ctx->pc = 0x26BE98u;
    SET_GPR_U32(ctx, 31, 0x26BEA0u);
    ctx->pc = 0x26BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE98u;
    // 0x26be9c: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BFC8u, 0x26BE98u, 0x26BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEA0u;
label_26bea0:
    // 0x26bea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bea4: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x26BEA4u;
    SET_GPR_U32(ctx, 31, 0x26BEACu);
    ctx->pc = 0x26BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEA4u;
    // 0x26bea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x26BEA4u, 0x26BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEACu;
label_26beac:
    // 0x26beac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26beacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26beb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26beb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26beb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26beb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26beb8: 0x3e00008  jr          $ra
    ctx->pc = 0x26BEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEB8u;
        // 0x26bebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BEC0u;
}
