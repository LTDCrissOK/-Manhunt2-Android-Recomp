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

// Function: sub_0012DA88
// Address: 0x12da88 - 0x12db00
void sub_0012DA88_0x12da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DA88_0x12da88");
#endif

    switch (ctx->pc) {
        case 0x12daacu: goto label_12daac;
        case 0x12dabcu: goto label_12dabc;
        case 0x12dac8u: goto label_12dac8;
        case 0x12dae4u: goto label_12dae4;
        default: break;
    }

    ctx->pc = 0x12da88u;

    // 0x12da88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12da88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12da8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12da90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12da94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12da94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12da98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12daa0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12daa4: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DAA4u;
    SET_GPR_U32(ctx, 31, 0x12DAACu);
    ctx->pc = 0x12DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAA4u;
    // 0x12daa8: 0x2405031c  addiu       $a1, $zero, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DAA4u, 0x12DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAACu;
label_12daac:
    // 0x12daac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12daacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dab0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12dab4: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DAB4u;
    SET_GPR_U32(ctx, 31, 0x12DABCu);
    ctx->pc = 0x12DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAB4u;
    // 0x12dab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DAB4u, 0x12DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DABCu;
label_12dabc:
    // 0x12dabc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dac0: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DAC0u;
    SET_GPR_U32(ctx, 31, 0x12DAC8u);
    ctx->pc = 0x12DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DAC0u;
    // 0x12dac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DAC0u, 0x12DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAC8u;
label_12dac8:
    // 0x12dac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dacc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12daccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dad0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x12dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x12dad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12dad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dad8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12dadc: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DADCu;
    SET_GPR_U32(ctx, 31, 0x12DAE4u);
    ctx->pc = 0x12DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DADCu;
    // 0x12dae0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DADCu, 0x12DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAE4u;
label_12dae4:
    // 0x12dae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12daec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12daecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12daf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x12DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAF4u;
        // 0x12daf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DAFCu;
    // 0x12dafc: 0x0  nop
    ctx->pc = 0x12dafcu;
    // NOP
    ctx->pc = 0x12db00u;
}
