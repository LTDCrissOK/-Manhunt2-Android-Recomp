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

// Function: sub_00251D98
// Address: 0x251d98 - 0x252178
void sub_00251D98_0x251d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251D98_0x251d98");
#endif

    switch (ctx->pc) {
        case 0x251d98u: goto label_251d98;
        case 0x251d9cu: goto label_251d9c;
        case 0x251da0u: goto label_251da0;
        case 0x251da4u: goto label_251da4;
        case 0x251da8u: goto label_251da8;
        case 0x251dacu: goto label_251dac;
        case 0x251db0u: goto label_251db0;
        case 0x251db4u: goto label_251db4;
        case 0x251db8u: goto label_251db8;
        case 0x251dbcu: goto label_251dbc;
        case 0x251dc0u: goto label_251dc0;
        case 0x251dc4u: goto label_251dc4;
        case 0x251dc8u: goto label_251dc8;
        case 0x251dccu: goto label_251dcc;
        case 0x251dd0u: goto label_251dd0;
        case 0x251dd4u: goto label_251dd4;
        case 0x251dd8u: goto label_251dd8;
        case 0x251ddcu: goto label_251ddc;
        case 0x251de0u: goto label_251de0;
        case 0x251de4u: goto label_251de4;
        case 0x251de8u: goto label_251de8;
        case 0x251decu: goto label_251dec;
        case 0x251df0u: goto label_251df0;
        case 0x251df4u: goto label_251df4;
        case 0x251df8u: goto label_251df8;
        case 0x251dfcu: goto label_251dfc;
        case 0x251e00u: goto label_251e00;
        case 0x251e04u: goto label_251e04;
        case 0x251e08u: goto label_251e08;
        case 0x251e0cu: goto label_251e0c;
        case 0x251e10u: goto label_251e10;
        case 0x251e14u: goto label_251e14;
        case 0x251e18u: goto label_251e18;
        case 0x251e1cu: goto label_251e1c;
        case 0x251e20u: goto label_251e20;
        case 0x251e24u: goto label_251e24;
        case 0x251e28u: goto label_251e28;
        case 0x251e2cu: goto label_251e2c;
        case 0x251e30u: goto label_251e30;
        case 0x251e34u: goto label_251e34;
        case 0x251e38u: goto label_251e38;
        case 0x251e3cu: goto label_251e3c;
        case 0x251e40u: goto label_251e40;
        case 0x251e44u: goto label_251e44;
        case 0x251e48u: goto label_251e48;
        case 0x251e4cu: goto label_251e4c;
        case 0x251e50u: goto label_251e50;
        case 0x251e54u: goto label_251e54;
        case 0x251e58u: goto label_251e58;
        case 0x251e5cu: goto label_251e5c;
        case 0x251e60u: goto label_251e60;
        case 0x251e64u: goto label_251e64;
        case 0x251e68u: goto label_251e68;
        case 0x251e6cu: goto label_251e6c;
        case 0x251e70u: goto label_251e70;
        case 0x251e74u: goto label_251e74;
        case 0x251e78u: goto label_251e78;
        case 0x251e7cu: goto label_251e7c;
        case 0x251e80u: goto label_251e80;
        case 0x251e84u: goto label_251e84;
        case 0x251e88u: goto label_251e88;
        case 0x251e8cu: goto label_251e8c;
        case 0x251e90u: goto label_251e90;
        case 0x251e94u: goto label_251e94;
        case 0x251e98u: goto label_251e98;
        case 0x251e9cu: goto label_251e9c;
        case 0x251ea0u: goto label_251ea0;
        case 0x251ea4u: goto label_251ea4;
        case 0x251ea8u: goto label_251ea8;
        case 0x251eacu: goto label_251eac;
        case 0x251eb0u: goto label_251eb0;
        case 0x251eb4u: goto label_251eb4;
        case 0x251eb8u: goto label_251eb8;
        case 0x251ebcu: goto label_251ebc;
        case 0x251ec0u: goto label_251ec0;
        case 0x251ec4u: goto label_251ec4;
        case 0x251ec8u: goto label_251ec8;
        case 0x251eccu: goto label_251ecc;
        case 0x251ed0u: goto label_251ed0;
        case 0x251ed4u: goto label_251ed4;
        case 0x251ed8u: goto label_251ed8;
        case 0x251edcu: goto label_251edc;
        case 0x251ee0u: goto label_251ee0;
        case 0x251ee4u: goto label_251ee4;
        case 0x251ee8u: goto label_251ee8;
        case 0x251eecu: goto label_251eec;
        case 0x251ef0u: goto label_251ef0;
        case 0x251ef4u: goto label_251ef4;
        case 0x251ef8u: goto label_251ef8;
        case 0x251efcu: goto label_251efc;
        case 0x251f00u: goto label_251f00;
        case 0x251f04u: goto label_251f04;
        case 0x251f08u: goto label_251f08;
        case 0x251f0cu: goto label_251f0c;
        case 0x251f10u: goto label_251f10;
        case 0x251f14u: goto label_251f14;
        case 0x251f18u: goto label_251f18;
        case 0x251f1cu: goto label_251f1c;
        case 0x251f20u: goto label_251f20;
        case 0x251f24u: goto label_251f24;
        case 0x251f28u: goto label_251f28;
        case 0x251f2cu: goto label_251f2c;
        case 0x251f30u: goto label_251f30;
        case 0x251f34u: goto label_251f34;
        case 0x251f38u: goto label_251f38;
        case 0x251f3cu: goto label_251f3c;
        case 0x251f40u: goto label_251f40;
        case 0x251f44u: goto label_251f44;
        case 0x251f48u: goto label_251f48;
        case 0x251f4cu: goto label_251f4c;
        case 0x251f50u: goto label_251f50;
        case 0x251f54u: goto label_251f54;
        case 0x251f58u: goto label_251f58;
        case 0x251f5cu: goto label_251f5c;
        case 0x251f60u: goto label_251f60;
        case 0x251f64u: goto label_251f64;
        case 0x251f68u: goto label_251f68;
        case 0x251f6cu: goto label_251f6c;
        case 0x251f70u: goto label_251f70;
        case 0x251f74u: goto label_251f74;
        case 0x251f78u: goto label_251f78;
        case 0x251f7cu: goto label_251f7c;
        case 0x251f80u: goto label_251f80;
        case 0x251f84u: goto label_251f84;
        case 0x251f88u: goto label_251f88;
        case 0x251f8cu: goto label_251f8c;
        case 0x251f90u: goto label_251f90;
        case 0x251f94u: goto label_251f94;
        case 0x251f98u: goto label_251f98;
        case 0x251f9cu: goto label_251f9c;
        case 0x251fa0u: goto label_251fa0;
        case 0x251fa4u: goto label_251fa4;
        case 0x251fa8u: goto label_251fa8;
        case 0x251facu: goto label_251fac;
        case 0x251fb0u: goto label_251fb0;
        case 0x251fb4u: goto label_251fb4;
        case 0x251fb8u: goto label_251fb8;
        case 0x251fbcu: goto label_251fbc;
        case 0x251fc0u: goto label_251fc0;
        case 0x251fc4u: goto label_251fc4;
        case 0x251fc8u: goto label_251fc8;
        case 0x251fccu: goto label_251fcc;
        case 0x251fd0u: goto label_251fd0;
        case 0x251fd4u: goto label_251fd4;
        case 0x251fd8u: goto label_251fd8;
        case 0x251fdcu: goto label_251fdc;
        case 0x251fe0u: goto label_251fe0;
        case 0x251fe4u: goto label_251fe4;
        case 0x251fe8u: goto label_251fe8;
        case 0x251fecu: goto label_251fec;
        case 0x251ff0u: goto label_251ff0;
        case 0x251ff4u: goto label_251ff4;
        case 0x251ff8u: goto label_251ff8;
        case 0x251ffcu: goto label_251ffc;
        case 0x252000u: goto label_252000;
        case 0x252004u: goto label_252004;
        case 0x252008u: goto label_252008;
        case 0x25200cu: goto label_25200c;
        case 0x252010u: goto label_252010;
        case 0x252014u: goto label_252014;
        case 0x252018u: goto label_252018;
        case 0x25201cu: goto label_25201c;
        case 0x252020u: goto label_252020;
        case 0x252024u: goto label_252024;
        case 0x252028u: goto label_252028;
        case 0x25202cu: goto label_25202c;
        case 0x252030u: goto label_252030;
        case 0x252034u: goto label_252034;
        case 0x252038u: goto label_252038;
        case 0x25203cu: goto label_25203c;
        case 0x252040u: goto label_252040;
        case 0x252044u: goto label_252044;
        case 0x252048u: goto label_252048;
        case 0x25204cu: goto label_25204c;
        case 0x252050u: goto label_252050;
        case 0x252054u: goto label_252054;
        case 0x252058u: goto label_252058;
        case 0x25205cu: goto label_25205c;
        case 0x252060u: goto label_252060;
        case 0x252064u: goto label_252064;
        case 0x252068u: goto label_252068;
        case 0x25206cu: goto label_25206c;
        case 0x252070u: goto label_252070;
        case 0x252074u: goto label_252074;
        case 0x252078u: goto label_252078;
        case 0x25207cu: goto label_25207c;
        case 0x252080u: goto label_252080;
        case 0x252084u: goto label_252084;
        case 0x252088u: goto label_252088;
        case 0x25208cu: goto label_25208c;
        case 0x252090u: goto label_252090;
        case 0x252094u: goto label_252094;
        case 0x252098u: goto label_252098;
        case 0x25209cu: goto label_25209c;
        case 0x2520a0u: goto label_2520a0;
        case 0x2520a4u: goto label_2520a4;
        case 0x2520a8u: goto label_2520a8;
        case 0x2520acu: goto label_2520ac;
        case 0x2520b0u: goto label_2520b0;
        case 0x2520b4u: goto label_2520b4;
        case 0x2520b8u: goto label_2520b8;
        case 0x2520bcu: goto label_2520bc;
        case 0x2520c0u: goto label_2520c0;
        case 0x2520c4u: goto label_2520c4;
        case 0x2520c8u: goto label_2520c8;
        case 0x2520ccu: goto label_2520cc;
        case 0x2520d0u: goto label_2520d0;
        case 0x2520d4u: goto label_2520d4;
        case 0x2520d8u: goto label_2520d8;
        case 0x2520dcu: goto label_2520dc;
        case 0x2520e0u: goto label_2520e0;
        case 0x2520e4u: goto label_2520e4;
        case 0x2520e8u: goto label_2520e8;
        case 0x2520ecu: goto label_2520ec;
        case 0x2520f0u: goto label_2520f0;
        case 0x2520f4u: goto label_2520f4;
        case 0x2520f8u: goto label_2520f8;
        case 0x2520fcu: goto label_2520fc;
        case 0x252100u: goto label_252100;
        case 0x252104u: goto label_252104;
        case 0x252108u: goto label_252108;
        case 0x25210cu: goto label_25210c;
        case 0x252110u: goto label_252110;
        case 0x252114u: goto label_252114;
        case 0x252118u: goto label_252118;
        case 0x25211cu: goto label_25211c;
        case 0x252120u: goto label_252120;
        case 0x252124u: goto label_252124;
        case 0x252128u: goto label_252128;
        case 0x25212cu: goto label_25212c;
        case 0x252130u: goto label_252130;
        case 0x252134u: goto label_252134;
        case 0x252138u: goto label_252138;
        case 0x25213cu: goto label_25213c;
        case 0x252140u: goto label_252140;
        case 0x252144u: goto label_252144;
        case 0x252148u: goto label_252148;
        case 0x25214cu: goto label_25214c;
        case 0x252150u: goto label_252150;
        case 0x252154u: goto label_252154;
        case 0x252158u: goto label_252158;
        case 0x25215cu: goto label_25215c;
        case 0x252160u: goto label_252160;
        case 0x252164u: goto label_252164;
        case 0x252168u: goto label_252168;
        case 0x25216cu: goto label_25216c;
        case 0x252170u: goto label_252170;
        case 0x252174u: goto label_252174;
        default: break;
    }

    ctx->pc = 0x251d98u;

