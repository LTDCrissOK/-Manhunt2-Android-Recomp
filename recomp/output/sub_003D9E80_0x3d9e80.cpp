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

// Function: sub_003D9E80
// Address: 0x3d9e80 - 0x3d9ed8
void sub_003D9E80_0x3d9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9E80_0x3d9e80");
#endif

    switch (ctx->pc) {
        case 0x3d9ea4u: goto label_3d9ea4;
        case 0x3d9ec0u: goto label_3d9ec0;
        default: break;
    }

    ctx->pc = 0x3d9e80u;

    // 0x3d9e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d9e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d9e90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d9e94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d9e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d9e9c: 0xc0f677e  jal         func_3D9DF8
    ctx->pc = 0x3D9E9Cu;
    SET_GPR_U32(ctx, 31, 0x3D9EA4u);
    ctx->pc = 0x3D9EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9E9Cu;
    // 0x3d9ea0: 0x30b2ffff  andi        $s2, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DF8u, 0x3D9E9Cu, 0x3D9EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EA4u;
label_3d9ea4:
    // 0x3d9ea4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3d9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3d9ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9eac: 0xa6120008  sh          $s2, 0x8($s0)
    ctx->pc = 0x3d9eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x3d9eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9eb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d9eb8: 0xc0f6790  jal         func_3D9E40
    ctx->pc = 0x3D9EB8u;
    SET_GPR_U32(ctx, 31, 0x3D9EC0u);
    ctx->pc = 0x3D9EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9EB8u;
    // 0x3d9ebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E40u, 0x3D9EB8u, 0x3D9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EC0u;
label_3d9ec0:
    // 0x3d9ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9ec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d9ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9ec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d9ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9ecc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d9eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d9ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9ED0u;
        // 0x3d9ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9ED8u;
}
