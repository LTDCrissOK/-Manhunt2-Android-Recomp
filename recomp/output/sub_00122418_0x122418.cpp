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

// Function: sub_00122418
// Address: 0x122418 - 0x122448
void sub_00122418_0x122418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122418_0x122418");
#endif

    switch (ctx->pc) {
        case 0x12243cu: goto label_12243c;
        default: break;
    }

    ctx->pc = 0x122418u;

    // 0x122418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12241c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x12241cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122420: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x122420u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122424: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x122424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x122428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12242c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x12242cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122430: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x122430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x122434: 0xc048994  jal         func_122650
    ctx->pc = 0x122434u;
    SET_GPR_U32(ctx, 31, 0x12243Cu);
    ctx->pc = 0x122438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122434u;
    // 0x122438: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122650u, 0x122434u, 0x12243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12243Cu;
label_12243c:
    // 0x12243c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12243cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122440: 0x3e00008  jr          $ra
    ctx->pc = 0x122440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122440u;
        // 0x122444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122448u;
}
