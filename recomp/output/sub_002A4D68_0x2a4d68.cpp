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

// Function: sub_002A4D68
// Address: 0x2a4d68 - 0x2a51f8
void sub_002A4D68_0x2a4d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4D68_0x2a4d68");
#endif

    switch (ctx->pc) {
        case 0x2a4dbcu: goto label_2a4dbc;
        case 0x2a4dd0u: goto label_2a4dd0;
        case 0x2a4ddcu: goto label_2a4ddc;
        case 0x2a4df0u: goto label_2a4df0;
        case 0x2a4dfcu: goto label_2a4dfc;
        case 0x2a4e08u: goto label_2a4e08;
        case 0x2a4e14u: goto label_2a4e14;
        case 0x2a4e24u: goto label_2a4e24;
        case 0x2a4e38u: goto label_2a4e38;
        case 0x2a4e50u: goto label_2a4e50;
        case 0x2a4e64u: goto label_2a4e64;
        case 0x2a4e7cu: goto label_2a4e7c;
        case 0x2a4e9cu: goto label_2a4e9c;
        case 0x2a4eb4u: goto label_2a4eb4;
        case 0x2a4ed4u: goto label_2a4ed4;
        case 0x2a4eecu: goto label_2a4eec;
        case 0x2a4f0cu: goto label_2a4f0c;
        case 0x2a4f24u: goto label_2a4f24;
        case 0x2a4f38u: goto label_2a4f38;
        case 0x2a4f4cu: goto label_2a4f4c;
        case 0x2a4f58u: goto label_2a4f58;
        case 0x2a4f74u: goto label_2a4f74;
        case 0x2a4f88u: goto label_2a4f88;
        case 0x2a4f9cu: goto label_2a4f9c;
        case 0x2a4fb0u: goto label_2a4fb0;
        case 0x2a4fc8u: goto label_2a4fc8;
        case 0x2a4ff4u: goto label_2a4ff4;
        case 0x2a501cu: goto label_2a501c;
        case 0x2a5044u: goto label_2a5044;
        case 0x2a505cu: goto label_2a505c;
        case 0x2a5070u: goto label_2a5070;
        case 0x2a5094u: goto label_2a5094;
        case 0x2a50a8u: goto label_2a50a8;
        case 0x2a50ccu: goto label_2a50cc;
        case 0x2a50e0u: goto label_2a50e0;
        case 0x2a5104u: goto label_2a5104;
        case 0x2a5118u: goto label_2a5118;
        case 0x2a513cu: goto label_2a513c;
        case 0x2a5150u: goto label_2a5150;
        case 0x2a5174u: goto label_2a5174;
        case 0x2a5188u: goto label_2a5188;
        case 0x2a5194u: goto label_2a5194;
        case 0x2a51a0u: goto label_2a51a0;
        case 0x2a51c8u: goto label_2a51c8;
        default: break;
    }

    ctx->pc = 0x2a4d68u;

    // 0x2a4d68: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2a4d6c: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2a4d70: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2a4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2a4d74: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2a4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2a4d78: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2a4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2a4d7c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2a4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2a4d80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a4d80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d84: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2a4d88: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2a4d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4d8c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2a4d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2a4d90: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2a4d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2a4d94: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2a4d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2a4d98: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2a4d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2a4d9c: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2a4d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2a4da0: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2a4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2a4da4: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2a4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a4da8: 0x8c820a80  lw          $v0, 0xA80($a0)
    ctx->pc = 0x2a4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2688)));
    // 0x2a4dac: 0xc00013  mtlo        $a2
    ctx->pc = 0x2a4dacu;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x2a4db0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4db4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x2A4DB4u;
    SET_GPR_U32(ctx, 31, 0x2A4DBCu);
    ctx->pc = 0x2A4DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4DB4u;
    // 0x2a4db8: 0x70439000  madd        $s2, $v0, $v1 (Delay Slot)
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2A4DB4u, 0x2A4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DBCu;
label_2a4dbc:
    // 0x2a4dbc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4dc0: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2a4dc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4dc4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2a4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2a4dc8: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2A4DC8u;
    {
        const bool branch_taken_0x2a4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DC8u;
        // 0x2a4dcc: 0x27be0050  addiu       $fp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4dc8) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A4DD0u;
label_2a4dd0:
    // 0x2a4dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4dd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4DD4u;
    SET_GPR_U32(ctx, 31, 0x2A4DDCu);
    ctx->pc = 0x2A4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4DD4u;
    // 0x2a4dd8: 0x2465d670  addiu       $a1, $v1, -0x2990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4DD4u, 0x2A4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DDCu;
label_2a4ddc:
    // 0x2a4ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4de0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4DE0u;
    {
        const bool branch_taken_0x2a4de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DE0u;
        // 0x2a4de4: 0x3c060047  lui         $a2, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4de0) {
            ctx->pc = 0x2A4E18u;
            goto label_2a4e18;
        }
    }
    ctx->pc = 0x2A4DE8u;
    // 0x2a4de8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A4DE8u;
    SET_GPR_U32(ctx, 31, 0x2A4DF0u);
    ctx->pc = 0x2A4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4DE8u;
    // 0x2a4dec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A4DE8u, 0x2A4DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DF0u;
