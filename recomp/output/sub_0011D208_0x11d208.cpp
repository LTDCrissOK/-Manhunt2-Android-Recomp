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

// Function: sub_0011D208
// Address: 0x11d208 - 0x11d248
void sub_0011D208_0x11d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D208_0x11d208");
#endif

    switch (ctx->pc) {
        case 0x11d21cu: goto label_11d21c;
        case 0x11d238u: goto label_11d238;
        default: break;
    }

    ctx->pc = 0x11d208u;

    // 0x11d208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d214: 0xc04736e  jal         func_11CDB8
    ctx->pc = 0x11D214u;
    SET_GPR_U32(ctx, 31, 0x11D21Cu);
    ctx->pc = 0x11D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D214u;
    // 0x11d218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CDB8u, 0x11D214u, 0x11D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D21Cu;
label_11d21c:
    // 0x11d21c: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x11d21cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d220: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x11d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11d224: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x11d224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11d228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d22c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x11d22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d230: 0xc045532  jal         func_1154C8
    ctx->pc = 0x11D230u;
    SET_GPR_U32(ctx, 31, 0x11D238u);
    ctx->pc = 0x11D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D230u;
    // 0x11d234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1154C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154C8u, 0x11D230u, 0x11D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D238u;
label_11d238:
    // 0x11d238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d23c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d240: 0x3e00008  jr          $ra
    ctx->pc = 0x11D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D240u;
        // 0x11d244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D248u;
}
