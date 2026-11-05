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

// Function: sub_00126A18
// Address: 0x126a18 - 0x126aa8
void sub_00126A18_0x126a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A18_0x126a18");
#endif

    switch (ctx->pc) {
        case 0x126a50u: goto label_126a50;
        case 0x126a60u: goto label_126a60;
        case 0x126a80u: goto label_126a80;
        default: break;
    }

    ctx->pc = 0x126a18u;

    // 0x126a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126a1c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x126a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126a20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126a24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126a28: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x126a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126a30: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x126a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x126a34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x126a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x126a38: 0x10b10013  beq         $a1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x126A38u;
    {
        const bool branch_taken_0x126a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x126A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A38u;
        // 0x126a3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a38) {
            ctx->pc = 0x126A88u;
            goto label_126a88;
        }
    }
    ctx->pc = 0x126A40u;
    // 0x126a40: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x126A40u;
    {
        const bool branch_taken_0x126a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A40u;
        // 0x126a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a40) {
            ctx->pc = 0x126A8Cu;
            goto label_126a8c;
        }
    }
    ctx->pc = 0x126A48u;
    // 0x126a48: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x126A48u;
    SET_GPR_U32(ctx, 31, 0x126A50u);
    ctx->pc = 0x126A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A48u;
    // 0x126a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x126A48u, 0x126A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A50u;
label_126a50:
    // 0x126a50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x126A50u;
    {
        const bool branch_taken_0x126a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A50u;
        // 0x126a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a50) {
            ctx->pc = 0x126A8Cu;
            goto label_126a8c;
        }
    }
    ctx->pc = 0x126A58u;
    // 0x126a58: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x126A58u;
    SET_GPR_U32(ctx, 31, 0x126A60u);
    ctx->pc = 0x126A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A58u;
    // 0x126a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x126A58u, 0x126A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A60u;
label_126a60:
    // 0x126a60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a64: 0x10b10008  beq         $a1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x126A64u;
    {
        const bool branch_taken_0x126a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x126A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A64u;
        // 0x126a68: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a64) {
            ctx->pc = 0x126A88u;
            goto label_126a88;
        }
    }
    ctx->pc = 0x126A6Cu;
    // 0x126a6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x126a70: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x126a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x126a74: 0x8c430720  lw          $v1, 0x720($v0)
    ctx->pc = 0x126a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
    // 0x126a78: 0xc041334  jal         func_104CD0
    ctx->pc = 0x126A78u;
    SET_GPR_U32(ctx, 31, 0x126A80u);
    ctx->pc = 0x126A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A78u;
    // 0x126a7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CD0u, 0x126A78u, 0x126A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A80u;
label_126a80:
    // 0x126a80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126A80u;
    {
        const bool branch_taken_0x126a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A80u;
        // 0x126a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a80) {
            ctx->pc = 0x126A8Cu;
            goto label_126a8c;
        }
    }
    ctx->pc = 0x126A88u;
label_126a88:
    // 0x126a88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126a8c:
    // 0x126a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126a98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x126a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x126A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A9Cu;
        // 0x126aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126AA4u;
    // 0x126aa4: 0x0  nop
    ctx->pc = 0x126aa4u;
    // NOP
    ctx->pc = 0x126aa8u;
}
