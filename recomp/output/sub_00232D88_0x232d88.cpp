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

// Function: sub_00232D88
// Address: 0x232d88 - 0x233148
void sub_00232D88_0x232d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D88_0x232d88");
#endif

    switch (ctx->pc) {
        case 0x232d88u: goto label_232d88;
        case 0x232d8cu: goto label_232d8c;
        case 0x232d90u: goto label_232d90;
        case 0x232d94u: goto label_232d94;
        case 0x232d98u: goto label_232d98;
        case 0x232d9cu: goto label_232d9c;
        case 0x232da0u: goto label_232da0;
        case 0x232da4u: goto label_232da4;
        case 0x232da8u: goto label_232da8;
        case 0x232dacu: goto label_232dac;
        case 0x232db0u: goto label_232db0;
        case 0x232db4u: goto label_232db4;
        case 0x232db8u: goto label_232db8;
        case 0x232dbcu: goto label_232dbc;
        case 0x232dc0u: goto label_232dc0;
        case 0x232dc4u: goto label_232dc4;
        case 0x232dc8u: goto label_232dc8;
        case 0x232dccu: goto label_232dcc;
        case 0x232dd0u: goto label_232dd0;
        case 0x232dd4u: goto label_232dd4;
        case 0x232dd8u: goto label_232dd8;
        case 0x232ddcu: goto label_232ddc;
        case 0x232de0u: goto label_232de0;
        case 0x232de4u: goto label_232de4;
        case 0x232de8u: goto label_232de8;
        case 0x232decu: goto label_232dec;
        case 0x232df0u: goto label_232df0;
        case 0x232df4u: goto label_232df4;
        case 0x232df8u: goto label_232df8;
        case 0x232dfcu: goto label_232dfc;
        case 0x232e00u: goto label_232e00;
        case 0x232e04u: goto label_232e04;
        case 0x232e08u: goto label_232e08;
        case 0x232e0cu: goto label_232e0c;
        case 0x232e10u: goto label_232e10;
        case 0x232e14u: goto label_232e14;
        case 0x232e18u: goto label_232e18;
        case 0x232e1cu: goto label_232e1c;
        case 0x232e20u: goto label_232e20;
        case 0x232e24u: goto label_232e24;
        case 0x232e28u: goto label_232e28;
        case 0x232e2cu: goto label_232e2c;
        case 0x232e30u: goto label_232e30;
        case 0x232e34u: goto label_232e34;
        case 0x232e38u: goto label_232e38;
        case 0x232e3cu: goto label_232e3c;
        case 0x232e40u: goto label_232e40;
        case 0x232e44u: goto label_232e44;
        case 0x232e48u: goto label_232e48;
        case 0x232e4cu: goto label_232e4c;
        case 0x232e50u: goto label_232e50;
        case 0x232e54u: goto label_232e54;
        case 0x232e58u: goto label_232e58;
        case 0x232e5cu: goto label_232e5c;
        case 0x232e60u: goto label_232e60;
        case 0x232e64u: goto label_232e64;
        case 0x232e68u: goto label_232e68;
        case 0x232e6cu: goto label_232e6c;
        case 0x232e70u: goto label_232e70;
        case 0x232e74u: goto label_232e74;
        case 0x232e78u: goto label_232e78;
        case 0x232e7cu: goto label_232e7c;
        case 0x232e80u: goto label_232e80;
        case 0x232e84u: goto label_232e84;
        case 0x232e88u: goto label_232e88;
        case 0x232e8cu: goto label_232e8c;
        case 0x232e90u: goto label_232e90;
        case 0x232e94u: goto label_232e94;
        case 0x232e98u: goto label_232e98;
        case 0x232e9cu: goto label_232e9c;
        case 0x232ea0u: goto label_232ea0;
        case 0x232ea4u: goto label_232ea4;
        case 0x232ea8u: goto label_232ea8;
        case 0x232eacu: goto label_232eac;
        case 0x232eb0u: goto label_232eb0;
        case 0x232eb4u: goto label_232eb4;
        case 0x232eb8u: goto label_232eb8;
        case 0x232ebcu: goto label_232ebc;
        case 0x232ec0u: goto label_232ec0;
        case 0x232ec4u: goto label_232ec4;
        case 0x232ec8u: goto label_232ec8;
        case 0x232eccu: goto label_232ecc;
        case 0x232ed0u: goto label_232ed0;
        case 0x232ed4u: goto label_232ed4;
        case 0x232ed8u: goto label_232ed8;
        case 0x232edcu: goto label_232edc;
        case 0x232ee0u: goto label_232ee0;
        case 0x232ee4u: goto label_232ee4;
        case 0x232ee8u: goto label_232ee8;
        case 0x232eecu: goto label_232eec;
        case 0x232ef0u: goto label_232ef0;
        case 0x232ef4u: goto label_232ef4;
        case 0x232ef8u: goto label_232ef8;
        case 0x232efcu: goto label_232efc;
        case 0x232f00u: goto label_232f00;
        case 0x232f04u: goto label_232f04;
        case 0x232f08u: goto label_232f08;
        case 0x232f0cu: goto label_232f0c;
        case 0x232f10u: goto label_232f10;
        case 0x232f14u: goto label_232f14;
        case 0x232f18u: goto label_232f18;
        case 0x232f1cu: goto label_232f1c;
        case 0x232f20u: goto label_232f20;
        case 0x232f24u: goto label_232f24;
        case 0x232f28u: goto label_232f28;
        case 0x232f2cu: goto label_232f2c;
        case 0x232f30u: goto label_232f30;
        case 0x232f34u: goto label_232f34;
        case 0x232f38u: goto label_232f38;
        case 0x232f3cu: goto label_232f3c;
        case 0x232f40u: goto label_232f40;
        case 0x232f44u: goto label_232f44;
        case 0x232f48u: goto label_232f48;
        case 0x232f4cu: goto label_232f4c;
        case 0x232f50u: goto label_232f50;
        case 0x232f54u: goto label_232f54;
        case 0x232f58u: goto label_232f58;
        case 0x232f5cu: goto label_232f5c;
        case 0x232f60u: goto label_232f60;
        case 0x232f64u: goto label_232f64;
        case 0x232f68u: goto label_232f68;
        case 0x232f6cu: goto label_232f6c;
        case 0x232f70u: goto label_232f70;
        case 0x232f74u: goto label_232f74;
        case 0x232f78u: goto label_232f78;
        case 0x232f7cu: goto label_232f7c;
        case 0x232f80u: goto label_232f80;
        case 0x232f84u: goto label_232f84;
        case 0x232f88u: goto label_232f88;
        case 0x232f8cu: goto label_232f8c;
        case 0x232f90u: goto label_232f90;
        case 0x232f94u: goto label_232f94;
        case 0x232f98u: goto label_232f98;
        case 0x232f9cu: goto label_232f9c;
        case 0x232fa0u: goto label_232fa0;
        case 0x232fa4u: goto label_232fa4;
        case 0x232fa8u: goto label_232fa8;
        case 0x232facu: goto label_232fac;
        case 0x232fb0u: goto label_232fb0;
        case 0x232fb4u: goto label_232fb4;
        case 0x232fb8u: goto label_232fb8;
        case 0x232fbcu: goto label_232fbc;
        case 0x232fc0u: goto label_232fc0;
        case 0x232fc4u: goto label_232fc4;
        case 0x232fc8u: goto label_232fc8;
        case 0x232fccu: goto label_232fcc;
        case 0x232fd0u: goto label_232fd0;
        case 0x232fd4u: goto label_232fd4;
        case 0x232fd8u: goto label_232fd8;
        case 0x232fdcu: goto label_232fdc;
        case 0x232fe0u: goto label_232fe0;
        case 0x232fe4u: goto label_232fe4;
        case 0x232fe8u: goto label_232fe8;
        case 0x232fecu: goto label_232fec;
        case 0x232ff0u: goto label_232ff0;
        case 0x232ff4u: goto label_232ff4;
        case 0x232ff8u: goto label_232ff8;
        case 0x232ffcu: goto label_232ffc;
        case 0x233000u: goto label_233000;
        case 0x233004u: goto label_233004;
        case 0x233008u: goto label_233008;
        case 0x23300cu: goto label_23300c;
        case 0x233010u: goto label_233010;
        case 0x233014u: goto label_233014;
        case 0x233018u: goto label_233018;
        case 0x23301cu: goto label_23301c;
        case 0x233020u: goto label_233020;
        case 0x233024u: goto label_233024;
        case 0x233028u: goto label_233028;
        case 0x23302cu: goto label_23302c;
        case 0x233030u: goto label_233030;
        case 0x233034u: goto label_233034;
        case 0x233038u: goto label_233038;
        case 0x23303cu: goto label_23303c;
        case 0x233040u: goto label_233040;
        case 0x233044u: goto label_233044;
        case 0x233048u: goto label_233048;
        case 0x23304cu: goto label_23304c;
        case 0x233050u: goto label_233050;
        case 0x233054u: goto label_233054;
        case 0x233058u: goto label_233058;
        case 0x23305cu: goto label_23305c;
        case 0x233060u: goto label_233060;
        case 0x233064u: goto label_233064;
        case 0x233068u: goto label_233068;
        case 0x23306cu: goto label_23306c;
        case 0x233070u: goto label_233070;
        case 0x233074u: goto label_233074;
        case 0x233078u: goto label_233078;
        case 0x23307cu: goto label_23307c;
        case 0x233080u: goto label_233080;
        case 0x233084u: goto label_233084;
        case 0x233088u: goto label_233088;
        case 0x23308cu: goto label_23308c;
        case 0x233090u: goto label_233090;
        case 0x233094u: goto label_233094;
        case 0x233098u: goto label_233098;
        case 0x23309cu: goto label_23309c;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330c8u: goto label_2330c8;
        case 0x2330ccu: goto label_2330cc;
        case 0x2330d0u: goto label_2330d0;
        case 0x2330d4u: goto label_2330d4;
        case 0x2330d8u: goto label_2330d8;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330e8u: goto label_2330e8;
        case 0x2330ecu: goto label_2330ec;
        case 0x2330f0u: goto label_2330f0;
        case 0x2330f4u: goto label_2330f4;
        case 0x2330f8u: goto label_2330f8;
        case 0x2330fcu: goto label_2330fc;
        case 0x233100u: goto label_233100;
        case 0x233104u: goto label_233104;
        case 0x233108u: goto label_233108;
        case 0x23310cu: goto label_23310c;
        case 0x233110u: goto label_233110;
        case 0x233114u: goto label_233114;
        case 0x233118u: goto label_233118;
        case 0x23311cu: goto label_23311c;
        case 0x233120u: goto label_233120;
        case 0x233124u: goto label_233124;
        case 0x233128u: goto label_233128;
        case 0x23312cu: goto label_23312c;
        case 0x233130u: goto label_233130;
        case 0x233134u: goto label_233134;
        case 0x233138u: goto label_233138;
        case 0x23313cu: goto label_23313c;
        case 0x233140u: goto label_233140;
        case 0x233144u: goto label_233144;
        default: break;
    }

    ctx->pc = 0x232d88u;

