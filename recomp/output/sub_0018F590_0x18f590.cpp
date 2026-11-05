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

// Function: sub_0018F590
// Address: 0x18f590 - 0x18f628
void sub_0018F590_0x18f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F590_0x18f590");
#endif

    switch (ctx->pc) {
        case 0x18f590u: goto label_18f590;
        case 0x18f594u: goto label_18f594;
        case 0x18f598u: goto label_18f598;
        case 0x18f59cu: goto label_18f59c;
        case 0x18f5a0u: goto label_18f5a0;
        case 0x18f5a4u: goto label_18f5a4;
        case 0x18f5a8u: goto label_18f5a8;
        case 0x18f5acu: goto label_18f5ac;
        case 0x18f5b0u: goto label_18f5b0;
        case 0x18f5b4u: goto label_18f5b4;
        case 0x18f5b8u: goto label_18f5b8;
        case 0x18f5bcu: goto label_18f5bc;
        case 0x18f5c0u: goto label_18f5c0;
        case 0x18f5c4u: goto label_18f5c4;
        case 0x18f5c8u: goto label_18f5c8;
        case 0x18f5ccu: goto label_18f5cc;
        case 0x18f5d0u: goto label_18f5d0;
        case 0x18f5d4u: goto label_18f5d4;
        case 0x18f5d8u: goto label_18f5d8;
        case 0x18f5dcu: goto label_18f5dc;
        case 0x18f5e0u: goto label_18f5e0;
        case 0x18f5e4u: goto label_18f5e4;
        case 0x18f5e8u: goto label_18f5e8;
        case 0x18f5ecu: goto label_18f5ec;
        case 0x18f5f0u: goto label_18f5f0;
        case 0x18f5f4u: goto label_18f5f4;
        case 0x18f5f8u: goto label_18f5f8;
        case 0x18f5fcu: goto label_18f5fc;
        case 0x18f600u: goto label_18f600;
        case 0x18f604u: goto label_18f604;
        case 0x18f608u: goto label_18f608;
        case 0x18f60cu: goto label_18f60c;
        case 0x18f610u: goto label_18f610;
        case 0x18f614u: goto label_18f614;
        case 0x18f618u: goto label_18f618;
        case 0x18f61cu: goto label_18f61c;
        case 0x18f620u: goto label_18f620;
        case 0x18f624u: goto label_18f624;
        default: break;
    }

    ctx->pc = 0x18f590u;

label_18f590:
    // 0x18f590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18f594:
    // 0x18f594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18f598:
    // 0x18f598: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18f59c:
    // 0x18f59c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f5a0:
    // 0x18f5a0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x18f5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18f5a4:
    // 0x18f5a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18f5a8:
    // 0x18f5a8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_18f5ac:
    if (ctx->pc == 0x18F5ACu) {
        ctx->pc = 0x18F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5A8u;
        // 0x18f5ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5B0u;
        goto label_18f5b0;
    }
    ctx->pc = 0x18F5A8u;
    {
        const bool branch_taken_0x18f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5a8) {
            ctx->pc = 0x18F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F5A8u;
            // 0x18f5ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F614u;
            goto label_18f614;
        }
    }
    ctx->pc = 0x18F5B0u;
label_18f5b0:
    // 0x18f5b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18f5b4:
    // 0x18f5b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18f5b8:
    if (ctx->pc == 0x18F5B8u) {
        ctx->pc = 0x18F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5B4u;
        // 0x18f5b8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5BCu;
        goto label_18f5bc;
    }
    ctx->pc = 0x18F5B4u;
    {
        const bool branch_taken_0x18f5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5B4u;
        // 0x18f5b8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5b4) {
            ctx->pc = 0x18F5CCu;
            goto label_18f5cc;
        }
    }
    ctx->pc = 0x18F5BCu;
label_18f5bc:
    // 0x18f5bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f5c0:
    // 0x18f5c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18f5c4:
    // 0x18f5c4: 0x40f809  jalr        $v0
label_18f5c8:
    if (ctx->pc == 0x18F5C8u) {
        ctx->pc = 0x18F5CCu;
        goto label_18f5cc;
    }
    ctx->pc = 0x18F5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F5CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F5C4u, 0x18F5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F5CCu;
label_18f5cc:
    // 0x18f5cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18f5d0:
    // 0x18f5d0: 0xc061a12  jal         func_186848
label_18f5d4:
    if (ctx->pc == 0x18F5D4u) {
        ctx->pc = 0x18F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5D0u;
        // 0x18f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5D8u;
        goto label_18f5d8;
    }
    ctx->pc = 0x18F5D0u;
    SET_GPR_U32(ctx, 31, 0x18F5D8u);
    ctx->pc = 0x18F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5D0u;
    // 0x18f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F5D0u, 0x18F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5D8u;
label_18f5d8:
    // 0x18f5d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f5dc:
    // 0x18f5dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f5e0:
    // 0x18f5e0: 0xc0702b8  jal         func_1C0AE0
label_18f5e4:
    if (ctx->pc == 0x18F5E4u) {
        ctx->pc = 0x18F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5E0u;
        // 0x18f5e4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5E8u;
        goto label_18f5e8;
    }
    ctx->pc = 0x18F5E0u;
    SET_GPR_U32(ctx, 31, 0x18F5E8u);
    ctx->pc = 0x18F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5E0u;
    // 0x18f5e4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AE0u, 0x18F5E0u, 0x18F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5E8u;
label_18f5e8:
    // 0x18f5e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18f5e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18f5ec:
    // 0x18f5ec: 0xc061a1e  jal         func_186878
label_18f5f0:
    if (ctx->pc == 0x18F5F0u) {
        ctx->pc = 0x18F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5ECu;
        // 0x18f5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5F4u;
        goto label_18f5f4;
    }
    ctx->pc = 0x18F5ECu;
    SET_GPR_U32(ctx, 31, 0x18F5F4u);
    ctx->pc = 0x18F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5ECu;
    // 0x18f5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18F5ECu, 0x18F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5F4u;
label_18f5f4:
    // 0x18f5f4: 0xe454014c  swc1        $f20, 0x14C($v0)
    ctx->pc = 0x18f5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
label_18f5f8:
    // 0x18f5f8: 0xc061a16  jal         func_186858
label_18f5fc:
    if (ctx->pc == 0x18F5FCu) {
        ctx->pc = 0x18F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5F8u;
        // 0x18f5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F600u;
        goto label_18f600;
    }
    ctx->pc = 0x18F5F8u;
    SET_GPR_U32(ctx, 31, 0x18F600u);
    ctx->pc = 0x18F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5F8u;
    // 0x18f5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F5F8u, 0x18F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F600u;
label_18f600:
    // 0x18f600: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18f600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18f604:
    // 0x18f604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f608:
    // 0x18f608: 0x0  nop
    ctx->pc = 0x18f608u;
    // NOP
label_18f60c:
    // 0x18f60c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18f60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18f610:
    // 0x18f610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f614:
    // 0x18f614: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18f614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18f618:
    // 0x18f618: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x18f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f61c:
    // 0x18f61c: 0x3e00008  jr          $ra
label_18f620:
    if (ctx->pc == 0x18F620u) {
        ctx->pc = 0x18F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F61Cu;
        // 0x18f620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F624u;
        goto label_18f624;
    }
    ctx->pc = 0x18F61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F61Cu;
        // 0x18f620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F624u;
label_18f624:
    // 0x18f624: 0x0  nop
    ctx->pc = 0x18f624u;
    // NOP
    ctx->pc = 0x18f628u;
}
