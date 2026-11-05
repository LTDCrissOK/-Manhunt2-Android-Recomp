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

// Function: sub_0012C8A0
// Address: 0x12c8a0 - 0x12c948
void sub_0012C8A0_0x12c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C8A0_0x12c8a0");
#endif

    switch (ctx->pc) {
        case 0x12c8dcu: goto label_12c8dc;
        case 0x12c8fcu: goto label_12c8fc;
        case 0x12c90cu: goto label_12c90c;
        case 0x12c91cu: goto label_12c91c;
        case 0x12c92cu: goto label_12c92c;
        default: break;
    }

    ctx->pc = 0x12c8a0u;

    // 0x12c8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c8a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c8a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c8ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12c8b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c8b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c8c0: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C8C0u;
    {
        const bool branch_taken_0x12c8c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8C0u;
        // 0x12c8c4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8c0) {
            ctx->pc = 0x12C8D4u;
            goto label_12c8d4;
        }
    }
    ctx->pc = 0x12C8C8u;
    // 0x12c8c8: 0x8e4204cc  lw          $v0, 0x4CC($s2)
    ctx->pc = 0x12c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1228)));
    // 0x12c8cc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C8CCu;
    {
        const bool branch_taken_0x12c8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8CCu;
        // 0x12c8d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8cc) {
            ctx->pc = 0x12C930u;
            goto label_12c930;
        }
    }
    ctx->pc = 0x12C8D4u;
label_12c8d4:
    // 0x12c8d4: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12C8D4u;
    SET_GPR_U32(ctx, 31, 0x12C8DCu);
    ctx->pc = 0x12C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8D4u;
    // 0x12c8d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12C8D4u, 0x12C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8DCu;
label_12c8dc:
    // 0x12c8dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c8dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c8e4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C8E4u;
    {
        const bool branch_taken_0x12c8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8E4u;
        // 0x12c8e8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8e4) {
            ctx->pc = 0x12C92Cu;
            goto label_12c92c;
        }
    }
    ctx->pc = 0x12C8ECu;
    // 0x12c8ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12c8f4: 0xc04af92  jal         func_12BE48
    ctx->pc = 0x12C8F4u;
    SET_GPR_U32(ctx, 31, 0x12C8FCu);
    ctx->pc = 0x12C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8F4u;
    // 0x12c8f8: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BE48u, 0x12C8F4u, 0x12C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8FCu;
label_12c8fc:
    // 0x12c8fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12c8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c900: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c904: 0xc05f49c  jal         func_17D270
    ctx->pc = 0x12C904u;
    SET_GPR_U32(ctx, 31, 0x12C90Cu);
    ctx->pc = 0x12C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C904u;
    // 0x12c908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D270u, 0x12C904u, 0x12C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C90Cu;
label_12c90c:
    // 0x12c90c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12c90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c914: 0xc04afee  jal         func_12BFB8
    ctx->pc = 0x12C914u;
    SET_GPR_U32(ctx, 31, 0x12C91Cu);
    ctx->pc = 0x12C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C914u;
    // 0x12c918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x12C914u, 0x12C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C91Cu;
label_12c91c:
    // 0x12c91c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c924: 0xc04b0da  jal         func_12C368
    ctx->pc = 0x12C924u;
    SET_GPR_U32(ctx, 31, 0x12C92Cu);
    ctx->pc = 0x12C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C924u;
    // 0x12c928: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C368u, 0x12C924u, 0x12C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C92Cu;
label_12c92c:
    // 0x12c92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c930:
    // 0x12c930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c938: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12c938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c93c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c940: 0x3e00008  jr          $ra
    ctx->pc = 0x12C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C940u;
        // 0x12c944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C948u;
}
