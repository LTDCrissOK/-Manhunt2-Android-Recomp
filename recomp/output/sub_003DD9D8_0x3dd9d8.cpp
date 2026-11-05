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

// Function: sub_003DD9D8
// Address: 0x3dd9d8 - 0x3dda68
void sub_003DD9D8_0x3dd9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD9D8_0x3dd9d8");
#endif

    switch (ctx->pc) {
        case 0x3dda04u: goto label_3dda04;
        case 0x3dda24u: goto label_3dda24;
        default: break;
    }

    ctx->pc = 0x3dd9d8u;

    // 0x3dd9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dd9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dd9dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dd9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dd9e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dd9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dd9e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dd9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd9e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dd9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dd9ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dd9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dd9f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dd9f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DD9F4u;
    {
        const bool branch_taken_0x3dd9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9F4u;
        // 0x3dd9f8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9f4) {
            ctx->pc = 0x3DDA18u;
            goto label_3dda18;
        }
    }
    ctx->pc = 0x3DD9FCu;
    // 0x3dd9fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DD9FCu;
    SET_GPR_U32(ctx, 31, 0x3DDA04u);
    ctx->pc = 0x3DDA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD9FCu;
    // 0x3dda00: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DD9FCu, 0x3DDA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDA04u;
label_3dda04:
    // 0x3dda04: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3dda04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3dda08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dda08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dda0c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3dda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3dda10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DDA10u;
    {
        const bool branch_taken_0x3dda10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA10u;
        // 0x3dda14: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda10) {
            ctx->pc = 0x3DDA34u;
            goto label_3dda34;
        }
    }
    ctx->pc = 0x3DDA18u;
label_3dda18:
    // 0x3dda18: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3dda18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dda1c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DDA1Cu;
    SET_GPR_U32(ctx, 31, 0x3DDA24u);
    ctx->pc = 0x3DDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDA1Cu;
    // 0x3dda20: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DDA1Cu, 0x3DDA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDA24u;
label_3dda24:
    // 0x3dda24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dda24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dda28: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3dda28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3dda2c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3dda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3dda30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dda30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3dda34:
    // 0x3dda34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dda34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dda38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dda38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dda3c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3dda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3dda40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dda40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dda44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dda44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dda48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dda4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dda50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dda50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dda54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dda54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3dda58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dda58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dda5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA5Cu;
        // 0x3dda60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDA64u;
    // 0x3dda64: 0x0  nop
    ctx->pc = 0x3dda64u;
    // NOP
    ctx->pc = 0x3dda68u;
}
