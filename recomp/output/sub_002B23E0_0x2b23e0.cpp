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

// Function: sub_002B23E0
// Address: 0x2b23e0 - 0x2b2438
void sub_002B23E0_0x2b23e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B23E0_0x2b23e0");
#endif

    switch (ctx->pc) {
        case 0x2b2400u: goto label_2b2400;
        default: break;
    }

    ctx->pc = 0x2b23e0u;

    // 0x2b23e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b23e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b23e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b23e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b23ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b23ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b23f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b23f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b23f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b23f8: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x2B23F8u;
    SET_GPR_U32(ctx, 31, 0x2B2400u);
    ctx->pc = 0x2B23FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23F8u;
    // 0x2b23fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2B23F8u, 0x2B2400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2400u;
label_2b2400:
    // 0x2b2400: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b2400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b2404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2408: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b2408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b240c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2410u;
    {
        const bool branch_taken_0x2b2410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2410u;
        // 0x2b2414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2410) {
            ctx->pc = 0x2B2420u;
            goto label_2b2420;
        }
    }
    ctx->pc = 0x2B2418u;
    // 0x2b2418: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2b2418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2b241c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2420:
    // 0x2b2420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b242c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B242Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B242Cu;
        // 0x2b2430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B242Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2434u;
    // 0x2b2434: 0x0  nop
    ctx->pc = 0x2b2434u;
    // NOP
    ctx->pc = 0x2b2438u;
}