label_232d88:
    // 0x232d88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x232d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_232d8c:
    // 0x232d8c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x232d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_232d90:
    // 0x232d90: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x232d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_232d94:
    // 0x232d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232d98:
    // 0x232d98: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x232d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_232d9c:
    // 0x232d9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_232da0:
    // 0x232da0: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x232da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_232da4:
    // 0x232da4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x232da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232da8:
    // 0x232da8: 0xc07a8b2  jal         func_1EA2C8
label_232dac:
    if (ctx->pc == 0x232DACu) {
        ctx->pc = 0x232DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DA8u;
        // 0x232dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DB0u;
        goto label_232db0;
    }
    ctx->pc = 0x232DA8u;
    SET_GPR_U32(ctx, 31, 0x232DB0u);
    ctx->pc = 0x232DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DA8u;
    // 0x232dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x232DA8u, 0x232DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DB0u;
label_232db0:
    // 0x232db0: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x232db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_232db4:
    // 0x232db4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x232db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_232db8:
    // 0x232db8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x232db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_232dbc:
    // 0x232dbc: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_232dc0:
    if (ctx->pc == 0x232DC0u) {
        ctx->pc = 0x232DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DBCu;
        // 0x232dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DC4u;
        goto label_232dc4;
    }
    ctx->pc = 0x232DBCu;
    {
        const bool branch_taken_0x232dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x232DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DBCu;
        // 0x232dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dbc) {
            ctx->pc = 0x232DE8u;
            goto label_232de8;
        }
    }
    ctx->pc = 0x232DC4u;
