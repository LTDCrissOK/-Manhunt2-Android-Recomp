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

// Function: sub_003A7500
// Address: 0x3a7500 - 0x3a7590
void sub_003A7500_0x3a7500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7500_0x3a7500");
#endif

    switch (ctx->pc) {
        case 0x3a7500u: goto label_3a7500;
        case 0x3a7504u: goto label_3a7504;
        case 0x3a7508u: goto label_3a7508;
        case 0x3a750cu: goto label_3a750c;
        case 0x3a7510u: goto label_3a7510;
        case 0x3a7514u: goto label_3a7514;
        case 0x3a7518u: goto label_3a7518;
        case 0x3a751cu: goto label_3a751c;
        case 0x3a7520u: goto label_3a7520;
        case 0x3a7524u: goto label_3a7524;
        case 0x3a7528u: goto label_3a7528;
        case 0x3a752cu: goto label_3a752c;
        case 0x3a7530u: goto label_3a7530;
        case 0x3a7534u: goto label_3a7534;
        case 0x3a7538u: goto label_3a7538;
        case 0x3a753cu: goto label_3a753c;
        case 0x3a7540u: goto label_3a7540;
        case 0x3a7544u: goto label_3a7544;
        case 0x3a7548u: goto label_3a7548;
        case 0x3a754cu: goto label_3a754c;
        case 0x3a7550u: goto label_3a7550;
        case 0x3a7554u: goto label_3a7554;
        case 0x3a7558u: goto label_3a7558;
        case 0x3a755cu: goto label_3a755c;
        case 0x3a7560u: goto label_3a7560;
        case 0x3a7564u: goto label_3a7564;
        case 0x3a7568u: goto label_3a7568;
        case 0x3a756cu: goto label_3a756c;
        case 0x3a7570u: goto label_3a7570;
        case 0x3a7574u: goto label_3a7574;
        case 0x3a7578u: goto label_3a7578;
        case 0x3a757cu: goto label_3a757c;
        case 0x3a7580u: goto label_3a7580;
        case 0x3a7584u: goto label_3a7584;
        case 0x3a7588u: goto label_3a7588;
        case 0x3a758cu: goto label_3a758c;
        default: break;
    }

    ctx->pc = 0x3a7500u;

label_3a7500:
    // 0x3a7500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a7500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a7504:
    // 0x3a7504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a7508:
    // 0x3a7508: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a7508u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
label_3a750c:
    // 0x3a750c: 0x26103e98  addiu       $s0, $s0, 0x3E98
    ctx->pc = 0x3a750cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16024));
label_3a7510:
    // 0x3a7510: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x3a7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_3a7514:
    // 0x3a7514: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x3a7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_3a7518:
    // 0x3a7518: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x3a7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3a751c:
    // 0x3a751c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a7520:
    // 0x3a7520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7524:
    // 0x3a7524: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a7524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3a7528:
    // 0x3a7528: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x3a7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_3a752c:
    // 0x3a752c: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x3a752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_3a7530:
    // 0x3a7530: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x3a7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_3a7534:
    // 0x3a7534: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x3a7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_3a7538:
    // 0x3a7538: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x3a7538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_3a753c:
    // 0x3a753c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x3a753cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3a7540:
    // 0x3a7540: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x3a7540u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3a7544:
    // 0x3a7544: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x3a7544u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a7548:
    // 0x3a7548: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x3a7548u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a754c:
    // 0x3a754c: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x3a754cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3a7550:
    // 0x3a7550: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x3a7550u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3a7554:
    // 0x3a7554: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x3a7554u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a7558:
    // 0x3a7558: 0xc0f0242  jal         func_3C0908
label_3a755c:
    if (ctx->pc == 0x3A755Cu) {
        ctx->pc = 0x3A755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7558u;
        // 0x3a755c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7560u;
        goto label_3a7560;
    }
    ctx->pc = 0x3A7558u;
    SET_GPR_U32(ctx, 31, 0x3A7560u);
    ctx->pc = 0x3A755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7558u;
    // 0x3a755c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0908u, 0x3A7558u, 0x3A7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7560u;
label_3a7560:
    // 0x3a7560: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a7560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_3a7564:
    // 0x3a7564: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x3a7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_3a7568:
    // 0x3a7568: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3a756c:
    if (ctx->pc == 0x3A756Cu) {
        ctx->pc = 0x3A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7568u;
        // 0x3a756c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7570u;
        goto label_3a7570;
    }
    ctx->pc = 0x3A7568u;
    {
        const bool branch_taken_0x3a7568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7568u;
        // 0x3a756c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7568) {
            ctx->pc = 0x3A757Cu;
            goto label_3a757c;
        }
    }
    ctx->pc = 0x3A7570u;
label_3a7570:
    // 0x3a7570: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a7574:
    // 0x3a7574: 0x60f809  jalr        $v1
label_3a7578:
    if (ctx->pc == 0x3A7578u) {
        ctx->pc = 0x3A7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7574u;
        // 0x3a7578: 0x8c443e94  lw          $a0, 0x3E94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16020)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A757Cu;
        goto label_3a757c;
    }
    ctx->pc = 0x3A7574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A757Cu);
        ctx->pc = 0x3A7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7574u;
        // 0x3a7578: 0x8c443e94  lw          $a0, 0x3E94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7574u, 0x3A757Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A757Cu;
label_3a757c:
    // 0x3a757c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a757cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7580:
    // 0x3a7580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a7580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a7584:
    // 0x3a7584: 0x3e00008  jr          $ra
label_3a7588:
    if (ctx->pc == 0x3A7588u) {
        ctx->pc = 0x3A7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7584u;
        // 0x3a7588: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A758Cu;
        goto label_3a758c;
    }
    ctx->pc = 0x3A7584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7584u;
        // 0x3a7588: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A758Cu;
label_3a758c:
    // 0x3a758c: 0x0  nop
    ctx->pc = 0x3a758cu;
    // NOP
    ctx->pc = 0x3a7590u;
}
