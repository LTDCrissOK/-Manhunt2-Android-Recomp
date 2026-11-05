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

// Function: sub_0012DCB0
// Address: 0x12dcb0 - 0x12dd38
void sub_0012DCB0_0x12dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DCB0_0x12dcb0");
#endif

    switch (ctx->pc) {
        case 0x12dcd4u: goto label_12dcd4;
        case 0x12dce4u: goto label_12dce4;
        case 0x12dcf0u: goto label_12dcf0;
        case 0x12dd00u: goto label_12dd00;
        case 0x12dd0cu: goto label_12dd0c;
        case 0x12dd20u: goto label_12dd20;
        default: break;
    }

    ctx->pc = 0x12dcb0u;

    // 0x12dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dcb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dcb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dcbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12dcbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12dcc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dcc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dccc: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DCCCu;
    SET_GPR_U32(ctx, 31, 0x12DCD4u);
    ctx->pc = 0x12DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCCCu;
    // 0x12dcd0: 0x24050366  addiu       $a1, $zero, 0x366 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DCCCu, 0x12DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCD4u;
label_12dcd4:
    // 0x12dcd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x12dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12dcdc: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DCDCu;
    SET_GPR_U32(ctx, 31, 0x12DCE4u);
    ctx->pc = 0x12DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCDCu;
    // 0x12dce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DCDCu, 0x12DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCE4u;
label_12dce4:
    // 0x12dce4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dce8: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DCE8u;
    SET_GPR_U32(ctx, 31, 0x12DCF0u);
    ctx->pc = 0x12DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCE8u;
    // 0x12dcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DCE8u, 0x12DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCF0u;
label_12dcf0:
    // 0x12dcf0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12dcf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcf8: 0xc046044  jal         func_118110
    ctx->pc = 0x12DCF8u;
    SET_GPR_U32(ctx, 31, 0x12DD00u);
    ctx->pc = 0x12DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCF8u;
    // 0x12dcfc: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12DCF8u, 0x12DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD00u;
label_12dd00:
    // 0x12dd00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12dd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd04: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12DD04u;
    SET_GPR_U32(ctx, 31, 0x12DD0Cu);
    ctx->pc = 0x12DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD04u;
    // 0x12dd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12DD04u, 0x12DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD0Cu;
label_12dd0c:
    // 0x12dd0c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12dd10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12dd10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd14: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12dd18: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DD18u;
    SET_GPR_U32(ctx, 31, 0x12DD20u);
    ctx->pc = 0x12DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD18u;
    // 0x12dd1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DD18u, 0x12DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD20u;
label_12dd20:
    // 0x12dd20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dd28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dd2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12dd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12dd30: 0x3e00008  jr          $ra
    ctx->pc = 0x12DD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD30u;
        // 0x12dd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DD38u;
}
