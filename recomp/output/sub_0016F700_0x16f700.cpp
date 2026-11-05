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

// Function: sub_0016F700
// Address: 0x16f700 - 0x16f768
void sub_0016F700_0x16f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F700_0x16f700");
#endif

    switch (ctx->pc) {
        case 0x16f724u: goto label_16f724;
        case 0x16f730u: goto label_16f730;
        case 0x16f744u: goto label_16f744;
        case 0x16f754u: goto label_16f754;
        default: break;
    }

    ctx->pc = 0x16f700u;

    // 0x16f700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f704: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16f704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16f708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16f70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f710: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x16f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x16f714: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F714u;
        // 0x16f718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F758u;
            goto label_16f758;
        }
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16F71Cu;
    SET_GPR_U32(ctx, 31, 0x16F724u);
    ctx->pc = 0x16F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F71Cu;
    // 0x16f720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16F71Cu, 0x16F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F724u;
label_16f724:
    // 0x16f724: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x16f728: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16F728u;
    SET_GPR_U32(ctx, 31, 0x16F730u);
    ctx->pc = 0x16F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F728u;
    // 0x16f72c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16F728u, 0x16F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F730u;
label_16f730:
    // 0x16f730: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F730u;
    {
        const bool branch_taken_0x16f730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F730u;
        // 0x16f734: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f730) {
            ctx->pc = 0x16F74Cu;
            goto label_16f74c;
        }
    }
    ctx->pc = 0x16F738u;
    // 0x16f738: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x16f738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x16f73c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F73Cu;
    SET_GPR_U32(ctx, 31, 0x16F744u);
    ctx->pc = 0x16F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F73Cu;
    // 0x16f740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F73Cu, 0x16F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F744u;
label_16f744:
    // 0x16f744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16F744u;
    {
        const bool branch_taken_0x16f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F744u;
        // 0x16f748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f744) {
            ctx->pc = 0x16F758u;
            goto label_16f758;
        }
    }
    ctx->pc = 0x16F74Cu;
label_16f74c:
    // 0x16f74c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F74Cu;
    SET_GPR_U32(ctx, 31, 0x16F754u);
    ctx->pc = 0x16F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F74Cu;
    // 0x16f750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F74Cu, 0x16F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F754u;
label_16f754:
    // 0x16f754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f758:
    // 0x16f758: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16f758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f75c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f760: 0x3e00008  jr          $ra
    ctx->pc = 0x16F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F760u;
        // 0x16f764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F768u;
}
