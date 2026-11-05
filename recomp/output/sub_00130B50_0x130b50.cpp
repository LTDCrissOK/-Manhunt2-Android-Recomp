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

// Function: sub_00130B50
// Address: 0x130b50 - 0x130bc8
void sub_00130B50_0x130b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130B50_0x130b50");
#endif

    switch (ctx->pc) {
        case 0x130b80u: goto label_130b80;
        case 0x130b8cu: goto label_130b8c;
        case 0x130ba0u: goto label_130ba0;
        case 0x130bacu: goto label_130bac;
        default: break;
    }

    ctx->pc = 0x130b50u;

    // 0x130b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130b64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x130b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x130b68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130b6c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130b70: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x130B70u;
    {
        const bool branch_taken_0x130b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B70u;
        // 0x130b74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b70) {
            ctx->pc = 0x130BACu;
            goto label_130bac;
        }
    }
    ctx->pc = 0x130B78u;
    // 0x130b78: 0xc046044  jal         func_118110
    ctx->pc = 0x130B78u;
    SET_GPR_U32(ctx, 31, 0x130B80u);
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130B78u, 0x130B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B80u;
label_130b80:
    // 0x130b80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130b84: 0xc043920  jal         func_10E480
    ctx->pc = 0x130B84u;
    SET_GPR_U32(ctx, 31, 0x130B8Cu);
    ctx->pc = 0x130B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B84u;
    // 0x130b88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130B84u, 0x130B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B8Cu;
label_130b8c:
    // 0x130b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b90: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x130B90u;
    {
        const bool branch_taken_0x130b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B90u;
        // 0x130b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b90) {
            ctx->pc = 0x130BACu;
            goto label_130bac;
        }
    }
    ctx->pc = 0x130B98u;
    // 0x130b98: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130B98u;
    SET_GPR_U32(ctx, 31, 0x130BA0u);
    ctx->pc = 0x130B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B98u;
    // 0x130b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130B98u, 0x130BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BA0u;
label_130ba0:
    // 0x130ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ba4: 0xc095124  jal         func_254490
    ctx->pc = 0x130BA4u;
    SET_GPR_U32(ctx, 31, 0x130BACu);
    ctx->pc = 0x130BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BA4u;
    // 0x130ba8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254490u, 0x130BA4u, 0x130BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BACu;
label_130bac:
    // 0x130bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130bb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130bbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x130bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x130BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BC0u;
        // 0x130bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130BC8u;
}
