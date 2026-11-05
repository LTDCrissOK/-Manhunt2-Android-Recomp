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

// Function: sub_00176DD0
// Address: 0x176dd0 - 0x176e68
void sub_00176DD0_0x176dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176DD0_0x176dd0");
#endif

    switch (ctx->pc) {
        case 0x176dd0u: goto label_176dd0;
        case 0x176dd4u: goto label_176dd4;
        case 0x176dd8u: goto label_176dd8;
        case 0x176ddcu: goto label_176ddc;
        case 0x176de0u: goto label_176de0;
        case 0x176de4u: goto label_176de4;
        case 0x176de8u: goto label_176de8;
        case 0x176decu: goto label_176dec;
        case 0x176df0u: goto label_176df0;
        case 0x176df4u: goto label_176df4;
        case 0x176df8u: goto label_176df8;
        case 0x176dfcu: goto label_176dfc;
        case 0x176e00u: goto label_176e00;
        case 0x176e04u: goto label_176e04;
        case 0x176e08u: goto label_176e08;
        case 0x176e0cu: goto label_176e0c;
        case 0x176e10u: goto label_176e10;
        case 0x176e14u: goto label_176e14;
        case 0x176e18u: goto label_176e18;
        case 0x176e1cu: goto label_176e1c;
        case 0x176e20u: goto label_176e20;
        case 0x176e24u: goto label_176e24;
        case 0x176e28u: goto label_176e28;
        case 0x176e2cu: goto label_176e2c;
        case 0x176e30u: goto label_176e30;
        case 0x176e34u: goto label_176e34;
        case 0x176e38u: goto label_176e38;
        case 0x176e3cu: goto label_176e3c;
        case 0x176e40u: goto label_176e40;
        case 0x176e44u: goto label_176e44;
        case 0x176e48u: goto label_176e48;
        case 0x176e4cu: goto label_176e4c;
        case 0x176e50u: goto label_176e50;
        case 0x176e54u: goto label_176e54;
        case 0x176e58u: goto label_176e58;
        case 0x176e5cu: goto label_176e5c;
        case 0x176e60u: goto label_176e60;
        case 0x176e64u: goto label_176e64;
        default: break;
    }

    ctx->pc = 0x176dd0u;

label_176dd0:
    // 0x176dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176dd4:
    // 0x176dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176dd8:
    // 0x176dd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176ddc:
    // 0x176ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176de0:
    // 0x176de0: 0xc04f9a4  jal         func_13E690
label_176de4:
    if (ctx->pc == 0x176DE4u) {
        ctx->pc = 0x176DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DE0u;
        // 0x176de4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DE8u;
        goto label_176de8;
    }
    ctx->pc = 0x176DE0u;
    SET_GPR_U32(ctx, 31, 0x176DE8u);
    ctx->pc = 0x176DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DE0u;
    // 0x176de4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176DE0u, 0x176DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DE8u;
label_176de8:
    // 0x176de8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x176de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_176dec:
    // 0x176dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176df0:
    // 0x176df0: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_176df4:
    // 0x176df4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176df8:
    // 0x176df8: 0xc04f8fc  jal         func_13E3F0
label_176dfc:
    if (ctx->pc == 0x176DFCu) {
        ctx->pc = 0x176DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DF8u;
        // 0x176dfc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E00u;
        goto label_176e00;
    }
    ctx->pc = 0x176DF8u;
    SET_GPR_U32(ctx, 31, 0x176E00u);
    ctx->pc = 0x176DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DF8u;
    // 0x176dfc: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176DF8u, 0x176E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E00u;
label_176e00:
    // 0x176e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176e04:
    // 0x176e04: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x176e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_176e08:
    // 0x176e08: 0xc0461e8  jal         func_1187A0
label_176e0c:
    if (ctx->pc == 0x176E0Cu) {
        ctx->pc = 0x176E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E08u;
        // 0x176e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E10u;
        goto label_176e10;
    }
    ctx->pc = 0x176E08u;
    SET_GPR_U32(ctx, 31, 0x176E10u);
    ctx->pc = 0x176E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E08u;
    // 0x176e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176E08u, 0x176E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E10u;
label_176e10:
    // 0x176e10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_176e14:
    // 0x176e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176e18:
    // 0x176e18: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x176e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_176e1c:
    // 0x176e1c: 0xc046290  jal         func_118A40
label_176e20:
    if (ctx->pc == 0x176E20u) {
        ctx->pc = 0x176E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E1Cu;
        // 0x176e20: 0xc60c00dc  lwc1        $f12, 0xDC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E24u;
        goto label_176e24;
    }
    ctx->pc = 0x176E1Cu;
    SET_GPR_U32(ctx, 31, 0x176E24u);
    ctx->pc = 0x176E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E1Cu;
    // 0x176e20: 0xc60c00dc  lwc1        $f12, 0xDC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176E1Cu, 0x176E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E24u;
label_176e24:
    // 0x176e24: 0xc05a63a  jal         func_1698E8
label_176e28:
    if (ctx->pc == 0x176E28u) {
        ctx->pc = 0x176E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E24u;
        // 0x176e28: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E2Cu;
        goto label_176e2c;
    }
    ctx->pc = 0x176E24u;
    SET_GPR_U32(ctx, 31, 0x176E2Cu);
    ctx->pc = 0x176E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E24u;
    // 0x176e28: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698E8u, 0x176E24u, 0x176E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E2Cu;
label_176e2c:
    // 0x176e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176e30:
    // 0x176e30: 0xc046256  jal         func_118958
label_176e34:
    if (ctx->pc == 0x176E34u) {
        ctx->pc = 0x176E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E30u;
        // 0x176e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E38u;
        goto label_176e38;
    }
    ctx->pc = 0x176E30u;
    SET_GPR_U32(ctx, 31, 0x176E38u);
    ctx->pc = 0x176E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E30u;
    // 0x176e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x176E30u, 0x176E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E38u;
label_176e38:
    // 0x176e38: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176e3c:
    // 0x176e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176e40:
    // 0x176e40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176e44:
    // 0x176e44: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176e48:
    // 0x176e48: 0x40f809  jalr        $v0
label_176e4c:
    if (ctx->pc == 0x176E4Cu) {
        ctx->pc = 0x176E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E48u;
        // 0x176e4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E50u;
        goto label_176e50;
    }
    ctx->pc = 0x176E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176E50u);
        ctx->pc = 0x176E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E48u;
        // 0x176e4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E48u, 0x176E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176E50u;
label_176e50:
    // 0x176e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176e54:
    // 0x176e54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176e58:
    // 0x176e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176e5c:
    // 0x176e5c: 0x3e00008  jr          $ra
label_176e60:
    if (ctx->pc == 0x176E60u) {
        ctx->pc = 0x176E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E5Cu;
        // 0x176e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E64u;
        goto label_176e64;
    }
    ctx->pc = 0x176E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E5Cu;
        // 0x176e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176E64u;
label_176e64:
    // 0x176e64: 0x0  nop
    ctx->pc = 0x176e64u;
    // NOP
    ctx->pc = 0x176e68u;
}