label_251d98:
    // 0x251d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_251d9c:
    // 0x251d9c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x251d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_251da0:
    // 0x251da0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x251da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_251da4:
    // 0x251da4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x251da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_251da8:
    // 0x251da8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x251da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_251dac:
    // 0x251dac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x251dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_251db0:
    // 0x251db0: 0xc0952de  jal         func_254B78
label_251db4:
    if (ctx->pc == 0x251DB4u) {
        ctx->pc = 0x251DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DB0u;
        // 0x251db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DB8u;
        goto label_251db8;
    }
    ctx->pc = 0x251DB0u;
    SET_GPR_U32(ctx, 31, 0x251DB8u);
    ctx->pc = 0x251DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DB0u;
    // 0x251db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x251DB0u, 0x251DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251DB8u;
label_251db8:
    // 0x251db8: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_251dbc:
    if (ctx->pc == 0x251DBCu) {
        ctx->pc = 0x251DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DB8u;
        // 0x251dbc: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DC0u;
        goto label_251dc0;
    }
    ctx->pc = 0x251DB8u;
    {
        const bool branch_taken_0x251db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DB8u;
        // 0x251dbc: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251db8) {
            ctx->pc = 0x251FBCu;
            goto label_251fbc;
        }
    }
    ctx->pc = 0x251DC0u;