label_2a4df0:
    // 0x2a4df0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4df4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2A4DF4u;
    SET_GPR_U32(ctx, 31, 0x2A4DFCu);
    ctx->pc = 0x2A4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4DF4u;
    // 0x2a4df8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2A4DF4u, 0x2A4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DFCu;
label_2a4dfc:
    // 0x2a4dfc: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x2a4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x2a4e00: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2A4E00u;
    SET_GPR_U32(ctx, 31, 0x2A4E08u);
    ctx->pc = 0x2A4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E00u;
    // 0x2a4e04: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A4E00u, 0x2A4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E08u;
label_2a4e08:
    // 0x2a4e08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a4e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e0c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A4E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E14u);
    ctx->pc = 0x2A4E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E0Cu;
    // 0x2a4e10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A4E0Cu, 0x2A4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E14u;
label_2a4e14:
    // 0x2a4e14: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2a4e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_2a4e18:
    // 0x2a4e18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E24u);
    ctx->pc = 0x2A4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E1Cu;
    // 0x2a4e20: 0x24c5d678  addiu       $a1, $a2, -0x2988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4E1Cu, 0x2A4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E24u;
label_2a4e24:
    // 0x2a4e24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4E28u;
    {
        const bool branch_taken_0x2a4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E28u;
        // 0x2a4e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e28) {
            ctx->pc = 0x2A4E40u;
            goto label_2a4e40;
        }
    }
    ctx->pc = 0x2A4E30u;
    // 0x2a4e30: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A4E30u;
    SET_GPR_U32(ctx, 31, 0x2A4E38u);
    ctx->pc = 0x2A4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E30u;
    // 0x2a4e34: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A4E30u, 0x2A4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E38u;
label_2a4e38:
    // 0x2a4e38: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2a4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e3c: 0xe6400170  swc1        $f0, 0x170($s2)
    ctx->pc = 0x2a4e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 368), bits); }
label_2a4e40:
    // 0x2a4e40: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2a4e44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e48: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4E48u;
    SET_GPR_U32(ctx, 31, 0x2A4E50u);
    ctx->pc = 0x2A4E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E48u;
    // 0x2a4e4c: 0x2445d688  addiu       $a1, $v0, -0x2978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4E48u, 0x2A4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E50u;
label_2a4e50:
    // 0x2a4e50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4e54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4E54u;
    {
        const bool branch_taken_0x2a4e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E54u;
        // 0x2a4e58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e54) {
            ctx->pc = 0x2A4E6Cu;
            goto label_2a4e6c;
        }
    }
    ctx->pc = 0x2A4E5Cu;
    // 0x2a4e5c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A4E5Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E64u);
    ctx->pc = 0x2A4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E5Cu;
    // 0x2a4e60: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A4E5Cu, 0x2A4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E64u;
label_2a4e64:
    // 0x2a4e64: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a4e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e68: 0xe6400174  swc1        $f0, 0x174($s2)
    ctx->pc = 0x2a4e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 372), bits); }
