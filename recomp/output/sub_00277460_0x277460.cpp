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

// Function: sub_00277460
// Address: 0x277460 - 0x2774b0
void sub_00277460_0x277460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277460_0x277460");
#endif

    switch (ctx->pc) {
        case 0x277480u: goto label_277480;
        default: break;
    }

    ctx->pc = 0x277460u;

    // 0x277460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277468: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x277468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27746c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27746cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277478: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x277478u;
    SET_GPR_U32(ctx, 31, 0x277480u);
    ctx->pc = 0x27747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277478u;
    // 0x27747c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x277478u, 0x277480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277480u;
label_277480:
    // 0x277480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277484: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x277484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x277488: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x277488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x27748c: 0x24632c00  addiu       $v1, $v1, 0x2C00
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
    // 0x277490: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x277490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
    // 0x277494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x277498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27749c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27749cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2774a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2774a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2774a4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2774a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2774a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2774A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2774ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774A8u;
        // 0x2774ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2774A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2774B0u;
}
