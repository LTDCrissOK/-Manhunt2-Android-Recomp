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

// Function: sub_0018D250
// Address: 0x18d250 - 0x18d330
void sub_0018D250_0x18d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D250_0x18d250");
#endif

    switch (ctx->pc) {
        case 0x18d26cu: goto label_18d26c;
        case 0x18d284u: goto label_18d284;
        case 0x18d290u: goto label_18d290;
        case 0x18d29cu: goto label_18d29c;
        case 0x18d2a4u: goto label_18d2a4;
        case 0x18d2d0u: goto label_18d2d0;
        case 0x18d2d8u: goto label_18d2d8;
        case 0x18d2e8u: goto label_18d2e8;
        case 0x18d2f8u: goto label_18d2f8;
        case 0x18d304u: goto label_18d304;
        case 0x18d310u: goto label_18d310;
        case 0x18d318u: goto label_18d318;
        default: break;
    }

    ctx->pc = 0x18d250u;

    // 0x18d250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18d254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18d258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d264: 0xc061a2e  jal         func_1868B8
    ctx->pc = 0x18D264u;
    SET_GPR_U32(ctx, 31, 0x18D26Cu);
    ctx->pc = 0x18D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D264u;
    // 0x18d268: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D264u, 0x18D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D26Cu;
label_18d26c:
    // 0x18d26c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x18d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x18d270: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x18d270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x18d274: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D274u;
    {
        const bool branch_taken_0x18d274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d274) {
            ctx->pc = 0x18D290u;
            goto label_18d290;
        }
    }
    ctx->pc = 0x18D27Cu;
    // 0x18d27c: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18D27Cu;
    SET_GPR_U32(ctx, 31, 0x18D284u);
    ctx->pc = 0x18D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D27Cu;
    // 0x18d280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D27Cu, 0x18D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D284u;
label_18d284:
    // 0x18d284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d288: 0xc071056  jal         func_1C4158
    ctx->pc = 0x18D288u;
    SET_GPR_U32(ctx, 31, 0x18D290u);
    ctx->pc = 0x18D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D288u;
    // 0x18d28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4158u, 0x18D288u, 0x18D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D290u;
label_18d290:
    // 0x18d290: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18d290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18d294: 0xc061a2e  jal         func_1868B8
    ctx->pc = 0x18D294u;
    SET_GPR_U32(ctx, 31, 0x18D29Cu);
    ctx->pc = 0x18D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D294u;
    // 0x18d298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D294u, 0x18D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D29Cu;
label_18d29c:
    // 0x18d29c: 0xc0712c2  jal         func_1C4B08
    ctx->pc = 0x18D29Cu;
    SET_GPR_U32(ctx, 31, 0x18D2A4u);
    ctx->pc = 0x18D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D29Cu;
    // 0x18d2a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4B08u, 0x18D29Cu, 0x18D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2A4u;
label_18d2a4:
    // 0x18d2a4: 0x8c430fec  lw          $v1, 0xFEC($v0)
    ctx->pc = 0x18d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
    // 0x18d2a8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x18d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d2ac: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d2acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2b0: 0x0  nop
    ctx->pc = 0x18d2b0u;
    // NOP
    // 0x18d2b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18D2B4u;
    {
        const bool branch_taken_0x18d2b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B4u;
        // 0x18d2b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b4) {
            ctx->pc = 0x18D2C0u;
            goto label_18d2c0;
        }
    }
    ctx->pc = 0x18D2BCu;
    // 0x18d2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d2c0:
    // 0x18d2c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18D2C0u;
    {
        const bool branch_taken_0x18d2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2c0) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18D2C8u;
    // 0x18d2c8: 0xc061a2e  jal         func_1868B8
    ctx->pc = 0x18D2C8u;
    SET_GPR_U32(ctx, 31, 0x18D2D0u);
    ctx->pc = 0x18D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2C8u;
    // 0x18d2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D2C8u, 0x18D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2D0u;
label_18d2d0:
    // 0x18d2d0: 0xc071282  jal         func_1C4A08
    ctx->pc = 0x18D2D0u;
    SET_GPR_U32(ctx, 31, 0x18D2D8u);
    ctx->pc = 0x18D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2D0u;
    // 0x18d2d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A08u, 0x18D2D0u, 0x18D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2D8u;
label_18d2d8:
    // 0x18d2d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D2D8u;
    {
        const bool branch_taken_0x18d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2d8) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18D2E0u;
    // 0x18d2e0: 0xc061a16  jal         func_186858
    ctx->pc = 0x18D2E0u;
    SET_GPR_U32(ctx, 31, 0x18D2E8u);
    ctx->pc = 0x18D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2E0u;
    // 0x18d2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D2E0u, 0x18D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2E8u;
label_18d2e8:
    // 0x18d2e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18D2E8u;
    {
        const bool branch_taken_0x18d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2E8u;
        // 0x18d2ec: 0xe4540028  swc1        $f20, 0x28($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2e8) {
            ctx->pc = 0x18D318u;
            goto label_18d318;
        }
    }
    ctx->pc = 0x18D2F0u;
label_18d2f0:
    // 0x18d2f0: 0xc061a12  jal         func_186848
    ctx->pc = 0x18D2F0u;
    SET_GPR_U32(ctx, 31, 0x18D2F8u);
    ctx->pc = 0x18D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2F0u;
    // 0x18d2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D2F0u, 0x18D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2F8u;
label_18d2f8:
    // 0x18d2f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2fc: 0xc061a2e  jal         func_1868B8
    ctx->pc = 0x18D2FCu;
    SET_GPR_U32(ctx, 31, 0x18D304u);
    ctx->pc = 0x18D300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2FCu;
    // 0x18d300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D2FCu, 0x18D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D304u;
label_18d304:
    // 0x18d304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d308: 0xc06f76e  jal         func_1BDDB8
    ctx->pc = 0x18D308u;
    SET_GPR_U32(ctx, 31, 0x18D310u);
    ctx->pc = 0x18D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D308u;
    // 0x18d30c: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDDB8u, 0x18D308u, 0x18D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D310u;
label_18d310:
    // 0x18d310: 0xc0634cc  jal         func_18D330
    ctx->pc = 0x18D310u;
    SET_GPR_U32(ctx, 31, 0x18D318u);
    ctx->pc = 0x18D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D310u;
    // 0x18d314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D330u, 0x18D310u, 0x18D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D318u;
label_18d318:
    // 0x18d318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d31c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d324: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d328: 0x3e00008  jr          $ra
    ctx->pc = 0x18D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D328u;
        // 0x18d32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D330u;
}
