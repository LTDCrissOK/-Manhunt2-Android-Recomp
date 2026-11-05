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

// Function: sub_003D8E60
// Address: 0x3d8e60 - 0x3d8ef0
void sub_003D8E60_0x3d8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8E60_0x3d8e60");
#endif

    switch (ctx->pc) {
        case 0x3d8e8cu: goto label_3d8e8c;
        case 0x3d8eacu: goto label_3d8eac;
        default: break;
    }

    ctx->pc = 0x3d8e60u;

    // 0x3d8e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d8e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d8e68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d8e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d8e6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8e74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d8e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d8e78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d8e7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8E7Cu;
    {
        const bool branch_taken_0x3d8e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E7Cu;
        // 0x3d8e80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e7c) {
            ctx->pc = 0x3D8EA0u;
            goto label_3d8ea0;
        }
    }
    ctx->pc = 0x3D8E84u;
    // 0x3d8e84: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8E84u;
    SET_GPR_U32(ctx, 31, 0x3D8E8Cu);
    ctx->pc = 0x3D8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8E84u;
    // 0x3d8e88: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8E84u, 0x3D8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E8Cu;
label_3d8e8c:
    // 0x3d8e8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3d8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3d8e90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3d8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3d8e94: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3d8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3d8e98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8E98u;
    {
        const bool branch_taken_0x3d8e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E98u;
        // 0x3d8e9c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e98) {
            ctx->pc = 0x3D8EBCu;
            goto label_3d8ebc;
        }
    }
    ctx->pc = 0x3D8EA0u;
label_3d8ea0:
    // 0x3d8ea0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3d8ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d8ea4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8EA4u;
    SET_GPR_U32(ctx, 31, 0x3D8EACu);
    ctx->pc = 0x3D8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8EA4u;
    // 0x3d8ea8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8EA4u, 0x3D8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8EACu;
label_3d8eac:
    // 0x3d8eac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3d8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3d8eb0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3d8eb4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3d8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3d8eb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d8ebc:
    // 0x3d8ebc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d8ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8ec4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3d8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3d8ec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d8ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8ecc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d8ed0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d8ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d8ed8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d8ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d8edc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d8edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3d8ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d8ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8EE4u;
        // 0x3d8ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8EECu;
    // 0x3d8eec: 0x0  nop
    ctx->pc = 0x3d8eecu;
    // NOP
    ctx->pc = 0x3d8ef0u;
}
