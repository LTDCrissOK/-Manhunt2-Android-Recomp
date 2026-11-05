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

// Function: sub_001515B0
// Address: 0x1515b0 - 0x1515f8
void sub_001515B0_0x1515b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515B0_0x1515b0");
#endif

    switch (ctx->pc) {
        case 0x1515ccu: goto label_1515cc;
        case 0x1515d8u: goto label_1515d8;
        case 0x1515e4u: goto label_1515e4;
        default: break;
    }

    ctx->pc = 0x1515b0u;

    // 0x1515b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1515b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1515b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1515b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1515b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1515b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1515bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1515bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1515c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1515c4: 0xc054666  jal         func_151998
    ctx->pc = 0x1515C4u;
    SET_GPR_U32(ctx, 31, 0x1515CCu);
    ctx->pc = 0x1515C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515C4u;
    // 0x1515c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151998u, 0x1515C4u, 0x1515CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515CCu;
label_1515cc:
    // 0x1515cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1515ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515d0: 0xc05467c  jal         func_1519F0
    ctx->pc = 0x1515D0u;
    SET_GPR_U32(ctx, 31, 0x1515D8u);
    ctx->pc = 0x1515D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515D0u;
    // 0x1515d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1519F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1519F0u, 0x1515D0u, 0x1515D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515D8u;
label_1515d8:
    // 0x1515d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1515d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515dc: 0xc0546ae  jal         func_151AB8
    ctx->pc = 0x1515DCu;
    SET_GPR_U32(ctx, 31, 0x1515E4u);
    ctx->pc = 0x1515E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1515DCu;
    // 0x1515e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151AB8u, 0x1515DCu, 0x1515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1515E4u;
label_1515e4:
    // 0x1515e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1515e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1515e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1515e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1515ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1515ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1515f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1515F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515F0u;
        // 0x1515f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515F8u;
}