label_2a4e6c:
    // 0x2a4e6c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2a4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2a4e70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4E74u;
    SET_GPR_U32(ctx, 31, 0x2A4E7Cu);
    ctx->pc = 0x2A4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E74u;
    // 0x2a4e78: 0x2465d698  addiu       $a1, $v1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4E74u, 0x2A4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E7Cu;
label_2a4e7c:
    // 0x2a4e7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4e80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4E80u;
    {
        const bool branch_taken_0x2a4e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E80u;
        // 0x2a4e84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e80) {
            ctx->pc = 0x2A4EA4u;
            goto label_2a4ea4;
        }
    }
    ctx->pc = 0x2A4E88u;
    // 0x2a4e88: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x2a4e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2a4e8c: 0x26460098  addiu       $a2, $s2, 0x98
    ctx->pc = 0x2a4e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x2a4e90: 0x264700c0  addiu       $a3, $s2, 0xC0
    ctx->pc = 0x2a4e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x2a4e94: 0xc09e254  jal         func_278950
    ctx->pc = 0x2A4E94u;
    SET_GPR_U32(ctx, 31, 0x2A4E9Cu);
    ctx->pc = 0x2A4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E94u;
    // 0x2a4e98: 0x264800b8  addiu       $t0, $s2, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278950u, 0x2A4E94u, 0x2A4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E9Cu;
label_2a4e9c:
    // 0x2a4e9c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2A4E9Cu;
    {
        const bool branch_taken_0x2a4e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E9Cu;
        // 0x2a4ea0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e9c) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A4EA4u;
label_2a4ea4:
    // 0x2a4ea4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a4ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a4ea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4eac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4EACu;
    SET_GPR_U32(ctx, 31, 0x2A4EB4u);
    ctx->pc = 0x2A4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EACu;
    // 0x2a4eb0: 0x24a5d6a0  addiu       $a1, $a1, -0x2960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4EACu, 0x2A4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EB4u;
label_2a4eb4:
    // 0x2a4eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4eb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4EB8u;
    {
        const bool branch_taken_0x2a4eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EB8u;
        // 0x2a4ebc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4eb8) {
            ctx->pc = 0x2A4EDCu;
            goto label_2a4edc;
        }
    }
    ctx->pc = 0x2A4EC0u;
    // 0x2a4ec0: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x2a4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x2a4ec4: 0x264600e8  addiu       $a2, $s2, 0xE8
    ctx->pc = 0x2a4ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
    // 0x2a4ec8: 0x26470110  addiu       $a3, $s2, 0x110
    ctx->pc = 0x2a4ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x2a4ecc: 0xc09e254  jal         func_278950
    ctx->pc = 0x2A4ECCu;
    SET_GPR_U32(ctx, 31, 0x2A4ED4u);
    ctx->pc = 0x2A4ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4ECCu;
    // 0x2a4ed0: 0x26480108  addiu       $t0, $s2, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278950u, 0x2A4ECCu, 0x2A4ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4ED4u;
label_2a4ed4:
    // 0x2a4ed4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2A4ED4u;
    {
        const bool branch_taken_0x2a4ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4ED4u;
        // 0x2a4ed8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ed4) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A4EDCu;
label_2a4edc:
    // 0x2a4edc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a4edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a4ee0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ee4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4EE4u;
    SET_GPR_U32(ctx, 31, 0x2A4EECu);
    ctx->pc = 0x2A4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4EE4u;
    // 0x2a4ee8: 0x24a5d6a8  addiu       $a1, $a1, -0x2958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4EE4u, 0x2A4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EECu;
label_2a4eec:
    // 0x2a4eec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4ef0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4EF0u;
    {
        const bool branch_taken_0x2a4ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EF0u;
        // 0x2a4ef4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ef0) {
            ctx->pc = 0x2A4F14u;
            goto label_2a4f14;
        }
    }
    ctx->pc = 0x2A4EF8u;
    // 0x2a4ef8: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x2a4ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x2a4efc: 0x26460138  addiu       $a2, $s2, 0x138
    ctx->pc = 0x2a4efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 312));
    // 0x2a4f00: 0x26470160  addiu       $a3, $s2, 0x160
    ctx->pc = 0x2a4f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x2a4f04: 0xc09e254  jal         func_278950
    ctx->pc = 0x2A4F04u;
    SET_GPR_U32(ctx, 31, 0x2A4F0Cu);
    ctx->pc = 0x2A4F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F04u;
    // 0x2a4f08: 0x26480158  addiu       $t0, $s2, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278950u, 0x2A4F04u, 0x2A4F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F0Cu;
