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

// Function: sub_00155730
// Address: 0x155730 - 0x1557d8
void sub_00155730_0x155730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155730_0x155730");
#endif

    switch (ctx->pc) {
        case 0x155780u: goto label_155780;
        case 0x155790u: goto label_155790;
        case 0x15579cu: goto label_15579c;
        case 0x1557b0u: goto label_1557b0;
        case 0x1557c0u: goto label_1557c0;
        default: break;
    }

    ctx->pc = 0x155730u;

    // 0x155730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155734: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x155734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x155738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15573c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x155744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15574c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x155750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x155750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x155754: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x155758: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15575c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x15575cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x155760: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x155760u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155764: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x155764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x155768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15576c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x155770: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x155770u;
    {
        const bool branch_taken_0x155770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155770u;
        // 0x155774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155770) {
            ctx->pc = 0x1557C0u;
            goto label_1557c0;
        }
    }
    ctx->pc = 0x155778u;
    // 0x155778: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x155778u;
    SET_GPR_U32(ctx, 31, 0x155780u);
    ctx->pc = 0x15577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155778u;
    // 0x15577c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x155778u, 0x155780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155780u;
label_155780:
    // 0x155780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155788: 0xc046138  jal         func_1184E0
    ctx->pc = 0x155788u;
    SET_GPR_U32(ctx, 31, 0x155790u);
    ctx->pc = 0x15578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155788u;
    // 0x15578c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x155788u, 0x155790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155790u;
label_155790:
    // 0x155790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155794: 0xc046154  jal         func_118550
    ctx->pc = 0x155794u;
    SET_GPR_U32(ctx, 31, 0x15579Cu);
    ctx->pc = 0x155798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155794u;
    // 0x155798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x155794u, 0x15579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15579Cu;
label_15579c:
    // 0x15579c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1557a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1557a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557a8: 0xc04db5a  jal         func_136D68
    ctx->pc = 0x1557A8u;
    SET_GPR_U32(ctx, 31, 0x1557B0u);
    ctx->pc = 0x1557ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557A8u;
    // 0x1557ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D68u, 0x1557A8u, 0x1557B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557B0u;
label_1557b0:
    // 0x1557b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1557b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1557b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557b8: 0xc04d936  jal         func_1364D8
    ctx->pc = 0x1557B8u;
    SET_GPR_U32(ctx, 31, 0x1557C0u);
    ctx->pc = 0x1557BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557B8u;
    // 0x1557bc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D8u, 0x1557B8u, 0x1557C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557C0u;
label_1557c0:
    // 0x1557c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1557c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1557c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1557c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1557c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1557c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1557cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1557ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1557d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1557D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1557D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557D0u;
        // 0x1557d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1557D8u;
}
