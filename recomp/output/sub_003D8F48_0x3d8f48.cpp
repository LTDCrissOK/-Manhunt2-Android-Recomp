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

// Function: sub_003D8F48
// Address: 0x3d8f48 - 0x3d8fa0
void sub_003D8F48_0x3d8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8F48_0x3d8f48");
#endif

    switch (ctx->pc) {
        case 0x3d8f6cu: goto label_3d8f6c;
        case 0x3d8f88u: goto label_3d8f88;
        default: break;
    }

    ctx->pc = 0x3d8f48u;

    // 0x3d8f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d8f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d8f58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d8f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d8f5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d8f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8f60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d8f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d8f64: 0xc0f63bc  jal         func_3D8EF0
    ctx->pc = 0x3D8F64u;
    SET_GPR_U32(ctx, 31, 0x3D8F6Cu);
    ctx->pc = 0x3D8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8F64u;
    // 0x3d8f68: 0x30b2ffff  andi        $s2, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8EF0u, 0x3D8F64u, 0x3D8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8F6Cu;
label_3d8f6c:
    // 0x3d8f6c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3d8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3d8f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8f74: 0xa6120008  sh          $s2, 0x8($s0)
    ctx->pc = 0x3d8f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x3d8f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8f7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d8f80: 0xc0f63c2  jal         func_3D8F08
    ctx->pc = 0x3D8F80u;
    SET_GPR_U32(ctx, 31, 0x3D8F88u);
    ctx->pc = 0x3D8F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8F80u;
    // 0x3d8f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8F08u, 0x3D8F80u, 0x3D8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8F88u;
label_3d8f88:
    // 0x3d8f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d8f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8f90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d8f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8f94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d8f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d8f98: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F98u;
        // 0x3d8f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8FA0u;
}
