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

// Function: sub_001BEBB8
// Address: 0x1bebb8 - 0x1bec18
void sub_001BEBB8_0x1bebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEBB8_0x1bebb8");
#endif

    switch (ctx->pc) {
        case 0x1bebd4u: goto label_1bebd4;
        case 0x1bebfcu: goto label_1bebfc;
        default: break;
    }

    ctx->pc = 0x1bebb8u;

    // 0x1bebb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bebbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bebc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bebc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bebc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bebcc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BEBCCu;
    SET_GPR_U32(ctx, 31, 0x1BEBD4u);
    ctx->pc = 0x1BEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBCCu;
    // 0x1bebd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BEBCCu, 0x1BEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBD4u;
label_1bebd4:
    // 0x1bebd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bebd8: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1bebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1bebdc: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1bebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1bebe0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1bebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1bebe4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1bebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1bebe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebec: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1bebf0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bebf4: 0xc06fb70  jal         func_1BEDC0
    ctx->pc = 0x1BEBF4u;
    SET_GPR_U32(ctx, 31, 0x1BEBFCu);
    ctx->pc = 0x1BEBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBF4u;
    // 0x1bebf8: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEDC0u, 0x1BEBF4u, 0x1BEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBFCu;
label_1bebfc:
    // 0x1bebfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bebfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bec04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bec04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bec08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC0Cu;
        // 0x1bec10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC14u;
    // 0x1bec14: 0x0  nop
    ctx->pc = 0x1bec14u;
    // NOP
    ctx->pc = 0x1bec18u;
}