label_251dc0:
    // 0x251dc0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x251dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_251dc4:
    // 0x251dc4: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x251dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_251dc8:
    // 0x251dc8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x251dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_251dcc:
    // 0x251dcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_251dd0:
    if (ctx->pc == 0x251DD0u) {
        ctx->pc = 0x251DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DCCu;
        // 0x251dd0: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DD4u;
        goto label_251dd4;
    }
    ctx->pc = 0x251DCCu;
    {
        const bool branch_taken_0x251dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251dcc) {
            ctx->pc = 0x251DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251DCCu;
            // 0x251dd0: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251DE8u;
            goto label_251de8;
        }
    }
    ctx->pc = 0x251DD4u;
label_251dd4:
    // 0x251dd4: 0x8c63014c  lw          $v1, 0x14C($v1)
    ctx->pc = 0x251dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_251dd8:
    // 0x251dd8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x251dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_251ddc:
    // 0x251ddc: 0x54620077  bnel        $v1, $v0, . + 4 + (0x77 << 2)
label_251de0:
    if (ctx->pc == 0x251DE0u) {
        ctx->pc = 0x251DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DDCu;
        // 0x251de0: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251DE4u;
        goto label_251de4;
    }
    ctx->pc = 0x251DDCu;
    {
        const bool branch_taken_0x251ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251ddc) {
            ctx->pc = 0x251DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251DDCu;
            // 0x251de0: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251FBCu;
            goto label_251fbc;
        }
    }
    ctx->pc = 0x251DE4u;
label_251de4:
    // 0x251de4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x251de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_251de8:
    // 0x251de8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x251de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_251dec:
    // 0x251dec: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x251decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_251df0:
    // 0x251df0: 0x40f809  jalr        $v0
label_251df4:
    if (ctx->pc == 0x251DF4u) {
        ctx->pc = 0x251DF8u;
        goto label_251df8;
    }
    ctx->pc = 0x251DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251DF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251DF0u, 0x251DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251DF8u;
label_251df8:
    // 0x251df8: 0xc0954f4  jal         func_2553D0
label_251dfc:
    if (ctx->pc == 0x251DFCu) {
        ctx->pc = 0x251DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251DF8u;
        // 0x251dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E00u;
        goto label_251e00;
    }
    ctx->pc = 0x251DF8u;
    SET_GPR_U32(ctx, 31, 0x251E00u);
    ctx->pc = 0x251DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251DF8u;
    // 0x251dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553D0u, 0x251DF8u, 0x251E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E00u;
label_251e00:
    // 0x251e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251e04:
    // 0x251e04: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x251e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_251e08:
    // 0x251e08: 0xc08fed2  jal         func_23FB48
label_251e0c:
    if (ctx->pc == 0x251E0Cu) {
        ctx->pc = 0x251E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E08u;
        // 0x251e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E10u;
        goto label_251e10;
    }
    ctx->pc = 0x251E08u;
    SET_GPR_U32(ctx, 31, 0x251E10u);
    ctx->pc = 0x251E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E08u;
    // 0x251e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x251E08u, 0x251E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E10u;
label_251e10:
    // 0x251e10: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x251e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_251e14:
    // 0x251e14: 0xac400218  sw          $zero, 0x218($v0)
    ctx->pc = 0x251e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 0));
label_251e18:
    // 0x251e18: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x251e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_251e1c:
    // 0x251e1c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x251e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_251e20:
    // 0x251e20: 0x2462ffce  addiu       $v0, $v1, -0x32
    ctx->pc = 0x251e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
label_251e24:
    // 0x251e24: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x251e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_251e28:
    // 0x251e28: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_251e2c:
    if (ctx->pc == 0x251E2Cu) {
        ctx->pc = 0x251E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E28u;
        // 0x251e2c: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E30u;
        goto label_251e30;
    }
    ctx->pc = 0x251E28u;
    {
        const bool branch_taken_0x251e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e28) {
            ctx->pc = 0x251E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251E28u;
            // 0x251e2c: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251E68u;
            goto label_251e68;
        }
    }
    ctx->pc = 0x251E30u;
label_251e30:
    // 0x251e30: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x251e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_251e34:
    // 0x251e34: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_251e38:
    if (ctx->pc == 0x251E38u) {
        ctx->pc = 0x251E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E34u;
        // 0x251e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E3Cu;
        goto label_251e3c;
    }
    ctx->pc = 0x251E34u;
    {
        const bool branch_taken_0x251e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x251E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E34u;
        // 0x251e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e34) {
            ctx->pc = 0x251E5Cu;
            goto label_251e5c;
        }
    }
    ctx->pc = 0x251E3Cu;
label_251e3c:
    // 0x251e3c: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x251e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_251e40:
    // 0x251e40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x251e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251e44:
    // 0x251e44: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x251e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251e48:
    // 0x251e48: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x251e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251e4c:
    // 0x251e4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251e50:
    // 0x251e50: 0x0  nop
    ctx->pc = 0x251e50u;
    // NOP
label_251e54:
    // 0x251e54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_251e58:
    if (ctx->pc == 0x251E58u) {
        ctx->pc = 0x251E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E54u;
        // 0x251e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E5Cu;
        goto label_251e5c;
    }
    ctx->pc = 0x251E54u;
    {
        const bool branch_taken_0x251e54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251e54) {
            ctx->pc = 0x251E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251E54u;
            // 0x251e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251E5Cu;
            goto label_251e5c;
        }
    }
    ctx->pc = 0x251E5Cu;
label_251e5c:
    // 0x251e5c: 0x10a00039  beqz        $a1, . + 4 + (0x39 << 2)
