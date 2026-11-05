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

// Function: sub_00134A58
// Address: 0x134a58 - 0x134ad8
void sub_00134A58_0x134a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134A58_0x134a58");
#endif

    switch (ctx->pc) {
        case 0x134a7cu: goto label_134a7c;
        case 0x134a94u: goto label_134a94;
        case 0x134a9cu: goto label_134a9c;
        case 0x134aa4u: goto label_134aa4;
        case 0x134aacu: goto label_134aac;
        case 0x134abcu: goto label_134abc;
        default: break;
    }

    ctx->pc = 0x134a58u;

    // 0x134a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134a60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a68: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x134a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x134a6c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x134A6Cu;
    {
        const bool branch_taken_0x134a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a6c) {
            ctx->pc = 0x134A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A6Cu;
            // 0x134a70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134ACCu;
            goto label_134acc;
        }
    }
    ctx->pc = 0x134A74u;
    // 0x134a74: 0xc04d2d6  jal         func_134B58
    ctx->pc = 0x134A74u;
    SET_GPR_U32(ctx, 31, 0x134A7Cu);
    ctx->pc = 0x134B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B58u, 0x134A74u, 0x134A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A7Cu;
label_134a7c:
    // 0x134a7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x134A7Cu;
    {
        const bool branch_taken_0x134a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A7Cu;
        // 0x134a80: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a7c) {
            ctx->pc = 0x134AC8u;
            goto label_134ac8;
        }
    }
    ctx->pc = 0x134A84u;
    // 0x134a84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x134a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134a88: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x134a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x134a8c: 0xc07f652  jal         func_1FD948
    ctx->pc = 0x134A8Cu;
    SET_GPR_U32(ctx, 31, 0x134A94u);
    ctx->pc = 0x134A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A8Cu;
    // 0x134a90: 0x8c4500d4  lw          $a1, 0xD4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD948u, 0x134A8Cu, 0x134A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A94u;
label_134a94:
    // 0x134a94: 0xc04d5d4  jal         func_135750
    ctx->pc = 0x134A94u;
    SET_GPR_U32(ctx, 31, 0x134A9Cu);
    ctx->pc = 0x134A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A94u;
    // 0x134a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135750u, 0x134A94u, 0x134A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A9Cu;
label_134a9c:
    // 0x134a9c: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x134A9Cu;
    SET_GPR_U32(ctx, 31, 0x134AA4u);
    ctx->pc = 0x134AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A9Cu;
    // 0x134aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x134A9Cu, 0x134AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0xc04d4f2  jal         func_1353C8
    ctx->pc = 0x134AA4u;
    SET_GPR_U32(ctx, 31, 0x134AACu);
    ctx->pc = 0x134AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AA4u;
    // 0x134aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353C8u, 0x134AA4u, 0x134AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AACu;
label_134aac:
    // 0x134aac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x134aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ab4: 0xc04d348  jal         func_134D20
    ctx->pc = 0x134AB4u;
    SET_GPR_U32(ctx, 31, 0x134ABCu);
    ctx->pc = 0x134AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AB4u;
    // 0x134ab8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D20u, 0x134AB4u, 0x134ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ABCu;
label_134abc:
    // 0x134abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134ac0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x134ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x134ac4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x134ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_134ac8:
    // 0x134ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134acc:
    // 0x134acc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x134AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD0u;
        // 0x134ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134AD8u;
}
