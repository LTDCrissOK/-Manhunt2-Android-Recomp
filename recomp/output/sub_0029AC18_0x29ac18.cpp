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

// Function: sub_0029AC18
// Address: 0x29ac18 - 0x29ad28
void sub_0029AC18_0x29ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC18_0x29ac18");
#endif

    switch (ctx->pc) {
        case 0x29ac60u: goto label_29ac60;
        case 0x29aca8u: goto label_29aca8;
        case 0x29ace0u: goto label_29ace0;
        default: break;
    }

    ctx->pc = 0x29ac18u;

    // 0x29ac18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ac1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29ac20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ac24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ac28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ac2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29ac2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29ac30: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x29ac30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29ac34: 0x14a20033  bne         $a1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x29AC34u;
    {
        const bool branch_taken_0x29ac34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC34u;
        // 0x29ac38: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac34) {
            ctx->pc = 0x29AD04u;
            goto label_29ad04;
        }
    }
    ctx->pc = 0x29AC3Cu;
    // 0x29ac3c: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x29AC3Cu;
    {
        const bool branch_taken_0x29ac3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC3Cu;
        // 0x29ac40: 0x3c12004c  lui         $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac3c) {
            ctx->pc = 0x29AD04u;
            goto label_29ad04;
        }
    }
    ctx->pc = 0x29AC44u;
    // 0x29ac44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29ac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29ac48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29ac48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29ac4c: 0x265011e0  addiu       $s0, $s2, 0x11E0
    ctx->pc = 0x29ac4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4576));
    // 0x29ac50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac58: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x29AC58u;
    SET_GPR_U32(ctx, 31, 0x29AC60u);
    ctx->pc = 0x29AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC58u;
    // 0x29ac5c: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x29AC58u, 0x29AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC60u;
label_29ac60:
    // 0x29ac60: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29ac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x29ac64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29ac64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29ac68: 0xe65411e0  swc1        $f20, 0x11E0($s2)
    ctx->pc = 0x29ac68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4576), bits); }
    // 0x29ac6c: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x29ac6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29ac70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29ac70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ac74: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x29ac74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x29ac78: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x29ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x29ac7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac80: 0xa2110018  sb          $s1, 0x18($s0)
    ctx->pc = 0x29ac80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 17));
    // 0x29ac84: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x29ac88: 0xa2110019  sb          $s1, 0x19($s0)
    ctx->pc = 0x29ac88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 17));
    // 0x29ac8c: 0xa211001a  sb          $s1, 0x1A($s0)
    ctx->pc = 0x29ac8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 17));
    // 0x29ac90: 0xa211001b  sb          $s1, 0x1B($s0)
    ctx->pc = 0x29ac90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 17));
    // 0x29ac94: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x29ac94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x29ac98: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x29ac98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x29ac9c: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x29ac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x29aca0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x29ACA0u;
    SET_GPR_U32(ctx, 31, 0x29ACA8u);
    ctx->pc = 0x29ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACA0u;
    // 0x29aca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x29ACA0u, 0x29ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ACA8u;
label_29aca8:
    // 0x29aca8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29acac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29acacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29acb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29acb4: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x29acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x29acb8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x29acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x29acbc: 0xa2110018  sb          $s1, 0x18($s0)
    ctx->pc = 0x29acbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 17));
    // 0x29acc0: 0xa2110019  sb          $s1, 0x19($s0)
    ctx->pc = 0x29acc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 17));
    // 0x29acc4: 0xa211001a  sb          $s1, 0x1A($s0)
    ctx->pc = 0x29acc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 17));
    // 0x29acc8: 0xa211001b  sb          $s1, 0x1B($s0)
    ctx->pc = 0x29acc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 17));
    // 0x29accc: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x29acccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x29acd0: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x29acd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x29acd4: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x29acd8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x29ACD8u;
    SET_GPR_U32(ctx, 31, 0x29ACE0u);
    ctx->pc = 0x29ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACD8u;
    // 0x29acdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x29ACD8u, 0x29ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ACE0u;
label_29ace0:
    // 0x29ace0: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x29ace0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x29ace4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x29ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x29ace8: 0xa211001b  sb          $s1, 0x1B($s0)
    ctx->pc = 0x29ace8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 17));
    // 0x29acec: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x29acecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x29acf0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29acf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29acf8: 0xa2110018  sb          $s1, 0x18($s0)
    ctx->pc = 0x29acf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 17));
    // 0x29acfc: 0xa2110019  sb          $s1, 0x19($s0)
    ctx->pc = 0x29acfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 17));
    // 0x29ad00: 0xa211001a  sb          $s1, 0x1A($s0)
    ctx->pc = 0x29ad00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 17));
label_29ad04:
    // 0x29ad04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ad04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ad08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ad08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ad0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ad0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ad10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29ad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ad14: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x29ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ad18: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x29ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD1Cu;
        // 0x29ad20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AD24u;
    // 0x29ad24: 0x0  nop
    ctx->pc = 0x29ad24u;
    // NOP
    ctx->pc = 0x29ad28u;
}
