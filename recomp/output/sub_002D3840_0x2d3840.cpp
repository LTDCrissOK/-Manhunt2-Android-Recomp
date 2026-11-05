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

// Function: sub_002D3840
// Address: 0x2d3840 - 0x2d3898
void sub_002D3840_0x2d3840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3840_0x2d3840");
#endif

    switch (ctx->pc) {
        case 0x2d386cu: goto label_2d386c;
        default: break;
    }

    ctx->pc = 0x2d3840u;

    // 0x2d3840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3844: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d3848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d384c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d384cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3854: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2d3854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d3858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d385c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3860: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2d3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d3864: 0xc0b4cf8  jal         func_2D33E0
    ctx->pc = 0x2D3864u;
    SET_GPR_U32(ctx, 31, 0x2D386Cu);
    ctx->pc = 0x2D3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3864u;
    // 0x2d3868: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D33E0u, 0x2D3864u, 0x2D386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D386Cu;
label_2d386c:
    // 0x2d386c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2d386cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d3870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3874: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x2d3874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2d3878: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d3878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d387c: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x2d387cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3880: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2d3880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2d3884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d388c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D388Cu;
        // 0x2d3890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3894u;
    // 0x2d3894: 0x0  nop
    ctx->pc = 0x2d3894u;
    // NOP
    ctx->pc = 0x2d3898u;
}
