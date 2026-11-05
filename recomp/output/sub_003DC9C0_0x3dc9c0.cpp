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

// Function: sub_003DC9C0
// Address: 0x3dc9c0 - 0x3dc9f8
void sub_003DC9C0_0x3dc9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC9C0_0x3dc9c0");
#endif

    switch (ctx->pc) {
        case 0x3dc9e4u: goto label_3dc9e4;
        default: break;
    }

    ctx->pc = 0x3dc9c0u;

    // 0x3dc9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc9c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dc9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc9cc: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x3dc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x3dc9d0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dc9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dc9d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC9D4u;
    {
        const bool branch_taken_0x3dc9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9D4u;
        // 0x3dc9d8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc9d4) {
            ctx->pc = 0x3DC9E4u;
            goto label_3dc9e4;
        }
    }
    ctx->pc = 0x3DC9DCu;
    // 0x3dc9dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC9DCu;
    SET_GPR_U32(ctx, 31, 0x3DC9E4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC9DCu, 0x3DC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC9E4u;
label_3dc9e4:
    // 0x3dc9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9E8u;
        // 0x3dc9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC9F0u;
    // 0x3dc9f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dc9f4: 0x0  nop
    ctx->pc = 0x3dc9f4u;
    // NOP
    ctx->pc = 0x3dc9f8u;
}
