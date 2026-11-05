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

// Function: sub_0011D288
// Address: 0x11d288 - 0x11d2c8
void sub_0011D288_0x11d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D288_0x11d288");
#endif

    switch (ctx->pc) {
        case 0x11d29cu: goto label_11d29c;
        case 0x11d2b8u: goto label_11d2b8;
        default: break;
    }

    ctx->pc = 0x11d288u;

    // 0x11d288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d294: 0xc0473a8  jal         func_11CEA0
    ctx->pc = 0x11D294u;
    SET_GPR_U32(ctx, 31, 0x11D29Cu);
    ctx->pc = 0x11D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D294u;
    // 0x11d298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CEA0u, 0x11D294u, 0x11D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D29Cu;
label_11d29c:
    // 0x11d29c: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x11d29cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d2a0: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x11d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11d2a4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x11d2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11d2a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2ac: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x11d2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d2b0: 0xc0421b0  jal         func_1086C0
    ctx->pc = 0x11D2B0u;
    SET_GPR_U32(ctx, 31, 0x11D2B8u);
    ctx->pc = 0x11D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2B0u;
    // 0x11d2b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086C0u, 0x11D2B0u, 0x11D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2B8u;
label_11d2b8:
    // 0x11d2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d2bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x11D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2C0u;
        // 0x11d2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D2C8u;
}
