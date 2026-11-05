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

// Function: sub_001CC9A8
// Address: 0x1cc9a8 - 0x1cca58
void sub_001CC9A8_0x1cc9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC9A8_0x1cc9a8");
#endif

    switch (ctx->pc) {
        case 0x1cc9c8u: goto label_1cc9c8;
        case 0x1cc9d4u: goto label_1cc9d4;
        case 0x1cc9e4u: goto label_1cc9e4;
        case 0x1cc9f8u: goto label_1cc9f8;
        case 0x1cca10u: goto label_1cca10;
        case 0x1cca20u: goto label_1cca20;
        case 0x1cca2cu: goto label_1cca2c;
        case 0x1cca44u: goto label_1cca44;
        default: break;
    }

    ctx->pc = 0x1cc9a8u;

    // 0x1cc9a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc9ac: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cc9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc9b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1cc9b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1cc9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1cc9bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cc9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cc9c0: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CC9C0u;
    SET_GPR_U32(ctx, 31, 0x1CC9C8u);
    ctx->pc = 0x1CC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9C0u;
    // 0x1cc9c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CC9C0u, 0x1CC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9C8u;
label_1cc9c8:
    // 0x1cc9c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9cc: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CC9CCu;
    SET_GPR_U32(ctx, 31, 0x1CC9D4u);
    ctx->pc = 0x1CC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9CCu;
    // 0x1cc9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CC9CCu, 0x1CC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9D4u;
label_1cc9d4:
    // 0x1cc9d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cc9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc9d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cc9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cc9dc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CC9DCu;
    SET_GPR_U32(ctx, 31, 0x1CC9E4u);
    ctx->pc = 0x1CC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9DCu;
    // 0x1cc9e0: 0x24a5d120  addiu       $a1, $a1, -0x2EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CC9DCu, 0x1CC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9E4u;
label_1cc9e4:
    // 0x1cc9e4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cc9e8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cc9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cc9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9f0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CC9F0u;
    SET_GPR_U32(ctx, 31, 0x1CC9F8u);
    ctx->pc = 0x1CC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9F0u;
    // 0x1cc9f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CC9F0u, 0x1CC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9F8u;
label_1cc9f8:
    // 0x1cc9f8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cc9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc9fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cca00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca08: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCA08u;
    SET_GPR_U32(ctx, 31, 0x1CCA10u);
    ctx->pc = 0x1CCA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA08u;
    // 0x1cca0c: 0xe44089c8  swc1        $f0, -0x7638($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937032), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCA08u, 0x1CCA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA10u;
label_1cca10:
    // 0x1cca10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cca14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cca14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cca18: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCA18u;
    SET_GPR_U32(ctx, 31, 0x1CCA20u);
    ctx->pc = 0x1CCA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA18u;
    // 0x1cca1c: 0x24a5d128  addiu       $a1, $a1, -0x2ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCA18u, 0x1CCA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA20u;
label_1cca20:
    // 0x1cca20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca24: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x1CCA24u;
    SET_GPR_U32(ctx, 31, 0x1CCA2Cu);
    ctx->pc = 0x1CCA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA24u;
    // 0x1cca28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x1CCA24u, 0x1CCA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA2Cu;
label_1cca2c:
    // 0x1cca2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cca30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cca34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cca3c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CCA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA44u);
    ctx->pc = 0x1CCA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA3Cu;
    // 0x1cca40: 0xe44089cc  swc1        $f0, -0x7634($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937036), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CCA3Cu, 0x1CCA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA44u;
label_1cca44:
    // 0x1cca44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cca44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cca48: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1cca48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cca4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cca50: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA50u;
        // 0x1cca54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA58u;
}