label_232dc4:
    // 0x232dc4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232dc8:
    // 0x232dc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x232dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232dcc:
    // 0x232dcc: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_232dd0:
    // 0x232dd0: 0x40f809  jalr        $v0
label_232dd4:
    if (ctx->pc == 0x232DD4u) {
        ctx->pc = 0x232DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD0u;
        // 0x232dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DD8u;
        goto label_232dd8;
    }
    ctx->pc = 0x232DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232DD8u);
        ctx->pc = 0x232DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD0u;
        // 0x232dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232DD0u, 0x232DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232DD8u;
label_232dd8:
    // 0x232dd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_232ddc:
    if (ctx->pc == 0x232DDCu) {
        ctx->pc = 0x232DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD8u;
        // 0x232ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DE0u;
        goto label_232de0;
    }
    ctx->pc = 0x232DD8u;
    {
        const bool branch_taken_0x232dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD8u;
        // 0x232ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dd8) {
            ctx->pc = 0x232DECu;
            goto label_232dec;
        }
    }
    ctx->pc = 0x232DE0u;
label_232de0:
    // 0x232de0: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_232de4:
    if (ctx->pc == 0x232DE4u) {
        ctx->pc = 0x232DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DE0u;
        // 0x232de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DE8u;
        goto label_232de8;
    }
    ctx->pc = 0x232DE0u;
    {
        const bool branch_taken_0x232de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DE0u;
        // 0x232de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232de0) {
            ctx->pc = 0x23312Cu;
            goto label_23312c;
        }
    }
    ctx->pc = 0x232DE8u;
