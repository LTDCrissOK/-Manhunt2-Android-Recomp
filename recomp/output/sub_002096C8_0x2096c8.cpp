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

// Function: sub_002096C8
// Address: 0x2096c8 - 0x209778
void sub_002096C8_0x2096c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002096C8_0x2096c8");
#endif

    switch (ctx->pc) {
        case 0x209708u: goto label_209708;
        case 0x209718u: goto label_209718;
        case 0x209724u: goto label_209724;
        case 0x209750u: goto label_209750;
        default: break;
    }

    ctx->pc = 0x2096c8u;

    // 0x2096c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2096c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2096cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2096ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2096d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2096d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2096d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2096d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2096d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2096dc: 0x2e330001  sltiu       $s3, $s1, 0x1
    ctx->pc = 0x2096dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2096e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2096e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2096e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2096e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2096e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2096ec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2096ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2096f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2096f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2096f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2096f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2096fc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2096fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x209700: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x209700u;
    {
        const bool branch_taken_0x209700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209700u;
        // 0x209704: 0x3c12004a  lui         $s2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209700) {
            ctx->pc = 0x209718u;
            goto label_209718;
        }
    }
    ctx->pc = 0x209708u;
label_209708:
    // 0x209708: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209708u;
    {
        const bool branch_taken_0x209708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209708u;
        // 0x20970c: 0x2650c0d0  addiu       $s0, $s2, -0x3F30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209708) {
            ctx->pc = 0x20971Cu;
            goto label_20971c;
        }
    }
    ctx->pc = 0x209710u;
    // 0x209710: 0xc0f29ec  jal         func_3CA7B0
    ctx->pc = 0x209710u;
    SET_GPR_U32(ctx, 31, 0x209718u);
    ctx->pc = 0x209714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209710u;
    // 0x209714: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA7B0u, 0x209710u, 0x209718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209718u;
label_209718:
    // 0x209718: 0x2650c0d0  addiu       $s0, $s2, -0x3F30
    ctx->pc = 0x209718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951120));
label_20971c:
    // 0x20971c: 0xc0f34fc  jal         func_3CD3F0
    ctx->pc = 0x20971Cu;
    SET_GPR_U32(ctx, 31, 0x209724u);
    ctx->pc = 0x209720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20971Cu;
    // 0x209720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD3F0u, 0x20971Cu, 0x209724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209724u;
label_209724:
    // 0x209724: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x209724u;
    {
        const bool branch_taken_0x209724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209724u;
        // 0x209728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209724) {
            ctx->pc = 0x209708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209708;
        }
    }
    ctx->pc = 0x20972Cu;
    // 0x20972c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20972cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209730: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x209730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209734: 0x144080  sll         $t0, $s4, 2
    ctx->pc = 0x209734u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x209738: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x209738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20973c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x209740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209744: 0x240a05c0  addiu       $t2, $zero, 0x5C0
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x209748: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x209748u;
    SET_GPR_U32(ctx, 31, 0x209750u);
    ctx->pc = 0x20974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209748u;
    // 0x20974c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x209748u, 0x209750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209750u;
label_209750:
    // 0x209750: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x209750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209754: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x209754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209758: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20975c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20975cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x209760: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x209760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209764: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x209764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209768: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x209768u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20976c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x20976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209770: 0x3e00008  jr          $ra
    ctx->pc = 0x209770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209770u;
        // 0x209774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209778u;
}
