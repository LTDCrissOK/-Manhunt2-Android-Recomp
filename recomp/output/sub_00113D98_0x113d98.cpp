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

// Function: sub_00113D98
// Address: 0x113d98 - 0x113e60
void sub_00113D98_0x113d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113D98_0x113d98");
#endif

    switch (ctx->pc) {
        case 0x113d98u: goto label_113d98;
        case 0x113d9cu: goto label_113d9c;
        case 0x113da0u: goto label_113da0;
        case 0x113da4u: goto label_113da4;
        case 0x113da8u: goto label_113da8;
        case 0x113dacu: goto label_113dac;
        case 0x113db0u: goto label_113db0;
        case 0x113db4u: goto label_113db4;
        case 0x113db8u: goto label_113db8;
        case 0x113dbcu: goto label_113dbc;
        case 0x113dc0u: goto label_113dc0;
        case 0x113dc4u: goto label_113dc4;
        case 0x113dc8u: goto label_113dc8;
        case 0x113dccu: goto label_113dcc;
        case 0x113dd0u: goto label_113dd0;
        case 0x113dd4u: goto label_113dd4;
        case 0x113dd8u: goto label_113dd8;
        case 0x113ddcu: goto label_113ddc;
        case 0x113de0u: goto label_113de0;
        case 0x113de4u: goto label_113de4;
        case 0x113de8u: goto label_113de8;
        case 0x113decu: goto label_113dec;
        case 0x113df0u: goto label_113df0;
        case 0x113df4u: goto label_113df4;
        case 0x113df8u: goto label_113df8;
        case 0x113dfcu: goto label_113dfc;
        case 0x113e00u: goto label_113e00;
        case 0x113e04u: goto label_113e04;
        case 0x113e08u: goto label_113e08;
        case 0x113e0cu: goto label_113e0c;
        case 0x113e10u: goto label_113e10;
        case 0x113e14u: goto label_113e14;
        case 0x113e18u: goto label_113e18;
        case 0x113e1cu: goto label_113e1c;
        case 0x113e20u: goto label_113e20;
        case 0x113e24u: goto label_113e24;
        case 0x113e28u: goto label_113e28;
        case 0x113e2cu: goto label_113e2c;
        case 0x113e30u: goto label_113e30;
        case 0x113e34u: goto label_113e34;
        case 0x113e38u: goto label_113e38;
        case 0x113e3cu: goto label_113e3c;
        case 0x113e40u: goto label_113e40;
        case 0x113e44u: goto label_113e44;
        case 0x113e48u: goto label_113e48;
        case 0x113e4cu: goto label_113e4c;
        case 0x113e50u: goto label_113e50;
        case 0x113e54u: goto label_113e54;
        case 0x113e58u: goto label_113e58;
        case 0x113e5cu: goto label_113e5c;
        default: break;
    }

    ctx->pc = 0x113d98u;

label_113d98:
    // 0x113d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_113d9c:
    // 0x113d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_113da0:
    // 0x113da0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_113da4:
    // 0x113da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113da8:
    // 0x113da8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_113dac:
    // 0x113dac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x113dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_113db0:
    // 0x113db0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_113db4:
    // 0x113db4: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_113db8:
    if (ctx->pc == 0x113DB8u) {
        ctx->pc = 0x113DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DB4u;
        // 0x113db8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113DBCu;
        goto label_113dbc;
    }
    ctx->pc = 0x113DB4u;
    {
        const bool branch_taken_0x113db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113db4) {
            ctx->pc = 0x113DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DB4u;
            // 0x113db8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E48u;
            goto label_113e48;
        }
    }
    ctx->pc = 0x113DBCu;
label_113dbc:
    // 0x113dbc: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x113dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_113dc0:
    // 0x113dc0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_113dc4:
    if (ctx->pc == 0x113DC4u) {
        ctx->pc = 0x113DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DC0u;
        // 0x113dc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113DC8u;
        goto label_113dc8;
    }
    ctx->pc = 0x113DC0u;
    {
        const bool branch_taken_0x113dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113dc0) {
            ctx->pc = 0x113DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DC0u;
            // 0x113dc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E48u;
            goto label_113e48;
        }
    }
    ctx->pc = 0x113DC8u;
label_113dc8:
    // 0x113dc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x113dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_113dcc:
    // 0x113dcc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_113dd0:
    if (ctx->pc == 0x113DD0u) {
        ctx->pc = 0x113DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DCCu;
        // 0x113dd0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113DD4u;
        goto label_113dd4;
    }
    ctx->pc = 0x113DCCu;
    {
        const bool branch_taken_0x113dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DCCu;
        // 0x113dd0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113dcc) {
            ctx->pc = 0x113E44u;
            goto label_113e44;
        }
    }
    ctx->pc = 0x113DD4u;
