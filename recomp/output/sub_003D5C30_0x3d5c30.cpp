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

// Function: sub_003D5C30
// Address: 0x3d5c30 - 0x3d5cc0
void sub_003D5C30_0x3d5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5C30_0x3d5c30");
#endif

    switch (ctx->pc) {
        case 0x3d5c5cu: goto label_3d5c5c;
        case 0x3d5c98u: goto label_3d5c98;
        default: break;
    }

    ctx->pc = 0x3d5c30u;

    // 0x3d5c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d5c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d5c34: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d5c38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d5c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d5c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d5c40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d5c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d5c44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d5c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d5c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d5c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d5c50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d5c54: 0xc0f56de  jal         func_3D5B78
    ctx->pc = 0x3D5C54u;
    SET_GPR_U32(ctx, 31, 0x3D5C5Cu);
    ctx->pc = 0x3D5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C54u;
    // 0x3d5c58: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B78u, 0x3D5C54u, 0x3D5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C5Cu;
label_3d5c5c:
    // 0x3d5c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d5c64: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3d5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3d5c68: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3d5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x3d5c6c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x3d5c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x3d5c70: 0x24425bc0  addiu       $v0, $v0, 0x5BC0
    ctx->pc = 0x3d5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23488));
    // 0x3d5c74: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x3d5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x3d5c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5c7c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x3d5c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x3d5c80: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3d5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x3d5c84: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3d5c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3d5c88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d5c8c: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x3d5c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d5c90: 0xc0f5306  jal         func_3D4C18
    ctx->pc = 0x3D5C90u;
    SET_GPR_U32(ctx, 31, 0x3D5C98u);
    ctx->pc = 0x3D5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C90u;
    // 0x3d5c94: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D5C90u, 0x3D5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C98u;
label_3d5c98:
    // 0x3d5c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5c9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d5c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d5ca0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3d5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3d5ca4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3d5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3d5ca8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d5ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5cac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d5cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5cb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d5cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d5cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CB8u;
        // 0x3d5cbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5CC0u;
}
