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

// Function: sub_001727D8
// Address: 0x1727d8 - 0x172818
void sub_001727D8_0x1727d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001727D8_0x1727d8");
#endif

    switch (ctx->pc) {
        case 0x1727ecu: goto label_1727ec;
        case 0x1727f4u: goto label_1727f4;
        case 0x172804u: goto label_172804;
        default: break;
    }

    ctx->pc = 0x1727d8u;

    // 0x1727d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1727d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1727dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1727dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1727e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1727e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1727e4: 0xc05d42a  jal         func_1750A8
    ctx->pc = 0x1727E4u;
    SET_GPR_U32(ctx, 31, 0x1727ECu);
    ctx->pc = 0x1727E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727E4u;
    // 0x1727e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1750A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1750A8u, 0x1727E4u, 0x1727ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727ECu;
label_1727ec:
    // 0x1727ec: 0xc05d492  jal         func_175248
    ctx->pc = 0x1727ECu;
    SET_GPR_U32(ctx, 31, 0x1727F4u);
    ctx->pc = 0x1727F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727ECu;
    // 0x1727f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175248u, 0x1727ECu, 0x1727F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727F4u;
label_1727f4:
    // 0x1727f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1727f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1727f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1727fc: 0xc05c720  jal         func_171C80
    ctx->pc = 0x1727FCu;
    SET_GPR_U32(ctx, 31, 0x172804u);
    ctx->pc = 0x172800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727FCu;
    // 0x172800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x1727FCu, 0x172804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172804u;
label_172804:
    // 0x172804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17280c: 0x3e00008  jr          $ra
    ctx->pc = 0x17280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17280Cu;
        // 0x172810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17280Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172814u;
    // 0x172814: 0x0  nop
    ctx->pc = 0x172814u;
    // NOP
    ctx->pc = 0x172818u;
}
