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

// Function: sub_00319FE8
// Address: 0x319fe8 - 0x31a030
void sub_00319FE8_0x319fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319FE8_0x319fe8");
#endif

    switch (ctx->pc) {
        case 0x31a020u: goto label_31a020;
        default: break;
    }

    ctx->pc = 0x319fe8u;

    // 0x319fe8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319fec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x319fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x319ff0: 0x8c499160  lw          $t1, -0x6EA0($v0)
    ctx->pc = 0x319ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3F9160u));
    // 0x319ff4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x319ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x319ff8: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x319ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x319ffc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a000: 0x1264818  mult        $t1, $t1, $a2
    ctx->pc = 0x31a000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31a004: 0x8c67ee20  lw          $a3, -0x11E0($v1)
    ctx->pc = 0x31a004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962720)));
    // 0x31a008: 0x25089920  addiu       $t0, $t0, -0x66E0
    ctx->pc = 0x31a008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940960));
    // 0x31a00c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x31a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x31a010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a014: 0x24c638e0  addiu       $a2, $a2, 0x38E0
    ctx->pc = 0x31a014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14560));
    // 0x31a018: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x31A018u;
    SET_GPR_U32(ctx, 31, 0x31A020u);
    ctx->pc = 0x31A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A018u;
    // 0x31a01c: 0x1284021  addu        $t0, $t1, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x31A018u, 0x31A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A020u;
label_31a020:
    // 0x31a020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a024: 0x3e00008  jr          $ra
    ctx->pc = 0x31A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A024u;
        // 0x31a028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A02Cu;
    // 0x31a02c: 0x0  nop
    ctx->pc = 0x31a02cu;
    // NOP
    ctx->pc = 0x31a030u;
}
