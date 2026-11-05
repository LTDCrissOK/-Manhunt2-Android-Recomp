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

// Function: sub_00176BC8
// Address: 0x176bc8 - 0x176c78
void sub_00176BC8_0x176bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176BC8_0x176bc8");
#endif

    switch (ctx->pc) {
        case 0x176bc8u: goto label_176bc8;
        case 0x176bccu: goto label_176bcc;
        case 0x176bd0u: goto label_176bd0;
        case 0x176bd4u: goto label_176bd4;
        case 0x176bd8u: goto label_176bd8;
        case 0x176bdcu: goto label_176bdc;
        case 0x176be0u: goto label_176be0;
        case 0x176be4u: goto label_176be4;
        case 0x176be8u: goto label_176be8;
        case 0x176becu: goto label_176bec;
        case 0x176bf0u: goto label_176bf0;
        case 0x176bf4u: goto label_176bf4;
        case 0x176bf8u: goto label_176bf8;
        case 0x176bfcu: goto label_176bfc;
        case 0x176c00u: goto label_176c00;
        case 0x176c04u: goto label_176c04;
        case 0x176c08u: goto label_176c08;
        case 0x176c0cu: goto label_176c0c;
        case 0x176c10u: goto label_176c10;
        case 0x176c14u: goto label_176c14;
        case 0x176c18u: goto label_176c18;
        case 0x176c1cu: goto label_176c1c;
        case 0x176c20u: goto label_176c20;
        case 0x176c24u: goto label_176c24;
        case 0x176c28u: goto label_176c28;
        case 0x176c2cu: goto label_176c2c;
        case 0x176c30u: goto label_176c30;
        case 0x176c34u: goto label_176c34;
        case 0x176c38u: goto label_176c38;
        case 0x176c3cu: goto label_176c3c;
        case 0x176c40u: goto label_176c40;
        case 0x176c44u: goto label_176c44;
        case 0x176c48u: goto label_176c48;
        case 0x176c4cu: goto label_176c4c;
        case 0x176c50u: goto label_176c50;
        case 0x176c54u: goto label_176c54;
        case 0x176c58u: goto label_176c58;
        case 0x176c5cu: goto label_176c5c;
        case 0x176c60u: goto label_176c60;
        case 0x176c64u: goto label_176c64;
        case 0x176c68u: goto label_176c68;
        case 0x176c6cu: goto label_176c6c;
        case 0x176c70u: goto label_176c70;
        case 0x176c74u: goto label_176c74;
        default: break;
    }

    ctx->pc = 0x176bc8u;

label_176bc8:
    // 0x176bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176bcc:
    // 0x176bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176bd0:
    // 0x176bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176bd4:
    // 0x176bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x176bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_176bd8:
    // 0x176bd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176bdc:
    // 0x176bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176be0:
    // 0x176be0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x176be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_176be4:
    // 0x176be4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x176be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_176be8:
    // 0x176be8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x176be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_176bec:
    // 0x176bec: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_176bf0:
    if (ctx->pc == 0x176BF0u) {
        ctx->pc = 0x176BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BECu;
        // 0x176bf0: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BF4u;
        goto label_176bf4;
    }
    ctx->pc = 0x176BECu;
    {
        const bool branch_taken_0x176bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x176BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BECu;
        // 0x176bf0: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bec) {
            ctx->pc = 0x176C04u;
            goto label_176c04;
        }
    }
    ctx->pc = 0x176BF4u;
label_176bf4:
    // 0x176bf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176bf8:
    // 0x176bf8: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
label_176bfc:
    if (ctx->pc == 0x176BFCu) {
        ctx->pc = 0x176BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BF8u;
        // 0x176bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C00u;
        goto label_176c00;
    }
    ctx->pc = 0x176BF8u;
    {
        const bool branch_taken_0x176bf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x176BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BF8u;
        // 0x176bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bf8) {
            ctx->pc = 0x176C60u;
            goto label_176c60;
        }
    }
    ctx->pc = 0x176C00u;