label_232de8:
    // 0x232de8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x232de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_232dec:
    // 0x232dec: 0xc08f808  jal         func_23E020
label_232df0:
    if (ctx->pc == 0x232DF0u) {
        ctx->pc = 0x232DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DECu;
        // 0x232df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DF4u;
        goto label_232df4;
    }
    ctx->pc = 0x232DECu;
    SET_GPR_U32(ctx, 31, 0x232DF4u);
    ctx->pc = 0x232DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DECu;
    // 0x232df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E020u, 0x232DECu, 0x232DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DF4u;
label_232df4:
    // 0x232df4: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
label_232df8:
    if (ctx->pc == 0x232DF8u) {
        ctx->pc = 0x232DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DF4u;
        // 0x232df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DFCu;
        goto label_232dfc;
    }
    ctx->pc = 0x232DF4u;
    {
        const bool branch_taken_0x232df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DF4u;
        // 0x232df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232df4) {
            ctx->pc = 0x23312Cu;
            goto label_23312c;
        }
    }
    ctx->pc = 0x232DFCu;
label_232dfc:
    // 0x232dfc: 0xc0f6a96  jal         func_3DAA58
label_232e00:
    if (ctx->pc == 0x232E00u) {
        ctx->pc = 0x232E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DFCu;
        // 0x232e00: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E04u;
        goto label_232e04;
    }
    ctx->pc = 0x232DFCu;
    SET_GPR_U32(ctx, 31, 0x232E04u);
    ctx->pc = 0x232E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DFCu;
    // 0x232e00: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x232DFCu, 0x232E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E04u;
label_232e04:
    // 0x232e04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x232e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_232e08:
    // 0x232e08: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x232e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_232e0c:
    // 0x232e0c: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_232e10:
    if (ctx->pc == 0x232E10u) {
        ctx->pc = 0x232E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E0Cu;
        // 0x232e10: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E14u;
        goto label_232e14;
    }
    ctx->pc = 0x232E0Cu;
    {
        const bool branch_taken_0x232e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E0Cu;
        // 0x232e10: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e0c) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x232E14u;
label_232e14:
    // 0x232e14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_232e18:
    // 0x232e18: 0x24424b90  addiu       $v0, $v0, 0x4B90
    ctx->pc = 0x232e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19344));
label_232e1c:
    // 0x232e1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232e20:
    // 0x232e20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x232e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232e24:
    // 0x232e24: 0x800008  jr          $a0
label_232e28:
    if (ctx->pc == 0x232E28u) {
        ctx->pc = 0x232E2Cu;
        goto label_232e2c;
    }
    ctx->pc = 0x232E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232E2Cu: goto label_232e2c;
            case 0x232E58u: goto label_232e58;
            case 0x232E98u: goto label_232e98;
            case 0x232F10u: goto label_232f10;
            case 0x233004u: goto label_233004;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x232E2Cu;