label_251e60:
    if (ctx->pc == 0x251E60u) {
        ctx->pc = 0x251E64u;
        goto label_251e64;
    }
    ctx->pc = 0x251E5Cu;
    {
        const bool branch_taken_0x251e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e5c) {
            ctx->pc = 0x251F44u;
            goto label_251f44;
        }
    }
    ctx->pc = 0x251E64u;
label_251e64:
    // 0x251e64: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x251e64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_251e68:
    // 0x251e68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x251e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251e6c:
    // 0x251e6c: 0xc06e0f0  jal         func_1B83C0
label_251e70:
    if (ctx->pc == 0x251E70u) {
        ctx->pc = 0x251E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E6Cu;
        // 0x251e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E74u;
        goto label_251e74;
    }
    ctx->pc = 0x251E6Cu;
    SET_GPR_U32(ctx, 31, 0x251E74u);
    ctx->pc = 0x251E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E6Cu;
    // 0x251e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x251E6Cu, 0x251E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E74u;
label_251e74:
    // 0x251e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_251e78:
    if (ctx->pc == 0x251E78u) {
        ctx->pc = 0x251E7Cu;
        goto label_251e7c;
    }
    ctx->pc = 0x251E74u;
    {
        const bool branch_taken_0x251e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e74) {
            ctx->pc = 0x251E84u;
            goto label_251e84;
        }
    }
    ctx->pc = 0x251E7Cu;
label_251e7c:
    // 0x251e7c: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x251e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_251e80:
    // 0x251e80: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x251e80u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_251e84:
    // 0x251e84: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_251e88:
    if (ctx->pc == 0x251E88u) {
        ctx->pc = 0x251E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E84u;
        // 0x251e88: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E8Cu;
        goto label_251e8c;
    }
    ctx->pc = 0x251E84u;
    {
        const bool branch_taken_0x251e84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E84u;
        // 0x251e88: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e84) {
            ctx->pc = 0x251EECu;
            goto label_251eec;
        }
    }
    ctx->pc = 0x251E8Cu;
label_251e8c:
    // 0x251e8c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x251e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_251e90:
    // 0x251e90: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x251e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_251e94:
    // 0x251e94: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_251e98:
    if (ctx->pc == 0x251E98u) {
        ctx->pc = 0x251E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E94u;
        // 0x251e98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251E9Cu;
        goto label_251e9c;
    }
    ctx->pc = 0x251E94u;
    {
        const bool branch_taken_0x251e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x251E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E94u;
        // 0x251e98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e94) {
            ctx->pc = 0x251EBCu;
            goto label_251ebc;
        }
    }
    ctx->pc = 0x251E9Cu;
label_251e9c:
    // 0x251e9c: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x251e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_251ea0:
    // 0x251ea0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x251ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251ea4:
    // 0x251ea4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x251ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251ea8:
    // 0x251ea8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x251ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_251eac:
    // 0x251eac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x251eacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251eb0:
    // 0x251eb0: 0x0  nop
    ctx->pc = 0x251eb0u;
    // NOP
label_251eb4:
    // 0x251eb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_251eb8:
    if (ctx->pc == 0x251EB8u) {
        ctx->pc = 0x251EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EB4u;
        // 0x251eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251EBCu;
        goto label_251ebc;
    }
    ctx->pc = 0x251EB4u;
    {
        const bool branch_taken_0x251eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251eb4) {
            ctx->pc = 0x251EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251EB4u;
            // 0x251eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251EBCu;
            goto label_251ebc;
        }
    }
    ctx->pc = 0x251EBCu;
label_251ebc:
    // 0x251ebc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_251ec0:
    if (ctx->pc == 0x251EC0u) {
        ctx->pc = 0x251EC4u;
        goto label_251ec4;
    }
    ctx->pc = 0x251EBCu;
    {
        const bool branch_taken_0x251ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ebc) {
            ctx->pc = 0x251EDCu;
            goto label_251edc;
        }
    }
    ctx->pc = 0x251EC4u;
label_251ec4:
    // 0x251ec4: 0xc094a88  jal         func_252A20
label_251ec8:
    if (ctx->pc == 0x251EC8u) {
        ctx->pc = 0x251EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EC4u;
        // 0x251ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251ECCu;
        goto label_251ecc;
    }
    ctx->pc = 0x251EC4u;
    SET_GPR_U32(ctx, 31, 0x251ECCu);
    ctx->pc = 0x251EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EC4u;
    // 0x251ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252A20u, 0x251EC4u, 0x251ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251ECCu;
label_251ecc:
    // 0x251ecc: 0xc094a32  jal         func_2528C8
label_251ed0:
    if (ctx->pc == 0x251ED0u) {
        ctx->pc = 0x251ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251ECCu;
        // 0x251ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251ED4u;
        goto label_251ed4;
    }
    ctx->pc = 0x251ECCu;
    SET_GPR_U32(ctx, 31, 0x251ED4u);
    ctx->pc = 0x251ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251ECCu;
    // 0x251ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2528C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2528C8u, 0x251ECCu, 0x251ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251ED4u;
label_251ed4:
    // 0x251ed4: 0xc094ba6  jal         func_252E98
label_251ed8:
    if (ctx->pc == 0x251ED8u) {
        ctx->pc = 0x251ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251ED4u;
        // 0x251ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251EDCu;
        goto label_251edc;
    }
    ctx->pc = 0x251ED4u;
    SET_GPR_U32(ctx, 31, 0x251EDCu);
    ctx->pc = 0x251ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251ED4u;
    // 0x251ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252E98u, 0x251ED4u, 0x251EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251EDCu;
label_251edc:
    // 0x251edc: 0xc0954cc  jal         func_255330
label_251ee0:
    if (ctx->pc == 0x251EE0u) {
        ctx->pc = 0x251EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EDCu;
        // 0x251ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251EE4u;
        goto label_251ee4;
    }
    ctx->pc = 0x251EDCu;
    SET_GPR_U32(ctx, 31, 0x251EE4u);
    ctx->pc = 0x251EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EDCu;
    // 0x251ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255330u, 0x251EDCu, 0x251EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251EE4u;
label_251ee4:
    // 0x251ee4: 0x10000017  b           . + 4 + (0x17 << 2)
label_251ee8:
    if (ctx->pc == 0x251EE8u) {
        ctx->pc = 0x251EECu;
        goto label_251eec;
    }
    ctx->pc = 0x251EE4u;
    {
        const bool branch_taken_0x251ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ee4) {
            ctx->pc = 0x251F44u;
            goto label_251f44;
        }
    }
    ctx->pc = 0x251EECu;
