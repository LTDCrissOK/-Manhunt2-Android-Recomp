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

// Function: sub_003DE280
// Address: 0x3de280 - 0x3de310
void sub_003DE280_0x3de280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE280_0x3de280");
#endif

    switch (ctx->pc) {
        case 0x3de2acu: goto label_3de2ac;
        case 0x3de2ccu: goto label_3de2cc;
        default: break;
    }

    ctx->pc = 0x3de280u;

    // 0x3de280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de294: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3de294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3de298: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3de298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de29c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE29Cu;
    {
        const bool branch_taken_0x3de29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE29Cu;
        // 0x3de2a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de29c) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DE2A4u;
    // 0x3de2a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE2A4u;
    SET_GPR_U32(ctx, 31, 0x3DE2ACu);
    ctx->pc = 0x3DE2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE2A4u;
    // 0x3de2a8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE2A4u, 0x3DE2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE2ACu;
label_3de2ac:
    // 0x3de2ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3de2b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de2b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3de2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3de2b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE2B8u;
    {
        const bool branch_taken_0x3de2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2B8u;
        // 0x3de2bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2b8) {
            ctx->pc = 0x3DE2DCu;
            goto label_3de2dc;
        }
    }
    ctx->pc = 0x3DE2C0u;
label_3de2c0:
    // 0x3de2c0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3de2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de2c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DE2C4u;
    SET_GPR_U32(ctx, 31, 0x3DE2CCu);
    ctx->pc = 0x3DE2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE2C4u;
    // 0x3de2c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DE2C4u, 0x3DE2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE2CCu;
label_3de2cc:
    // 0x3de2cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3de2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3de2d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3de2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3de2d4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3de2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3de2d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de2dc:
    // 0x3de2dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de2e4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3de2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3de2e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de2e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de2ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3de2f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3de2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3de2f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3de2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3de2f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3de2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de2fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3de2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3de300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de304: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE304u;
        // 0x3de308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE30Cu;
    // 0x3de30c: 0x0  nop
    ctx->pc = 0x3de30cu;
    // NOP
    ctx->pc = 0x3de310u;
}
