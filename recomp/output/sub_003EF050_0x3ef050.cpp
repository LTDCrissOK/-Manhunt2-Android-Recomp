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

// Function: sub_003EF050
// Address: 0x3ef050 - 0x3ef0e0
void sub_003EF050_0x3ef050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF050_0x3ef050");
#endif

    switch (ctx->pc) {
        case 0x3ef07cu: goto label_3ef07c;
        case 0x3ef09cu: goto label_3ef09c;
        default: break;
    }

    ctx->pc = 0x3ef050u;

    // 0x3ef050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef058: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ef058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ef05c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef064: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ef064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ef068: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ef068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef06c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF06Cu;
    {
        const bool branch_taken_0x3ef06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF06Cu;
        // 0x3ef070: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef06c) {
            ctx->pc = 0x3EF090u;
            goto label_3ef090;
        }
    }
    ctx->pc = 0x3EF074u;
    // 0x3ef074: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF074u;
    SET_GPR_U32(ctx, 31, 0x3EF07Cu);
    ctx->pc = 0x3EF078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF074u;
    // 0x3ef078: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF074u, 0x3EF07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF07Cu;
label_3ef07c:
    // 0x3ef07c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ef07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ef080: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef084: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ef084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ef088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF088u;
    {
        const bool branch_taken_0x3ef088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF088u;
        // 0x3ef08c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef088) {
            ctx->pc = 0x3EF0ACu;
            goto label_3ef0ac;
        }
    }
    ctx->pc = 0x3EF090u;
label_3ef090:
    // 0x3ef090: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ef090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef094: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF094u;
    SET_GPR_U32(ctx, 31, 0x3EF09Cu);
    ctx->pc = 0x3EF098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF094u;
    // 0x3ef098: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF094u, 0x3EF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF09Cu;
label_3ef09c:
    // 0x3ef09c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef0a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ef0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ef0a4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ef0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ef0a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ef0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ef0ac:
    // 0x3ef0ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef0b4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ef0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ef0b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ef0b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef0bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef0c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef0c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ef0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ef0c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ef0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ef0cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ef0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ef0d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef0d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF0D4u;
        // 0x3ef0d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF0DCu;
    // 0x3ef0dc: 0x0  nop
    ctx->pc = 0x3ef0dcu;
    // NOP
    ctx->pc = 0x3ef0e0u;
}
