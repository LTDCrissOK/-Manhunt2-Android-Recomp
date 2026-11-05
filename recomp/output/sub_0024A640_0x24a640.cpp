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

// Function: sub_0024A640
// Address: 0x24a640 - 0x24a6b0
void sub_0024A640_0x24a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A640_0x24a640");
#endif

    switch (ctx->pc) {
        case 0x24a640u: goto label_24a640;
        case 0x24a644u: goto label_24a644;
        case 0x24a648u: goto label_24a648;
        case 0x24a64cu: goto label_24a64c;
        case 0x24a650u: goto label_24a650;
        case 0x24a654u: goto label_24a654;
        case 0x24a658u: goto label_24a658;
        case 0x24a65cu: goto label_24a65c;
        case 0x24a660u: goto label_24a660;
        case 0x24a664u: goto label_24a664;
        case 0x24a668u: goto label_24a668;
        case 0x24a66cu: goto label_24a66c;
        case 0x24a670u: goto label_24a670;
        case 0x24a674u: goto label_24a674;
        case 0x24a678u: goto label_24a678;
        case 0x24a67cu: goto label_24a67c;
        case 0x24a680u: goto label_24a680;
        case 0x24a684u: goto label_24a684;
        case 0x24a688u: goto label_24a688;
        case 0x24a68cu: goto label_24a68c;
        case 0x24a690u: goto label_24a690;
        case 0x24a694u: goto label_24a694;
        case 0x24a698u: goto label_24a698;
        case 0x24a69cu: goto label_24a69c;
        case 0x24a6a0u: goto label_24a6a0;
        case 0x24a6a4u: goto label_24a6a4;
        case 0x24a6a8u: goto label_24a6a8;
        case 0x24a6acu: goto label_24a6ac;
        default: break;
    }

    ctx->pc = 0x24a640u;

label_24a640:
    // 0x24a640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24a644:
    // 0x24a644: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24a648:
    // 0x24a648: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_24a64c:
    // 0x24a64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a650:
    // 0x24a650: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24a654:
    // 0x24a654: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24a658:
    // 0x24a658: 0x40f809  jalr        $v0
label_24a65c:
    if (ctx->pc == 0x24A65Cu) {
        ctx->pc = 0x24A660u;
        goto label_24a660;
    }
    ctx->pc = 0x24A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A660u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A658u, 0x24A660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A660u;
label_24a660:
    // 0x24a660: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a664:
    // 0x24a664: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x24a664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_24a668:
    // 0x24a668: 0xc069712  jal         func_1A5C48
label_24a66c:
    if (ctx->pc == 0x24A66Cu) {
        ctx->pc = 0x24A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A668u;
        // 0x24a66c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A670u;
        goto label_24a670;
    }
    ctx->pc = 0x24A668u;
    SET_GPR_U32(ctx, 31, 0x24A670u);
    ctx->pc = 0x24A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A668u;
    // 0x24a66c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A668u, 0x24A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A670u;
label_24a670:
    // 0x24a670: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x24a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a674:
    // 0x24a674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a678:
    // 0x24a678: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x24a678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a67c:
    // 0x24a67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a680:
    // 0x24a680: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a684:
    // 0x24a684: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24a684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24a688:
    // 0x24a688: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24a688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24a68c:
    // 0x24a68c: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x24a68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_24a690:
    // 0x24a690: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a694:
    // 0x24a694: 0xc092760  jal         func_249D80
label_24a698:
    if (ctx->pc == 0x24A698u) {
        ctx->pc = 0x24A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A694u;
        // 0x24a698: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A69Cu;
        goto label_24a69c;
    }
    ctx->pc = 0x24A694u;
    SET_GPR_U32(ctx, 31, 0x24A69Cu);
    ctx->pc = 0x24A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A694u;
    // 0x24a698: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D80u, 0x24A694u, 0x24A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A69Cu;
label_24a69c:
    // 0x24a69c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a6a0:
    // 0x24a6a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24a6a4:
    // 0x24a6a4: 0x3e00008  jr          $ra
label_24a6a8:
    if (ctx->pc == 0x24A6A8u) {
        ctx->pc = 0x24A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6A4u;
        // 0x24a6a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6ACu;
        goto label_24a6ac;
    }
    ctx->pc = 0x24A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6A4u;
        // 0x24a6a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A6ACu;
label_24a6ac:
    // 0x24a6ac: 0x0  nop
    ctx->pc = 0x24a6acu;
    // NOP
    ctx->pc = 0x24a6b0u;
}
