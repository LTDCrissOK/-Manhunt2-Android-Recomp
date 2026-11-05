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

// Function: sub_0036C748
// Address: 0x36c748 - 0x36c790
void sub_0036C748_0x36c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C748_0x36c748");
#endif

    switch (ctx->pc) {
        case 0x36c774u: goto label_36c774;
        case 0x36c780u: goto label_36c780;
        default: break;
    }

    ctx->pc = 0x36c748u;

    // 0x36c748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c74c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x36c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c754: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c758: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x36c758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x36c75c: 0x26101f00  addiu       $s0, $s0, 0x1F00
    ctx->pc = 0x36c75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7936));
    // 0x36c760: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x36c760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C1F0Cu));
    // 0x36c764: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x36c764u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6C1F28u));
    // 0x36c768: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36c76c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C76Cu;
    SET_GPR_U32(ctx, 31, 0x36C774u);
    ctx->pc = 0x36C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C76Cu;
    // 0x36c770: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C76Cu, 0x36C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C774u;
label_36c774:
    // 0x36c774: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x36c774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x36c778: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36C778u;
    SET_GPR_U32(ctx, 31, 0x36C780u);
    ctx->pc = 0x36C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C778u;
    // 0x36c77c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36C778u, 0x36C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C780u;
label_36c780:
    // 0x36c780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c784: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c788: 0x3e00008  jr          $ra
    ctx->pc = 0x36C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C788u;
        // 0x36c78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C790u;
}
