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

// Function: sub_003DC888
// Address: 0x3dc888 - 0x3dc8f0
void sub_003DC888_0x3dc888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC888_0x3dc888");
#endif

    switch (ctx->pc) {
        case 0x3dc8c0u: goto label_3dc8c0;
        default: break;
    }

    ctx->pc = 0x3dc888u;

    // 0x3dc888: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dc888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc88c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc890: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3dc890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3dc894: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3dc894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3dc898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc89c: 0x24840f90  addiu       $a0, $a0, 0xF90
    ctx->pc = 0x3dc89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3984));
    // 0x3dc8a0: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x3dc8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x3dc8a4: 0xacc40038  sw          $a0, 0x38($a2)
    ctx->pc = 0x3dc8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 4));
    // 0x3dc8a8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dc8a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dc8ac: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3dc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x3dc8b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC8B0u;
    {
        const bool branch_taken_0x3dc8b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC8B0u;
        // 0x3dc8b4: 0xacc40058  sw          $a0, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc8b0) {
            ctx->pc = 0x3DC8C0u;
            goto label_3dc8c0;
        }
    }
    ctx->pc = 0x3DC8B8u;
    // 0x3dc8b8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC8B8u;
    SET_GPR_U32(ctx, 31, 0x3DC8C0u);
    ctx->pc = 0x3DC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC8B8u;
    // 0x3dc8bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC8B8u, 0x3DC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC8C0u;
label_3dc8c0:
    // 0x3dc8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC8C4u;
        // 0x3dc8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC8CCu;
    // 0x3dc8cc: 0x0  nop
    ctx->pc = 0x3dc8ccu;
    // NOP
    // 0x3dc8d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dc8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dc8d4: 0x0  nop
    ctx->pc = 0x3dc8d4u;
    // NOP
    // 0x3dc8d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3dc8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc8dc: 0x0  nop
    ctx->pc = 0x3dc8dcu;
    // NOP
    // 0x3dc8e0: 0x0  nop
    ctx->pc = 0x3dc8e0u;
    // NOP
    // 0x3dc8e4: 0x0  nop
    ctx->pc = 0x3dc8e4u;
    // NOP
    // 0x3dc8e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dc8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dc8ec: 0x0  nop
    ctx->pc = 0x3dc8ecu;
    // NOP
    ctx->pc = 0x3dc8f0u;
}
