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

// Function: sub_0012DFB0
// Address: 0x12dfb0 - 0x12e038
void sub_0012DFB0_0x12dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DFB0_0x12dfb0");
#endif

    switch (ctx->pc) {
        case 0x12dfd4u: goto label_12dfd4;
        case 0x12dfe4u: goto label_12dfe4;
        case 0x12dff0u: goto label_12dff0;
        case 0x12e000u: goto label_12e000;
        case 0x12e00cu: goto label_12e00c;
        case 0x12e020u: goto label_12e020;
        default: break;
    }

    ctx->pc = 0x12dfb0u;

    // 0x12dfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dfb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dfb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dfbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12dfbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12dfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dfc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12dfcc: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DFCCu;
    SET_GPR_U32(ctx, 31, 0x12DFD4u);
    ctx->pc = 0x12DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFCCu;
    // 0x12dfd0: 0x240503bf  addiu       $a1, $zero, 0x3BF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 959));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DFCCu, 0x12DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFD4u;
label_12dfd4:
    // 0x12dfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfd8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12dfdc: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DFDCu;
    SET_GPR_U32(ctx, 31, 0x12DFE4u);
    ctx->pc = 0x12DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFDCu;
    // 0x12dfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DFDCu, 0x12DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFE4u;
label_12dfe4:
    // 0x12dfe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfe8: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DFE8u;
    SET_GPR_U32(ctx, 31, 0x12DFF0u);
    ctx->pc = 0x12DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFE8u;
    // 0x12dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DFE8u, 0x12DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFF0u;
label_12dff0:
    // 0x12dff0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12dff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dff8: 0xc046044  jal         func_118110
    ctx->pc = 0x12DFF8u;
    SET_GPR_U32(ctx, 31, 0x12E000u);
    ctx->pc = 0x12DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFF8u;
    // 0x12dffc: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12DFF8u, 0x12E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E000u;
label_12e000:
    // 0x12e000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e004: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12E004u;
    SET_GPR_U32(ctx, 31, 0x12E00Cu);
    ctx->pc = 0x12E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E004u;
    // 0x12e008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12E004u, 0x12E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E00Cu;
label_12e00c:
    // 0x12e00c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12e010: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e014: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12e014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12e018: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E018u;
    SET_GPR_U32(ctx, 31, 0x12E020u);
    ctx->pc = 0x12E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E018u;
    // 0x12e01c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E018u, 0x12E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E020u;
label_12e020:
    // 0x12e020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e028: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e02c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e030: 0x3e00008  jr          $ra
    ctx->pc = 0x12E030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E030u;
        // 0x12e034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E038u;
}