label_232e2c:
    // 0x232e2c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232e30:
    // 0x232e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232e34:
    // 0x232e34: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232e38:
    // 0x232e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232e3c:
    // 0x232e3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x232e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232e40:
    // 0x232e40: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232e44:
    // 0x232e44: 0x40f809  jalr        $v0
label_232e48:
    if (ctx->pc == 0x232E48u) {
        ctx->pc = 0x232E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E44u;
        // 0x232e48: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E4Cu;
        goto label_232e4c;
    }
    ctx->pc = 0x232E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232E4Cu);
        ctx->pc = 0x232E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E44u;
        // 0x232e48: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E44u, 0x232E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232E4Cu;
label_232e4c:
    // 0x232e4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x232e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_232e50:
    // 0x232e50: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_232e54:
    if (ctx->pc == 0x232E54u) {
        ctx->pc = 0x232E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E50u;
        // 0x232e54: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E58u;
        goto label_232e58;
    }
    ctx->pc = 0x232E50u;
    {
        const bool branch_taken_0x232e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E50u;
        // 0x232e54: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e50) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x232E58u;
label_232e58:
    // 0x232e58: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x232e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_232e5c:
    // 0x232e5c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x232e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_232e60:
    // 0x232e60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_232e64:
    if (ctx->pc == 0x232E64u) {
        ctx->pc = 0x232E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E60u;
        // 0x232e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E68u;
        goto label_232e68;
    }
    ctx->pc = 0x232E60u;
    {
        const bool branch_taken_0x232e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E60u;
        // 0x232e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e60) {
            ctx->pc = 0x232E8Cu;
            goto label_232e8c;
        }
    }
    ctx->pc = 0x232E68u;
label_232e68:
    // 0x232e68: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232e6c:
    // 0x232e6c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232e70:
    // 0x232e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232e74:
    // 0x232e74: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232e78:
    // 0x232e78: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232e7c:
    // 0x232e7c: 0x40f809  jalr        $v0
label_232e80:
    if (ctx->pc == 0x232E80u) {
        ctx->pc = 0x232E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E7Cu;
        // 0x232e80: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E84u;
        goto label_232e84;
    }
    ctx->pc = 0x232E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232E84u);
        ctx->pc = 0x232E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E7Cu;
        // 0x232e80: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E7Cu, 0x232E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232E84u;
label_232e84:
    // 0x232e84: 0x10000002  b           . + 4 + (0x2 << 2)
label_232e88:
    if (ctx->pc == 0x232E88u) {
        ctx->pc = 0x232E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E84u;
        // 0x232e88: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E8Cu;
        goto label_232e8c;
    }
    ctx->pc = 0x232E84u;
    {
        const bool branch_taken_0x232e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E84u;
        // 0x232e88: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e84) {
            ctx->pc = 0x232E90u;
            goto label_232e90;
        }
    }
    ctx->pc = 0x232E8Cu;
label_232e8c:
    // 0x232e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232e90:
    // 0x232e90: 0x10000096  b           . + 4 + (0x96 << 2)
label_232e94:
    if (ctx->pc == 0x232E94u) {
        ctx->pc = 0x232E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E90u;
        // 0x232e94: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E98u;
        goto label_232e98;
    }
    ctx->pc = 0x232E90u;
    {
        const bool branch_taken_0x232e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E90u;
        // 0x232e94: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e90) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x232E98u;
label_232e98:
    // 0x232e98: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x232e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232e9c:
    // 0x232e9c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x232e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_232ea0:
    // 0x232ea0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_232ea4:
    // 0x232ea4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x232ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232ea8:
    // 0x232ea8: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x232ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_232eac:
    // 0x232eac: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x232eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232eb0:
    // 0x232eb0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x232eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232eb4:
    // 0x232eb4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x232eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232eb8:
    // 0x232eb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x232eb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_232ebc:
    // 0x232ebc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x232ebcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_232ec0:
    // 0x232ec0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x232ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_232ec4:
    // 0x232ec4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x232ec4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_232ec8:
    // 0x232ec8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x232ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_232ecc:
    // 0x232ecc: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x232eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_232ed0:
    // 0x232ed0: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x232ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_232ed4:
    // 0x232ed4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x232ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_232ed8:
    // 0x232ed8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x232ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_232edc:
    // 0x232edc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x232edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_232ee0:
    // 0x232ee0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x232ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_232ee4:
    // 0x232ee4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_232ee8:
    if (ctx->pc == 0x232EE8u) {
        ctx->pc = 0x232EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EE4u;
        // 0x232ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232EECu;
        goto label_232eec;
    }
    ctx->pc = 0x232EE4u;
    {
        const bool branch_taken_0x232ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EE4u;
        // 0x232ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ee4) {
            ctx->pc = 0x232F04u;
            goto label_232f04;
        }
    }
    ctx->pc = 0x232EECu;
