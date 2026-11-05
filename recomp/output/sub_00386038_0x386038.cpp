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

// Function: sub_00386038
// Address: 0x386038 - 0x3860b0
void sub_00386038_0x386038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386038_0x386038");
#endif

    switch (ctx->pc) {
        case 0x386038u: goto label_386038;
        case 0x38603cu: goto label_38603c;
        case 0x386040u: goto label_386040;
        case 0x386044u: goto label_386044;
        case 0x386048u: goto label_386048;
        case 0x38604cu: goto label_38604c;
        case 0x386050u: goto label_386050;
        case 0x386054u: goto label_386054;
        case 0x386058u: goto label_386058;
        case 0x38605cu: goto label_38605c;
        case 0x386060u: goto label_386060;
        case 0x386064u: goto label_386064;
        case 0x386068u: goto label_386068;
        case 0x38606cu: goto label_38606c;
        case 0x386070u: goto label_386070;
        case 0x386074u: goto label_386074;
        case 0x386078u: goto label_386078;
        case 0x38607cu: goto label_38607c;
        case 0x386080u: goto label_386080;
        case 0x386084u: goto label_386084;
        case 0x386088u: goto label_386088;
        case 0x38608cu: goto label_38608c;
        case 0x386090u: goto label_386090;
        case 0x386094u: goto label_386094;
        case 0x386098u: goto label_386098;
        case 0x38609cu: goto label_38609c;
        case 0x3860a0u: goto label_3860a0;
        case 0x3860a4u: goto label_3860a4;
        case 0x3860a8u: goto label_3860a8;
        case 0x3860acu: goto label_3860ac;
        default: break;
    }

    ctx->pc = 0x386038u;

label_386038:
    // 0x386038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x386038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38603c:
    // 0x38603c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38603cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386040:
    // 0x386040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x386040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_386044:
    // 0x386044: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_386048:
    if (ctx->pc == 0x386048u) {
        ctx->pc = 0x386048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386044u;
        // 0x386048: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38604Cu;
        goto label_38604c;
    }
    ctx->pc = 0x386044u;
    {
        const bool branch_taken_0x386044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x386048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386044u;
        // 0x386048: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386044) {
            ctx->pc = 0x38609Cu;
            goto label_38609c;
        }
    }
    ctx->pc = 0x38604Cu;
label_38604c:
    // 0x38604c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x38604cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_386050:
    // 0x386050: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_386054:
    if (ctx->pc == 0x386054u) {
        ctx->pc = 0x386054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386050u;
        // 0x386054: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386058u;
        goto label_386058;
    }
    ctx->pc = 0x386050u;
    {
        const bool branch_taken_0x386050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x386054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386050u;
        // 0x386054: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386050) {
            ctx->pc = 0x38609Cu;
            goto label_38609c;
        }
    }
    ctx->pc = 0x386058u;
label_386058:
    // 0x386058: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x386058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38605c:
    // 0x38605c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x38605cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_386060:
    // 0x386060: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x386060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_386064:
    // 0x386064: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x386064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_386068:
    // 0x386068: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_38606c:
    if (ctx->pc == 0x38606Cu) {
        ctx->pc = 0x38606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386068u;
        // 0x38606c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386070u;
        goto label_386070;
    }
    ctx->pc = 0x386068u;
    {
        const bool branch_taken_0x386068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386068u;
        // 0x38606c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386068) {
            ctx->pc = 0x3860A0u;
            goto label_3860a0;
        }
    }
    ctx->pc = 0x386070u;
label_386070:
    // 0x386070: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x386070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_386074:
    // 0x386074: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x386074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_386078:
    // 0x386078: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x386078u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38607c:
    // 0x38607c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_386080:
    // 0x386080: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x386080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_386084:
    // 0x386084: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x386084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_386088:
    // 0x386088: 0xe0f809  jalr        $a3
label_38608c:
    if (ctx->pc == 0x38608Cu) {
        ctx->pc = 0x38608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386088u;
        // 0x38608c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386090u;
        goto label_386090;
    }
    ctx->pc = 0x386088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x386090u);
        ctx->pc = 0x38608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386088u;
        // 0x38608c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386088u, 0x386090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386090u;
label_386090:
    // 0x386090: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x386090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386094:
    // 0x386094: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x386094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_386098:
    // 0x386098: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x386098u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38609c:
    // 0x38609c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38609cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3860a0:
    // 0x3860a0: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3860a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3860a4:
    // 0x3860a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3860a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3860a8:
    // 0x3860a8: 0x3e00008  jr          $ra
label_3860ac:
    if (ctx->pc == 0x3860ACu) {
        ctx->pc = 0x3860ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860A8u;
        // 0x3860ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860B0u;
        goto label_fallthrough_0x3860a8;
    }
    ctx->pc = 0x3860A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3860ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860A8u;
        // 0x3860ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3860A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3860a8:
    ctx->pc = 0x3860B0u;
}