label_251eec:
    // 0x251eec: 0xc6010404  lwc1        $f1, 0x404($s0)
    ctx->pc = 0x251eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251ef0:
    // 0x251ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x251ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251ef4:
    // 0x251ef4: 0x0  nop
    ctx->pc = 0x251ef4u;
    // NOP
label_251ef8:
    // 0x251ef8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x251ef8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251efc:
    // 0x251efc: 0x0  nop
    ctx->pc = 0x251efcu;
    // NOP
label_251f00:
    // 0x251f00: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_251f04:
    if (ctx->pc == 0x251F04u) {
        ctx->pc = 0x251F08u;
        goto label_251f08;
    }
    ctx->pc = 0x251F00u;
    {
        const bool branch_taken_0x251f00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251f00) {
            ctx->pc = 0x251F3Cu;
            goto label_251f3c;
        }
    }
    ctx->pc = 0x251F08u;
label_251f08:
    // 0x251f08: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x251f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
label_251f0c:
    // 0x251f0c: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x251f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
label_251f10:
    // 0x251f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251f14:
    // 0x251f14: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x251f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251f18:
    // 0x251f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251f1c:
    // 0x251f1c: 0x0  nop
    ctx->pc = 0x251f1cu;
    // NOP
label_251f20:
    // 0x251f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_251f24:
    if (ctx->pc == 0x251F24u) {
        ctx->pc = 0x251F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F20u;
        // 0x251f24: 0xe6010404  swc1        $f1, 0x404($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1028), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F28u;
        goto label_251f28;
    }
    ctx->pc = 0x251F20u;
    {
        const bool branch_taken_0x251f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F20u;
        // 0x251f24: 0xe6010404  swc1        $f1, 0x404($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f20) {
            ctx->pc = 0x251F3Cu;
            goto label_251f3c;
        }
    }
    ctx->pc = 0x251F28u;
label_251f28:
    // 0x251f28: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x251f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_251f2c:
    // 0x251f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251f30:
    // 0x251f30: 0x0  nop
    ctx->pc = 0x251f30u;
    // NOP
label_251f34:
    // 0x251f34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x251f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_251f38:
    // 0x251f38: 0xe6000404  swc1        $f0, 0x404($s0)
    ctx->pc = 0x251f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1028), bits); }
label_251f3c:
    // 0x251f3c: 0xc0954d0  jal         func_255340
label_251f40:
    if (ctx->pc == 0x251F40u) {
        ctx->pc = 0x251F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F3Cu;
        // 0x251f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F44u;
        goto label_251f44;
    }
    ctx->pc = 0x251F3Cu;
    SET_GPR_U32(ctx, 31, 0x251F44u);
    ctx->pc = 0x251F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F3Cu;
    // 0x251f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255340u, 0x251F3Cu, 0x251F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F44u;
label_251f44:
    // 0x251f44: 0xc095512  jal         func_255448
label_251f48:
    if (ctx->pc == 0x251F48u) {
        ctx->pc = 0x251F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F44u;
        // 0x251f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F4Cu;
        goto label_251f4c;
    }
    ctx->pc = 0x251F44u;
    SET_GPR_U32(ctx, 31, 0x251F4Cu);
    ctx->pc = 0x251F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F44u;
    // 0x251f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255448u, 0x251F44u, 0x251F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F4Cu;
label_251f4c:
    // 0x251f4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_251f50:
    if (ctx->pc == 0x251F50u) {
        ctx->pc = 0x251F54u;
        goto label_251f54;
    }
    ctx->pc = 0x251F4Cu;
    {
        const bool branch_taken_0x251f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251f4c) {
            ctx->pc = 0x251F74u;
            goto label_251f74;
        }
    }
    ctx->pc = 0x251F54u;
label_251f54:
    // 0x251f54: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x251f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_251f58:
    // 0x251f58: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x251f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_251f5c:
    // 0x251f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251f60:
    // 0x251f60: 0x0  nop
    ctx->pc = 0x251f60u;
    // NOP
label_251f64:
    // 0x251f64: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x251f64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_251f68:
    // 0x251f68: 0x0  nop
    ctx->pc = 0x251f68u;
    // NOP
label_251f6c:
    // 0x251f6c: 0x4502007d  bc1fl       . + 4 + (0x7D << 2)
label_251f70:
    if (ctx->pc == 0x251F70u) {
        ctx->pc = 0x251F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F6Cu;
        // 0x251f70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F74u;
        goto label_251f74;
    }
    ctx->pc = 0x251F6Cu;
    {
        const bool branch_taken_0x251f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251f6c) {
            ctx->pc = 0x251F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F6Cu;
            // 0x251f70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252164u;
            goto label_252164;
        }
    }
    ctx->pc = 0x251F74u;
label_251f74:
    // 0x251f74: 0xc0954d0  jal         func_255340
label_251f78:
    if (ctx->pc == 0x251F78u) {
        ctx->pc = 0x251F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F74u;
        // 0x251f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F7Cu;
        goto label_251f7c;
    }
    ctx->pc = 0x251F74u;
    SET_GPR_U32(ctx, 31, 0x251F7Cu);
    ctx->pc = 0x251F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F74u;
    // 0x251f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255340u, 0x251F74u, 0x251F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F7Cu;
label_251f7c:
    // 0x251f7c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x251f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_251f80:
    // 0x251f80: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x251f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
label_251f84:
    // 0x251f84: 0x28620031  slti        $v0, $v1, 0x31
    ctx->pc = 0x251f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
label_251f88:
    // 0x251f88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_251f8c:
    if (ctx->pc == 0x251F8Cu) {
        ctx->pc = 0x251F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F88u;
        // 0x251f8c: 0x28620038  slti        $v0, $v1, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F90u;
        goto label_251f90;
    }
    ctx->pc = 0x251F88u;
    {
        const bool branch_taken_0x251f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F88u;
        // 0x251f8c: 0x28620038  slti        $v0, $v1, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f88) {
            ctx->pc = 0x251FACu;
            goto label_251fac;
        }
    }
    ctx->pc = 0x251F90u;
label_251f90:
    // 0x251f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_251f94:
    if (ctx->pc == 0x251F94u) {
        ctx->pc = 0x251F98u;
        goto label_251f98;
    }
    ctx->pc = 0x251F90u;
    {
        const bool branch_taken_0x251f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f90) {
            ctx->pc = 0x251FACu;
            goto label_251fac;
        }
    }
    ctx->pc = 0x251F98u;
