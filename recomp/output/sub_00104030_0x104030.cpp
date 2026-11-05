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

// Function: sub_00104030
// Address: 0x104030 - 0x1040c8
void sub_00104030_0x104030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104030_0x104030");
#endif

    switch (ctx->pc) {
        case 0x104060u: goto label_104060;
        default: break;
    }

    ctx->pc = 0x104030u;

    // 0x104030: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x104030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x104034: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x104034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104038: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x104038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10403c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x10403cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104040: 0x9042072c  lbu         $v0, 0x72C($v0)
    ctx->pc = 0x104040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F072Cu));
    // 0x104044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104048: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x104048u;
    {
        const bool branch_taken_0x104048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104048u;
        // 0x10404c: 0x3c0a003f  lui         $t2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104048) {
            ctx->pc = 0x104080u;
            goto label_104080;
        }
    }
    ctx->pc = 0x104050u;
    // 0x104050: 0x8d4c0728  lw          $t4, 0x728($t2)
    ctx->pc = 0x104050u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1832)));
    // 0x104054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104058: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x104058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10405c: 0x881818  mult        $v1, $a0, $t0
    ctx->pc = 0x10405cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_104060:
    // 0x104060: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x104060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x104064: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104068: 0x10670014  beq         $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x104068u;
    {
        const bool branch_taken_0x104068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x10406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104068u;
        // 0x10406c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104068) {
            ctx->pc = 0x1040BCu;
            goto label_1040bc;
        }
    }
    ctx->pc = 0x104070u;
    // 0x104070: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x104070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x104074: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x104074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x104078: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x104078u;
    {
        const bool branch_taken_0x104078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104078u;
        // 0x10407c: 0x881818  mult        $v1, $a0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104078) {
            ctx->pc = 0x104060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104060;
        }
    }
    ctx->pc = 0x104080u;
label_104080:
    // 0x104080: 0x9123072c  lbu         $v1, 0x72C($t1)
    ctx->pc = 0x104080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1836)));
    // 0x104084: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x104084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x104088: 0x8d420728  lw          $v0, 0x728($t2)
    ctx->pc = 0x104088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1832)));
    // 0x10408c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x10408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x104090: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x104090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104098: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x104098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x10409c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x10409cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1040a0: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x1040a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x1040a4: 0x9124072c  lbu         $a0, 0x72C($t1)
    ctx->pc = 0x1040a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1836)));
    // 0x1040a8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1040a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1040ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1040acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1040b0: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1040B0u;
    {
        const bool branch_taken_0x1040b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B0u;
        // 0x1040b4: 0xa122072c  sb          $v0, 0x72C($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1836), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040b0) {
            ctx->pc = 0x1040BCu;
            goto label_1040bc;
        }
    }
    ctx->pc = 0x1040B8u;
    // 0x1040b8: 0xa124072c  sb          $a0, 0x72C($t1)
    ctx->pc = 0x1040b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1836), (uint8_t)GPR_U32(ctx, 4));
label_1040bc:
    // 0x1040bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1040BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1040BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1040C4u;
    // 0x1040c4: 0x0  nop
    ctx->pc = 0x1040c4u;
    // NOP
    ctx->pc = 0x1040c8u;
}