label_2a4f0c:
    // 0x2a4f0c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2A4F0Cu;
    {
        const bool branch_taken_0x2a4f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F0Cu;
        // 0x2a4f10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f0c) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A4F14u;
label_2a4f14:
    // 0x2a4f14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a4f18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A4F24u);
    ctx->pc = 0x2A4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F1Cu;
    // 0x2a4f20: 0x24a5d6b0  addiu       $a1, $a1, -0x2950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4F1Cu, 0x2A4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F24u;
label_2a4f24:
    // 0x2a4f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4f28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A4F28u;
    {
        const bool branch_taken_0x2a4f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F28u;
        // 0x2a4f2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f28) {
            ctx->pc = 0x2A4F7Cu;
            goto label_2a4f7c;
        }
    }
    ctx->pc = 0x2A4F30u;
    // 0x2a4f30: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A4F30u;
    SET_GPR_U32(ctx, 31, 0x2A4F38u);
    ctx->pc = 0x2A4F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F30u;
    // 0x2a4f34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A4F30u, 0x2A4F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F38u;
label_2a4f38:
    // 0x2a4f38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a4f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f40: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2a4f44: 0xc09e302  jal         func_278C08
    ctx->pc = 0x2A4F44u;
    SET_GPR_U32(ctx, 31, 0x2A4F4Cu);
    ctx->pc = 0x2A4F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F44u;
    // 0x2a4f48: 0x27a7006c  addiu       $a3, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278C08u, 0x2A4F44u, 0x2A4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F4Cu;
label_2a4f4c:
    // 0x2a4f4c: 0x2644017c  addiu       $a0, $s2, 0x17C
    ctx->pc = 0x2a4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
    // 0x2a4f50: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2A4F50u;
    SET_GPR_U32(ctx, 31, 0x2A4F58u);
    ctx->pc = 0x2A4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F50u;
    // 0x2a4f54: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A4F50u, 0x2A4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F58u;
label_2a4f58:
    // 0x2a4f58: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2a4f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a4f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f60: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4f64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4f68: 0xe6410190  swc1        $f1, 0x190($s2)
    ctx->pc = 0x2a4f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 400), bits); }
    // 0x2a4f6c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A4F6Cu;
    SET_GPR_U32(ctx, 31, 0x2A4F74u);
    ctx->pc = 0x2A4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F6Cu;
    // 0x2a4f70: 0xe6400194  swc1        $f0, 0x194($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A4F6Cu, 0x2A4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F74u;
label_2a4f74:
    // 0x2a4f74: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2A4F74u;
    {
        const bool branch_taken_0x2a4f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F74u;
        // 0x2a4f78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f74) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A4F7Cu;
label_2a4f7c:
    // 0x2a4f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4F80u;
    SET_GPR_U32(ctx, 31, 0x2A4F88u);
    ctx->pc = 0x2A4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F80u;
    // 0x2a4f84: 0x24a5d6c0  addiu       $a1, $a1, -0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4F80u, 0x2A4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F88u;
label_2a4f88:
    // 0x2a4f88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4F8Cu;
    {
        const bool branch_taken_0x2a4f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F8Cu;
        // 0x2a4f90: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f8c) {
            ctx->pc = 0x2A4FA4u;
            goto label_2a4fa4;
        }
    }
    ctx->pc = 0x2A4F94u;
    // 0x2a4f94: 0xc0a92d0  jal         func_2A4B40
    ctx->pc = 0x2A4F94u;
    SET_GPR_U32(ctx, 31, 0x2A4F9Cu);
    ctx->pc = 0x2A4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4F94u;
    // 0x2a4f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B40u, 0x2A4F94u, 0x2A4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F9Cu;