label_232eec:
    // 0x232eec: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232ef0:
    // 0x232ef0: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232ef4:
    // 0x232ef4: 0x40f809  jalr        $v0
label_232ef8:
    if (ctx->pc == 0x232EF8u) {
        ctx->pc = 0x232EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EF4u;
        // 0x232ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232EFCu;
        goto label_232efc;
    }
    ctx->pc = 0x232EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232EFCu);
        ctx->pc = 0x232EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EF4u;
        // 0x232ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232EF4u, 0x232EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232EFCu;
label_232efc:
    // 0x232efc: 0x10000002  b           . + 4 + (0x2 << 2)
label_232f00:
    if (ctx->pc == 0x232F00u) {
        ctx->pc = 0x232F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EFCu;
        // 0x232f00: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232F04u;
        goto label_232f04;
    }
    ctx->pc = 0x232EFCu;
    {
        const bool branch_taken_0x232efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EFCu;
        // 0x232f00: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232efc) {
            ctx->pc = 0x232F08u;
            goto label_232f08;
        }
    }
    ctx->pc = 0x232F04u;
label_232f04:
    // 0x232f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232f08:
    // 0x232f08: 0x10000078  b           . + 4 + (0x78 << 2)
label_232f0c:
    if (ctx->pc == 0x232F0Cu) {
        ctx->pc = 0x232F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F08u;
        // 0x232f0c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232F10u;
        goto label_232f10;
    }
    ctx->pc = 0x232F08u;
    {
        const bool branch_taken_0x232f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F08u;
        // 0x232f0c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f08) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x232F10u;
label_232f10:
    // 0x232f10: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x232f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232f14:
    // 0x232f14: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x232f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_232f18:
    // 0x232f18: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x232f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_232f1c:
    // 0x232f1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232f20:
    // 0x232f20: 0x3884020f  xori        $a0, $a0, 0x20F
    ctx->pc = 0x232f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
label_232f24:
    // 0x232f24: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x232f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232f28:
    // 0x232f28: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_232f2c:
    // 0x232f2c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x232f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_232f30:
    // 0x232f30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x232f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232f34:
    // 0x232f34: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x232f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_232f38:
    // 0x232f38: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x232f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232f3c:
    // 0x232f3c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x232f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_232f40:
    // 0x232f40: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x232f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232f44:
    // 0x232f44: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_232f48:
    if (ctx->pc == 0x232F48u) {
        ctx->pc = 0x232F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F44u;
        // 0x232f48: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x232F4Cu;
        goto label_232f4c;
    }
    ctx->pc = 0x232F44u;
    {
        const bool branch_taken_0x232f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F44u;
        // 0x232f48: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f44) {
            ctx->pc = 0x232F70u;
            goto label_232f70;
        }
    }
    ctx->pc = 0x232F4Cu;
label_232f4c:
    // 0x232f4c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x232f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_232f50:
    // 0x232f50: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x232f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_232f54:
    // 0x232f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232f58:
    // 0x232f58: 0x0  nop
    ctx->pc = 0x232f58u;
    // NOP
