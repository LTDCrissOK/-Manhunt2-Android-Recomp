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

// Function: sub_003DE470
// Address: 0x3de470 - 0x3de500
void sub_003DE470_0x3de470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE470_0x3de470");
#endif

    switch (ctx->pc) {
        case 0x3de49cu: goto label_3de49c;
        case 0x3de4bcu: goto label_3de4bc;
        default: break;
    }

    ctx->pc = 0x3de470u;

    // 0x3de470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de478: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de47c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de484: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3de484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3de488: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3de488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de48c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE48Cu;
    {
        const bool branch_taken_0x3de48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE48Cu;
        // 0x3de490: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de48c) {
            ctx->pc = 0x3DE4B0u;
            goto label_3de4b0;
        }
    }
    ctx->pc = 0x3DE494u;
    // 0x3de494: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE494u;
    SET_GPR_U32(ctx, 31, 0x3DE49Cu);
    ctx->pc = 0x3DE498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE494u;
    // 0x3de498: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE494u, 0x3DE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE49Cu;
label_3de49c:
    // 0x3de49c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3de4a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de4a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3de4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3de4a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE4A8u;
    {
        const bool branch_taken_0x3de4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4A8u;
        // 0x3de4ac: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de4a8) {
            ctx->pc = 0x3DE4CCu;
            goto label_3de4cc;
        }
    }
    ctx->pc = 0x3DE4B0u;
label_3de4b0:
    // 0x3de4b0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3de4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de4b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE4B4u;
    SET_GPR_U32(ctx, 31, 0x3DE4BCu);
    ctx->pc = 0x3DE4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE4B4u;
    // 0x3de4b8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE4B4u, 0x3DE4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE4BCu;
label_3de4bc:
    // 0x3de4bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de4c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3de4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3de4c4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3de4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3de4c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de4cc:
    // 0x3de4cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de4d4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3de4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3de4d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de4dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de4e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de4e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de4e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3de4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de4ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3de4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3de4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4F4u;
        // 0x3de4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE4FCu;
    // 0x3de4fc: 0x0  nop
    ctx->pc = 0x3de4fcu;
    // NOP
    ctx->pc = 0x3de500u;
}
