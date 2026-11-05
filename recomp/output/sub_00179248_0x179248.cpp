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

// Function: sub_00179248
// Address: 0x179248 - 0x1792b8
void sub_00179248_0x179248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179248_0x179248");
#endif

    switch (ctx->pc) {
        case 0x179268u: goto label_179268;
        default: break;
    }

    ctx->pc = 0x179248u;

    // 0x179248: 0x90820530  lbu         $v0, 0x530($a0)
    ctx->pc = 0x179248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x17924c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17924Cu;
    {
        const bool branch_taken_0x17924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17924Cu;
        // 0x179250: 0xe48c05a4  swc1        $f12, 0x5A4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17924c) {
            ctx->pc = 0x1792ACu;
            goto label_1792ac;
        }
    }
    ctx->pc = 0x179254u;
    // 0x179254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179258: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17925c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17925cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179260: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179264: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x179264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_179268:
    // 0x179268: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17926c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x17926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179270: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179274: 0x10680005  beq         $v1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179274u;
    {
        const bool branch_taken_0x179274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x179278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179274u;
        // 0x179278: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179274) {
            ctx->pc = 0x17928Cu;
            goto label_17928c;
        }
    }
    ctx->pc = 0x17927Cu;
    // 0x17927c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17927Cu;
    {
        const bool branch_taken_0x17927c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17927Cu;
        // 0x179280: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17927c) {
            ctx->pc = 0x17928Cu;
            goto label_17928c;
        }
    }
    ctx->pc = 0x179284u;
    // 0x179284: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x179288: 0xe44c0280  swc1        $f12, 0x280($v0)
    ctx->pc = 0x179288u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 640), bits); }
label_17928c:
    // 0x17928c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x17928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x179290: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x179290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179294: 0x2cc30014  sltiu       $v1, $a2, 0x14
    ctx->pc = 0x179294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179298: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179298u;
    {
        const bool branch_taken_0x179298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179298) {
            ctx->pc = 0x1792ACu;
            goto label_1792ac;
        }
    }
    ctx->pc = 0x1792A0u;
    // 0x1792a0: 0x90820530  lbu         $v0, 0x530($a0)
    ctx->pc = 0x1792a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x1792a4: 0x14e2fff0  bne         $a3, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1792A4u;
    {
        const bool branch_taken_0x1792a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1792A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792A4u;
        // 0x1792a8: 0xc91018  mult        $v0, $a2, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792a4) {
            ctx->pc = 0x179268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179268;
        }
    }
    ctx->pc = 0x1792ACu;
label_1792ac:
    // 0x1792ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1792ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1792ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1792B4u;
    // 0x1792b4: 0x0  nop
    ctx->pc = 0x1792b4u;
    // NOP
    ctx->pc = 0x1792b8u;
}