label_2a4f9c:
    // 0x2a4f9c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2A4F9Cu;
    {
        const bool branch_taken_0x2a4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F9Cu;
        // 0x2a4fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f9c) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A4FA4u;
label_2a4fa4:
    // 0x2a4fa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a4fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fa8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A4FA8u;
    SET_GPR_U32(ctx, 31, 0x2A4FB0u);
    ctx->pc = 0x2A4FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FA8u;
    // 0x2a4fac: 0x24a5d6d0  addiu       $a1, $a1, -0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A4FA8u, 0x2A4FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FB0u;
label_2a4fb0:
    // 0x2a4fb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4fb4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A4FB4u;
    {
        const bool branch_taken_0x2a4fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FB4u;
        // 0x2a4fb8: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fb4) {
            ctx->pc = 0x2A504Cu;
            goto label_2a504c;
        }
    }
    ctx->pc = 0x2A4FBCu;
    // 0x2a4fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fc0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A4FC0u;
    SET_GPR_U32(ctx, 31, 0x2A4FC8u);
    ctx->pc = 0x2A4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FC0u;
    // 0x2a4fc4: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A4FC0u, 0x2A4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FC8u;
label_2a4fc8:
    // 0x2a4fc8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2a4fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4fcc: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2a4fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4fd0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2a4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2a4fd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fd8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2a4fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2a4fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fe0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2a4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2a4fe4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a4fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fe8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2a4fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2a4fec: 0xc09e45a  jal         func_279168
    ctx->pc = 0x2A4FECu;
    SET_GPR_U32(ctx, 31, 0x2A4FF4u);
    ctx->pc = 0x2A4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4FECu;
    // 0x2a4ff0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x2A4FECu, 0x2A4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4FF4u;
label_2a4ff4:
    // 0x2a4ff4: 0x8e5001ac  lw          $s0, 0x1AC($s2)
    ctx->pc = 0x2a4ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x2a4ff8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A4FF8u;
    {
        const bool branch_taken_0x2a4ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FF8u;
        // 0x2a4ffc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ff8) {
            ctx->pc = 0x2A503Cu;
            goto label_2a503c;
        }
    }
    ctx->pc = 0x2A5000u;
    // 0x2a5000: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a5004: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2a5004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a5008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5008u;
    {
        const bool branch_taken_0x2a5008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5008u;
        // 0x2a500c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5008) {
            ctx->pc = 0x2A5038u;
            goto label_2a5038;
        }
    }
    ctx->pc = 0x2A5010u;
    // 0x2a5010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a5010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5014: 0xc0a5ca2  jal         func_297288
    ctx->pc = 0x2A5014u;
    SET_GPR_U32(ctx, 31, 0x2A501Cu);
    ctx->pc = 0x2A5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5014u;
    // 0x2a5018: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297288u, 0x2A5014u, 0x2A501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A501Cu;
label_2a501c:
    // 0x2a501c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2a501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a5020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5024: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a5028: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x2a5028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x2a502c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a5030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a5034: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2a5034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2a5038:
    // 0x2a5038: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a5038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a503c:
    // 0x2a503c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A503Cu;
    SET_GPR_U32(ctx, 31, 0x2A5044u);
    ctx->pc = 0x2A5040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A503Cu;
    // 0x2a5040: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A503Cu, 0x2A5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5044u;
label_2a5044:
    // 0x2a5044: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2A5044u;
    {
        const bool branch_taken_0x2a5044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5044u;
        // 0x2a5048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5044) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A504Cu;
label_2a504c:
    // 0x2a504c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a504cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a5050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5054: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A5054u;
    SET_GPR_U32(ctx, 31, 0x2A505Cu);
    ctx->pc = 0x2A5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5054u;
    // 0x2a5058: 0x24a5d6e0  addiu       $a1, $a1, -0x2920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A5054u, 0x2A505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A505Cu;
label_2a505c:
    // 0x2a505c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5060: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5060u;
    {
        const bool branch_taken_0x2a5060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5060u;
        // 0x2a5064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5060) {
            ctx->pc = 0x2A5084u;
            goto label_2a5084;
        }
    }
    ctx->pc = 0x2A5068u;
    // 0x2a5068: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A5068u;
    SET_GPR_U32(ctx, 31, 0x2A5070u);
    ctx->pc = 0x2A506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5068u;
    // 0x2a506c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A5068u, 0x2A5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5070u;
