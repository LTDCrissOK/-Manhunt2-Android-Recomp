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

// Function: sub_00169DC8
// Address: 0x169dc8 - 0x169e18
void sub_00169DC8_0x169dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169DC8_0x169dc8");
#endif

    switch (ctx->pc) {
        case 0x169df0u: goto label_169df0;
        case 0x169e00u: goto label_169e00;
        default: break;
    }

    ctx->pc = 0x169dc8u;

    // 0x169dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169ddc: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169de0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169DE0u;
    {
        const bool branch_taken_0x169de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DE0u;
        // 0x169de4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169de0) {
            ctx->pc = 0x169DF4u;
            goto label_169df4;
        }
    }
    ctx->pc = 0x169DE8u;
    // 0x169de8: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169DE8u;
    SET_GPR_U32(ctx, 31, 0x169DF0u);
    ctx->pc = 0x169DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DE8u;
    // 0x169dec: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169DE8u, 0x169DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DF0u;
label_169df0:
    // 0x169df0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169df4:
    // 0x169df4: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169df8: 0xc0460c4  jal         func_118310
    ctx->pc = 0x169DF8u;
    SET_GPR_U32(ctx, 31, 0x169E00u);
    ctx->pc = 0x169DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DF8u;
    // 0x169dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x169DF8u, 0x169E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E00u;
label_169e00:
    // 0x169e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x169E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E0Cu;
        // 0x169e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169E14u;
    // 0x169e14: 0x0  nop
    ctx->pc = 0x169e14u;
    // NOP
    ctx->pc = 0x169e18u;
}