label_251f98:
    // 0x251f98: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x251f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_251f9c:
    // 0x251f9c: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x251f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_251fa0:
    // 0x251fa0: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x251fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_251fa4:
    // 0x251fa4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_251fa8:
    if (ctx->pc == 0x251FA8u) {
        ctx->pc = 0x251FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FA4u;
        // 0x251fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FACu;
        goto label_251fac;
    }
    ctx->pc = 0x251FA4u;
    {
        const bool branch_taken_0x251fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FA4u;
        // 0x251fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fa4) {
            ctx->pc = 0x252010u;
            goto label_252010;
        }
    }
    ctx->pc = 0x251FACu;
label_251fac:
    // 0x251fac: 0xc095510  jal         func_255440
label_251fb0:
    if (ctx->pc == 0x251FB0u) {
        ctx->pc = 0x251FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FACu;
        // 0x251fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FB4u;
        goto label_251fb4;
    }
    ctx->pc = 0x251FACu;
    SET_GPR_U32(ctx, 31, 0x251FB4u);
    ctx->pc = 0x251FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FACu;
    // 0x251fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x251FACu, 0x251FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FB4u;
label_251fb4:
    // 0x251fb4: 0x10000015  b           . + 4 + (0x15 << 2)
label_251fb8:
    if (ctx->pc == 0x251FB8u) {
        ctx->pc = 0x251FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FB4u;
        // 0x251fb8: 0xae000500  sw          $zero, 0x500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FBCu;
        goto label_251fbc;
    }
    ctx->pc = 0x251FB4u;
    {
        const bool branch_taken_0x251fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FB4u;
        // 0x251fb8: 0xae000500  sw          $zero, 0x500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fb4) {
            ctx->pc = 0x25200Cu;
            goto label_25200c;
        }
    }
    ctx->pc = 0x251FBCu;
label_251fbc:
    // 0x251fbc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x251fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_251fc0:
    // 0x251fc0: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x251fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_251fc4:
    // 0x251fc4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x251fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_251fc8:
    // 0x251fc8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_251fcc:
    if (ctx->pc == 0x251FCCu) {
        ctx->pc = 0x251FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FC8u;
        // 0x251fcc: 0xde021020  ld          $v0, 0x1020($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FD0u;
        goto label_251fd0;
    }
    ctx->pc = 0x251FC8u;
    {
        const bool branch_taken_0x251fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fc8) {
            ctx->pc = 0x251FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251FC8u;
            // 0x251fcc: 0xde021020  ld          $v0, 0x1020($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252024u;
            goto label_252024;
        }
    }
    ctx->pc = 0x251FD0u;
label_251fd0:
    // 0x251fd0: 0x8c63014c  lw          $v1, 0x14C($v1)
    ctx->pc = 0x251fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_251fd4:
    // 0x251fd4: 0x28620031  slti        $v0, $v1, 0x31
    ctx->pc = 0x251fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
label_251fd8:
    // 0x251fd8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_251fdc:
    if (ctx->pc == 0x251FDCu) {
        ctx->pc = 0x251FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FD8u;
        // 0x251fdc: 0x28620038  slti        $v0, $v1, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FE0u;
        goto label_251fe0;
    }
    ctx->pc = 0x251FD8u;
    {
        const bool branch_taken_0x251fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FD8u;
        // 0x251fdc: 0x28620038  slti        $v0, $v1, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fd8) {
            ctx->pc = 0x251FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251fac;
        }
    }
    ctx->pc = 0x251FE0u;
label_251fe0:
    // 0x251fe0: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_251fe4:
    if (ctx->pc == 0x251FE4u) {
        ctx->pc = 0x251FE8u;
        goto label_251fe8;
    }
    ctx->pc = 0x251FE0u;
    {
        const bool branch_taken_0x251fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251fe0) {
            ctx->pc = 0x251FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251fac;
        }
    }
    ctx->pc = 0x251FE8u;
label_251fe8:
    // 0x251fe8: 0xc0954d0  jal         func_255340
label_251fec:
    if (ctx->pc == 0x251FECu) {
        ctx->pc = 0x251FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FE8u;
        // 0x251fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FF0u;
        goto label_251ff0;
    }
    ctx->pc = 0x251FE8u;
    SET_GPR_U32(ctx, 31, 0x251FF0u);
    ctx->pc = 0x251FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251FE8u;
    // 0x251fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255340u, 0x251FE8u, 0x251FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251FF0u;
label_251ff0:
    // 0x251ff0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_251ff4:
    // 0x251ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_251ff8:
    // 0x251ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251ffc:
    // 0x251ffc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x251ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_252000:
    // 0x252000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x252000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252004:
    // 0x252004: 0xc08fed2  jal         func_23FB48
label_252008:
    if (ctx->pc == 0x252008u) {
        ctx->pc = 0x252008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252004u;
        // 0x252008: 0xe6000500  swc1        $f0, 0x500($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25200Cu;
        goto label_25200c;
    }
    ctx->pc = 0x252004u;
    SET_GPR_U32(ctx, 31, 0x25200Cu);
    ctx->pc = 0x252008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252004u;
    // 0x252008: 0xe6000500  swc1        $f0, 0x500($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x252004u, 0x25200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25200Cu;
label_25200c:
    // 0x25200c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252010:
    // 0x252010: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x252010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_252014:
    // 0x252014: 0xc08fed2  jal         func_23FB48
label_252018:
    if (ctx->pc == 0x252018u) {
        ctx->pc = 0x252018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252014u;
        // 0x252018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25201Cu;
        goto label_25201c;
    }
    ctx->pc = 0x252014u;
    SET_GPR_U32(ctx, 31, 0x25201Cu);
    ctx->pc = 0x252018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252014u;
    // 0x252018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x252014u, 0x25201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25201Cu;
label_25201c:
    // 0x25201c: 0x10000051  b           . + 4 + (0x51 << 2)
label_252020:
    if (ctx->pc == 0x252020u) {
        ctx->pc = 0x252020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25201Cu;
        // 0x252020: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252024u;
        goto label_252024;
    }
    ctx->pc = 0x25201Cu;
    {
        const bool branch_taken_0x25201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25201Cu;
        // 0x252020: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25201c) {
            ctx->pc = 0x252164u;
            goto label_252164;
        }
    }
    ctx->pc = 0x252024u;