label_2a5070:
    // 0x2a5070: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x2a5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x2a5074: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A5074u;
    {
        const bool branch_taken_0x2a5074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5074u;
        // 0x2a5078: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5074) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A507Cu;
    // 0x2a507c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2A507Cu;
    {
        const bool branch_taken_0x2a507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A507Cu;
        // 0x2a5080: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a507c) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A5084u;
label_2a5084:
    // 0x2a5084: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a5084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a5088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a508c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A508Cu;
    SET_GPR_U32(ctx, 31, 0x2A5094u);
    ctx->pc = 0x2A5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A508Cu;
    // 0x2a5090: 0x24a5d6f8  addiu       $a1, $a1, -0x2908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A508Cu, 0x2A5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5094u;
label_2a5094:
    // 0x2a5094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5098: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5098u;
    {
        const bool branch_taken_0x2a5098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5098u;
        // 0x2a509c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5098) {
            ctx->pc = 0x2A50BCu;
            goto label_2a50bc;
        }
    }
    ctx->pc = 0x2A50A0u;
    // 0x2a50a0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A50A0u;
    SET_GPR_U32(ctx, 31, 0x2A50A8u);
    ctx->pc = 0x2A50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50A0u;
    // 0x2a50a4: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A50A0u, 0x2A50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50A8u;
label_2a50a8:
    // 0x2a50a8: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x2a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x2a50ac: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A50ACu;
    {
        const bool branch_taken_0x2a50ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50ACu;
        // 0x2a50b0: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50ac) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A50B4u;
    // 0x2a50b4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2A50B4u;
    {
        const bool branch_taken_0x2a50b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50B4u;
        // 0x2a50b8: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50b4) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A50BCu;
label_2a50bc:
    // 0x2a50bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a50bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a50c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a50c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A50C4u;
    SET_GPR_U32(ctx, 31, 0x2A50CCu);
    ctx->pc = 0x2A50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50C4u;
    // 0x2a50c8: 0x24a5d710  addiu       $a1, $a1, -0x28F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A50C4u, 0x2A50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50CCu;
label_2a50cc:
    // 0x2a50cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a50ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a50d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A50D0u;
    {
        const bool branch_taken_0x2a50d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50D0u;
        // 0x2a50d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50d0) {
            ctx->pc = 0x2A50F4u;
            goto label_2a50f4;
        }
    }
    ctx->pc = 0x2A50D8u;
    // 0x2a50d8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A50D8u;
    SET_GPR_U32(ctx, 31, 0x2A50E0u);
    ctx->pc = 0x2A50DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50D8u;
    // 0x2a50dc: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A50D8u, 0x2A50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A50E0u;
label_2a50e0:
    // 0x2a50e0: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x2a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x2a50e4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A50E4u;
    {
        const bool branch_taken_0x2a50e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50E4u;
        // 0x2a50e8: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50e4) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A50ECu;
    // 0x2a50ec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2A50ECu;
    {
        const bool branch_taken_0x2a50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A50ECu;
        // 0x2a50f0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50ec) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A50F4u;
label_2a50f4:
    // 0x2a50f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a50f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a50f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A50FCu;
    SET_GPR_U32(ctx, 31, 0x2A5104u);
    ctx->pc = 0x2A5100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A50FCu;
    // 0x2a5100: 0x24a5d730  addiu       $a1, $a1, -0x28D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A50FCu, 0x2A5104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5104u;
label_2a5104:
    // 0x2a5104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5108: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5108u;
    {
        const bool branch_taken_0x2a5108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5108u;
        // 0x2a510c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5108) {
            ctx->pc = 0x2A512Cu;
            goto label_2a512c;
        }
    }
    ctx->pc = 0x2A5110u;
    // 0x2a5110: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A5110u;
    SET_GPR_U32(ctx, 31, 0x2A5118u);
    ctx->pc = 0x2A5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5110u;
    // 0x2a5114: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A5110u, 0x2A5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5118u;
label_2a5118:
    // 0x2a5118: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x2a5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x2a511c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A511Cu;
    {
        const bool branch_taken_0x2a511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A511Cu;
        // 0x2a5120: 0xc7a0007c  lwc1        $f0, 0x7C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a511c) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A5124u;
    // 0x2a5124: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2A5124u;
    {
        const bool branch_taken_0x2a5124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5124u;
        // 0x2a5128: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5124) {
            ctx->pc = 0x2A5194u;
            goto label_2a5194;
        }
    }
    ctx->pc = 0x2A512Cu;
label_2a512c:
    // 0x2a512c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a512cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a5130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a5130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5134: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A5134u;
    SET_GPR_U32(ctx, 31, 0x2A513Cu);
    ctx->pc = 0x2A5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5134u;
    // 0x2a5138: 0x24a5d750  addiu       $a1, $a1, -0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A5134u, 0x2A513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A513Cu;
label_2a513c:
    // 0x2a513c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5140: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A5140u;
    {
        const bool branch_taken_0x2a5140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5140u;
        // 0x2a5144: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5140) {
            ctx->pc = 0x2A5198u;
            goto label_2a5198;
        }
    }
    ctx->pc = 0x2A5148u;
    // 0x2a5148: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A5148u;
    SET_GPR_U32(ctx, 31, 0x2A5150u);
    ctx->pc = 0x2A514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5148u;
    // 0x2a514c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A5148u, 0x2A5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5150u;
label_2a5150:
    // 0x2a5150: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x2a5150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2a5154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a5154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5158: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2a5158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2a515c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5160: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2a5160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2a5164: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2a5164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5168: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2a5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2a516c: 0xc09e45a  jal         func_279168
    ctx->pc = 0x2A516Cu;
    SET_GPR_U32(ctx, 31, 0x2A5174u);
    ctx->pc = 0x2A5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A516Cu;
    // 0x2a5170: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x2A516Cu, 0x2A5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5174u;
label_2a5174:
    // 0x2a5174: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x2a5174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2a5178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a517c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5180: 0xc0a92e0  jal         func_2A4B80
    ctx->pc = 0x2A5180u;
    SET_GPR_U32(ctx, 31, 0x2A5188u);
    ctx->pc = 0x2A5184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5180u;
    // 0x2a5184: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B80u, 0x2A5180u, 0x2A5188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5188u;
label_2a5188:
    // 0x2a5188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a5188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a518c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A518Cu;
    SET_GPR_U32(ctx, 31, 0x2A5194u);
    ctx->pc = 0x2A5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A518Cu;
    // 0x2a5190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A518Cu, 0x2A5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5194u;
label_2a5194:
    // 0x2a5194: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a5194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a5198:
    // 0x2a5198: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2A5198u;
    SET_GPR_U32(ctx, 31, 0x2A51A0u);
    ctx->pc = 0x2A519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5198u;
    // 0x2a519c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2A5198u, 0x2A51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51A0u;
label_2a51a0:
    // 0x2a51a0: 0x1440ff0b  bnez        $v0, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x2A51A0u;
    {
        const bool branch_taken_0x2a51a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51A0u;
        // 0x2a51a4: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51a0) {
            ctx->pc = 0x2A4DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4dd0;
        }
    }
    ctx->pc = 0x2A51A8u;
    // 0x2a51a8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a51ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a51acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a51b0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2a51b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a51b4: 0x8c820a80  lw          $v0, 0xA80($a0)
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2688)));
    // 0x2a51b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a51b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a51bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a51c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A51C0u;
    SET_GPR_U32(ctx, 31, 0x2A51C8u);
    ctx->pc = 0x2A51C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A51C0u;
    // 0x2a51c4: 0xacc20a80  sw          $v0, 0xA80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 2688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A51C0u, 0x2A51C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51C8u;
label_2a51c8:
    // 0x2a51c8: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2a51c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a51cc: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2a51ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a51d0: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2a51d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a51d4: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2a51d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a51d8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2a51d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a51dc: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2a51dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2a51e0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2a51e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a51e4: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2a51e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a51e8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a51e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a51ec: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2a51ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a51f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A51F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51F0u;
        // 0x2a51f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A51F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A51F8u;
}
