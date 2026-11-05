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

// Function: sub_001616E8
// Address: 0x1616e8 - 0x161728
void sub_001616E8_0x1616e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001616E8_0x1616e8");
#endif

    switch (ctx->pc) {
        case 0x161704u: goto label_161704;
        case 0x161714u: goto label_161714;
        default: break;
    }

    ctx->pc = 0x1616e8u;

    // 0x1616e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1616e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1616ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1616ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1616f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1616f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1616f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1616f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1616f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1616fc: 0xc058c8a  jal         func_163228
    ctx->pc = 0x1616FCu;
    SET_GPR_U32(ctx, 31, 0x161704u);
    ctx->pc = 0x161700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616FCu;
    // 0x161700: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163228u, 0x1616FCu, 0x161704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161704u;
label_161704:
    // 0x161704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16170c: 0xc058c62  jal         func_163188
    ctx->pc = 0x16170Cu;
    SET_GPR_U32(ctx, 31, 0x161714u);
    ctx->pc = 0x161710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16170Cu;
    // 0x161710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163188u, 0x16170Cu, 0x161714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161714u;
label_161714:
    // 0x161714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16171c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161720: 0x3e00008  jr          $ra
    ctx->pc = 0x161720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161720u;
        // 0x161724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161728u;
}
