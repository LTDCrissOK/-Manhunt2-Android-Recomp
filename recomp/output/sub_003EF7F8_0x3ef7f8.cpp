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

// Function: sub_003EF7F8
// Address: 0x3ef7f8 - 0x3ef888
void sub_003EF7F8_0x3ef7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF7F8_0x3ef7f8");
#endif

    switch (ctx->pc) {
        case 0x3ef824u: goto label_3ef824;
        case 0x3ef844u: goto label_3ef844;
        default: break;
    }

    ctx->pc = 0x3ef7f8u;

    // 0x3ef7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef7fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef800: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ef800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ef804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef80c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ef80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ef810: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ef810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef814: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF814u;
    {
        const bool branch_taken_0x3ef814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF814u;
        // 0x3ef818: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef814) {
            ctx->pc = 0x3EF838u;
            goto label_3ef838;
        }
    }
    ctx->pc = 0x3EF81Cu;
    // 0x3ef81c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF81Cu;
    SET_GPR_U32(ctx, 31, 0x3EF824u);
    ctx->pc = 0x3EF820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF81Cu;
    // 0x3ef820: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF81Cu, 0x3EF824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF824u;
label_3ef824:
    // 0x3ef824: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ef824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ef828: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef82c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ef82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ef830: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF830u;
    {
        const bool branch_taken_0x3ef830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF830u;
        // 0x3ef834: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef830) {
            ctx->pc = 0x3EF854u;
            goto label_3ef854;
        }
    }
    ctx->pc = 0x3EF838u;
label_3ef838:
    // 0x3ef838: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ef838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef83c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF83Cu;
    SET_GPR_U32(ctx, 31, 0x3EF844u);
    ctx->pc = 0x3EF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF83Cu;
    // 0x3ef840: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF83Cu, 0x3EF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF844u;
label_3ef844:
    // 0x3ef844: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef848: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ef848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ef84c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ef84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ef850: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ef850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ef854:
    // 0x3ef854: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef85c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ef85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ef860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ef860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef864: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef868: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef86c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ef86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ef870: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ef870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ef874: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ef874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ef878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef87c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF87Cu;
        // 0x3ef880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF884u;
    // 0x3ef884: 0x0  nop
    ctx->pc = 0x3ef884u;
    // NOP
    ctx->pc = 0x3ef888u;
}
