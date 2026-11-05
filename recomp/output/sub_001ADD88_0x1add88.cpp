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

// Function: sub_001ADD88
// Address: 0x1add88 - 0x1adec8
void sub_001ADD88_0x1add88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADD88_0x1add88");
#endif

    switch (ctx->pc) {
        case 0x1ade34u: goto label_1ade34;
        case 0x1ade70u: goto label_1ade70;
        case 0x1ade90u: goto label_1ade90;
        case 0x1adeb4u: goto label_1adeb4;
        default: break;
    }

    ctx->pc = 0x1add88u;

    // 0x1add88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1add88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1add8c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1add90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1add90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1add94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1add98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1add98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1add9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adda0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1adda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x1adda4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1adda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1adda8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1adda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1addac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1addacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1addb0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1addb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1addb4: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1addb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1addb8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1addb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1addbc: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1addbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1addc0: 0xae05009c  sw          $a1, 0x9C($s0)
    ctx->pc = 0x1addc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 5));
    // 0x1addc4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1addc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1addc8: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1addc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1addcc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1addccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1addd0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1addd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1addd4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1addd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1addd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1addd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adddc: 0xc4807188  lwc1        $f0, 0x7188($a0)
    ctx->pc = 0x1adddcu;
    { uint32_t bits = FAST_READ32(0x3F7188u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adde0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1adde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x1adde4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x1adde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x1adde8: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1adde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x1addec: 0xe60100fc  swc1        $f1, 0xFC($s0)
    ctx->pc = 0x1addecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x1addf0: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1addf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1addf4: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1addf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1addf8: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1addf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x1addfc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1addfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1ade00: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1ade00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1ade04: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1ade04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1ade08: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1ade08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1ade0c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ade0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1ade10: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1ade10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1ade14: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1ade14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1ade18: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x1ade18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x1ade1c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x1ade1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x1ade20: 0xe60100f8  swc1        $f1, 0xF8($s0)
    ctx->pc = 0x1ade20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1ade24: 0xa2000100  sb          $zero, 0x100($s0)
    ctx->pc = 0x1ade24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ade28: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1ade2c: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x1ADE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE34u);
    ctx->pc = 0x1ADE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE2Cu;
    // 0x1ade30: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x1ADE2Cu, 0x1ADE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE34u;
label_1ade34:
    // 0x1ade34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ade34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade38: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADE38u;
    {
        const bool branch_taken_0x1ade38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ade38) {
            ctx->pc = 0x1ADE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADE38u;
            // 0x1ade3c: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADE58u;
            goto label_1ade58;
        }
    }
    ctx->pc = 0x1ADE40u;
    // 0x1ade40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ade40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ade44: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1ade48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ade48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ade4c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ADE4Cu;
    {
        const bool branch_taken_0x1ade4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE4Cu;
        // 0x1ade50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade4c) {
            ctx->pc = 0x1ADEB8u;
            goto label_1adeb8;
        }
    }
    ctx->pc = 0x1ADE54u;
    // 0x1ade54: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ade54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1ade58:
    // 0x1ade58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ade5c: 0x24458658  addiu       $a1, $v0, -0x79A8
    ctx->pc = 0x1ade5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x1ade60: 0x260600bc  addiu       $a2, $s0, 0xBC
    ctx->pc = 0x1ade60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x1ade64: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1ade64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1ade68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade6c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1ade6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ade70:
    // 0x1ade70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ade70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ade74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ade78: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1ade7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ade7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ade80: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ADE80u;
    {
        const bool branch_taken_0x1ade80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE80u;
        // 0x1ade84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade80) {
            ctx->pc = 0x1ADE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade70;
        }
    }
    ctx->pc = 0x1ADE88u;
    // 0x1ade88: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ade8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ade8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ade90:
    // 0x1ade90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ade90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ade94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ade94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ade98: 0x0  nop
    ctx->pc = 0x1ade98u;
    // NOP
    // 0x1ade9c: 0x0  nop
    ctx->pc = 0x1ade9cu;
    // NOP
    // 0x1adea0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ADEA0u;
    {
        const bool branch_taken_0x1adea0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEA0u;
        // 0x1adea4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adea0) {
            ctx->pc = 0x1ADE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade90;
        }
    }
    ctx->pc = 0x1ADEA8u;
    // 0x1adea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adeac: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1ADEACu;
    SET_GPR_U32(ctx, 31, 0x1ADEB4u);
    ctx->pc = 0x1ADEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEACu;
    // 0x1adeb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1ADEACu, 0x1ADEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEB4u;
label_1adeb4:
    // 0x1adeb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1adeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adeb8:
    // 0x1adeb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1adeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEC0u;
        // 0x1adec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADEC8u;
}
