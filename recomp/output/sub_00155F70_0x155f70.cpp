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

// Function: sub_00155F70
// Address: 0x155f70 - 0x155fd8
void sub_00155F70_0x155f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155F70_0x155f70");
#endif

    switch (ctx->pc) {
        case 0x155f88u: goto label_155f88;
        case 0x155f98u: goto label_155f98;
        case 0x155fa8u: goto label_155fa8;
        case 0x155fb8u: goto label_155fb8;
        case 0x155fc8u: goto label_155fc8;
        default: break;
    }

    ctx->pc = 0x155f70u;

    // 0x155f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x155f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x155f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f80: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x155F80u;
    SET_GPR_U32(ctx, 31, 0x155F88u);
    ctx->pc = 0x155F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F80u;
    // 0x155f84: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x155F80u, 0x155F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F88u;
label_155f88:
    // 0x155f88: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x155F88u;
    {
        const bool branch_taken_0x155f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f88) {
            ctx->pc = 0x155F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155F88u;
            // 0x155f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FCCu;
            goto label_155fcc;
        }
    }
    ctx->pc = 0x155F90u;
    // 0x155f90: 0xc0557f6  jal         func_155FD8
    ctx->pc = 0x155F90u;
    SET_GPR_U32(ctx, 31, 0x155F98u);
    ctx->pc = 0x155F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F90u;
    // 0x155f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FD8u, 0x155F90u, 0x155F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F98u;
label_155f98:
    // 0x155f98: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x155F98u;
    {
        const bool branch_taken_0x155f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f98) {
            ctx->pc = 0x155F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155F98u;
            // 0x155f9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FCCu;
            goto label_155fcc;
        }
    }
    ctx->pc = 0x155FA0u;
    // 0x155fa0: 0xc05582a  jal         func_1560A8
    ctx->pc = 0x155FA0u;
    SET_GPR_U32(ctx, 31, 0x155FA8u);
    ctx->pc = 0x155FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FA0u;
    // 0x155fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1560A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1560A8u, 0x155FA0u, 0x155FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FA8u;
label_155fa8:
    // 0x155fa8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x155FA8u;
    {
        const bool branch_taken_0x155fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155fa8) {
            ctx->pc = 0x155FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155FA8u;
            // 0x155fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FCCu;
            goto label_155fcc;
        }
    }
    ctx->pc = 0x155FB0u;
    // 0x155fb0: 0xc055856  jal         func_156158
    ctx->pc = 0x155FB0u;
    SET_GPR_U32(ctx, 31, 0x155FB8u);
    ctx->pc = 0x155FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FB0u;
    // 0x155fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156158u, 0x155FB0u, 0x155FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FB8u;
label_155fb8:
    // 0x155fb8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x155FB8u;
    {
        const bool branch_taken_0x155fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155fb8) {
            ctx->pc = 0x155FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155FB8u;
            // 0x155fbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FCCu;
            goto label_155fcc;
        }
    }
    ctx->pc = 0x155FC0u;
    // 0x155fc0: 0xc055878  jal         func_1561E0
    ctx->pc = 0x155FC0u;
    SET_GPR_U32(ctx, 31, 0x155FC8u);
    ctx->pc = 0x155FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FC0u;
    // 0x155fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561E0u, 0x155FC0u, 0x155FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FC8u;
label_155fc8:
    // 0x155fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155fcc:
    // 0x155fcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x155fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x155FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FD0u;
        // 0x155fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155FD8u;
}
