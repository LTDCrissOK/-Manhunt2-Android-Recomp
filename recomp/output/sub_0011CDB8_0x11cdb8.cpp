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

// Function: sub_0011CDB8
// Address: 0x11cdb8 - 0x11cdf0
void sub_0011CDB8_0x11cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CDB8_0x11cdb8");
#endif

    switch (ctx->pc) {
        case 0x11cdd4u: goto label_11cdd4;
        case 0x11cde0u: goto label_11cde0;
        default: break;
    }

    ctx->pc = 0x11cdb8u;

    // 0x11cdb8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11cdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11cdbc: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x11cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x11cdc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc4: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x11cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x11cdc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdcc: 0xc09e062  jal         func_278188
    ctx->pc = 0x11CDCCu;
    SET_GPR_U32(ctx, 31, 0x11CDD4u);
    ctx->pc = 0x11CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDCCu;
    // 0x11cdd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CDCCu, 0x11CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDD4u;
label_11cdd4:
    // 0x11cdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdd8: 0xc047092  jal         func_11C248
    ctx->pc = 0x11CDD8u;
    SET_GPR_U32(ctx, 31, 0x11CDE0u);
    ctx->pc = 0x11CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDD8u;
    // 0x11cddc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C248u, 0x11CDD8u, 0x11CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDE0u;
label_11cde0:
    // 0x11cde0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x11cde0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cde4: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x11cde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x11cde8: 0x3e00008  jr          $ra
    ctx->pc = 0x11CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDE8u;
        // 0x11cdec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CDF0u;
}
