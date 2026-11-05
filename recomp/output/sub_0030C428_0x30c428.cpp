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

// Function: sub_0030C428
// Address: 0x30c428 - 0x30c460
void sub_0030C428_0x30c428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C428_0x30c428");
#endif

    switch (ctx->pc) {
        case 0x30c44cu: goto label_30c44c;
        default: break;
    }

    ctx->pc = 0x30c428u;

    // 0x30c428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c42c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x30c430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c434: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x30c434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x30c438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c440: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x30c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30c444: 0xc0c24de  jal         func_309378
    ctx->pc = 0x30C444u;
    SET_GPR_U32(ctx, 31, 0x30C44Cu);
    ctx->pc = 0x30C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C444u;
    // 0x30c448: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x30C444u, 0x30C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C44Cu;
label_30c44c:
    // 0x30c44c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c450: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c458: 0x3e00008  jr          $ra
    ctx->pc = 0x30C458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C458u;
        // 0x30c45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C460u;
}
