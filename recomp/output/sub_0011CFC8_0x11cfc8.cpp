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

// Function: sub_0011CFC8
// Address: 0x11cfc8 - 0x11d008
void sub_0011CFC8_0x11cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CFC8_0x11cfc8");
#endif

    switch (ctx->pc) {
        case 0x11cfdcu: goto label_11cfdc;
        case 0x11cff8u: goto label_11cff8;
        default: break;
    }

    ctx->pc = 0x11cfc8u;

    // 0x11cfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11cfd4: 0xc04731c  jal         func_11CC70
    ctx->pc = 0x11CFD4u;
    SET_GPR_U32(ctx, 31, 0x11CFDCu);
    ctx->pc = 0x11CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFD4u;
    // 0x11cfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC70u, 0x11CFD4u, 0x11CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFDCu;
label_11cfdc:
    // 0x11cfdc: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x11cfdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11cfe0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x11cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x11cfe4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x11cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11cfe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfec: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x11cfecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11cff0: 0xc0455be  jal         func_1156F8
    ctx->pc = 0x11CFF0u;
    SET_GPR_U32(ctx, 31, 0x11CFF8u);
    ctx->pc = 0x11CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFF0u;
    // 0x11cff4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1156F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156F8u, 0x11CFF0u, 0x11CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFF8u;
label_11cff8:
    // 0x11cff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11cffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d000: 0x3e00008  jr          $ra
    ctx->pc = 0x11D000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D000u;
        // 0x11d004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D008u;
}
