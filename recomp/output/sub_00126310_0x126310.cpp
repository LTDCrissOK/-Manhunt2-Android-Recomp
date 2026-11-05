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

// Function: sub_00126310
// Address: 0x126310 - 0x126358
void sub_00126310_0x126310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126310_0x126310");
#endif

    switch (ctx->pc) {
        case 0x126328u: goto label_126328;
        case 0x126334u: goto label_126334;
        case 0x126344u: goto label_126344;
        default: break;
    }

    ctx->pc = 0x126310u;

    // 0x126310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126314: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x126314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12631c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x126320: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x126320u;
    SET_GPR_U32(ctx, 31, 0x126328u);
    ctx->pc = 0x126324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126320u;
    // 0x126324: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x126320u, 0x126328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126328u;
label_126328:
    // 0x126328: 0x8e050e84  lw          $a1, 0xE84($s0)
    ctx->pc = 0x126328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3716)));
    // 0x12632c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x12632Cu;
    SET_GPR_U32(ctx, 31, 0x126334u);
    ctx->pc = 0x126330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12632Cu;
    // 0x126330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x12632Cu, 0x126334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126334u;
label_126334:
    // 0x126334: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x126334u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x126338: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x126338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12633c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12633Cu;
    SET_GPR_U32(ctx, 31, 0x126344u);
    ctx->pc = 0x126340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12633Cu;
    // 0x126340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12633Cu, 0x126344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126344u;
label_126344:
    // 0x126344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126348: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x126348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12634c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12634cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126350: 0x3e00008  jr          $ra
    ctx->pc = 0x126350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126350u;
        // 0x126354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126358u;
}
