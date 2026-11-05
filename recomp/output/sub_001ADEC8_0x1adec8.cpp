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

// Function: sub_001ADEC8
// Address: 0x1adec8 - 0x1adf30
void sub_001ADEC8_0x1adec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADEC8_0x1adec8");
#endif

    switch (ctx->pc) {
        case 0x1adef0u: goto label_1adef0;
        case 0x1adf04u: goto label_1adf04;
        case 0x1adf18u: goto label_1adf18;
        default: break;
    }

    ctx->pc = 0x1adec8u;

    // 0x1adec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aded0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aded4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aded8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adedc: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1adedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1adee0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADEE0u;
    {
        const bool branch_taken_0x1adee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEE0u;
        // 0x1adee4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adee0) {
            ctx->pc = 0x1ADEF0u;
            goto label_1adef0;
        }
    }
    ctx->pc = 0x1ADEE8u;
    // 0x1adee8: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1ADEE8u;
    SET_GPR_U32(ctx, 31, 0x1ADEF0u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1ADEE8u, 0x1ADEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEF0u;
label_1adef0:
    // 0x1adef0: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1adef4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADEF4u;
    {
        const bool branch_taken_0x1adef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEF4u;
        // 0x1adef8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adef4) {
            ctx->pc = 0x1ADF08u;
            goto label_1adf08;
        }
    }
    ctx->pc = 0x1ADEFCu;
    // 0x1adefc: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1ADEFCu;
    SET_GPR_U32(ctx, 31, 0x1ADF04u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1ADEFCu, 0x1ADF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF04u;
label_1adf04:
    // 0x1adf04: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1adf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1adf08:
    // 0x1adf08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF08u;
    {
        const bool branch_taken_0x1adf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf08) {
            ctx->pc = 0x1ADF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF08u;
            // 0x1adf0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF1Cu;
            goto label_1adf1c;
        }
    }
    ctx->pc = 0x1ADF10u;
    // 0x1adf10: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1ADF10u;
    SET_GPR_U32(ctx, 31, 0x1ADF18u);
    ctx->pc = 0x1ADF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF10u;
    // 0x1adf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1ADF10u, 0x1ADF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF18u;
label_1adf18:
    // 0x1adf18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1adf1c:
    // 0x1adf1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1adf1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adf20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf24: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF24u;
        // 0x1adf28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF2Cu;
    // 0x1adf2c: 0x0  nop
    ctx->pc = 0x1adf2cu;
    // NOP
    ctx->pc = 0x1adf30u;
}
