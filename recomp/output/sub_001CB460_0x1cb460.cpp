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

// Function: sub_001CB460
// Address: 0x1cb460 - 0x1cb4a8
void sub_001CB460_0x1cb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB460_0x1cb460");
#endif

    switch (ctx->pc) {
        case 0x1cb49cu: goto label_1cb49c;
        default: break;
    }

    ctx->pc = 0x1cb460u;

    // 0x1cb460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb464: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1cb468: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1cb46c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1cb470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb474: 0x24421488  addiu       $v0, $v0, 0x1488
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x1cb478: 0x24630328  addiu       $v1, $v1, 0x328
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 808));
    // 0x1cb47c: 0x24c60338  addiu       $a2, $a2, 0x338
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 824));
    // 0x1cb480: 0xac820104  sw          $v0, 0x104($a0)
    ctx->pc = 0x1cb480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
    // 0x1cb484: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1cb484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1cb488: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x1cb488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x1cb48c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB48Cu;
    {
        const bool branch_taken_0x1cb48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB48Cu;
        // 0x1cb490: 0xac860044  sw          $a2, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb48c) {
            ctx->pc = 0x1CB49Cu;
            goto label_1cb49c;
        }
    }
    ctx->pc = 0x1CB494u;
    // 0x1cb494: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CB494u;
    SET_GPR_U32(ctx, 31, 0x1CB49Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CB494u, 0x1CB49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB49Cu;
label_1cb49c:
    // 0x1cb49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4A0u;
        // 0x1cb4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB4A8u;
}
