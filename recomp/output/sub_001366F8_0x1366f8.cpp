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

// Function: sub_001366F8
// Address: 0x1366f8 - 0x136790
void sub_001366F8_0x1366f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001366F8_0x1366f8");
#endif

    switch (ctx->pc) {
        case 0x136734u: goto label_136734;
        case 0x136740u: goto label_136740;
        case 0x136750u: goto label_136750;
        case 0x13675cu: goto label_13675c;
        case 0x136770u: goto label_136770;
        default: break;
    }

    ctx->pc = 0x1366f8u;

    // 0x1366f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1366f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1366fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1366fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x136700: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x136700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x136704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136708: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x136708u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13670c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x136710: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136714: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x136714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x136718: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x136718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x13671c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x13671cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x136720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136724: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x136724u;
    {
        const bool branch_taken_0x136724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x136728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136724u;
        // 0x136728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136724) {
            ctx->pc = 0x136774u;
            goto label_136774;
        }
    }
    ctx->pc = 0x13672Cu;
    // 0x13672c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13672Cu;
    SET_GPR_U32(ctx, 31, 0x136734u);
    ctx->pc = 0x136730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13672Cu;
    // 0x136730: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13672Cu, 0x136734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136734u;
label_136734:
    // 0x136734: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x136734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136738: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x136738u;
    SET_GPR_U32(ctx, 31, 0x136740u);
    ctx->pc = 0x13673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136738u;
    // 0x13673c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x136738u, 0x136740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136740u;
label_136740:
    // 0x136740: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136740u;
    {
        const bool branch_taken_0x136740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136740u;
        // 0x136744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136740) {
            ctx->pc = 0x136764u;
            goto label_136764;
        }
    }
    ctx->pc = 0x136748u;
    // 0x136748: 0xc04d9b8  jal         func_1366E0
    ctx->pc = 0x136748u;
    SET_GPR_U32(ctx, 31, 0x136750u);
    ctx->pc = 0x13674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136748u;
    // 0x13674c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1366E0u, 0x136748u, 0x136750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136750u;
label_136750:
    // 0x136750: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136754: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x136754u;
    SET_GPR_U32(ctx, 31, 0x13675Cu);
    ctx->pc = 0x136758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136754u;
    // 0x136758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x136754u, 0x13675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13675Cu;
label_13675c:
    // 0x13675c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13675Cu;
    {
        const bool branch_taken_0x13675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13675Cu;
        // 0x136760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13675c) {
            ctx->pc = 0x136774u;
            goto label_136774;
        }
    }
    ctx->pc = 0x136764u;
label_136764:
    // 0x136764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x136764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136768: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x136768u;
    SET_GPR_U32(ctx, 31, 0x136770u);
    ctx->pc = 0x13676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136768u;
    // 0x13676c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x136768u, 0x136770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136770u;
label_136770:
    // 0x136770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136774:
    // 0x136774: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x136774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136778: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x136778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13677c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13677cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136780: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x136780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136784: 0x3e00008  jr          $ra
    ctx->pc = 0x136784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136784u;
        // 0x136788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13678Cu;
    // 0x13678c: 0x0  nop
    ctx->pc = 0x13678cu;
    // NOP
    ctx->pc = 0x136790u;
}
