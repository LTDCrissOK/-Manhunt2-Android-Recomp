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

// Function: sub_001E57B0
// Address: 0x1e57b0 - 0x1e5800
void sub_001E57B0_0x1e57b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E57B0_0x1e57b0");
#endif

    switch (ctx->pc) {
        case 0x1e57ccu: goto label_1e57cc;
        case 0x1e57e8u: goto label_1e57e8;
        default: break;
    }

    ctx->pc = 0x1e57b0u;

    // 0x1e57b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e57b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e57b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e57b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e57b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e57b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e57bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e57c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e57c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e57c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E57C4u;
    SET_GPR_U32(ctx, 31, 0x1E57CCu);
    ctx->pc = 0x1E57C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57C4u;
    // 0x1e57c8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E57C4u, 0x1E57CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57CCu;
label_1e57cc:
    // 0x1e57cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e57ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57d0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1e57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e57d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e57d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e57dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e57e0: 0xc0795c6  jal         func_1E5718
    ctx->pc = 0x1E57E0u;
    SET_GPR_U32(ctx, 31, 0x1E57E8u);
    ctx->pc = 0x1E57E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57E0u;
    // 0x1e57e4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5718u, 0x1E57E0u, 0x1E57E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57E8u;
label_1e57e8:
    // 0x1e57e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e57e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e57ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e57f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e57f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e57f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e57f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e57f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E57F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57F8u;
        // 0x1e57fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E57F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5800u;
}