label_232f5c:
    // 0x232f5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x232f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_232f60:
    // 0x232f60: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x232f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_232f64:
    // 0x232f64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x232f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_232f68:
    // 0x232f68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x232f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232f6c:
    // 0x232f6c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x232f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_232f70:
    // 0x232f70: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232f74:
    // 0x232f74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232f78:
    // 0x232f78: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x232f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_232f7c:
    // 0x232f7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x232f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_232f80:
    // 0x232f80: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x232f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_232f84:
    // 0x232f84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232f88:
    // 0x232f88: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x232f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_232f8c:
    // 0x232f8c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x232f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_232f90:
    // 0x232f90: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x232f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_232f94:
    // 0x232f94: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x232f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232f98:
    // 0x232f98: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x232f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_232f9c:
    // 0x232f9c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x232f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232fa0:
    // 0x232fa0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x232fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232fa4:
    // 0x232fa4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x232fa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_232fa8:
    // 0x232fa8: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x232fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_232fac:
    // 0x232fac: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x232facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_232fb0:
    // 0x232fb0: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x232fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_232fb4:
    // 0x232fb4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x232fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_232fb8:
    // 0x232fb8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x232fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_232fbc:
    // 0x232fbc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x232fbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_232fc0:
    // 0x232fc0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x232fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232fc4:
    // 0x232fc4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x232fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232fc8:
    // 0x232fc8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x232fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232fcc:
    // 0x232fcc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x232fccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_232fd0:
    // 0x232fd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x232fd0u;
    // VWAITQ (Q already resolved in this runtime)
label_232fd4:
    // 0x232fd4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x232fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232fd8:
    // 0x232fd8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x232fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_232fdc:
    // 0x232fdc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232fe0:
    // 0x232fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232fe4:
    // 0x232fe4: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232fe8:
    // 0x232fe8: 0x40f809  jalr        $v0
label_232fec:
    if (ctx->pc == 0x232FECu) {
        ctx->pc = 0x232FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FE8u;
        // 0x232fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232FF0u;
        goto label_232ff0;
    }
    ctx->pc = 0x232FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232FF0u);
        ctx->pc = 0x232FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FE8u;
        // 0x232fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232FE8u, 0x232FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232FF0u;
label_232ff0:
    // 0x232ff0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x232ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_232ff4:
    // 0x232ff4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_232ff8:
    if (ctx->pc == 0x232FF8u) {
        ctx->pc = 0x232FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FF4u;
        // 0x232ff8: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232FFCu;
        goto label_232ffc;
    }
    ctx->pc = 0x232FF4u;
    {
        const bool branch_taken_0x232ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FF4u;
        // 0x232ff8: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ff4) {
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x232FFCu;
label_232ffc:
    // 0x232ffc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_233000:
    if (ctx->pc == 0x233000u) {
        ctx->pc = 0x233000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FFCu;
        // 0x233000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233004u;
        goto label_233004;
    }
    ctx->pc = 0x232FFCu;
    {
        const bool branch_taken_0x232ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FFCu;
        // 0x233000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ffc) {
            ctx->pc = 0x23312Cu;
            goto label_23312c;
        }
    }
    ctx->pc = 0x233004u;
label_233004:
    // 0x233004: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x233004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_233008:
    // 0x233008: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23300c:
    // 0x23300c: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x23300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_233010:
    // 0x233010: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233014:
    // 0x233014: 0x3884020f  xori        $a0, $a0, 0x20F
    ctx->pc = 0x233014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
label_233018:
    // 0x233018: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x233018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23301c:
    // 0x23301c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x23301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_233020:
    // 0x233020: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x233020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_233024:
    // 0x233024: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x233024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233028:
    // 0x233028: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x233028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_23302c:
    // 0x23302c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233030:
    // 0x233030: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x233030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_233034:
    // 0x233034: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x233034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233038:
    // 0x233038: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_23303c:
    if (ctx->pc == 0x23303Cu) {
        ctx->pc = 0x23303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233038u;
        // 0x23303c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233040u;
        goto label_233040;
    }
    ctx->pc = 0x233038u;
    {
        const bool branch_taken_0x233038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233038u;
        // 0x23303c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233038) {
            ctx->pc = 0x233064u;
            goto label_233064;
        }
    }
    ctx->pc = 0x233040u;
label_233040:
    // 0x233040: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x233040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_233044:
    // 0x233044: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x233044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_233048:
    // 0x233048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23304c:
    // 0x23304c: 0x0  nop
    ctx->pc = 0x23304cu;
    // NOP
