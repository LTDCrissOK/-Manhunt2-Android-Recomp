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

// Function: sub_00108528
// Address: 0x108528 - 0x108568
void sub_00108528_0x108528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108528_0x108528");
#endif

    switch (ctx->pc) {
        case 0x10854cu: goto label_10854c;
        case 0x108558u: goto label_108558;
        default: break;
    }

    ctx->pc = 0x108528u;

    // 0x108528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10852c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x108530: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108530u;
    {
        const bool branch_taken_0x108530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x108534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108530u;
        // 0x108534: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108530) {
            ctx->pc = 0x108558u;
            goto label_108558;
        }
    }
    ctx->pc = 0x108538u;
    // 0x108538: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108538u;
    {
        const bool branch_taken_0x108538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108538u;
        // 0x10853c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108538) {
            ctx->pc = 0x10855Cu;
            goto label_10855c;
        }
    }
    ctx->pc = 0x108540u;
    // 0x108540: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x108540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x108544: 0xc045e6e  jal         func_1179B8
    ctx->pc = 0x108544u;
    SET_GPR_U32(ctx, 31, 0x10854Cu);
    ctx->pc = 0x108548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108544u;
    // 0x108548: 0x24848738  addiu       $a0, $a0, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179B8u, 0x108544u, 0x10854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10854Cu;
label_10854c:
    // 0x10854c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10854cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x108550: 0xc041cb8  jal         func_1072E0
    ctx->pc = 0x108550u;
    SET_GPR_U32(ctx, 31, 0x108558u);
    ctx->pc = 0x108554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108550u;
    // 0x108554: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1072E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1072E0u, 0x108550u, 0x108558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108558u;
label_108558:
    // 0x108558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10855c:
    // 0x10855c: 0x3e00008  jr          $ra
    ctx->pc = 0x10855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10855Cu;
        // 0x108560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108564u;
    // 0x108564: 0x0  nop
    ctx->pc = 0x108564u;
    // NOP
    ctx->pc = 0x108568u;
}
