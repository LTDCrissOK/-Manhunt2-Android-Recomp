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

// Function: sub_0018DA88
// Address: 0x18da88 - 0x18daf8
void sub_0018DA88_0x18da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DA88_0x18da88");
#endif

    switch (ctx->pc) {
        case 0x18da88u: goto label_18da88;
        case 0x18da8cu: goto label_18da8c;
        case 0x18da90u: goto label_18da90;
        case 0x18da94u: goto label_18da94;
        case 0x18da98u: goto label_18da98;
        case 0x18da9cu: goto label_18da9c;
        case 0x18daa0u: goto label_18daa0;
        case 0x18daa4u: goto label_18daa4;
        case 0x18daa8u: goto label_18daa8;
        case 0x18daacu: goto label_18daac;
        case 0x18dab0u: goto label_18dab0;
        case 0x18dab4u: goto label_18dab4;
        case 0x18dab8u: goto label_18dab8;
        case 0x18dabcu: goto label_18dabc;
        case 0x18dac0u: goto label_18dac0;
        case 0x18dac4u: goto label_18dac4;
        case 0x18dac8u: goto label_18dac8;
        case 0x18daccu: goto label_18dacc;
        case 0x18dad0u: goto label_18dad0;
        case 0x18dad4u: goto label_18dad4;
        case 0x18dad8u: goto label_18dad8;
        case 0x18dadcu: goto label_18dadc;
        case 0x18dae0u: goto label_18dae0;
        case 0x18dae4u: goto label_18dae4;
        case 0x18dae8u: goto label_18dae8;
        case 0x18daecu: goto label_18daec;
        case 0x18daf0u: goto label_18daf0;
        case 0x18daf4u: goto label_18daf4;
        default: break;
    }

    ctx->pc = 0x18da88u;

label_18da88:
    // 0x18da88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18da8c:
    // 0x18da8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18da90:
    // 0x18da90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18da94:
    // 0x18da94: 0xc061a16  jal         func_186858
label_18da98:
    if (ctx->pc == 0x18DA98u) {
        ctx->pc = 0x18DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA94u;
        // 0x18da98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA9Cu;
        goto label_18da9c;
    }
    ctx->pc = 0x18DA94u;
    SET_GPR_U32(ctx, 31, 0x18DA9Cu);
    ctx->pc = 0x18DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA94u;
    // 0x18da98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18DA94u, 0x18DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA9Cu;
label_18da9c:
    // 0x18da9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18da9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18daa0:
    // 0x18daa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18daa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18daa4:
    // 0x18daa4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_18daa8:
    // 0x18daa8: 0x2484ef60  addiu       $a0, $a0, -0x10A0
    ctx->pc = 0x18daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963040));
label_18daac:
    // 0x18daac: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18daacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18dab0:
    // 0x18dab0: 0xc0f7200  jal         func_3DC800
label_18dab4:
    if (ctx->pc == 0x18DAB4u) {
        ctx->pc = 0x18DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAB0u;
        // 0x18dab4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAB8u;
        goto label_18dab8;
    }
    ctx->pc = 0x18DAB0u;
    SET_GPR_U32(ctx, 31, 0x18DAB8u);
    ctx->pc = 0x18DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAB0u;
    // 0x18dab4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x18DAB0u, 0x18DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAB8u;
label_18dab8:
    // 0x18dab8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18dabc:
    // 0x18dabc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18dac0:
    // 0x18dac0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18dac4:
    // 0x18dac4: 0x40f809  jalr        $v0
label_18dac8:
    if (ctx->pc == 0x18DAC8u) {
        ctx->pc = 0x18DACCu;
        goto label_18dacc;
    }
    ctx->pc = 0x18DAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DACCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAC4u, 0x18DACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DACCu;
label_18dacc:
    // 0x18dacc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18daccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18dad0:
    // 0x18dad0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_18dad4:
    if (ctx->pc == 0x18DAD4u) {
        ctx->pc = 0x18DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD0u;
        // 0x18dad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAD8u;
        goto label_18dad8;
    }
    ctx->pc = 0x18DAD0u;
    {
        const bool branch_taken_0x18dad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD0u;
        // 0x18dad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dad0) {
            ctx->pc = 0x18DAECu;
            goto label_18daec;
        }
    }
    ctx->pc = 0x18DAD8u;
label_18dad8:
    // 0x18dad8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18dadc:
    // 0x18dadc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18dae0:
    // 0x18dae0: 0x40f809  jalr        $v0
label_18dae4:
    if (ctx->pc == 0x18DAE4u) {
        ctx->pc = 0x18DAE8u;
        goto label_18dae8;
    }
    ctx->pc = 0x18DAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DAE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAE0u, 0x18DAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DAE8u;
label_18dae8:
    // 0x18dae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18dae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18daec:
    // 0x18daec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18daecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18daf0:
    // 0x18daf0: 0x3e00008  jr          $ra
label_18daf4:
    if (ctx->pc == 0x18DAF4u) {
        ctx->pc = 0x18DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAF0u;
        // 0x18daf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAF8u;
        goto label_fallthrough_0x18daf0;
    }
    ctx->pc = 0x18DAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAF0u;
        // 0x18daf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18daf0:
    ctx->pc = 0x18DAF8u;
}
