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

// Function: sub_0024B740
// Address: 0x24b740 - 0x24b798
void sub_0024B740_0x24b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B740_0x24b740");
#endif

    switch (ctx->pc) {
        case 0x24b75cu: goto label_24b75c;
        default: break;
    }

    ctx->pc = 0x24b740u;

    // 0x24b740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b74c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24b74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b750: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b754: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24B754u;
    SET_GPR_U32(ctx, 31, 0x24B75Cu);
    ctx->pc = 0x24B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B754u;
    // 0x24b758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24B754u, 0x24B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B75Cu;
label_24b75c:
    // 0x24b75c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24b760: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x24b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x24b764: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B764u;
    {
        const bool branch_taken_0x24b764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B764u;
        // 0x24b768: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b764) {
            ctx->pc = 0x24B77Cu;
            goto label_24b77c;
        }
    }
    ctx->pc = 0x24B76Cu;
    // 0x24b76c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B76Cu;
    {
        const bool branch_taken_0x24b76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B76Cu;
        // 0x24b770: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b76c) {
            ctx->pc = 0x24B77Cu;
            goto label_24b77c;
        }
    }
    ctx->pc = 0x24B774u;
    // 0x24b774: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B774u;
    {
        const bool branch_taken_0x24b774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b774) {
            ctx->pc = 0x24B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B774u;
            // 0x24b778: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B784u;
            goto label_24b784;
        }
    }
    ctx->pc = 0x24B77Cu;
label_24b77c:
    // 0x24b77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b780: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24b780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_24b784:
    // 0x24b784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b78c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B78Cu;
        // 0x24b790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B794u;
    // 0x24b794: 0x0  nop
    ctx->pc = 0x24b794u;
    // NOP
    ctx->pc = 0x24b798u;
}
