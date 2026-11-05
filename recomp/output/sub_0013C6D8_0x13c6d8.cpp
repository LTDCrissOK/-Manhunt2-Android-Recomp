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

// Function: sub_0013C6D8
// Address: 0x13c6d8 - 0x13c780
void sub_0013C6D8_0x13c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C6D8_0x13c6d8");
#endif

    switch (ctx->pc) {
        case 0x13c6d8u: goto label_13c6d8;
        case 0x13c6dcu: goto label_13c6dc;
        case 0x13c6e0u: goto label_13c6e0;
        case 0x13c6e4u: goto label_13c6e4;
        case 0x13c6e8u: goto label_13c6e8;
        case 0x13c6ecu: goto label_13c6ec;
        case 0x13c6f0u: goto label_13c6f0;
        case 0x13c6f4u: goto label_13c6f4;
        case 0x13c6f8u: goto label_13c6f8;
        case 0x13c6fcu: goto label_13c6fc;
        case 0x13c700u: goto label_13c700;
        case 0x13c704u: goto label_13c704;
        case 0x13c708u: goto label_13c708;
        case 0x13c70cu: goto label_13c70c;
        case 0x13c710u: goto label_13c710;
        case 0x13c714u: goto label_13c714;
        case 0x13c718u: goto label_13c718;
        case 0x13c71cu: goto label_13c71c;
        case 0x13c720u: goto label_13c720;
        case 0x13c724u: goto label_13c724;
        case 0x13c728u: goto label_13c728;
        case 0x13c72cu: goto label_13c72c;
        case 0x13c730u: goto label_13c730;
        case 0x13c734u: goto label_13c734;
        case 0x13c738u: goto label_13c738;
        case 0x13c73cu: goto label_13c73c;
        case 0x13c740u: goto label_13c740;
        case 0x13c744u: goto label_13c744;
        case 0x13c748u: goto label_13c748;
        case 0x13c74cu: goto label_13c74c;
        case 0x13c750u: goto label_13c750;
        case 0x13c754u: goto label_13c754;
        case 0x13c758u: goto label_13c758;
        case 0x13c75cu: goto label_13c75c;
        case 0x13c760u: goto label_13c760;
        case 0x13c764u: goto label_13c764;
        case 0x13c768u: goto label_13c768;
        case 0x13c76cu: goto label_13c76c;
        case 0x13c770u: goto label_13c770;
        case 0x13c774u: goto label_13c774;
        case 0x13c778u: goto label_13c778;
        case 0x13c77cu: goto label_13c77c;
        default: break;
    }

    ctx->pc = 0x13c6d8u;

label_13c6d8:
    // 0x13c6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c6dc:
    // 0x13c6dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c6e0:
    // 0x13c6e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c6e4:
    // 0x13c6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c6e8:
    // 0x13c6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13c6ec:
    // 0x13c6ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13c6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c6f0:
    // 0x13c6f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13c6f4:
    // 0x13c6f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13c6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13c6f8:
    // 0x13c6f8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x13c6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13c6fc:
    // 0x13c6fc: 0x0  nop
    ctx->pc = 0x13c6fcu;
    // NOP
label_13c700:
    // 0x13c700: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13c700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13c704:
    // 0x13c704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c708:
    // 0x13c708: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13c708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_13c70c:
    // 0x13c70c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13c710:
    // 0x13c710: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_13c714:
    if (ctx->pc == 0x13C714u) {
        ctx->pc = 0x13C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C710u;
        // 0x13c714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C718u;
        goto label_13c718;
    }
    ctx->pc = 0x13C710u;
    {
        const bool branch_taken_0x13c710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C710u;
        // 0x13c714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c710) {
            ctx->pc = 0x13C750u;
            goto label_13c750;
        }
    }
    ctx->pc = 0x13C718u;
label_13c718:
    // 0x13c718: 0xc04f112  jal         func_13C448
label_13c71c:
    if (ctx->pc == 0x13C71Cu) {
        ctx->pc = 0x13C720u;
        goto label_13c720;
    }
    ctx->pc = 0x13C718u;
    SET_GPR_U32(ctx, 31, 0x13C720u);
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x13C718u, 0x13C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C720u;
label_13c720:
    // 0x13c720: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_13c724:
    if (ctx->pc == 0x13C724u) {
        ctx->pc = 0x13C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C720u;
        // 0x13c724: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C728u;
        goto label_13c728;
    }
    ctx->pc = 0x13C720u;
    {
        const bool branch_taken_0x13c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C720u;
        // 0x13c724: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c720) {
            ctx->pc = 0x13C754u;
            goto label_13c754;
        }
    }
    ctx->pc = 0x13C728u;
label_13c728:
    // 0x13c728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c72c:
    // 0x13c72c: 0xc04f130  jal         func_13C4C0
label_13c730:
    if (ctx->pc == 0x13C730u) {
        ctx->pc = 0x13C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C72Cu;
        // 0x13c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C734u;
        goto label_13c734;
    }
    ctx->pc = 0x13C72Cu;
    SET_GPR_U32(ctx, 31, 0x13C734u);
    ctx->pc = 0x13C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C72Cu;
    // 0x13c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x13C72Cu, 0x13C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C734u;
label_13c734:
    // 0x13c734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c738:
    // 0x13c738: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_13c73c:
    if (ctx->pc == 0x13C73Cu) {
        ctx->pc = 0x13C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C738u;
        // 0x13c73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C740u;
        goto label_13c740;
    }
    ctx->pc = 0x13C738u;
    {
        const bool branch_taken_0x13c738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x13C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C738u;
        // 0x13c73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c738) {
            ctx->pc = 0x13C750u;
            goto label_13c750;
        }
    }
    ctx->pc = 0x13C740u;
label_13c740:
    // 0x13c740: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13c740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c744:
    // 0x13c744: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x13c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_13c748:
    // 0x13c748: 0x60f809  jalr        $v1
label_13c74c:
    if (ctx->pc == 0x13C74Cu) {
        ctx->pc = 0x13C750u;
        goto label_13c750;
    }
    ctx->pc = 0x13C748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C750u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C748u, 0x13C750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C750u;
label_13c750:
    // 0x13c750: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13c754:
    // 0x13c754: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13c754u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13c758:
    // 0x13c758: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x13c758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_13c75c:
    // 0x13c75c: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
label_13c760:
    if (ctx->pc == 0x13C760u) {
        ctx->pc = 0x13C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C75Cu;
        // 0x13c760: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C764u;
        goto label_13c764;
    }
    ctx->pc = 0x13C75Cu;
    {
        const bool branch_taken_0x13c75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c75c) {
            ctx->pc = 0x13C760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C75Cu;
            // 0x13c760: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c700;
        }
    }
    ctx->pc = 0x13C764u;
label_13c764:
    // 0x13c764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c768:
    // 0x13c768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c76c:
    // 0x13c76c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c76cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c770:
    // 0x13c770: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13c774:
    // 0x13c774: 0x3e00008  jr          $ra
label_13c778:
    if (ctx->pc == 0x13C778u) {
        ctx->pc = 0x13C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C774u;
        // 0x13c778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C77Cu;
        goto label_13c77c;
    }
    ctx->pc = 0x13C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C774u;
        // 0x13c778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C77Cu;
label_13c77c:
    // 0x13c77c: 0x0  nop
    ctx->pc = 0x13c77cu;
    // NOP
    ctx->pc = 0x13c780u;
}
