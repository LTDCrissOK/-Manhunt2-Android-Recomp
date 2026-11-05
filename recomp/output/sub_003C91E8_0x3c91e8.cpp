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

// Function: sub_003C91E8
// Address: 0x3c91e8 - 0x3c92a8
void sub_003C91E8_0x3c91e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C91E8_0x3c91e8");
#endif

    switch (ctx->pc) {
        case 0x3c9204u: goto label_3c9204;
        case 0x3c9290u: goto label_3c9290;
        default: break;
    }

    ctx->pc = 0x3c91e8u;

    // 0x3c91e8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x3c91e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3c91ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c91ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c91f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c91f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c91f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c91f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c91f8: 0x2812  mflo        $a1
    ctx->pc = 0x3c91f8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3c91fc: 0xc0f2194  jal         func_3C8650
    ctx->pc = 0x3C91FCu;
    SET_GPR_U32(ctx, 31, 0x3C9204u);
    ctx->pc = 0x3C8650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8650u, 0x3C91FCu, 0x3C9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9204u;
label_3c9204:
    // 0x3c9204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c9204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9208: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9208u;
    {
        const bool branch_taken_0x3c9208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9208) {
            ctx->pc = 0x3C920Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9208u;
            // 0x3c920c: 0x8e03fffc  lw          $v1, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9218u;
            goto label_3c9218;
        }
    }
    ctx->pc = 0x3C9210u;
    // 0x3c9210: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3C9210u;
    {
        const bool branch_taken_0x3c9210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9210u;
        // 0x3c9214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9210) {
            ctx->pc = 0x3C9294u;
            goto label_3c9294;
        }
    }
    ctx->pc = 0x3C9218u;
label_3c9218:
    // 0x3c9218: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c9218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c921c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3c921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3c9220: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c9220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c9224: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x3c9224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3c9228: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x3c9228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x3c922c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3C922Cu;
    {
        const bool branch_taken_0x3c922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C922Cu;
        // 0x3c9230: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c922c) {
            ctx->pc = 0x3C9284u;
            goto label_3c9284;
        }
    }
    ctx->pc = 0x3C9234u;
    // 0x3c9234: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C9234u;
    {
        const bool branch_taken_0x3c9234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9234u;
        // 0x3c9238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9234) {
            ctx->pc = 0x3C9270u;
            goto label_3c9270;
        }
    }
    ctx->pc = 0x3C923Cu;
    // 0x3c923c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3c923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3c9240: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3c9240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3c9244: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x3c9244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x3c9248: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C9248u;
    {
        const bool branch_taken_0x3c9248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9248u;
        // 0x3c924c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9248) {
            ctx->pc = 0x3C9270u;
            goto label_3c9270;
        }
    }
    ctx->pc = 0x3C9250u;
    // 0x3c9250: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x3c9250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x3c9254: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3c9254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3c9258: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3c9258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3c925c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C925Cu;
    {
        const bool branch_taken_0x3c925c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C925Cu;
        // 0x3c9260: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c925c) {
            ctx->pc = 0x3C9270u;
            goto label_3c9270;
        }
    }
    ctx->pc = 0x3C9264u;
    // 0x3c9264: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3c9264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3c9268: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3c9268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3c926c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3c926cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3c9270:
    // 0x3c9270: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3c9270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3c9274: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3c9274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3c9278: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3c9278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3c927c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C927Cu;
    {
        const bool branch_taken_0x3c927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C927Cu;
        // 0x3c9280: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c927c) {
            ctx->pc = 0x3C9290u;
            goto label_3c9290;
        }
    }
    ctx->pc = 0x3C9284u;
label_3c9284:
    // 0x3c9284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9288: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3C9288u;
    SET_GPR_U32(ctx, 31, 0x3C9290u);
    ctx->pc = 0x3C928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9288u;
    // 0x3c928c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3C9288u, 0x3C9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9290u;
label_3c9290:
    // 0x3c9290: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c9290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9294:
    // 0x3c9294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c9294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c929c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C929Cu;
        // 0x3c92a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C929Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C92A4u;
    // 0x3c92a4: 0x0  nop
    ctx->pc = 0x3c92a4u;
    // NOP
    ctx->pc = 0x3c92a8u;
}
