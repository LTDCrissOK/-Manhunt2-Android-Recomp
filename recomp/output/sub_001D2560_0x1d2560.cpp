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

// Function: sub_001D2560
// Address: 0x1d2560 - 0x1d25a0
void sub_001D2560_0x1d2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2560_0x1d2560");
#endif

    switch (ctx->pc) {
        case 0x1d257cu: goto label_1d257c;
        default: break;
    }

    ctx->pc = 0x1d2560u;

    // 0x1d2560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d2564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d2568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d256c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d256cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d2574: 0xc0749fc  jal         func_1D27F0
    ctx->pc = 0x1D2574u;
    SET_GPR_U32(ctx, 31, 0x1D257Cu);
    ctx->pc = 0x1D2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2574u;
    // 0x1d2578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27F0u, 0x1D2574u, 0x1D257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D257Cu;
label_1d257c:
    // 0x1d257c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d2580: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2584: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x1d2584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d2588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d2588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d258c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d258cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2590: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d2594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2598: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2598u;
        // 0x1d259c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D25A0u;
}
