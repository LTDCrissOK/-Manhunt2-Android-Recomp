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

// Function: sub_0011D248
// Address: 0x11d248 - 0x11d288
void sub_0011D248_0x11d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D248_0x11d248");
#endif

    switch (ctx->pc) {
        case 0x11d25cu: goto label_11d25c;
        case 0x11d278u: goto label_11d278;
        default: break;
    }

    ctx->pc = 0x11d248u;

    // 0x11d248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d254: 0xc04731c  jal         func_11CC70
    ctx->pc = 0x11D254u;
    SET_GPR_U32(ctx, 31, 0x11D25Cu);
    ctx->pc = 0x11D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D254u;
    // 0x11d258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC70u, 0x11D254u, 0x11D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D25Cu;
label_11d25c:
    // 0x11d25c: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x11d25cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d260: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x11d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11d264: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x11d264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11d268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d26c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x11d26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d270: 0xc045534  jal         func_1154D0
    ctx->pc = 0x11D270u;
    SET_GPR_U32(ctx, 31, 0x11D278u);
    ctx->pc = 0x11D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D270u;
    // 0x11d274: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1154D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154D0u, 0x11D270u, 0x11D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D278u;
label_11d278:
    // 0x11d278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d27c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d280: 0x3e00008  jr          $ra
    ctx->pc = 0x11D280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D280u;
        // 0x11d284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D288u;
}
