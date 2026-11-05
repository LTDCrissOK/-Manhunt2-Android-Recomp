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

// Function: sub_00131628
// Address: 0x131628 - 0x1316e0
void sub_00131628_0x131628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131628_0x131628");
#endif

    switch (ctx->pc) {
        case 0x131658u: goto label_131658;
        case 0x131660u: goto label_131660;
        case 0x13166cu: goto label_13166c;
        case 0x1316a0u: goto label_1316a0;
        case 0x1316a8u: goto label_1316a8;
        default: break;
    }

    ctx->pc = 0x131628u;

    // 0x131628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13162c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x131630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13163c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x131640: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x131640u;
    {
        const bool branch_taken_0x131640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131640u;
        // 0x131644: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131640) {
            ctx->pc = 0x13164Cu;
            goto label_13164c;
        }
    }
    ctx->pc = 0x131648u;
    // 0x131648: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x131648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13164c:
    // 0x13164c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13164Cu;
    {
        const bool branch_taken_0x13164c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13164Cu;
        // 0x131650: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13164c) {
            ctx->pc = 0x13168Cu;
            goto label_13168c;
        }
    }
    ctx->pc = 0x131654u;
    // 0x131654: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x131654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131658:
    // 0x131658: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x131658u;
    SET_GPR_U32(ctx, 31, 0x131660u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x131658u, 0x131660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131660u;
label_131660:
    // 0x131660: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x131660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131664: 0xc0f6ef0  jal         func_3DBBC0
    ctx->pc = 0x131664u;
    SET_GPR_U32(ctx, 31, 0x13166Cu);
    ctx->pc = 0x131668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131664u;
    // 0x131668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBBC0u, 0x131664u, 0x13166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13166Cu;
label_13166c:
    // 0x13166c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131670: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131670u;
    {
        const bool branch_taken_0x131670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131670) {
            ctx->pc = 0x131674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131670u;
            // 0x131674: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131680u;
            goto label_131680;
        }
    }
    ctx->pc = 0x131678u;
    // 0x131678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131678u;
    {
        const bool branch_taken_0x131678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131678u;
        // 0x13167c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131678) {
            ctx->pc = 0x131684u;
            goto label_131684;
        }
    }
    ctx->pc = 0x131680u;
label_131680:
    // 0x131680: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_131684:
    // 0x131684: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x131684u;
    {
        const bool branch_taken_0x131684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x131684) {
            ctx->pc = 0x131658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131658;
        }
    }
    ctx->pc = 0x13168Cu;
label_13168c:
    // 0x13168c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x131690: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x131690u;
    {
        const bool branch_taken_0x131690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131690u;
        // 0x131694: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131690) {
            ctx->pc = 0x1316B8u;
            goto label_1316b8;
        }
    }
    ctx->pc = 0x131698u;
    // 0x131698: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x131698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13169c: 0x0  nop
    ctx->pc = 0x13169cu;
    // NOP
label_1316a0:
    // 0x1316a0: 0xc0f6ef0  jal         func_3DBBC0
    ctx->pc = 0x1316A0u;
    SET_GPR_U32(ctx, 31, 0x1316A8u);
    ctx->pc = 0x1316A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316A0u;
    // 0x1316a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBBC0u, 0x1316A0u, 0x1316A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316A8u;
label_1316a8:
    // 0x1316a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1316a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1316ac: 0x0  nop
    ctx->pc = 0x1316acu;
    // NOP
    // 0x1316b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1316B0u;
    {
        const bool branch_taken_0x1316b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1316b0) {
            ctx->pc = 0x1316B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1316B0u;
            // 0x1316b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1316A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1316a0;
        }
    }
    ctx->pc = 0x1316B8u;
label_1316b8:
    // 0x1316b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1316b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1316bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1316bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1316c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1316c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1316c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1316c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1316c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1316c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1316cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1316ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1316d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1316d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1316d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1316D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1316D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316D4u;
        // 0x1316d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1316D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1316DCu;
    // 0x1316dc: 0x0  nop
    ctx->pc = 0x1316dcu;
    // NOP
    ctx->pc = 0x1316e0u;
}
