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

// Function: sub_00136860
// Address: 0x136860 - 0x1368e0
void sub_00136860_0x136860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136860_0x136860");
#endif

    switch (ctx->pc) {
        case 0x136894u: goto label_136894;
        case 0x1368a0u: goto label_1368a0;
        case 0x1368b4u: goto label_1368b4;
        case 0x1368c8u: goto label_1368c8;
        default: break;
    }

    ctx->pc = 0x136860u;

    // 0x136860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136864: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x136864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136868: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x136868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13686c: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x136870: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136874: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x136874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x136878: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x136878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13687c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x13687cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136880: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x136880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136884: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x136884u;
    {
        const bool branch_taken_0x136884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136884u;
        // 0x136888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136884) {
            ctx->pc = 0x1368CCu;
            goto label_1368cc;
        }
    }
    ctx->pc = 0x13688Cu;
    // 0x13688c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13688Cu;
    SET_GPR_U32(ctx, 31, 0x136894u);
    ctx->pc = 0x136890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13688Cu;
    // 0x136890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13688Cu, 0x136894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136894u;
label_136894:
    // 0x136894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136898: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x136898u;
    SET_GPR_U32(ctx, 31, 0x1368A0u);
    ctx->pc = 0x13689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136898u;
    // 0x13689c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x136898u, 0x1368A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368A0u;
label_1368a0:
    // 0x1368a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1368A0u;
    {
        const bool branch_taken_0x1368a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1368a0) {
            ctx->pc = 0x1368A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1368A0u;
            // 0x1368a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1368BCu;
            goto label_1368bc;
        }
    }
    ctx->pc = 0x1368A8u;
    // 0x1368a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1368a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1368ac: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1368ACu;
    SET_GPR_U32(ctx, 31, 0x1368B4u);
    ctx->pc = 0x1368B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368ACu;
    // 0x1368b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1368ACu, 0x1368B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368B4u;
label_1368b4:
    // 0x1368b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1368B4u;
    {
        const bool branch_taken_0x1368b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368B4u;
        // 0x1368b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368b4) {
            ctx->pc = 0x1368CCu;
            goto label_1368cc;
        }
    }
    ctx->pc = 0x1368BCu;
label_1368bc:
    // 0x1368bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1368bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1368c0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1368C0u;
    SET_GPR_U32(ctx, 31, 0x1368C8u);
    ctx->pc = 0x1368C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368C0u;
    // 0x1368c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1368C0u, 0x1368C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368C8u;
label_1368c8:
    // 0x1368c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1368c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1368cc:
    // 0x1368cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1368ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1368d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1368d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1368d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1368d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1368d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1368D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1368DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368D8u;
        // 0x1368dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1368D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1368E0u;
}
