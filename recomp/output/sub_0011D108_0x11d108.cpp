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

// Function: sub_0011D108
// Address: 0x11d108 - 0x11d148
void sub_0011D108_0x11d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D108_0x11d108");
#endif

    switch (ctx->pc) {
        case 0x11d11cu: goto label_11d11c;
        case 0x11d138u: goto label_11d138;
        default: break;
    }

    ctx->pc = 0x11d108u;

    // 0x11d108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d114: 0xc0473a8  jal         func_11CEA0
    ctx->pc = 0x11D114u;
    SET_GPR_U32(ctx, 31, 0x11D11Cu);
    ctx->pc = 0x11D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D114u;
    // 0x11d118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CEA0u, 0x11D114u, 0x11D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D11Cu;
label_11d11c:
    // 0x11d11c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x11d11cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11d120: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x11d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x11d124: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x11d124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11d128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d12c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x11d12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d130: 0xc0421b0  jal         func_1086C0
    ctx->pc = 0x11D130u;
    SET_GPR_U32(ctx, 31, 0x11D138u);
    ctx->pc = 0x11D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D130u;
    // 0x11d134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086C0u, 0x11D130u, 0x11D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D138u;
label_11d138:
    // 0x11d138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d13c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d140: 0x3e00008  jr          $ra
    ctx->pc = 0x11D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D140u;
        // 0x11d144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D148u;
}