label_233050:
    // 0x233050: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x233050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_233054:
    // 0x233054: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x233054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_233058:
    // 0x233058: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x233058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23305c:
    // 0x23305c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23305cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_233060:
    // 0x233060: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x233060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_233064:
    // 0x233064: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x233064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_233068:
    // 0x233068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23306c:
    // 0x23306c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x23306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_233070:
    // 0x233070: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x233070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_233074:
    // 0x233074: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x233074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_233078:
    // 0x233078: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x233078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23307c:
    // 0x23307c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x23307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_233080:
    // 0x233080: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x233080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_233084:
    // 0x233084: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x233084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_233088:
    // 0x233088: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x233088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23308c:
    // 0x23308c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x23308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_233090:
    // 0x233090: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x233090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233094:
    // 0x233094: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x233094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233098:
    // 0x233098: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x233098u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23309c:
    // 0x23309c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x23309cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2330a0:
    // 0x2330a0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2330a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2330a4:
    // 0x2330a4: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x2330a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2330a8:
    // 0x2330a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2330a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2330ac:
    // 0x2330ac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2330acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2330b0:
    // 0x2330b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2330b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2330b4:
    // 0x2330b4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2330b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2330b8:
    // 0x2330b8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2330b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2330bc:
    // 0x2330bc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2330bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2330c0:
    // 0x2330c0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2330c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2330c4:
    // 0x2330c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2330c4u;
    // VWAITQ (Q already resolved in this runtime)
label_2330c8:
    // 0x2330c8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2330c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2330cc:
    // 0x2330cc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2330ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2330d0:
    // 0x2330d0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2330d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2330d4:
    // 0x2330d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2330d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2330d8:
    // 0x2330d8: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x2330d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_2330dc:
    // 0x2330dc: 0x40f809  jalr        $v0
label_2330e0:
    if (ctx->pc == 0x2330E0u) {
        ctx->pc = 0x2330E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330DCu;
        // 0x2330e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2330E4u;
        goto label_2330e4;
    }
    ctx->pc = 0x2330DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2330E4u);
        ctx->pc = 0x2330E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330DCu;
        // 0x2330e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2330DCu, 0x2330E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2330E4u;
label_2330e4:
    // 0x2330e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2330e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2330e8:
    // 0x2330e8: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x2330e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_2330ec:
    // 0x2330ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2330ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2330f0:
    // 0x2330f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2330f4:
    // 0x2330f4: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x2330f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_2330f8:
    // 0x2330f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2330fc:
    if (ctx->pc == 0x2330FCu) {
        ctx->pc = 0x2330FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330F8u;
        // 0x2330fc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233100u;
        goto label_233100;
    }
    ctx->pc = 0x2330F8u;
    {
        const bool branch_taken_0x2330f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2330FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330F8u;
        // 0x2330fc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330f8) {
            ctx->pc = 0x233104u;
            goto label_233104;
        }
    }
    ctx->pc = 0x233100u;
label_233100:
    // 0x233100: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x233100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_233104:
    // 0x233104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x233104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233108:
    // 0x233108: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x233108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_23310c:
    // 0x23310c: 0x0  nop
    ctx->pc = 0x23310cu;
    // NOP
label_233110:
    // 0x233110: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x233110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_233114:
    // 0x233114: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
label_233118:
    if (ctx->pc == 0x233118u) {
        ctx->pc = 0x233118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233114u;
        // 0x233118: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23311Cu;
        goto label_23311c;
    }
    ctx->pc = 0x233114u;
    {
        const bool branch_taken_0x233114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233114u;
        // 0x233118: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233114) {
            ctx->pc = 0x232FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232ffc;
        }
    }
    ctx->pc = 0x23311Cu;
label_23311c:
    // 0x23311c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x23311cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_233120:
    // 0x233120: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_233124:
    if (ctx->pc == 0x233124u) {
        ctx->pc = 0x233124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233120u;
        // 0x233124: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233128u;
        goto label_233128;
    }
    ctx->pc = 0x233120u;
    {
        const bool branch_taken_0x233120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233120u;
        // 0x233124: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233120) {
            ctx->pc = 0x233110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233110;
        }
    }
    ctx->pc = 0x233128u;
label_233128:
    // 0x233128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23312c:
    // 0x23312c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x23312cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_233130:
    // 0x233130: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x233130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_233134:
    // 0x233134: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x233134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_233138:
    // 0x233138: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x233138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_23313c:
    // 0x23313c: 0x3e00008  jr          $ra
label_233140:
    if (ctx->pc == 0x233140u) {
        ctx->pc = 0x233140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23313Cu;
        // 0x233140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233144u;
        goto label_233144;
    }
    ctx->pc = 0x23313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23313Cu;
        // 0x233140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233144u;
label_233144:
    // 0x233144: 0x0  nop
    ctx->pc = 0x233144u;
    // NOP
    ctx->pc = 0x233148u;
}
