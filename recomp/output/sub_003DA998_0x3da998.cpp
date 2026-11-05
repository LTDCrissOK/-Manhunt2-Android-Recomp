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

// Function: sub_003DA998
// Address: 0x3da998 - 0x3daa28
void sub_003DA998_0x3da998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA998_0x3da998");
#endif

    switch (ctx->pc) {
        case 0x3da9c4u: goto label_3da9c4;
        case 0x3da9e4u: goto label_3da9e4;
        default: break;
    }

    ctx->pc = 0x3da998u;

    // 0x3da998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3da998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3da99c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3da99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3da9a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3da9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3da9a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da9ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3da9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3da9b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3da9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3da9b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA9B4u;
    {
        const bool branch_taken_0x3da9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9B4u;
        // 0x3da9b8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9b4) {
            ctx->pc = 0x3DA9D8u;
            goto label_3da9d8;
        }
    }
    ctx->pc = 0x3DA9BCu;
    // 0x3da9bc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DA9BCu;
    SET_GPR_U32(ctx, 31, 0x3DA9C4u);
    ctx->pc = 0x3DA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA9BCu;
    // 0x3da9c0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DA9BCu, 0x3DA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA9C4u;
label_3da9c4:
    // 0x3da9c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3da9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3da9c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3da9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3da9cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3da9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3da9d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA9D0u;
    {
        const bool branch_taken_0x3da9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9D0u;
        // 0x3da9d4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9d0) {
            ctx->pc = 0x3DA9F4u;
            goto label_3da9f4;
        }
    }
    ctx->pc = 0x3DA9D8u;
label_3da9d8:
    // 0x3da9d8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3da9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3da9dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DA9DCu;
    SET_GPR_U32(ctx, 31, 0x3DA9E4u);
    ctx->pc = 0x3DA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA9DCu;
    // 0x3da9e0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DA9DCu, 0x3DA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA9E4u;
label_3da9e4:
    // 0x3da9e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3da9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3da9e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3da9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3da9ec: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3da9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3da9f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3da9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3da9f4:
    // 0x3da9f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3da9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3da9f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da9fc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3da9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3daa00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3daa00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3daa04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3daa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3daa08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3daa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3daa0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3daa10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3daa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3daa14: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3daa14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3daa18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3daa18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3daa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA1Cu;
        // 0x3daa20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAA24u;
    // 0x3daa24: 0x0  nop
    ctx->pc = 0x3daa24u;
    // NOP
    ctx->pc = 0x3daa28u;
}
