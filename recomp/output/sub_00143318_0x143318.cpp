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

// Function: sub_00143318
// Address: 0x143318 - 0x143358
void sub_00143318_0x143318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143318_0x143318");
#endif

    switch (ctx->pc) {
        case 0x143338u: goto label_143338;
        case 0x143344u: goto label_143344;
        default: break;
    }

    ctx->pc = 0x143318u;

    // 0x143318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143328: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x143328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14332c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143330: 0xc04e836  jal         func_13A0D8
    ctx->pc = 0x143330u;
    SET_GPR_U32(ctx, 31, 0x143338u);
    ctx->pc = 0x143334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143330u;
    // 0x143334: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A0D8u, 0x143330u, 0x143338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143338u;
label_143338:
    // 0x143338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14333c: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x14333Cu;
    SET_GPR_U32(ctx, 31, 0x143344u);
    ctx->pc = 0x143340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14333Cu;
    // 0x143340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x14333Cu, 0x143344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143344u;
label_143344:
    // 0x143344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14334c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143350: 0x3e00008  jr          $ra
    ctx->pc = 0x143350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143350u;
        // 0x143354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143358u;
}
