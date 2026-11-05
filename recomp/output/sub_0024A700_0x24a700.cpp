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

// Function: sub_0024A700
// Address: 0x24a700 - 0x24a770
void sub_0024A700_0x24a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A700_0x24a700");
#endif

    switch (ctx->pc) {
        case 0x24a700u: goto label_24a700;
        case 0x24a704u: goto label_24a704;
        case 0x24a708u: goto label_24a708;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a710u: goto label_24a710;
        case 0x24a714u: goto label_24a714;
        case 0x24a718u: goto label_24a718;
        case 0x24a71cu: goto label_24a71c;
        case 0x24a720u: goto label_24a720;
        case 0x24a724u: goto label_24a724;
        case 0x24a728u: goto label_24a728;
        case 0x24a72cu: goto label_24a72c;
        case 0x24a730u: goto label_24a730;
        case 0x24a734u: goto label_24a734;
        case 0x24a738u: goto label_24a738;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a740u: goto label_24a740;
        case 0x24a744u: goto label_24a744;
        case 0x24a748u: goto label_24a748;
        case 0x24a74cu: goto label_24a74c;
        case 0x24a750u: goto label_24a750;
        case 0x24a754u: goto label_24a754;
        case 0x24a758u: goto label_24a758;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a760u: goto label_24a760;
        case 0x24a764u: goto label_24a764;
        case 0x24a768u: goto label_24a768;
        case 0x24a76cu: goto label_24a76c;
        default: break;
    }

    ctx->pc = 0x24a700u;

label_24a700:
    // 0x24a700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24a704:
    // 0x24a704: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24a708:
    // 0x24a708: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_24a70c:
    // 0x24a70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a710:
    // 0x24a710: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24a714:
    // 0x24a714: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24a718:
    // 0x24a718: 0x40f809  jalr        $v0
label_24a71c:
    if (ctx->pc == 0x24A71Cu) {
        ctx->pc = 0x24A720u;
        goto label_24a720;
    }
    ctx->pc = 0x24A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A720u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A718u, 0x24A720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A720u;
label_24a720:
    // 0x24a720: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x24a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a724:
    // 0x24a724: 0x240607ee  addiu       $a2, $zero, 0x7EE
    ctx->pc = 0x24a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2030));
label_24a728:
    // 0x24a728: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x24a728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a72c:
    // 0x24a72c: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x24a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_24a730:
    // 0x24a730: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a734:
    // 0x24a734: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24a734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24a738:
    // 0x24a738: 0xc069712  jal         func_1A5C48
label_24a73c:
    if (ctx->pc == 0x24A73Cu) {
        ctx->pc = 0x24A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A738u;
        // 0x24a73c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A740u;
        goto label_24a740;
    }
    ctx->pc = 0x24A738u;
    SET_GPR_U32(ctx, 31, 0x24A740u);
    ctx->pc = 0x24A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A738u;
    // 0x24a73c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A738u, 0x24A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A740u;
label_24a740:
    // 0x24a740: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a744:
    // 0x24a744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a748:
    // 0x24a748: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a74c:
    // 0x24a74c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a750:
    // 0x24a750: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x24a750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
label_24a754:
    // 0x24a754: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a758:
    // 0x24a758: 0xc092760  jal         func_249D80
label_24a75c:
    if (ctx->pc == 0x24A75Cu) {
        ctx->pc = 0x24A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A758u;
        // 0x24a75c: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A760u;
        goto label_24a760;
    }
    ctx->pc = 0x24A758u;
    SET_GPR_U32(ctx, 31, 0x24A760u);
    ctx->pc = 0x24A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A758u;
    // 0x24a75c: 0xe4400178  swc1        $f0, 0x178($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D80u, 0x24A758u, 0x24A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A760u;
label_24a760:
    // 0x24a760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a764:
    // 0x24a764: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24a764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24a768:
    // 0x24a768: 0x3e00008  jr          $ra
label_24a76c:
    if (ctx->pc == 0x24A76Cu) {
        ctx->pc = 0x24A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A768u;
        // 0x24a76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A770u;
        goto label_fallthrough_0x24a768;
    }
    ctx->pc = 0x24A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A768u;
        // 0x24a76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24a768:
    ctx->pc = 0x24A770u;
}
