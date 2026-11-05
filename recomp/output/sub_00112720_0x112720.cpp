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

// Function: sub_00112720
// Address: 0x112720 - 0x112758
void sub_00112720_0x112720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112720_0x112720");
#endif

    switch (ctx->pc) {
        case 0x112738u: goto label_112738;
        case 0x112744u: goto label_112744;
        default: break;
    }

    ctx->pc = 0x112720u;

    // 0x112720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112724: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11272c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112730: 0xc041d26  jal         func_107498
    ctx->pc = 0x112730u;
    SET_GPR_U32(ctx, 31, 0x112738u);
    ctx->pc = 0x112734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112730u;
    // 0x112734: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107498u, 0x112730u, 0x112738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112738u;
label_112738:
    // 0x112738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11273c: 0xc0455f2  jal         func_1157C8
    ctx->pc = 0x11273Cu;
    SET_GPR_U32(ctx, 31, 0x112744u);
    ctx->pc = 0x112740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11273Cu;
    // 0x112740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157C8u, 0x11273Cu, 0x112744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112744u;
label_112744:
    // 0x112744: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112748: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11274c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11274cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112750: 0x3e00008  jr          $ra
    ctx->pc = 0x112750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112750u;
        // 0x112754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112758u;
}
