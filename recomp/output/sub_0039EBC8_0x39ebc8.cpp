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

// Function: sub_0039EBC8
// Address: 0x39ebc8 - 0x39ec18
void sub_0039EBC8_0x39ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EBC8_0x39ebc8");
#endif

    switch (ctx->pc) {
        case 0x39ebdcu: goto label_39ebdc;
        case 0x39ebe4u: goto label_39ebe4;
        case 0x39ebe8u: goto label_39ebe8;
        case 0x39ebf0u: goto label_39ebf0;
        case 0x39ec00u: goto label_39ec00;
        default: break;
    }

    ctx->pc = 0x39ebc8u;

    // 0x39ebc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ebcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ebd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39ebd4: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39EBD4u;
    SET_GPR_U32(ctx, 31, 0x39EBDCu);
    ctx->pc = 0x39EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBD4u;
    // 0x39ebd8: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39EBD4u, 0x39EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBDCu;
label_39ebdc:
    // 0x39ebdc: 0xc0e80b8  jal         func_3A02E0
    ctx->pc = 0x39EBDCu;
    SET_GPR_U32(ctx, 31, 0x39EBE4u);
    ctx->pc = 0x3A02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A02E0u, 0x39EBDCu, 0x39EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBE4u;
label_39ebe4:
    // 0x39ebe4: 0x0  nop
    ctx->pc = 0x39ebe4u;
    // NOP
label_39ebe8:
    // 0x39ebe8: 0xc0e866a  jal         func_3A19A8
    ctx->pc = 0x39EBE8u;
    SET_GPR_U32(ctx, 31, 0x39EBF0u);
    ctx->pc = 0x39EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBE8u;
    // 0x39ebec: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19A8u, 0x39EBE8u, 0x39EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EBF0u;
label_39ebf0:
    // 0x39ebf0: 0x601fffd  bgez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x39EBF0u;
    {
        const bool branch_taken_0x39ebf0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x39ebf0) {
            ctx->pc = 0x39EBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ebe8;
        }
    }
    ctx->pc = 0x39EBF8u;
    // 0x39ebf8: 0xc0ecbf2  jal         func_3B2FC8
    ctx->pc = 0x39EBF8u;
    SET_GPR_U32(ctx, 31, 0x39EC00u);
    ctx->pc = 0x3B2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC8u, 0x39EBF8u, 0x39EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC00u;
label_39ec00:
    // 0x39ec00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39ec00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ec04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ec04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ec08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39ec08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x39EC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC0Cu;
        // 0x39ec10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EC14u;
    // 0x39ec14: 0x0  nop
    ctx->pc = 0x39ec14u;
    // NOP
    ctx->pc = 0x39ec18u;
}
