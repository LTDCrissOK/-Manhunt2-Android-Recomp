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

// Function: sub_0028EDB8
// Address: 0x28edb8 - 0x28ee00
void sub_0028EDB8_0x28edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EDB8_0x28edb8");
#endif

    switch (ctx->pc) {
        case 0x28edd4u: goto label_28edd4;
        default: break;
    }

    ctx->pc = 0x28edb8u;

    // 0x28edb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28edb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28edbc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28edc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28edc4: 0x24a5b2c0  addiu       $a1, $a1, -0x4D40
    ctx->pc = 0x28edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947520));
    // 0x28edc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28edcc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x28EDCCu;
    SET_GPR_U32(ctx, 31, 0x28EDD4u);
    ctx->pc = 0x28EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EDCCu;
    // 0x28edd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x28EDCCu, 0x28EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDD4u;
label_28edd4:
    // 0x28edd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28edd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eddc: 0xa203003c  sb          $v1, 0x3C($s0)
    ctx->pc = 0x28eddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ede0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x28ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x28ede4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x28ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x28ede8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x28ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x28edec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28edecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28edf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28edf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28edf4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDF4u;
        // 0x28edf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EDFCu;
    // 0x28edfc: 0x0  nop
    ctx->pc = 0x28edfcu;
    // NOP
    ctx->pc = 0x28ee00u;
}
