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

// Function: sub_0024A770
// Address: 0x24a770 - 0x24a7e0
void sub_0024A770_0x24a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A770_0x24a770");
#endif

    switch (ctx->pc) {
        case 0x24a770u: goto label_24a770;
        case 0x24a774u: goto label_24a774;
        case 0x24a778u: goto label_24a778;
        case 0x24a77cu: goto label_24a77c;
        case 0x24a780u: goto label_24a780;
        case 0x24a784u: goto label_24a784;
        case 0x24a788u: goto label_24a788;
        case 0x24a78cu: goto label_24a78c;
        case 0x24a790u: goto label_24a790;
        case 0x24a794u: goto label_24a794;
        case 0x24a798u: goto label_24a798;
        case 0x24a79cu: goto label_24a79c;
        case 0x24a7a0u: goto label_24a7a0;
        case 0x24a7a4u: goto label_24a7a4;
        case 0x24a7a8u: goto label_24a7a8;
        case 0x24a7acu: goto label_24a7ac;
        case 0x24a7b0u: goto label_24a7b0;
        case 0x24a7b4u: goto label_24a7b4;
        case 0x24a7b8u: goto label_24a7b8;
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7c0u: goto label_24a7c0;
        case 0x24a7c4u: goto label_24a7c4;
        case 0x24a7c8u: goto label_24a7c8;
        case 0x24a7ccu: goto label_24a7cc;
        case 0x24a7d0u: goto label_24a7d0;
        case 0x24a7d4u: goto label_24a7d4;
        case 0x24a7d8u: goto label_24a7d8;
        case 0x24a7dcu: goto label_24a7dc;
        default: break;
    }

    ctx->pc = 0x24a770u;

label_24a770:
    // 0x24a770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24a774:
    // 0x24a774: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24a778:
    // 0x24a778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_24a77c:
    // 0x24a77c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a780:
    // 0x24a780: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24a780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24a784:
    // 0x24a784: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24a788:
    // 0x24a788: 0x40f809  jalr        $v0
label_24a78c:
    if (ctx->pc == 0x24A78Cu) {
        ctx->pc = 0x24A790u;
        goto label_24a790;
    }
    ctx->pc = 0x24A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A790u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A788u, 0x24A790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A790u;
label_24a790:
    // 0x24a790: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a794:
    // 0x24a794: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x24a794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_24a798:
    // 0x24a798: 0xc069712  jal         func_1A5C48
label_24a79c:
    if (ctx->pc == 0x24A79Cu) {
        ctx->pc = 0x24A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A798u;
        // 0x24a79c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A7A0u;
        goto label_24a7a0;
    }
    ctx->pc = 0x24A798u;
    SET_GPR_U32(ctx, 31, 0x24A7A0u);
    ctx->pc = 0x24A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A798u;
    // 0x24a79c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A798u, 0x24A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7A0u;
label_24a7a0:
    // 0x24a7a0: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x24a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a7a4:
    // 0x24a7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a7a8:
    // 0x24a7a8: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x24a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a7ac:
    // 0x24a7ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a7b0:
    // 0x24a7b0: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a7b4:
    // 0x24a7b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24a7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24a7b8:
    // 0x24a7b8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24a7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24a7bc:
    // 0x24a7bc: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x24a7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_24a7c0:
    // 0x24a7c0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a7c4:
    // 0x24a7c4: 0xc092760  jal         func_249D80
label_24a7c8:
    if (ctx->pc == 0x24A7C8u) {
        ctx->pc = 0x24A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7C4u;
        // 0x24a7c8: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A7CCu;
        goto label_24a7cc;
    }
    ctx->pc = 0x24A7C4u;
    SET_GPR_U32(ctx, 31, 0x24A7CCu);
    ctx->pc = 0x24A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7C4u;
    // 0x24a7c8: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D80u, 0x24A7C4u, 0x24A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7CCu;
label_24a7cc:
    // 0x24a7cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a7d0:
    // 0x24a7d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24a7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24a7d4:
    // 0x24a7d4: 0x3e00008  jr          $ra
label_24a7d8:
    if (ctx->pc == 0x24A7D8u) {
        ctx->pc = 0x24A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7D4u;
        // 0x24a7d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A7DCu;
        goto label_24a7dc;
    }
    ctx->pc = 0x24A7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7D4u;
        // 0x24a7d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A7DCu;
label_24a7dc:
    // 0x24a7dc: 0x0  nop
    ctx->pc = 0x24a7dcu;
    // NOP
    ctx->pc = 0x24a7e0u;
}
