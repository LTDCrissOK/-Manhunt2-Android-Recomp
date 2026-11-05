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

// Function: sub_00277DD0
// Address: 0x277dd0 - 0x277e38
void sub_00277DD0_0x277dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277DD0_0x277dd0");
#endif

    switch (ctx->pc) {
        case 0x277e08u: goto label_277e08;
        case 0x277e20u: goto label_277e20;
        default: break;
    }

    ctx->pc = 0x277dd0u;

    // 0x277dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277dd4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x277dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277ddc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x277ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x277de0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x277de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x277de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277de8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x277de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dec: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x277decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277df0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x277df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x277df4: 0x24458318  addiu       $a1, $v0, -0x7CE8
    ctx->pc = 0x277df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935320));
    // 0x277df8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x277df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x277dfc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x277dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x277e00: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277E00u;
    SET_GPR_U32(ctx, 31, 0x277E08u);
    ctx->pc = 0x277E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E00u;
    // 0x277e04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277E00u, 0x277E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E08u;
label_277e08:
    // 0x277e08: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x277e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x277e0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277E0Cu;
    {
        const bool branch_taken_0x277e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E0Cu;
        // 0x277e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e0c) {
            ctx->pc = 0x277E20u;
            goto label_277e20;
        }
    }
    ctx->pc = 0x277E14u;
    // 0x277e14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277e18: 0xc09ddfa  jal         func_2777E8
    ctx->pc = 0x277E18u;
    SET_GPR_U32(ctx, 31, 0x277E20u);
    ctx->pc = 0x277E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E18u;
    // 0x277e1c: 0x24a58320  addiu       $a1, $a1, -0x7CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777E8u, 0x277E18u, 0x277E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E20u;
label_277e20:
    // 0x277e20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x277e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277e24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277e28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x277e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x277E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E2Cu;
        // 0x277e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277E34u;
    // 0x277e34: 0x0  nop
    ctx->pc = 0x277e34u;
    // NOP
    ctx->pc = 0x277e38u;
}
