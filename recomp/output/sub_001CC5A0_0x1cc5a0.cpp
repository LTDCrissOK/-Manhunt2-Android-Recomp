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

// Function: sub_001CC5A0
// Address: 0x1cc5a0 - 0x1cc628
void sub_001CC5A0_0x1cc5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC5A0_0x1cc5a0");
#endif

    switch (ctx->pc) {
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc614u: goto label_1cc614;
        default: break;
    }

    ctx->pc = 0x1cc5a0u;

    // 0x1cc5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc5a4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc5a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cc5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1cc5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cc5b4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CC5B4u;
    SET_GPR_U32(ctx, 31, 0x1CC5BCu);
    ctx->pc = 0x1CC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5B4u;
    // 0x1cc5b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CC5B4u, 0x1CC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5BCu;
label_1cc5bc:
    // 0x1cc5bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5c0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC5C0u;
    SET_GPR_U32(ctx, 31, 0x1CC5C8u);
    ctx->pc = 0x1CC5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5C0u;
    // 0x1cc5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC5C0u, 0x1CC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5C8u;
label_1cc5c8:
    // 0x1cc5c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc5cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc5d0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC5D0u;
    SET_GPR_U32(ctx, 31, 0x1CC5D8u);
    ctx->pc = 0x1CC5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5D0u;
    // 0x1cc5d4: 0x24a5cf90  addiu       $a1, $a1, -0x3070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC5D0u, 0x1CC5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5D8u;
label_1cc5d8:
    // 0x1cc5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cc5e0: 0xc09e056  jal         func_278158
    ctx->pc = 0x1CC5E0u;
    SET_GPR_U32(ctx, 31, 0x1CC5E8u);
    ctx->pc = 0x1CC5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5E0u;
    // 0x1cc5e4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x1CC5E0u, 0x1CC5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5E8u;
label_1cc5e8:
    // 0x1cc5e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc5ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc5ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc5f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cc5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cc5f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cc5f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cc5f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc5fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc600: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc604: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cc604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc608: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc60c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CC60Cu;
    SET_GPR_U32(ctx, 31, 0x1CC614u);
    ctx->pc = 0x1CC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC60Cu;
    // 0x1cc610: 0xe44089d0  swc1        $f0, -0x7630($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937040), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CC60Cu, 0x1CC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC614u;
label_1cc614:
    // 0x1cc614: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cc614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc618: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc61c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC61Cu;
        // 0x1cc620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC624u;
    // 0x1cc624: 0x0  nop
    ctx->pc = 0x1cc624u;
    // NOP
    ctx->pc = 0x1cc628u;
}
