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

// Function: sub_00169B98
// Address: 0x169b98 - 0x169be8
void sub_00169B98_0x169b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169B98_0x169b98");
#endif

    switch (ctx->pc) {
        case 0x169bc0u: goto label_169bc0;
        case 0x169bd0u: goto label_169bd0;
        default: break;
    }

    ctx->pc = 0x169b98u;

    // 0x169b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169bac: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169bb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169BB0u;
    {
        const bool branch_taken_0x169bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BB0u;
        // 0x169bb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bb0) {
            ctx->pc = 0x169BC4u;
            goto label_169bc4;
        }
    }
    ctx->pc = 0x169BB8u;
    // 0x169bb8: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169BB8u;
    SET_GPR_U32(ctx, 31, 0x169BC0u);
    ctx->pc = 0x169BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BB8u;
    // 0x169bbc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169BB8u, 0x169BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BC0u;
label_169bc0:
    // 0x169bc0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169bc4:
    // 0x169bc4: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169bc8: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x169BC8u;
    SET_GPR_U32(ctx, 31, 0x169BD0u);
    ctx->pc = 0x169BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BC8u;
    // 0x169bcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x169BC8u, 0x169BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BD0u;
label_169bd0:
    // 0x169bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x169BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BDCu;
        // 0x169be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169BE4u;
    // 0x169be4: 0x0  nop
    ctx->pc = 0x169be4u;
    // NOP
    ctx->pc = 0x169be8u;
}
