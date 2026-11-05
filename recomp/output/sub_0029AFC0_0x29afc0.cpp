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

// Function: sub_0029AFC0
// Address: 0x29afc0 - 0x29b018
void sub_0029AFC0_0x29afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AFC0_0x29afc0");
#endif

    switch (ctx->pc) {
        case 0x29afe8u: goto label_29afe8;
        case 0x29affcu: goto label_29affc;
        default: break;
    }

    ctx->pc = 0x29afc0u;

    // 0x29afc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29afc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29afc8: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x29afc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x29afcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29afccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29afd0: 0x8e221260  lw          $v0, 0x1260($s1)
    ctx->pc = 0x29afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C1260u));
    // 0x29afd4: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x29afd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29AFD8u;
    {
        const bool branch_taken_0x29afd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFD8u;
        // 0x29afdc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afd8) {
            ctx->pc = 0x29AFFCu;
            goto label_29affc;
        }
    }
    ctx->pc = 0x29AFE0u;
    // 0x29afe0: 0xc0a6c06  jal         func_29B018
    ctx->pc = 0x29AFE0u;
    SET_GPR_U32(ctx, 31, 0x29AFE8u);
    ctx->pc = 0x29AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFE0u;
    // 0x29afe4: 0x26041250  addiu       $a0, $s0, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B018u, 0x29AFE0u, 0x29AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFE8u;
label_29afe8:
    // 0x29afe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29afec: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x29afecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29aff0: 0xae221260  sw          $v0, 0x1260($s1)
    ctx->pc = 0x29aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4704), GPR_U32(ctx, 2));
    // 0x29aff4: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x29AFF4u;
    SET_GPR_U32(ctx, 31, 0x29AFFCu);
    ctx->pc = 0x29AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFF4u;
    // 0x29aff8: 0x2484af98  addiu       $a0, $a0, -0x5068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x29AFF4u, 0x29AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFFCu;
label_29affc:
    // 0x29affc: 0x26021250  addiu       $v0, $s0, 0x1250
    ctx->pc = 0x29affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4688));
    // 0x29b000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29b000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b00c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B00Cu;
        // 0x29b010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B014u;
    // 0x29b014: 0x0  nop
    ctx->pc = 0x29b014u;
    // NOP
    ctx->pc = 0x29b018u;
}
