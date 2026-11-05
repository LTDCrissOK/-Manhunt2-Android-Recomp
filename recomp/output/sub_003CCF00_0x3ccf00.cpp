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

// Function: sub_003CCF00
// Address: 0x3ccf00 - 0x3ccf40
void sub_003CCF00_0x3ccf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCF00_0x3ccf00");
#endif

    switch (ctx->pc) {
        case 0x3ccf28u: goto label_3ccf28;
        default: break;
    }

    ctx->pc = 0x3ccf00u;

    // 0x3ccf00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ccf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ccf04: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3ccf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3ccf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3ccf0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ccf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ccf10: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3ccf10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3ccf14: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3ccf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3ccf18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ccf18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ccf1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf20: 0xc0f31e4  jal         func_3CC790
    ctx->pc = 0x3CCF20u;
    SET_GPR_U32(ctx, 31, 0x3CCF28u);
    ctx->pc = 0x3CCF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCF20u;
    // 0x3ccf24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC790u, 0x3CCF20u, 0x3CCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCF28u;
label_3ccf28:
    // 0x3ccf28: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3ccf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3ccf2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ccf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccf30: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3ccf30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3ccf34: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ccf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccf38: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCF38u;
        // 0x3ccf3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCF40u;
}
