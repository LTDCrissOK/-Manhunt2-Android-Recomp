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

// Function: sub_00108678
// Address: 0x108678 - 0x1086c0
void sub_00108678_0x108678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108678_0x108678");
#endif

    switch (ctx->pc) {
        case 0x108694u: goto label_108694;
        case 0x1086acu: goto label_1086ac;
        default: break;
    }

    ctx->pc = 0x108678u;

    // 0x108678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10867c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10868c: 0xc042240  jal         func_108900
    ctx->pc = 0x10868Cu;
    SET_GPR_U32(ctx, 31, 0x108694u);
    ctx->pc = 0x108690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10868Cu;
    // 0x108690: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108900u, 0x10868Cu, 0x108694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108694u;
label_108694:
    // 0x108694: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x108694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10869c: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x10869cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1086a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1086a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086a4: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x1086A4u;
    SET_GPR_U32(ctx, 31, 0x1086ACu);
    ctx->pc = 0x1086A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086A4u;
    // 0x1086a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1086A4u, 0x1086ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086ACu;
label_1086ac:
    // 0x1086ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1086acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1086b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1086b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1086b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1086b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1086B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086B8u;
        // 0x1086bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1086C0u;
}
