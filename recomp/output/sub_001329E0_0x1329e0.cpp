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

// Function: sub_001329E0
// Address: 0x1329e0 - 0x132a28
void sub_001329E0_0x1329e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001329E0_0x1329e0");
#endif

    switch (ctx->pc) {
        case 0x1329fcu: goto label_1329fc;
        case 0x132a08u: goto label_132a08;
        case 0x132a14u: goto label_132a14;
        default: break;
    }

    ctx->pc = 0x1329e0u;

    // 0x1329e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1329e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1329e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1329e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1329e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1329e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1329ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1329ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1329f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1329f4: 0xc04cc20  jal         func_133080
    ctx->pc = 0x1329F4u;
    SET_GPR_U32(ctx, 31, 0x1329FCu);
    ctx->pc = 0x1329F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329F4u;
    // 0x1329f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133080u, 0x1329F4u, 0x1329FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329FCu;
label_1329fc:
    // 0x1329fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1329fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a00: 0xc042446  jal         func_109118
    ctx->pc = 0x132A00u;
    SET_GPR_U32(ctx, 31, 0x132A08u);
    ctx->pc = 0x132A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A00u;
    // 0x132a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109118u, 0x132A00u, 0x132A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A08u;
label_132a08:
    // 0x132a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a0c: 0xc04cd2c  jal         func_1334B0
    ctx->pc = 0x132A0Cu;
    SET_GPR_U32(ctx, 31, 0x132A14u);
    ctx->pc = 0x132A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A0Cu;
    // 0x132a10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334B0u, 0x132A0Cu, 0x132A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A14u;
label_132a14:
    // 0x132a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132a20: 0x3e00008  jr          $ra
    ctx->pc = 0x132A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A20u;
        // 0x132a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132A28u;
}
