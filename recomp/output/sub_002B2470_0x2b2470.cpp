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

// Function: sub_002B2470
// Address: 0x2b2470 - 0x2b24c8
void sub_002B2470_0x2b2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2470_0x2b2470");
#endif

    switch (ctx->pc) {
        case 0x2b2490u: goto label_2b2490;
        default: break;
    }

    ctx->pc = 0x2b2470u;

    // 0x2b2470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b247c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b247cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2480: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b2480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2488: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x2B2488u;
    SET_GPR_U32(ctx, 31, 0x2B2490u);
    ctx->pc = 0x2B248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2488u;
    // 0x2b248c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2B2488u, 0x2B2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2490u;
label_2b2490:
    // 0x2b2490: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b2490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b2494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b249c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b24a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b24a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b24a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b24a8: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x2b24a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x2b24ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b24acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b24b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b24b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b24b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B24B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24B4u;
        // 0x2b24b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B24B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B24BCu;
    // 0x2b24bc: 0x0  nop
    ctx->pc = 0x2b24bcu;
    // NOP
    // 0x2b24c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2b24c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24c4: 0x0  nop
    ctx->pc = 0x2b24c4u;
    // NOP
    ctx->pc = 0x2b24c8u;
}
