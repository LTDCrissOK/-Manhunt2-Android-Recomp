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

// Function: sub_003D0F68
// Address: 0x3d0f68 - 0x3d0fe8
void sub_003D0F68_0x3d0f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0F68_0x3d0f68");
#endif

    switch (ctx->pc) {
        case 0x3d0f80u: goto label_3d0f80;
        case 0x3d0f8cu: goto label_3d0f8c;
        case 0x3d0f9cu: goto label_3d0f9c;
        default: break;
    }

    ctx->pc = 0x3d0f68u;

    // 0x3d0f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d0f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d0f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d0f70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d0f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d0f78: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3D0F78u;
    SET_GPR_U32(ctx, 31, 0x3D0F80u);
    ctx->pc = 0x3D0F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0F78u;
    // 0x3d0f7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3D0F78u, 0x3D0F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F80u;
label_3d0f80:
    // 0x3d0f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0f84: 0xc0f43ae  jal         func_3D0EB8
    ctx->pc = 0x3D0F84u;
    SET_GPR_U32(ctx, 31, 0x3D0F8Cu);
    ctx->pc = 0x3D0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0F84u;
    // 0x3d0f88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0EB8u, 0x3D0F84u, 0x3D0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F8Cu;
label_3d0f8c:
    // 0x3d0f8c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0F8Cu;
    {
        const bool branch_taken_0x3d0f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F8Cu;
        // 0x3d0f90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f8c) {
            ctx->pc = 0x3D0F9Cu;
            goto label_3d0f9c;
        }
    }
    ctx->pc = 0x3D0F94u;
    // 0x3d0f94: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D0F94u;
    SET_GPR_U32(ctx, 31, 0x3D0F9Cu);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D0F94u, 0x3D0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F9Cu;
label_3d0f9c:
    // 0x3d0f9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d0f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d0fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0fa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0fac: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0FACu;
        // 0x3d0fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0FB4u;
    // 0x3d0fb4: 0x0  nop
    ctx->pc = 0x3d0fb4u;
    // NOP
    // 0x3d0fb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d0fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d0fbc: 0x0  nop
    ctx->pc = 0x3d0fbcu;
    // NOP
    // 0x3d0fc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d0fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d0fc4: 0x0  nop
    ctx->pc = 0x3d0fc4u;
    // NOP
    // 0x3d0fc8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3d0fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d0fcc: 0x0  nop
    ctx->pc = 0x3d0fccu;
    // NOP
    // 0x3d0fd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d0fd4: 0x0  nop
    ctx->pc = 0x3d0fd4u;
    // NOP
    // 0x3d0fd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d0fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d0fdc: 0x0  nop
    ctx->pc = 0x3d0fdcu;
    // NOP
    // 0x3d0fe0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d0fe4: 0x0  nop
    ctx->pc = 0x3d0fe4u;
    // NOP
    ctx->pc = 0x3d0fe8u;
}
