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

// Function: sub_00236A48
// Address: 0x236a48 - 0x236ad8
void sub_00236A48_0x236a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A48_0x236a48");
#endif

    switch (ctx->pc) {
        case 0x236a64u: goto label_236a64;
        case 0x236a90u: goto label_236a90;
        case 0x236aa0u: goto label_236aa0;
        case 0x236abcu: goto label_236abc;
        default: break;
    }

    ctx->pc = 0x236a48u;

    // 0x236a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236a4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236a54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236a58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x236a5c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x236A5Cu;
    SET_GPR_U32(ctx, 31, 0x236A64u);
    ctx->pc = 0x236A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A5Cu;
    // 0x236a60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236A5Cu, 0x236A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A64u;
label_236a64:
    // 0x236a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x236a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a68: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x236A68u;
    {
        const bool branch_taken_0x236a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a68) {
            ctx->pc = 0x236AB4u;
            goto label_236ab4;
        }
    }
    ctx->pc = 0x236A70u;
    // 0x236a70: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x236a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x236a74: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x236a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x236a78: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x236a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x236a7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x236A7Cu;
    {
        const bool branch_taken_0x236a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A7Cu;
        // 0x236a80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a7c) {
            ctx->pc = 0x236AB4u;
            goto label_236ab4;
        }
    }
    ctx->pc = 0x236A84u;
    // 0x236a84: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x236a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x236a88: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x236A88u;
    SET_GPR_U32(ctx, 31, 0x236A90u);
    ctx->pc = 0x236A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A88u;
    // 0x236a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x236A88u, 0x236A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A90u;
label_236a90:
    // 0x236a90: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236A90u;
    {
        const bool branch_taken_0x236a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236a90) {
            ctx->pc = 0x236A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A90u;
            // 0x236a94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236AACu;
            goto label_236aac;
        }
    }
    ctx->pc = 0x236A98u;
    // 0x236a98: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x236A98u;
    SET_GPR_U32(ctx, 31, 0x236AA0u);
    ctx->pc = 0x236A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A98u;
    // 0x236a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x236A98u, 0x236AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AA0u;
label_236aa0:
    // 0x236aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236aa4: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x236AA4u;
    {
        const bool branch_taken_0x236aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x236aa4) {
            ctx->pc = 0x236AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236AA4u;
            // 0x236aa8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236AACu;
            goto label_236aac;
        }
    }
    ctx->pc = 0x236AACu;
label_236aac:
    // 0x236aac: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x236AACu;
    {
        const bool branch_taken_0x236aac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x236AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AACu;
        // 0x236ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aac) {
            ctx->pc = 0x236ABCu;
            goto label_236abc;
        }
    }
    ctx->pc = 0x236AB4u;
label_236ab4:
    // 0x236ab4: 0xc08db00  jal         func_236C00
    ctx->pc = 0x236AB4u;
    SET_GPR_U32(ctx, 31, 0x236ABCu);
    ctx->pc = 0x236AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236AB4u;
    // 0x236ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x236AB4u, 0x236ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236ABCu;
label_236abc:
    // 0x236abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236ac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236ac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236ac8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236acc: 0x3e00008  jr          $ra
    ctx->pc = 0x236ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ACCu;
        // 0x236ad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236AD4u;
    // 0x236ad4: 0x0  nop
    ctx->pc = 0x236ad4u;
    // NOP
    ctx->pc = 0x236ad8u;
}
