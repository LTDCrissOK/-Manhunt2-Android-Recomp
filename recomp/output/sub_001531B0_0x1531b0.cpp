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

// Function: sub_001531B0
// Address: 0x1531b0 - 0x153200
void sub_001531B0_0x1531b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001531B0_0x1531b0");
#endif

    switch (ctx->pc) {
        case 0x1531ccu: goto label_1531cc;
        case 0x1531d4u: goto label_1531d4;
        case 0x1531e8u: goto label_1531e8;
        default: break;
    }

    ctx->pc = 0x1531b0u;

    // 0x1531b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1531b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1531b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1531b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1531b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1531bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1531c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1531c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1531c4: 0xc054d4a  jal         func_153528
    ctx->pc = 0x1531C4u;
    SET_GPR_U32(ctx, 31, 0x1531CCu);
    ctx->pc = 0x1531C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531C4u;
    // 0x1531c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153528u, 0x1531C4u, 0x1531CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531CCu;
label_1531cc:
    // 0x1531cc: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x1531CCu;
    SET_GPR_U32(ctx, 31, 0x1531D4u);
    ctx->pc = 0x1531D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531CCu;
    // 0x1531d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x1531CCu, 0x1531D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531D4u;
label_1531d4:
    // 0x1531d4: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x1531d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x1531d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1531dc: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x1531dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x1531e0: 0xc04d89a  jal         func_136268
    ctx->pc = 0x1531E0u;
    SET_GPR_U32(ctx, 31, 0x1531E8u);
    ctx->pc = 0x1531E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531E0u;
    // 0x1531e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x1531E0u, 0x1531E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531E8u;
label_1531e8:
    // 0x1531e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1531e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1531ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1531ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1531f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1531f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1531f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1531F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1531F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531F4u;
        // 0x1531f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1531F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1531FCu;
    // 0x1531fc: 0x0  nop
    ctx->pc = 0x1531fcu;
    // NOP
    ctx->pc = 0x153200u;
}
