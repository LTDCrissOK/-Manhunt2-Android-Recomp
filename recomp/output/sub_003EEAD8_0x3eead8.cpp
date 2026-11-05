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

// Function: sub_003EEAD8
// Address: 0x3eead8 - 0x3eeb70
void sub_003EEAD8_0x3eead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEAD8_0x3eead8");
#endif

    switch (ctx->pc) {
        case 0x3eeb64u: goto label_3eeb64;
        default: break;
    }

    ctx->pc = 0x3eead8u;

    // 0x3eead8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3eead8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3eeadc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3eeadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eeae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3eeae4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3eeae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeae8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3eeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3eeaec: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEAECu;
    {
        const bool branch_taken_0x3eeaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eeaec) {
            ctx->pc = 0x3EEAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEAECu;
            // 0x3eeaf0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEB00u;
            goto label_3eeb00;
        }
    }
    ctx->pc = 0x3EEAF4u;
    // 0x3eeaf4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eeaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eeaf8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3eeaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3eeafc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3eeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3eeb00:
    // 0x3eeb00: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEB00u;
    {
        const bool branch_taken_0x3eeb00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eeb00) {
            ctx->pc = 0x3EEB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEB00u;
            // 0x3eeb04: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEB14u;
            goto label_3eeb14;
        }
    }
    ctx->pc = 0x3EEB08u;
    // 0x3eeb08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eeb0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3eeb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3eeb10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eeb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eeb14:
    // 0x3eeb14: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEB14u;
    {
        const bool branch_taken_0x3eeb14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eeb14) {
            ctx->pc = 0x3EEB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEB14u;
            // 0x3eeb18: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEB28u;
            goto label_3eeb28;
        }
    }
    ctx->pc = 0x3EEB1Cu;
    // 0x3eeb1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3eeb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3eeb20: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3eeb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3eeb24: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3eeb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3eeb28:
    // 0x3eeb28: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEB28u;
    {
        const bool branch_taken_0x3eeb28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeb28) {
            ctx->pc = 0x3EEB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEB28u;
            // 0x3eeb2c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEB3Cu;
            goto label_3eeb3c;
        }
    }
    ctx->pc = 0x3EEB30u;
    // 0x3eeb30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eeb34: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3eeb34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3eeb38: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3eeb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3eeb3c:
    // 0x3eeb3c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEB3Cu;
    {
        const bool branch_taken_0x3eeb3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeb3c) {
            ctx->pc = 0x3EEB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEB3Cu;
            // 0x3eeb40: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEB50u;
            goto label_3eeb50;
        }
    }
    ctx->pc = 0x3EEB44u;
    // 0x3eeb44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3eeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3eeb48: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3eeb48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3eeb4c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3eeb4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3eeb50:
    // 0x3eeb50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3eeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3eeb54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EEB54u;
    {
        const bool branch_taken_0x3eeb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB54u;
        // 0x3eeb58: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb54) {
            ctx->pc = 0x3EEB64u;
            goto label_3eeb64;
        }
    }
    ctx->pc = 0x3EEB5Cu;
    // 0x3eeb5c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EEB5Cu;
    SET_GPR_U32(ctx, 31, 0x3EEB64u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EEB5Cu, 0x3EEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEB64u;
label_3eeb64:
    // 0x3eeb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eeb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eeb68: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB68u;
        // 0x3eeb6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEB70u;
}
