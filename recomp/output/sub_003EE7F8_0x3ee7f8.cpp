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

// Function: sub_003EE7F8
// Address: 0x3ee7f8 - 0x3ee888
void sub_003EE7F8_0x3ee7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE7F8_0x3ee7f8");
#endif

    switch (ctx->pc) {
        case 0x3ee824u: goto label_3ee824;
        case 0x3ee844u: goto label_3ee844;
        default: break;
    }

    ctx->pc = 0x3ee7f8u;

    // 0x3ee7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee7fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ee7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ee800: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ee800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ee804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ee804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee80c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ee80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ee810: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ee810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee814: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE814u;
    {
        const bool branch_taken_0x3ee814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE814u;
        // 0x3ee818: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee814) {
            ctx->pc = 0x3EE838u;
            goto label_3ee838;
        }
    }
    ctx->pc = 0x3EE81Cu;
    // 0x3ee81c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE81Cu;
    SET_GPR_U32(ctx, 31, 0x3EE824u);
    ctx->pc = 0x3EE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE81Cu;
    // 0x3ee820: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE81Cu, 0x3EE824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE824u;
label_3ee824:
    // 0x3ee824: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ee824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ee828: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee82c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ee82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ee830: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE830u;
    {
        const bool branch_taken_0x3ee830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE830u;
        // 0x3ee834: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee830) {
            ctx->pc = 0x3EE854u;
            goto label_3ee854;
        }
    }
    ctx->pc = 0x3EE838u;
label_3ee838:
    // 0x3ee838: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ee838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee83c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE83Cu;
    SET_GPR_U32(ctx, 31, 0x3EE844u);
    ctx->pc = 0x3EE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE83Cu;
    // 0x3ee840: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE83Cu, 0x3EE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE844u;
label_3ee844:
    // 0x3ee844: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee848: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ee848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ee84c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ee84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ee850: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ee850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ee854:
    // 0x3ee854: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ee854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee85c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ee85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ee860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ee860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee864: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ee864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee868: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ee868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee86c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ee86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ee870: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ee870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ee874: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ee874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ee878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ee878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee87c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE87Cu;
        // 0x3ee880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE884u;
    // 0x3ee884: 0x0  nop
    ctx->pc = 0x3ee884u;
    // NOP
    ctx->pc = 0x3ee888u;
}
