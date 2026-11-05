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

// Function: sub_002D3380
// Address: 0x2d3380 - 0x2d33e0
void sub_002D3380_0x2d3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3380_0x2d3380");
#endif

    switch (ctx->pc) {
        case 0x2d33b0u: goto label_2d33b0;
        case 0x2d33bcu: goto label_2d33bc;
        default: break;
    }

    ctx->pc = 0x2d3380u;

    // 0x2d3380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d338c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d338cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3390: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3394: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d3394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3398: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d3398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d339c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d33a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D33A0u;
    {
        const bool branch_taken_0x2d33a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33A0u;
        // 0x2d33a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33a0) {
            ctx->pc = 0x2D33B0u;
            goto label_2d33b0;
        }
    }
    ctx->pc = 0x2D33A8u;
    // 0x2d33a8: 0xc0b4cf8  jal         func_2D33E0
    ctx->pc = 0x2D33A8u;
    SET_GPR_U32(ctx, 31, 0x2D33B0u);
    ctx->pc = 0x2D33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D33E0u, 0x2D33A8u, 0x2D33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33B0u;
label_2d33b0:
    // 0x2d33b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d33b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33b4: 0xc0e5376  jal         func_394DD8
    ctx->pc = 0x2D33B4u;
    SET_GPR_U32(ctx, 31, 0x2D33BCu);
    ctx->pc = 0x2D33B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D33B4u;
    // 0x2d33b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394DD8u, 0x2D33B4u, 0x2D33BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33BCu;
label_2d33bc:
    // 0x2d33bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d33bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d33c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d33c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d33c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d33c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d33c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d33c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d33cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d33ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d33d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d33d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33D4u;
        // 0x2d33d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D33D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D33DCu;
    // 0x2d33dc: 0x0  nop
    ctx->pc = 0x2d33dcu;
    // NOP
    ctx->pc = 0x2d33e0u;
}