label_252024:
    // 0x252024: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x252024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_252028:
    // 0x252028: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x252028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
label_25202c:
    // 0x25202c: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x25202cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_252030:
    // 0x252030: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x252030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_252034:
    // 0x252034: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x252034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_252038:
    // 0x252038: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_25203c:
    if (ctx->pc == 0x25203Cu) {
        ctx->pc = 0x25203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252038u;
        // 0x25203c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252040u;
        goto label_252040;
    }
    ctx->pc = 0x252038u;
    {
        const bool branch_taken_0x252038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252038u;
        // 0x25203c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252038) {
            ctx->pc = 0x252050u;
            goto label_252050;
        }
    }
    ctx->pc = 0x252040u;
label_252040:
    // 0x252040: 0xc094920  jal         func_252480
label_252044:
    if (ctx->pc == 0x252044u) {
        ctx->pc = 0x252044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252040u;
        // 0x252044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252048u;
        goto label_252048;
    }
    ctx->pc = 0x252040u;
    SET_GPR_U32(ctx, 31, 0x252048u);
    ctx->pc = 0x252044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252040u;
    // 0x252044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252480u, 0x252040u, 0x252048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252048u;
label_252048:
    // 0x252048: 0x10000016  b           . + 4 + (0x16 << 2)
label_25204c:
    if (ctx->pc == 0x25204Cu) {
        ctx->pc = 0x252050u;
        goto label_252050;
    }
    ctx->pc = 0x252048u;
    {
        const bool branch_taken_0x252048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252048) {
            ctx->pc = 0x2520A4u;
            goto label_2520a4;
        }
    }
    ctx->pc = 0x252050u;
label_252050:
    // 0x252050: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x252050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_252054:
    // 0x252054: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_252058:
    if (ctx->pc == 0x252058u) {
        ctx->pc = 0x252058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252054u;
        // 0x252058: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25205Cu;
        goto label_25205c;
    }
    ctx->pc = 0x252054u;
    {
        const bool branch_taken_0x252054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252054) {
            ctx->pc = 0x252058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252054u;
            // 0x252058: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252094u;
            goto label_252094;
        }
    }
    ctx->pc = 0x25205Cu;
label_25205c:
    // 0x25205c: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x25205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
label_252060:
    // 0x252060: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x252060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_252064:
    // 0x252064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252068:
    // 0x252068: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x252068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25206c:
    // 0x25206c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25206cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_252070:
    // 0x252070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x252070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_252074:
    // 0x252074: 0x0  nop
    ctx->pc = 0x252074u;
    // NOP
label_252078:
    // 0x252078: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_25207c:
    if (ctx->pc == 0x25207Cu) {
        ctx->pc = 0x25207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252078u;
        // 0x25207c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252080u;
        goto label_252080;
    }
    ctx->pc = 0x252078u;
    {
        const bool branch_taken_0x252078 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252078u;
        // 0x25207c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252078) {
            ctx->pc = 0x2520A4u;
            goto label_2520a4;
        }
    }
    ctx->pc = 0x252080u;
label_252080:
    // 0x252080: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x252080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_252084:
    // 0x252084: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_252088:
    if (ctx->pc == 0x252088u) {
        ctx->pc = 0x252088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252084u;
        // 0x252088: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25208Cu;
        goto label_25208c;
    }
    ctx->pc = 0x252084u;
    {
        const bool branch_taken_0x252084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x252088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252084u;
        // 0x252088: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252084) {
            ctx->pc = 0x2520A4u;
            goto label_2520a4;
        }
    }
    ctx->pc = 0x25208Cu;
label_25208c:
    // 0x25208c: 0x1000000a  b           . + 4 + (0xA << 2)
label_252090:
    if (ctx->pc == 0x252090u) {
        ctx->pc = 0x252090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25208Cu;
        // 0x252090: 0xe6000528  swc1        $f0, 0x528($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252094u;
        goto label_252094;
    }
    ctx->pc = 0x25208Cu;
    {
        const bool branch_taken_0x25208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25208Cu;
        // 0x252090: 0xe6000528  swc1        $f0, 0x528($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25208c) {
            ctx->pc = 0x2520B8u;
            goto label_2520b8;
        }
    }
    ctx->pc = 0x252094u;
label_252094:
    // 0x252094: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x252094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_252098:
    // 0x252098: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x252098u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_25209c:
    // 0x25209c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2520a0:
    if (ctx->pc == 0x2520A0u) {
        ctx->pc = 0x2520A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25209Cu;
        // 0x2520a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520A4u;
        goto label_2520a4;
    }
    ctx->pc = 0x25209Cu;
    {
        const bool branch_taken_0x25209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25209Cu;
        // 0x2520a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25209c) {
            ctx->pc = 0x2520B4u;
            goto label_2520b4;
        }
    }
    ctx->pc = 0x2520A4u;
label_2520a4:
    // 0x2520a4: 0xc094a88  jal         func_252A20
label_2520a8:
    if (ctx->pc == 0x2520A8u) {
        ctx->pc = 0x2520A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520A4u;
        // 0x2520a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520ACu;
        goto label_2520ac;
    }
    ctx->pc = 0x2520A4u;
    SET_GPR_U32(ctx, 31, 0x2520ACu);
    ctx->pc = 0x2520A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520A4u;
    // 0x2520a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252A20u, 0x2520A4u, 0x2520ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520ACu;
label_2520ac:
    // 0x2520ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_2520b0:
    if (ctx->pc == 0x2520B0u) {
        ctx->pc = 0x2520B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520ACu;
        // 0x2520b0: 0xde021020  ld          $v0, 0x1020($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520B4u;
        goto label_2520b4;
    }
    ctx->pc = 0x2520ACu;
    {
        const bool branch_taken_0x2520ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520ACu;
        // 0x2520b0: 0xde021020  ld          $v0, 0x1020($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520ac) {
            ctx->pc = 0x2520C0u;
            goto label_2520c0;
        }
    }
    ctx->pc = 0x2520B4u;
label_2520b4:
    // 0x2520b4: 0xe6000528  swc1        $f0, 0x528($s0)
    ctx->pc = 0x2520b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
label_2520b8:
    // 0x2520b8: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x2520b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