label_176c00:
    // 0x176c00: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x176c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_176c04:
    // 0x176c04: 0xc04f9b8  jal         func_13E6E0
label_176c08:
    if (ctx->pc == 0x176C08u) {
        ctx->pc = 0x176C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C04u;
        // 0x176c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C0Cu;
        goto label_176c0c;
    }
    ctx->pc = 0x176C04u;
    SET_GPR_U32(ctx, 31, 0x176C0Cu);
    ctx->pc = 0x176C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C04u;
    // 0x176c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E6E0u, 0x176C04u, 0x176C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C0Cu;
label_176c0c:
    // 0x176c0c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_176c10:
    // 0x176c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176c14:
    // 0x176c14: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x176c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_176c18:
    // 0x176c18: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176c1c:
    // 0x176c1c: 0xc04f8fc  jal         func_13E3F0
label_176c20:
    if (ctx->pc == 0x176C20u) {
        ctx->pc = 0x176C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C1Cu;
        // 0x176c20: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C24u;
        goto label_176c24;
    }
    ctx->pc = 0x176C1Cu;
    SET_GPR_U32(ctx, 31, 0x176C24u);
    ctx->pc = 0x176C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C1Cu;
    // 0x176c20: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176C1Cu, 0x176C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C24u;
label_176c24:
    // 0x176c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x176c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176c28:
    // 0x176c28: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x176c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_176c2c:
    // 0x176c2c: 0xc0461e8  jal         func_1187A0
label_176c30:
    if (ctx->pc == 0x176C30u) {
        ctx->pc = 0x176C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C2Cu;
        // 0x176c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C34u;
        goto label_176c34;
    }
    ctx->pc = 0x176C2Cu;
    SET_GPR_U32(ctx, 31, 0x176C34u);
    ctx->pc = 0x176C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C2Cu;
    // 0x176c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176C2Cu, 0x176C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C34u;
label_176c34:
    // 0x176c34: 0xc62c00dc  lwc1        $f12, 0xDC($s1)
    ctx->pc = 0x176c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_176c38:
    // 0x176c38: 0xc046290  jal         func_118A40
label_176c3c:
    if (ctx->pc == 0x176C3Cu) {
        ctx->pc = 0x176C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C38u;
        // 0x176c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C40u;
        goto label_176c40;
    }
    ctx->pc = 0x176C38u;
    SET_GPR_U32(ctx, 31, 0x176C40u);
    ctx->pc = 0x176C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C38u;
    // 0x176c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176C38u, 0x176C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C40u;
label_176c40:
    // 0x176c40: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x176c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
label_176c44:
    // 0x176c44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176c48:
    // 0x176c48: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x176c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_176c4c:
    // 0x176c4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176c50:
    // 0x176c50: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176c54:
    // 0x176c54: 0x40f809  jalr        $v0
label_176c58:
    if (ctx->pc == 0x176C58u) {
        ctx->pc = 0x176C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C54u;
        // 0x176c58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C5Cu;
        goto label_176c5c;
    }
    ctx->pc = 0x176C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176C5Cu);
        ctx->pc = 0x176C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C54u;
        // 0x176c58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C54u, 0x176C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176C5Cu;
label_176c5c:
    // 0x176c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176c60:
    // 0x176c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176c64:
    // 0x176c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x176c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176c68:
    // 0x176c68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x176c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_176c6c:
    // 0x176c6c: 0x3e00008  jr          $ra
label_176c70:
    if (ctx->pc == 0x176C70u) {
        ctx->pc = 0x176C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C6Cu;
        // 0x176c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C74u;
        goto label_176c74;
    }
    ctx->pc = 0x176C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C6Cu;
        // 0x176c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176C74u;
label_176c74:
    // 0x176c74: 0x0  nop
    ctx->pc = 0x176c74u;
    // NOP
    ctx->pc = 0x176c78u;
}
