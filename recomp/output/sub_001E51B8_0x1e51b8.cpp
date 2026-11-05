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

// Function: sub_001E51B8
// Address: 0x1e51b8 - 0x1e5208
void sub_001E51B8_0x1e51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E51B8_0x1e51b8");
#endif

    switch (ctx->pc) {
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51f0u: goto label_1e51f0;
        default: break;
    }

    ctx->pc = 0x1e51b8u;

    // 0x1e51b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e51b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e51bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e51c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e51c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e51c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e51cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E51CCu;
    SET_GPR_U32(ctx, 31, 0x1E51D4u);
    ctx->pc = 0x1E51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51CCu;
    // 0x1e51d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E51CCu, 0x1E51D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51D4u;
label_1e51d4:
    // 0x1e51d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e51d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1e51d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e51dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e51dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e51e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e51e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e51e8: 0xc079372  jal         func_1E4DC8
    ctx->pc = 0x1E51E8u;
    SET_GPR_U32(ctx, 31, 0x1E51F0u);
    ctx->pc = 0x1E51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51E8u;
    // 0x1e51ec: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4DC8u, 0x1E51E8u, 0x1E51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51F0u;
label_1e51f0:
    // 0x1e51f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e51f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e51f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e51f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e51f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e51fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e51fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5200: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5200u;
        // 0x1e5204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5208u;
}
