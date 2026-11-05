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

// Function: sub_0031F038
// Address: 0x31f038 - 0x31f0e0
void sub_0031F038_0x31f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F038_0x31f038");
#endif

    switch (ctx->pc) {
        case 0x31f070u: goto label_31f070;
        case 0x31f078u: goto label_31f078;
        default: break;
    }

    ctx->pc = 0x31f038u;

    // 0x31f038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31f03c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31f040: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31f044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f048: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31f04c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31f04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f050: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31f054: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31f058: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x31f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x31f05c: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x31f05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x31f060: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31F060u;
    {
        const bool branch_taken_0x31f060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F060u;
        // 0x31f064: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f060) {
            ctx->pc = 0x31F0B8u;
            goto label_31f0b8;
        }
    }
    ctx->pc = 0x31F068u;
    // 0x31f068: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x31f068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f06c: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x31f06cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_31f070:
    // 0x31f070: 0xc0c7a9a  jal         func_31EA68
    ctx->pc = 0x31F070u;
    SET_GPR_U32(ctx, 31, 0x31F078u);
    ctx->pc = 0x31EA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA68u, 0x31F070u, 0x31F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F078u;
label_31f078:
    // 0x31f078: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x31f078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x31f07c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31f07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f080: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x31f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x31f084: 0x2242006  srlv        $a0, $a0, $s1
    ctx->pc = 0x31f084u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f088: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31f088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31f08c: 0x2231806  srlv        $v1, $v1, $s1
    ctx->pc = 0x31f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x31f090: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x31f090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31f094: 0x9205005c  lbu         $a1, 0x5C($s0)
    ctx->pc = 0x31f094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x31f098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31f098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31f09c: 0x225282b  sltu        $a1, $s1, $a1
    ctx->pc = 0x31f09cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31f0a0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x31f0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31f0a4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x31f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x31f0a8: 0x282300a  movz        $a2, $s4, $v0
    ctx->pc = 0x31f0a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 20));
    // 0x31f0ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31f0b0: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31F0B0u;
    {
        const bool branch_taken_0x31f0b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0B0u;
        // 0x31f0b4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0b0) {
            ctx->pc = 0x31F070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f070;
        }
    }
    ctx->pc = 0x31F0B8u;
label_31f0b8:
    // 0x31f0b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31f0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31f0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f0c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31f0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31f0c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31f0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f0c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31f0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31f0cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31f0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f0d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31f0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0D4u;
        // 0x31f0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F0DCu;
    // 0x31f0dc: 0x0  nop
    ctx->pc = 0x31f0dcu;
    // NOP
    ctx->pc = 0x31f0e0u;
}
