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

// Function: sub_003DE010
// Address: 0x3de010 - 0x3de0a0
void sub_003DE010_0x3de010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE010_0x3de010");
#endif

    switch (ctx->pc) {
        case 0x3de03cu: goto label_3de03c;
        case 0x3de05cu: goto label_3de05c;
        default: break;
    }

    ctx->pc = 0x3de010u;

    // 0x3de010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de01c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de024: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3de024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3de028: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3de028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de02c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE02Cu;
    {
        const bool branch_taken_0x3de02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE02Cu;
        // 0x3de030: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de02c) {
            ctx->pc = 0x3DE050u;
            goto label_3de050;
        }
    }
    ctx->pc = 0x3DE034u;
    // 0x3de034: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE034u;
    SET_GPR_U32(ctx, 31, 0x3DE03Cu);
    ctx->pc = 0x3DE038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE034u;
    // 0x3de038: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE034u, 0x3DE03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE03Cu;
label_3de03c:
    // 0x3de03c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3de040: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de044: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3de044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3de048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE048u;
    {
        const bool branch_taken_0x3de048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE048u;
        // 0x3de04c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de048) {
            ctx->pc = 0x3DE06Cu;
            goto label_3de06c;
        }
    }
    ctx->pc = 0x3DE050u;
label_3de050:
    // 0x3de050: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3de050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de054: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE054u;
    SET_GPR_U32(ctx, 31, 0x3DE05Cu);
    ctx->pc = 0x3DE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE054u;
    // 0x3de058: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE054u, 0x3DE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE05Cu;
label_3de05c:
    // 0x3de05c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de060: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3de060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3de064: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3de064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3de068: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de06c:
    // 0x3de06c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de074: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3de074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3de078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de07c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de080: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de088: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3de088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de08c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3de08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3de090: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de094: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE094u;
        // 0x3de098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE09Cu;
    // 0x3de09c: 0x0  nop
    ctx->pc = 0x3de09cu;
    // NOP
    ctx->pc = 0x3de0a0u;
}
