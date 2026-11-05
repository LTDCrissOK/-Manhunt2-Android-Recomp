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

// Function: sub_00145330
// Address: 0x145330 - 0x145378
void sub_00145330_0x145330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145330_0x145330");
#endif

    switch (ctx->pc) {
        case 0x145354u: goto label_145354;
        case 0x145364u: goto label_145364;
        default: break;
    }

    ctx->pc = 0x145330u;

    // 0x145330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x145334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14533c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145344: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x145344u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14534c: 0xc05158e  jal         func_145638
    ctx->pc = 0x14534Cu;
    SET_GPR_U32(ctx, 31, 0x145354u);
    ctx->pc = 0x145350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14534Cu;
    // 0x145350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145638u, 0x14534Cu, 0x145354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145354u;
label_145354:
    // 0x145354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14535c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14535Cu;
    SET_GPR_U32(ctx, 31, 0x145364u);
    ctx->pc = 0x145360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14535Cu;
    // 0x145360: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14535Cu, 0x145364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145364u;
label_145364:
    // 0x145364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14536c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145370: 0x3e00008  jr          $ra
    ctx->pc = 0x145370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145370u;
        // 0x145374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145378u;
}