label_113dd4:
    // 0x113dd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_113dd8:
    // 0x113dd8: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x113dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_113ddc:
    // 0x113ddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_113de0:
    // 0x113de0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x113de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_113de4:
    // 0x113de4: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x113de4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_113de8:
    // 0x113de8: 0x52200017  beql        $s1, $zero, . + 4 + (0x17 << 2)
label_113dec:
    if (ctx->pc == 0x113DECu) {
        ctx->pc = 0x113DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DE8u;
        // 0x113dec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113DF0u;
        goto label_113df0;
    }
    ctx->pc = 0x113DE8u;
    {
        const bool branch_taken_0x113de8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x113de8) {
            ctx->pc = 0x113DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DE8u;
            // 0x113dec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E48u;
            goto label_113e48;
        }
    }
    ctx->pc = 0x113DF0u;
label_113df0:
    // 0x113df0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x113df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_113df4:
    // 0x113df4: 0xc043eba  jal         func_10FAE8
label_113df8:
    if (ctx->pc == 0x113DF8u) {
        ctx->pc = 0x113DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DF4u;
        // 0x113df8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113DFCu;
        goto label_113dfc;
    }
    ctx->pc = 0x113DF4u;
    SET_GPR_U32(ctx, 31, 0x113DFCu);
    ctx->pc = 0x113DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DF4u;
    // 0x113df8: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAE8u, 0x113DF4u, 0x113DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DFCu;
label_113dfc:
    // 0x113dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113e00:
    // 0x113e00: 0xc04421c  jal         func_110870
label_113e04:
    if (ctx->pc == 0x113E04u) {
        ctx->pc = 0x113E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E00u;
        // 0x113e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E08u;
        goto label_113e08;
    }
    ctx->pc = 0x113E00u;
    SET_GPR_U32(ctx, 31, 0x113E08u);
    ctx->pc = 0x113E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E00u;
    // 0x113e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110870u, 0x113E00u, 0x113E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E08u;
label_113e08:
    // 0x113e08: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x113e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_113e0c:
    // 0x113e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113e10:
    // 0x113e10: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x113e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_113e14:
    // 0x113e14: 0x40f809  jalr        $v0
label_113e18:
    if (ctx->pc == 0x113E18u) {
        ctx->pc = 0x113E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E14u;
        // 0x113e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E1Cu;
        goto label_113e1c;
    }
    ctx->pc = 0x113E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x113E1Cu);
        ctx->pc = 0x113E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E14u;
        // 0x113e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E14u, 0x113E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113E1Cu;
label_113e1c:
    // 0x113e1c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x113e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_113e20:
    // 0x113e20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_113e24:
    if (ctx->pc == 0x113E24u) {
        ctx->pc = 0x113E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E20u;
        // 0x113e24: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E28u;
        goto label_113e28;
    }
    ctx->pc = 0x113E20u;
    {
        const bool branch_taken_0x113e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E20u;
        // 0x113e24: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e20) {
            ctx->pc = 0x113E44u;
            goto label_113e44;
        }
    }
    ctx->pc = 0x113E28u;
label_113e28:
    // 0x113e28: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x113e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_113e2c:
    // 0x113e2c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_113e30:
    // 0x113e30: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_113e34:
    if (ctx->pc == 0x113E34u) {
        ctx->pc = 0x113E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E30u;
        // 0x113e34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E38u;
        goto label_113e38;
    }
    ctx->pc = 0x113E30u;
    {
        const bool branch_taken_0x113e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113e30) {
            ctx->pc = 0x113E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113E30u;
            // 0x113e34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E48u;
            goto label_113e48;
        }
    }
    ctx->pc = 0x113E38u;
label_113e38:
    // 0x113e38: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x113e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_113e3c:
    // 0x113e3c: 0xc0441f0  jal         func_1107C0
label_113e40:
    if (ctx->pc == 0x113E40u) {
        ctx->pc = 0x113E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E3Cu;
        // 0x113e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E44u;
        goto label_113e44;
    }
    ctx->pc = 0x113E3Cu;
    SET_GPR_U32(ctx, 31, 0x113E44u);
    ctx->pc = 0x113E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E3Cu;
    // 0x113e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107C0u, 0x113E3Cu, 0x113E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E44u;
label_113e44:
    // 0x113e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113e48:
    // 0x113e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_113e4c:
    // 0x113e4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_113e50:
    // 0x113e50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x113e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_113e54:
    // 0x113e54: 0x3e00008  jr          $ra
label_113e58:
    if (ctx->pc == 0x113E58u) {
        ctx->pc = 0x113E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E54u;
        // 0x113e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E5Cu;
        goto label_113e5c;
    }
    ctx->pc = 0x113E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E54u;
        // 0x113e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E5Cu;
label_113e5c:
    // 0x113e5c: 0x0  nop
    ctx->pc = 0x113e5cu;
    // NOP
    ctx->pc = 0x113e60u;
}
