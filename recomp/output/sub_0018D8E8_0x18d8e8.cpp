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

// Function: sub_0018D8E8
// Address: 0x18d8e8 - 0x18d930
void sub_0018D8E8_0x18d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D8E8_0x18d8e8");
#endif

    switch (ctx->pc) {
        case 0x18d908u: goto label_18d908;
        case 0x18d914u: goto label_18d914;
        case 0x18d91cu: goto label_18d91c;
        default: break;
    }

    ctx->pc = 0x18d8e8u;

    // 0x18d8e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d8f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18d8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18d8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d900: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x18D900u;
    SET_GPR_U32(ctx, 31, 0x18D908u);
    ctx->pc = 0x18D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D900u;
    // 0x18d904: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18D900u, 0x18D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D908u;
label_18d908:
    // 0x18d908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18d908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d90c: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x18D90Cu;
    SET_GPR_U32(ctx, 31, 0x18D914u);
    ctx->pc = 0x18D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D90Cu;
    // 0x18d910: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18D90Cu, 0x18D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D914u;
label_18d914:
    // 0x18d914: 0xc06364c  jal         func_18D930
    ctx->pc = 0x18D914u;
    SET_GPR_U32(ctx, 31, 0x18D91Cu);
    ctx->pc = 0x18D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D914u;
    // 0x18d918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D930u, 0x18D914u, 0x18D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D91Cu;
label_18d91c:
    // 0x18d91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d928: 0x3e00008  jr          $ra
    ctx->pc = 0x18D928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D928u;
        // 0x18d92c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D930u;
}
