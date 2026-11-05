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

// Function: sub_003EF3A8
// Address: 0x3ef3a8 - 0x3ef438
void sub_003EF3A8_0x3ef3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF3A8_0x3ef3a8");
#endif

    switch (ctx->pc) {
        case 0x3ef3d4u: goto label_3ef3d4;
        case 0x3ef3f4u: goto label_3ef3f4;
        default: break;
    }

    ctx->pc = 0x3ef3a8u;

    // 0x3ef3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef3ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef3b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ef3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ef3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef3bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ef3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ef3c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ef3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef3c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF3C4u;
    {
        const bool branch_taken_0x3ef3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3C4u;
        // 0x3ef3c8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3c4) {
            ctx->pc = 0x3EF3E8u;
            goto label_3ef3e8;
        }
    }
    ctx->pc = 0x3EF3CCu;
    // 0x3ef3cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF3CCu;
    SET_GPR_U32(ctx, 31, 0x3EF3D4u);
    ctx->pc = 0x3EF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF3CCu;
    // 0x3ef3d0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF3CCu, 0x3EF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF3D4u;
label_3ef3d4:
    // 0x3ef3d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ef3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ef3d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef3dc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ef3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ef3e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF3E0u;
    {
        const bool branch_taken_0x3ef3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF3E0u;
        // 0x3ef3e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef3e0) {
            ctx->pc = 0x3EF404u;
            goto label_3ef404;
        }
    }
    ctx->pc = 0x3EF3E8u;
label_3ef3e8:
    // 0x3ef3e8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ef3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef3ec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF3ECu;
    SET_GPR_U32(ctx, 31, 0x3EF3F4u);
    ctx->pc = 0x3EF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF3ECu;
    // 0x3ef3f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF3ECu, 0x3EF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF3F4u;
label_3ef3f4:
    // 0x3ef3f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef3f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ef3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ef3fc: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ef3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ef400: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ef400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ef404:
    // 0x3ef404: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef40c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ef40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ef410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ef410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef418: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef41c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ef41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ef420: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ef420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ef424: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ef424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ef428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef42c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF42Cu;
        // 0x3ef430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF434u;
    // 0x3ef434: 0x0  nop
    ctx->pc = 0x3ef434u;
    // NOP
    ctx->pc = 0x3ef438u;
}
