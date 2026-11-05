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

// Function: sub_0016F270
// Address: 0x16f270 - 0x16f2f0
void sub_0016F270_0x16f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F270_0x16f270");
#endif

    switch (ctx->pc) {
        case 0x16f288u: goto label_16f288;
        case 0x16f2b0u: goto label_16f2b0;
        default: break;
    }

    ctx->pc = 0x16f270u;

    // 0x16f270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f27c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f280: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16F280u;
    SET_GPR_U32(ctx, 31, 0x16F288u);
    ctx->pc = 0x16F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F280u;
    // 0x16f284: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16F280u, 0x16F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F288u;
label_16f288:
    // 0x16f288: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16F288u;
    {
        const bool branch_taken_0x16f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F288u;
        // 0x16f28c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f288) {
            ctx->pc = 0x16F2D8u;
            goto label_16f2d8;
        }
    }
    ctx->pc = 0x16F290u;
    // 0x16f290: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f294: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x16f294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16f298: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x16f29c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f2a0: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x16F2A0u;
    {
        const bool branch_taken_0x16f2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2A0u;
        // 0x16f2a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2a0) {
            ctx->pc = 0x16F2DCu;
            goto label_16f2dc;
        }
    }
    ctx->pc = 0x16F2A8u;
    // 0x16f2a8: 0xc043958  jal         func_10E560
    ctx->pc = 0x16F2A8u;
    SET_GPR_U32(ctx, 31, 0x16F2B0u);
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16F2A8u, 0x16F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F2B0u;
label_16f2b0:
    // 0x16f2b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F2B0u;
    {
        const bool branch_taken_0x16f2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2B0u;
        // 0x16f2b4: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2b0) {
            ctx->pc = 0x16F2D8u;
            goto label_16f2d8;
        }
    }
    ctx->pc = 0x16F2B8u;
    // 0x16f2b8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16f2bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F2BCu;
    {
        const bool branch_taken_0x16f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2bc) {
            ctx->pc = 0x16F2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F2BCu;
            // 0x16f2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F2DCu;
            goto label_16f2dc;
        }
    }
    ctx->pc = 0x16F2C4u;
    // 0x16f2c4: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x16f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x16f2c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f2cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x16f2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16f2d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F2D0u;
    {
        const bool branch_taken_0x16f2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2D0u;
        // 0x16f2d4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2d0) {
            ctx->pc = 0x16F2DCu;
            goto label_16f2dc;
        }
    }
    ctx->pc = 0x16F2D8u;
label_16f2d8:
    // 0x16f2d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f2dc:
    // 0x16f2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16f2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f2e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16f2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E8u;
        // 0x16f2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F2F0u;
}
