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

// Function: sub_001360C8
// Address: 0x1360c8 - 0x1361a0
void sub_001360C8_0x1360c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001360C8_0x1360c8");
#endif

    switch (ctx->pc) {
        case 0x1360e8u: goto label_1360e8;
        case 0x1360f4u: goto label_1360f4;
        case 0x13610cu: goto label_13610c;
        case 0x136184u: goto label_136184;
        default: break;
    }

    ctx->pc = 0x1360c8u;

    // 0x1360c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1360c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1360cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1360ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1360d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1360d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1360d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1360d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1360d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1360d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1360dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1360dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360e0: 0xc04da56  jal         func_136958
    ctx->pc = 0x1360E0u;
    SET_GPR_U32(ctx, 31, 0x1360E8u);
    ctx->pc = 0x1360E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360E0u;
    // 0x1360e4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136958u, 0x1360E0u, 0x1360E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360E8u;
label_1360e8:
    // 0x1360e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1360e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360ec: 0xc04e13e  jal         func_1384F8
    ctx->pc = 0x1360ECu;
    SET_GPR_U32(ctx, 31, 0x1360F4u);
    ctx->pc = 0x1360F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360ECu;
    // 0x1360f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1384F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1384F8u, 0x1360ECu, 0x1360F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360F4u;
label_1360f4:
    // 0x1360f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1360f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360f8: 0x12110022  beq         $s0, $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1360F8u;
    {
        const bool branch_taken_0x1360f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1360FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360F8u;
        // 0x1360fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360f8) {
            ctx->pc = 0x136184u;
            goto label_136184;
        }
    }
    ctx->pc = 0x136100u;
    // 0x136100: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x136100u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x136104: 0xc04da50  jal         func_136940
    ctx->pc = 0x136104u;
    SET_GPR_U32(ctx, 31, 0x13610Cu);
    ctx->pc = 0x136108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136104u;
    // 0x136108: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136940u, 0x136104u, 0x13610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13610Cu;
label_13610c:
    // 0x13610c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x136110: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x136110u;
    {
        const bool branch_taken_0x136110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x136114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136110u;
        // 0x136114: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136110) {
            ctx->pc = 0x136184u;
            goto label_136184;
        }
    }
    ctx->pc = 0x136118u;
    // 0x136118: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x136118u;
    {
        const bool branch_taken_0x136118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136118u;
        // 0x13611c: 0x24070045  addiu       $a3, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136118) {
            ctx->pc = 0x136160u;
            goto label_136160;
        }
    }
    ctx->pc = 0x136120u;
    // 0x136120: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x136120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x136124: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x136124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x136128: 0x2442e580  addiu       $v0, $v0, -0x1A80
    ctx->pc = 0x136128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960512));
    // 0x13612c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x136130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136134: 0x800008  jr          $a0
    ctx->pc = 0x136134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13613Cu: goto label_13613c;
            case 0x136144u: goto label_136144;
            case 0x13614Cu: goto label_13614c;
            case 0x136154u: goto label_136154;
            case 0x13615Cu: goto label_13615c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136134u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13613Cu;
label_13613c:
    // 0x13613c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13613Cu;
    {
        const bool branch_taken_0x13613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13613Cu;
        // 0x136140: 0x24070036  addiu       $a3, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13613c) {
            ctx->pc = 0x136160u;
            goto label_136160;
        }
    }
    ctx->pc = 0x136144u;
label_136144:
    // 0x136144: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x136144u;
    {
        const bool branch_taken_0x136144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136144u;
        // 0x136148: 0x24070022  addiu       $a3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136144) {
            ctx->pc = 0x136160u;
            goto label_136160;
        }
    }
    ctx->pc = 0x13614Cu;
label_13614c:
    // 0x13614c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13614Cu;
    {
        const bool branch_taken_0x13614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13614Cu;
        // 0x136150: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13614c) {
            ctx->pc = 0x136160u;
            goto label_136160;
        }
    }
    ctx->pc = 0x136154u;
label_136154:
    // 0x136154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136154u;
    {
        const bool branch_taken_0x136154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136154u;
        // 0x136158: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136154) {
            ctx->pc = 0x136160u;
            goto label_136160;
        }
    }
    ctx->pc = 0x13615Cu;
label_13615c:
    // 0x13615c: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x13615cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_136160:
    // 0x136160: 0x9242046c  lbu         $v0, 0x46C($s2)
    ctx->pc = 0x136160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x136164: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x136164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x136168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13616c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136170: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x136170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136174: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136174u;
    {
        const bool branch_taken_0x136174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136174u;
        // 0x136178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136174) {
            ctx->pc = 0x136184u;
            goto label_136184;
        }
    }
    ctx->pc = 0x13617Cu;
    // 0x13617c: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x13617Cu;
    SET_GPR_U32(ctx, 31, 0x136184u);
    ctx->pc = 0x136180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13617Cu;
    // 0x136180: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x13617Cu, 0x136184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136184u;
label_136184:
    // 0x136184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13618c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13618cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x136190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136194: 0x3e00008  jr          $ra
    ctx->pc = 0x136194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136194u;
        // 0x136198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13619Cu;
    // 0x13619c: 0x0  nop
    ctx->pc = 0x13619cu;
    // NOP
    ctx->pc = 0x1361a0u;
}
