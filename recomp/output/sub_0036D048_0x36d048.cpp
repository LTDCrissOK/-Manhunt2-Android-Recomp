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

// Function: sub_0036D048
// Address: 0x36d048 - 0x36d100
void sub_0036D048_0x36d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D048_0x36d048");
#endif

    switch (ctx->pc) {
        case 0x36d090u: goto label_36d090;
        case 0x36d0b4u: goto label_36d0b4;
        default: break;
    }

    ctx->pc = 0x36d048u;

    // 0x36d048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d04c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36D04Cu;
    {
        const bool branch_taken_0x36d04c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x36D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D04Cu;
        // 0x36d050: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d04c) {
            ctx->pc = 0x36D0A4u;
            goto label_36d0a4;
        }
    }
    ctx->pc = 0x36D054u;
    // 0x36d054: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D054u;
    {
        const bool branch_taken_0x36d054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d054) {
            ctx->pc = 0x36D058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D054u;
            // 0x36d058: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D06Cu;
            goto label_36d06c;
        }
    }
    ctx->pc = 0x36D05Cu;
    // 0x36d05c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D05Cu;
    {
        const bool branch_taken_0x36d05c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d05c) {
            ctx->pc = 0x36D060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D05Cu;
            // 0x36d060: 0x8482000a  lh          $v0, 0xA($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D084u;
            goto label_36d084;
        }
    }
    ctx->pc = 0x36D064u;
    // 0x36d064: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x36D064u;
    {
        const bool branch_taken_0x36d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d064) {
            ctx->pc = 0x36D0F0u;
            goto label_36d0f0;
        }
    }
    ctx->pc = 0x36D06Cu;
label_36d06c:
    // 0x36d06c: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36D06Cu;
    {
        const bool branch_taken_0x36d06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x36D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D06Cu;
        // 0x36d070: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d06c) {
            ctx->pc = 0x36D0C8u;
            goto label_36d0c8;
        }
    }
    ctx->pc = 0x36D074u;
    // 0x36d074: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36D074u;
    {
        const bool branch_taken_0x36d074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d074) {
            ctx->pc = 0x36D0DCu;
            goto label_36d0dc;
        }
    }
    ctx->pc = 0x36D07Cu;
    // 0x36d07c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x36D07Cu;
    {
        const bool branch_taken_0x36d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d07c) {
            ctx->pc = 0x36D0F0u;
            goto label_36d0f0;
        }
    }
    ctx->pc = 0x36D084u;
label_36d084:
    // 0x36d084: 0x3c01c4df  lui         $at, 0xC4DF
    ctx->pc = 0x36d084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50399 << 16));
    // 0x36d088: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x36d088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x36d08c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36d08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36d090:
    // 0x36d090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d094: 0x0  nop
    ctx->pc = 0x36d094u;
    // NOP
    // 0x36d098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d09c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D09Cu;
        // 0x36d0a0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D0A4u;
label_36d0a4:
    // 0x36d0a4: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x36d0a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x36d0a8: 0x3c01450f  lui         $at, 0x450F
    ctx->pc = 0x36d0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17679 << 16));
    // 0x36d0ac: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x36d0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x36d0b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36d0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36d0b4:
    // 0x36d0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d0b8: 0x0  nop
    ctx->pc = 0x36d0b8u;
    // NOP
    // 0x36d0bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0C0u;
        // 0x36d0c4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D0C8u;
label_36d0c8:
    // 0x36d0c8: 0x3c01c4d7  lui         $at, 0xC4D7
    ctx->pc = 0x36d0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50391 << 16));
    // 0x36d0cc: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x36d0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x36d0d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36d0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d0d4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x36D0D4u;
    {
        const bool branch_taken_0x36d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0D4u;
        // 0x36d0d8: 0x84820008  lh          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d0d4) {
            ctx->pc = 0x36D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d090;
        }
    }
    ctx->pc = 0x36D0DCu;
label_36d0dc:
    // 0x36d0dc: 0x3c014513  lui         $at, 0x4513
    ctx->pc = 0x36d0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17683 << 16));
    // 0x36d0e0: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x36d0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x36d0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36d0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d0e8: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x36D0E8u;
    {
        const bool branch_taken_0x36d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0E8u;
        // 0x36d0ec: 0x84820008  lh          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d0e8) {
            ctx->pc = 0x36D0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d0b4;
        }
    }
    ctx->pc = 0x36D0F0u;
label_36d0f0:
    // 0x36d0f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36d0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D0FCu;
    // 0x36d0fc: 0x0  nop
    ctx->pc = 0x36d0fcu;
    // NOP
    ctx->pc = 0x36d100u;
}
