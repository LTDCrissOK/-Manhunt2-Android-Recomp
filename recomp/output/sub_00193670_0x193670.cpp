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

// Function: sub_00193670
// Address: 0x193670 - 0x193708
void sub_00193670_0x193670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193670_0x193670");
#endif

    switch (ctx->pc) {
        case 0x193690u: goto label_193690;
        default: break;
    }

    ctx->pc = 0x193670u;

    // 0x193670: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x193670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193674: 0x8ca41004  lw          $a0, 0x1004($a1)
    ctx->pc = 0x193674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x193678: 0x8ca60ff8  lw          $a2, 0xFF8($a1)
    ctx->pc = 0x193678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x19367c: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x19367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x193680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193684: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x193684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x193688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193688u;
    {
        const bool branch_taken_0x193688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193688u;
        // 0x19368c: 0x24c70110  addiu       $a3, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193688) {
            ctx->pc = 0x193698u;
            goto label_193698;
        }
    }
    ctx->pc = 0x193690u;
label_193690:
    // 0x193690: 0x3e00008  jr          $ra
    ctx->pc = 0x193690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193690u;
        // 0x193694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193698u;
label_193698:
    // 0x193698: 0x90c20111  lbu         $v0, 0x111($a2)
    ctx->pc = 0x193698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 273)));
    // 0x19369c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x19369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x1936a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1936A0u;
    {
        const bool branch_taken_0x1936a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1936A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936A0u;
        // 0x1936a4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936a0) {
            ctx->pc = 0x193690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193690;
        }
    }
    ctx->pc = 0x1936A8u;
    // 0x1936a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1936a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1936ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1936acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1936b0: 0x1043fff7  beq         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1936B0u;
    {
        const bool branch_taken_0x1936b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1936b0) {
            ctx->pc = 0x193690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193690;
        }
    }
    ctx->pc = 0x1936B8u;
    // 0x1936b8: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x1936b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936bc: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1936bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1936c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1936c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1936c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1936c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936c8: 0x0  nop
    ctx->pc = 0x1936c8u;
    // NOP
    // 0x1936cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1936ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936d0: 0x0  nop
    ctx->pc = 0x1936d0u;
    // NOP
    // 0x1936d4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1936D4u;
    {
        const bool branch_taken_0x1936d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936d4) {
            ctx->pc = 0x1936D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1936D4u;
            // 0x1936d8: 0x8ca21070  lw          $v0, 0x1070($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1936E4u;
            goto label_1936e4;
        }
    }
    ctx->pc = 0x1936DCu;
    // 0x1936dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1936DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1936E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936DCu;
        // 0x1936e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1936DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1936E4u;
label_1936e4:
    // 0x1936e4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1936e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1936e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1936E8u;
    {
        const bool branch_taken_0x1936e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1936ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936E8u;
        // 0x1936ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936e8) {
            ctx->pc = 0x193700u;
            goto label_193700;
        }
    }
    ctx->pc = 0x1936F0u;
    // 0x1936f0: 0x8ca3106c  lw          $v1, 0x106C($a1)
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4204)));
    // 0x1936f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1936F4u;
    {
        const bool branch_taken_0x1936f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936F4u;
        // 0x1936f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936f4) {
            ctx->pc = 0x193700u;
            goto label_193700;
        }
    }
    ctx->pc = 0x1936FCu;
    // 0x1936fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1936fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193700:
    // 0x193700: 0x3e00008  jr          $ra
    ctx->pc = 0x193700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193708u;
}