label_2520bc:
    // 0x2520bc: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x2520bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_2520c0:
    // 0x2520c0: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x2520c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_2520c4:
    // 0x2520c4: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2520c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_2520c8:
    // 0x2520c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2520c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2520cc:
    // 0x2520cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2520ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2520d0:
    // 0x2520d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2520d4:
    if (ctx->pc == 0x2520D4u) {
        ctx->pc = 0x2520D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520D0u;
        // 0x2520d4: 0x26030534  addiu       $v1, $s0, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520D8u;
        goto label_2520d8;
    }
    ctx->pc = 0x2520D0u;
    {
        const bool branch_taken_0x2520d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2520D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520D0u;
        // 0x2520d4: 0x26030534  addiu       $v1, $s0, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520d0) {
            ctx->pc = 0x2520F0u;
            goto label_2520f0;
        }
    }
    ctx->pc = 0x2520D8u;
label_2520d8:
    // 0x2520d8: 0xc094a32  jal         func_2528C8
label_2520dc:
    if (ctx->pc == 0x2520DCu) {
        ctx->pc = 0x2520DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520D8u;
        // 0x2520dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520E0u;
        goto label_2520e0;
    }
    ctx->pc = 0x2520D8u;
    SET_GPR_U32(ctx, 31, 0x2520E0u);
    ctx->pc = 0x2520DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520D8u;
    // 0x2520dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2528C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2528C8u, 0x2520D8u, 0x2520E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520E0u;
label_2520e0:
    // 0x2520e0: 0xc094ba6  jal         func_252E98
label_2520e4:
    if (ctx->pc == 0x2520E4u) {
        ctx->pc = 0x2520E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520E0u;
        // 0x2520e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520E8u;
        goto label_2520e8;
    }
    ctx->pc = 0x2520E0u;
    SET_GPR_U32(ctx, 31, 0x2520E8u);
    ctx->pc = 0x2520E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520E0u;
    // 0x2520e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252E98u, 0x2520E0u, 0x2520E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520E8u;
label_2520e8:
    // 0x2520e8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2520ec:
    if (ctx->pc == 0x2520ECu) {
        ctx->pc = 0x2520ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520E8u;
        // 0x2520ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2520F0u;
        goto label_2520f0;
    }
    ctx->pc = 0x2520E8u;
    {
        const bool branch_taken_0x2520e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520E8u;
        // 0x2520ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520e8) {
            ctx->pc = 0x252164u;
            goto label_252164;
        }
    }
    ctx->pc = 0x2520F0u;
label_2520f0:
    // 0x2520f0: 0x26020608  addiu       $v0, $s0, 0x608
    ctx->pc = 0x2520f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1544));
label_2520f4:
    // 0x2520f4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x2520f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2520f8:
    // 0x2520f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2520f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2520fc:
    // 0x2520fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2520fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_252100:
    // 0x252100: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x252100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_252104:
    // 0x252104: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x252104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_252108:
    // 0x252108: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_25210c:
    if (ctx->pc == 0x25210Cu) {
        ctx->pc = 0x25210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252108u;
        // 0x25210c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252110u;
        goto label_252110;
    }
    ctx->pc = 0x252108u;
    {
        const bool branch_taken_0x252108 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x25210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252108u;
        // 0x25210c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252108) {
            ctx->pc = 0x2520F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2520f8;
        }
    }
    ctx->pc = 0x252110u;
label_252110:
    // 0x252110: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x252110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_252114:
    // 0x252114: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x252114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
label_252118:
    // 0x252118: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x252118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_25211c:
    // 0x25211c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_252120:
    // 0x252120: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x252120u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_252124:
    // 0x252124: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_252128:
    if (ctx->pc == 0x252128u) {
        ctx->pc = 0x252128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252124u;
        // 0x252128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25212Cu;
        goto label_25212c;
    }
    ctx->pc = 0x252124u;
    {
        const bool branch_taken_0x252124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252124u;
        // 0x252128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252124) {
            ctx->pc = 0x25213Cu;
            goto label_25213c;
        }
    }
    ctx->pc = 0x25212Cu;
label_25212c:
    // 0x25212c: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x25212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_252130:
    // 0x252130: 0xc06b85c  jal         func_1AE170
label_252134:
    if (ctx->pc == 0x252134u) {
        ctx->pc = 0x252134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252130u;
        // 0x252134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252138u;
        goto label_252138;
    }
    ctx->pc = 0x252130u;
    SET_GPR_U32(ctx, 31, 0x252138u);
    ctx->pc = 0x252134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252130u;
    // 0x252134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x252130u, 0x252138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252138u;
label_252138:
    // 0x252138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25213c:
    // 0x25213c: 0xc08a15a  jal         func_228568
label_252140:
    if (ctx->pc == 0x252140u) {
        ctx->pc = 0x252140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25213Cu;
        // 0x252140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252144u;
        goto label_252144;
    }
    ctx->pc = 0x25213Cu;
    SET_GPR_U32(ctx, 31, 0x252144u);
    ctx->pc = 0x252140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25213Cu;
    // 0x252140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x25213Cu, 0x252144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252144u;
label_252144:
    // 0x252144: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x252144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252148:
    // 0x252148: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x252148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_25214c:
    // 0x25214c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x25214cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_252150:
    // 0x252150: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_252154:
    if (ctx->pc == 0x252154u) {
        ctx->pc = 0x252154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252150u;
        // 0x252154: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252158u;
        goto label_252158;
    }
    ctx->pc = 0x252150u;
    {
        const bool branch_taken_0x252150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252150) {
            ctx->pc = 0x252154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252150u;
            // 0x252154: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252164u;
            goto label_252164;
        }
    }
    ctx->pc = 0x252158u;
label_252158:
    // 0x252158: 0xc094ba6  jal         func_252E98
label_25215c:
    if (ctx->pc == 0x25215Cu) {
        ctx->pc = 0x25215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252158u;
        // 0x25215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252160u;
        goto label_252160;
    }
    ctx->pc = 0x252158u;
    SET_GPR_U32(ctx, 31, 0x252160u);
    ctx->pc = 0x25215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252158u;
    // 0x25215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252E98u, 0x252158u, 0x252160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252160u;
label_252160:
    // 0x252160: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252164:
    // 0x252164: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x252164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_252168:
    // 0x252168: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25216c:
    // 0x25216c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_252170:
    // 0x252170: 0x3e00008  jr          $ra
label_252174:
    if (ctx->pc == 0x252174u) {
        ctx->pc = 0x252174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252170u;
        // 0x252174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252178u;
        goto label_fallthrough_0x252170;
    }
    ctx->pc = 0x252170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252170u;
        // 0x252174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252170:
    ctx->pc = 0x252178u;
}
