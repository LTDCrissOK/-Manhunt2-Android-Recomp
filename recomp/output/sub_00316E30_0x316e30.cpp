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

// Function: sub_00316E30
// Address: 0x316e30 - 0x3172e0
void sub_00316E30_0x316e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316E30_0x316e30");
#endif

    switch (ctx->pc) {
        case 0x316e30u: goto label_316e30;
        case 0x316e34u: goto label_316e34;
        case 0x316e38u: goto label_316e38;
        case 0x316e3cu: goto label_316e3c;
        case 0x316e40u: goto label_316e40;
        case 0x316e44u: goto label_316e44;
        case 0x316e48u: goto label_316e48;
        case 0x316e4cu: goto label_316e4c;
        case 0x316e50u: goto label_316e50;
        case 0x316e54u: goto label_316e54;
        case 0x316e58u: goto label_316e58;
        case 0x316e5cu: goto label_316e5c;
        case 0x316e60u: goto label_316e60;
        case 0x316e64u: goto label_316e64;
        case 0x316e68u: goto label_316e68;
        case 0x316e6cu: goto label_316e6c;
        case 0x316e70u: goto label_316e70;
        case 0x316e74u: goto label_316e74;
        case 0x316e78u: goto label_316e78;
        case 0x316e7cu: goto label_316e7c;
        case 0x316e80u: goto label_316e80;
        case 0x316e84u: goto label_316e84;
        case 0x316e88u: goto label_316e88;
        case 0x316e8cu: goto label_316e8c;
        case 0x316e90u: goto label_316e90;
        case 0x316e94u: goto label_316e94;
        case 0x316e98u: goto label_316e98;
        case 0x316e9cu: goto label_316e9c;
        case 0x316ea0u: goto label_316ea0;
        case 0x316ea4u: goto label_316ea4;
        case 0x316ea8u: goto label_316ea8;
        case 0x316eacu: goto label_316eac;
        case 0x316eb0u: goto label_316eb0;
        case 0x316eb4u: goto label_316eb4;
        case 0x316eb8u: goto label_316eb8;
        case 0x316ebcu: goto label_316ebc;
        case 0x316ec0u: goto label_316ec0;
        case 0x316ec4u: goto label_316ec4;
        case 0x316ec8u: goto label_316ec8;
        case 0x316eccu: goto label_316ecc;
        case 0x316ed0u: goto label_316ed0;
        case 0x316ed4u: goto label_316ed4;
        case 0x316ed8u: goto label_316ed8;
        case 0x316edcu: goto label_316edc;
        case 0x316ee0u: goto label_316ee0;
        case 0x316ee4u: goto label_316ee4;
        case 0x316ee8u: goto label_316ee8;
        case 0x316eecu: goto label_316eec;
        case 0x316ef0u: goto label_316ef0;
        case 0x316ef4u: goto label_316ef4;
        case 0x316ef8u: goto label_316ef8;
        case 0x316efcu: goto label_316efc;
        case 0x316f00u: goto label_316f00;
        case 0x316f04u: goto label_316f04;
        case 0x316f08u: goto label_316f08;
        case 0x316f0cu: goto label_316f0c;
        case 0x316f10u: goto label_316f10;
        case 0x316f14u: goto label_316f14;
        case 0x316f18u: goto label_316f18;
        case 0x316f1cu: goto label_316f1c;
        case 0x316f20u: goto label_316f20;
        case 0x316f24u: goto label_316f24;
        case 0x316f28u: goto label_316f28;
        case 0x316f2cu: goto label_316f2c;
        case 0x316f30u: goto label_316f30;
        case 0x316f34u: goto label_316f34;
        case 0x316f38u: goto label_316f38;
        case 0x316f3cu: goto label_316f3c;
        case 0x316f40u: goto label_316f40;
        case 0x316f44u: goto label_316f44;
        case 0x316f48u: goto label_316f48;
        case 0x316f4cu: goto label_316f4c;
        case 0x316f50u: goto label_316f50;
        case 0x316f54u: goto label_316f54;
        case 0x316f58u: goto label_316f58;
        case 0x316f5cu: goto label_316f5c;
        case 0x316f60u: goto label_316f60;
        case 0x316f64u: goto label_316f64;
        case 0x316f68u: goto label_316f68;
        case 0x316f6cu: goto label_316f6c;
        case 0x316f70u: goto label_316f70;
        case 0x316f74u: goto label_316f74;
        case 0x316f78u: goto label_316f78;
        case 0x316f7cu: goto label_316f7c;
        case 0x316f80u: goto label_316f80;
        case 0x316f84u: goto label_316f84;
        case 0x316f88u: goto label_316f88;
        case 0x316f8cu: goto label_316f8c;
        case 0x316f90u: goto label_316f90;
        case 0x316f94u: goto label_316f94;
        case 0x316f98u: goto label_316f98;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fa0u: goto label_316fa0;
        case 0x316fa4u: goto label_316fa4;
        case 0x316fa8u: goto label_316fa8;
        case 0x316facu: goto label_316fac;
        case 0x316fb0u: goto label_316fb0;
        case 0x316fb4u: goto label_316fb4;
        case 0x316fb8u: goto label_316fb8;
        case 0x316fbcu: goto label_316fbc;
        case 0x316fc0u: goto label_316fc0;
        case 0x316fc4u: goto label_316fc4;
        case 0x316fc8u: goto label_316fc8;
        case 0x316fccu: goto label_316fcc;
        case 0x316fd0u: goto label_316fd0;
        case 0x316fd4u: goto label_316fd4;
        case 0x316fd8u: goto label_316fd8;
        case 0x316fdcu: goto label_316fdc;
        case 0x316fe0u: goto label_316fe0;
        case 0x316fe4u: goto label_316fe4;
        case 0x316fe8u: goto label_316fe8;
        case 0x316fecu: goto label_316fec;
        case 0x316ff0u: goto label_316ff0;
        case 0x316ff4u: goto label_316ff4;
        case 0x316ff8u: goto label_316ff8;
        case 0x316ffcu: goto label_316ffc;
        case 0x317000u: goto label_317000;
        case 0x317004u: goto label_317004;
        case 0x317008u: goto label_317008;
        case 0x31700cu: goto label_31700c;
        case 0x317010u: goto label_317010;
        case 0x317014u: goto label_317014;
        case 0x317018u: goto label_317018;
        case 0x31701cu: goto label_31701c;
        case 0x317020u: goto label_317020;
        case 0x317024u: goto label_317024;
        case 0x317028u: goto label_317028;
        case 0x31702cu: goto label_31702c;
        case 0x317030u: goto label_317030;
        case 0x317034u: goto label_317034;
        case 0x317038u: goto label_317038;
        case 0x31703cu: goto label_31703c;
        case 0x317040u: goto label_317040;
        case 0x317044u: goto label_317044;
        case 0x317048u: goto label_317048;
        case 0x31704cu: goto label_31704c;
        case 0x317050u: goto label_317050;
        case 0x317054u: goto label_317054;
        case 0x317058u: goto label_317058;
        case 0x31705cu: goto label_31705c;
        case 0x317060u: goto label_317060;
        case 0x317064u: goto label_317064;
        case 0x317068u: goto label_317068;
        case 0x31706cu: goto label_31706c;
        case 0x317070u: goto label_317070;
        case 0x317074u: goto label_317074;
        case 0x317078u: goto label_317078;
        case 0x31707cu: goto label_31707c;
        case 0x317080u: goto label_317080;
        case 0x317084u: goto label_317084;
        case 0x317088u: goto label_317088;
        case 0x31708cu: goto label_31708c;
        case 0x317090u: goto label_317090;
        case 0x317094u: goto label_317094;
        case 0x317098u: goto label_317098;
        case 0x31709cu: goto label_31709c;
        case 0x3170a0u: goto label_3170a0;
        case 0x3170a4u: goto label_3170a4;
        case 0x3170a8u: goto label_3170a8;
        case 0x3170acu: goto label_3170ac;
        case 0x3170b0u: goto label_3170b0;
        case 0x3170b4u: goto label_3170b4;
        case 0x3170b8u: goto label_3170b8;
        case 0x3170bcu: goto label_3170bc;
        case 0x3170c0u: goto label_3170c0;
        case 0x3170c4u: goto label_3170c4;
        case 0x3170c8u: goto label_3170c8;
        case 0x3170ccu: goto label_3170cc;
        case 0x3170d0u: goto label_3170d0;
        case 0x3170d4u: goto label_3170d4;
        case 0x3170d8u: goto label_3170d8;
        case 0x3170dcu: goto label_3170dc;
        case 0x3170e0u: goto label_3170e0;
        case 0x3170e4u: goto label_3170e4;
        case 0x3170e8u: goto label_3170e8;
        case 0x3170ecu: goto label_3170ec;
        case 0x3170f0u: goto label_3170f0;
        case 0x3170f4u: goto label_3170f4;
        case 0x3170f8u: goto label_3170f8;
        case 0x3170fcu: goto label_3170fc;
        case 0x317100u: goto label_317100;
        case 0x317104u: goto label_317104;
        case 0x317108u: goto label_317108;
        case 0x31710cu: goto label_31710c;
        case 0x317110u: goto label_317110;
        case 0x317114u: goto label_317114;
        case 0x317118u: goto label_317118;
        case 0x31711cu: goto label_31711c;
        case 0x317120u: goto label_317120;
        case 0x317124u: goto label_317124;
        case 0x317128u: goto label_317128;
        case 0x31712cu: goto label_31712c;
        case 0x317130u: goto label_317130;
        case 0x317134u: goto label_317134;
        case 0x317138u: goto label_317138;
        case 0x31713cu: goto label_31713c;
        case 0x317140u: goto label_317140;
        case 0x317144u: goto label_317144;
        case 0x317148u: goto label_317148;
        case 0x31714cu: goto label_31714c;
        case 0x317150u: goto label_317150;
        case 0x317154u: goto label_317154;
        case 0x317158u: goto label_317158;
        case 0x31715cu: goto label_31715c;
        case 0x317160u: goto label_317160;
        case 0x317164u: goto label_317164;
        case 0x317168u: goto label_317168;
        case 0x31716cu: goto label_31716c;
        case 0x317170u: goto label_317170;
        case 0x317174u: goto label_317174;
        case 0x317178u: goto label_317178;
        case 0x31717cu: goto label_31717c;
        case 0x317180u: goto label_317180;
        case 0x317184u: goto label_317184;
        case 0x317188u: goto label_317188;
        case 0x31718cu: goto label_31718c;
        case 0x317190u: goto label_317190;
        case 0x317194u: goto label_317194;
        case 0x317198u: goto label_317198;
        case 0x31719cu: goto label_31719c;
        case 0x3171a0u: goto label_3171a0;
        case 0x3171a4u: goto label_3171a4;
        case 0x3171a8u: goto label_3171a8;
        case 0x3171acu: goto label_3171ac;
        case 0x3171b0u: goto label_3171b0;
        case 0x3171b4u: goto label_3171b4;
        case 0x3171b8u: goto label_3171b8;
        case 0x3171bcu: goto label_3171bc;
        case 0x3171c0u: goto label_3171c0;
        case 0x3171c4u: goto label_3171c4;
        case 0x3171c8u: goto label_3171c8;
        case 0x3171ccu: goto label_3171cc;
        case 0x3171d0u: goto label_3171d0;
        case 0x3171d4u: goto label_3171d4;
        case 0x3171d8u: goto label_3171d8;
        case 0x3171dcu: goto label_3171dc;
        case 0x3171e0u: goto label_3171e0;
        case 0x3171e4u: goto label_3171e4;
        case 0x3171e8u: goto label_3171e8;
        case 0x3171ecu: goto label_3171ec;
        case 0x3171f0u: goto label_3171f0;
        case 0x3171f4u: goto label_3171f4;
        case 0x3171f8u: goto label_3171f8;
        case 0x3171fcu: goto label_3171fc;
        case 0x317200u: goto label_317200;
        case 0x317204u: goto label_317204;
        case 0x317208u: goto label_317208;
        case 0x31720cu: goto label_31720c;
        case 0x317210u: goto label_317210;
        case 0x317214u: goto label_317214;
        case 0x317218u: goto label_317218;
        case 0x31721cu: goto label_31721c;
        case 0x317220u: goto label_317220;
        case 0x317224u: goto label_317224;
        case 0x317228u: goto label_317228;
        case 0x31722cu: goto label_31722c;
        case 0x317230u: goto label_317230;
        case 0x317234u: goto label_317234;
        case 0x317238u: goto label_317238;
        case 0x31723cu: goto label_31723c;
        case 0x317240u: goto label_317240;
        case 0x317244u: goto label_317244;
        case 0x317248u: goto label_317248;
        case 0x31724cu: goto label_31724c;
        case 0x317250u: goto label_317250;
        case 0x317254u: goto label_317254;
        case 0x317258u: goto label_317258;
        case 0x31725cu: goto label_31725c;
        case 0x317260u: goto label_317260;
        case 0x317264u: goto label_317264;
        case 0x317268u: goto label_317268;
        case 0x31726cu: goto label_31726c;
        case 0x317270u: goto label_317270;
        case 0x317274u: goto label_317274;
        case 0x317278u: goto label_317278;
        case 0x31727cu: goto label_31727c;
        case 0x317280u: goto label_317280;
        case 0x317284u: goto label_317284;
        case 0x317288u: goto label_317288;
        case 0x31728cu: goto label_31728c;
        case 0x317290u: goto label_317290;
        case 0x317294u: goto label_317294;
        case 0x317298u: goto label_317298;
        case 0x31729cu: goto label_31729c;
        case 0x3172a0u: goto label_3172a0;
        case 0x3172a4u: goto label_3172a4;
        case 0x3172a8u: goto label_3172a8;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b0u: goto label_3172b0;
        case 0x3172b4u: goto label_3172b4;
        case 0x3172b8u: goto label_3172b8;
        case 0x3172bcu: goto label_3172bc;
        case 0x3172c0u: goto label_3172c0;
        case 0x3172c4u: goto label_3172c4;
        case 0x3172c8u: goto label_3172c8;
        case 0x3172ccu: goto label_3172cc;
        case 0x3172d0u: goto label_3172d0;
        case 0x3172d4u: goto label_3172d4;
        case 0x3172d8u: goto label_3172d8;
        case 0x3172dcu: goto label_3172dc;
        default: break;
    }

    ctx->pc = 0x316e30u;

label_316e30:
    // 0x316e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x316e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_316e34:
    // 0x316e34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x316e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_316e38:
    // 0x316e38: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x316e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_316e3c:
    // 0x316e3c: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x316e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
label_316e40:
    // 0x316e40: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x316e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_316e44:
    // 0x316e44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x316e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316e48:
    // 0x316e48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x316e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_316e4c:
    // 0x316e4c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x316e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_316e50:
    // 0x316e50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x316e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_316e54:
    // 0x316e54: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x316e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_316e58:
    // 0x316e58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x316e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_316e5c:
    // 0x316e5c: 0xc0b28aa  jal         func_2CA2A8
label_316e60:
    if (ctx->pc == 0x316E60u) {
        ctx->pc = 0x316E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E5Cu;
        // 0x316e60: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E64u;
        goto label_316e64;
    }
    ctx->pc = 0x316E5Cu;
    SET_GPR_U32(ctx, 31, 0x316E64u);
    ctx->pc = 0x316E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E5Cu;
    // 0x316e60: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x316E5Cu, 0x316E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E64u;
label_316e64:
    // 0x316e64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x316e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_316e68:
    // 0x316e68: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x316e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_316e6c:
    // 0x316e6c: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x316e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_316e70:
    // 0x316e70: 0xc0b2998  jal         func_2CA660
label_316e74:
    if (ctx->pc == 0x316E74u) {
        ctx->pc = 0x316E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E70u;
        // 0x316e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E78u;
        goto label_316e78;
    }
    ctx->pc = 0x316E70u;
    SET_GPR_U32(ctx, 31, 0x316E78u);
    ctx->pc = 0x316E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E70u;
    // 0x316e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA660u, 0x316E70u, 0x316E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E78u;
label_316e78:
    // 0x316e78: 0xc0b28aa  jal         func_2CA2A8
label_316e7c:
    if (ctx->pc == 0x316E7Cu) {
        ctx->pc = 0x316E80u;
        goto label_316e80;
    }
    ctx->pc = 0x316E78u;
    SET_GPR_U32(ctx, 31, 0x316E80u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x316E78u, 0x316E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E80u;
label_316e80:
    // 0x316e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x316e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316e84:
    // 0x316e84: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x316e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_316e88:
    // 0x316e88: 0xc0b29b6  jal         func_2CA6D8
label_316e8c:
    if (ctx->pc == 0x316E8Cu) {
        ctx->pc = 0x316E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E88u;
        // 0x316e8c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E90u;
        goto label_316e90;
    }
    ctx->pc = 0x316E88u;
    SET_GPR_U32(ctx, 31, 0x316E90u);
    ctx->pc = 0x316E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E88u;
    // 0x316e8c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6D8u, 0x316E88u, 0x316E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E90u;
label_316e90:
    // 0x316e90: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x316e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_316e94:
    // 0x316e94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x316e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_316e98:
    // 0x316e98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x316e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_316e9c:
    // 0x316e9c: 0xc60c2b30  lwc1        $f12, 0x2B30($s0)
    ctx->pc = 0x316e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_316ea0:
    // 0x316ea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316ea4:
    // 0x316ea4: 0xc082942  jal         func_20A508
label_316ea8:
    if (ctx->pc == 0x316EA8u) {
        ctx->pc = 0x316EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EA4u;
        // 0x316ea8: 0xac82bd9c  sw          $v0, -0x4264($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EACu;
        goto label_316eac;
    }
    ctx->pc = 0x316EA4u;
    SET_GPR_U32(ctx, 31, 0x316EACu);
    ctx->pc = 0x316EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EA4u;
    // 0x316ea8: 0xac82bd9c  sw          $v0, -0x4264($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A508u, 0x316EA4u, 0x316EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EACu;
label_316eac:
    // 0x316eac: 0xc0734ce  jal         func_1CD338
label_316eb0:
    if (ctx->pc == 0x316EB0u) {
        ctx->pc = 0x316EB4u;
        goto label_316eb4;
    }
    ctx->pc = 0x316EACu;
    SET_GPR_U32(ctx, 31, 0x316EB4u);
    ctx->pc = 0x1CD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD338u, 0x316EACu, 0x316EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EB4u;
label_316eb4:
    // 0x316eb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x316eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_316eb8:
    // 0x316eb8: 0xc0b69bc  jal         func_2DA6F0
label_316ebc:
    if (ctx->pc == 0x316EBCu) {
        ctx->pc = 0x316EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EB8u;
        // 0x316ebc: 0x8c442b40  lw          $a0, 0x2B40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EC0u;
        goto label_316ec0;
    }
    ctx->pc = 0x316EB8u;
    SET_GPR_U32(ctx, 31, 0x316EC0u);
    ctx->pc = 0x316EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EB8u;
    // 0x316ebc: 0x8c442b40  lw          $a0, 0x2B40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA6F0u, 0x316EB8u, 0x316EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EC0u;
label_316ec0:
    // 0x316ec0: 0xc09606e  jal         func_2581B8
label_316ec4:
    if (ctx->pc == 0x316EC4u) {
        ctx->pc = 0x316EC8u;
        goto label_316ec8;
    }
    ctx->pc = 0x316EC0u;
    SET_GPR_U32(ctx, 31, 0x316EC8u);
    ctx->pc = 0x2581B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2581B8u, 0x316EC0u, 0x316EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EC8u;
label_316ec8:
    // 0x316ec8: 0xc0c6780  jal         func_319E00
label_316ecc:
    if (ctx->pc == 0x316ECCu) {
        ctx->pc = 0x316ED0u;
        goto label_316ed0;
    }
    ctx->pc = 0x316EC8u;
    SET_GPR_U32(ctx, 31, 0x316ED0u);
    ctx->pc = 0x319E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319E00u, 0x316EC8u, 0x316ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316ED0u;
label_316ed0:
    // 0x316ed0: 0xc075fc8  jal         func_1D7F20
label_316ed4:
    if (ctx->pc == 0x316ED4u) {
        ctx->pc = 0x316ED8u;
        goto label_316ed8;
    }
    ctx->pc = 0x316ED0u;
    SET_GPR_U32(ctx, 31, 0x316ED8u);
    ctx->pc = 0x1D7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7F20u, 0x316ED0u, 0x316ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316ED8u;
label_316ed8:
    // 0x316ed8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316edc:
    // 0x316edc: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x316edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948897)));
label_316ee0:
    // 0x316ee0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_316ee4:
    if (ctx->pc == 0x316EE4u) {
        ctx->pc = 0x316EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EE0u;
        // 0x316ee4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EE8u;
        goto label_316ee8;
    }
    ctx->pc = 0x316EE0u;
    {
        const bool branch_taken_0x316ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EE0u;
        // 0x316ee4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ee0) {
            ctx->pc = 0x316EF4u;
            goto label_316ef4;
        }
    }
    ctx->pc = 0x316EE8u;
label_316ee8:
    // 0x316ee8: 0xc0bb5de  jal         func_2ED778
label_316eec:
    if (ctx->pc == 0x316EECu) {
        ctx->pc = 0x316EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EE8u;
        // 0x316eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316EF0u;
        goto label_316ef0;
    }
    ctx->pc = 0x316EE8u;
    SET_GPR_U32(ctx, 31, 0x316EF0u);
    ctx->pc = 0x316EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EE8u;
    // 0x316eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x316EE8u, 0x316EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EF0u;
label_316ef0:
    // 0x316ef0: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x316ef0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_316ef4:
    // 0x316ef4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316ef8:
    // 0x316ef8: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x316ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
label_316efc:
    // 0x316efc: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_316f00:
    if (ctx->pc == 0x316F00u) {
        ctx->pc = 0x316F04u;
        goto label_316f04;
    }
    ctx->pc = 0x316EFCu;
    {
        const bool branch_taken_0x316efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x316efc) {
            ctx->pc = 0x3170E8u;
            goto label_3170e8;
        }
    }
    ctx->pc = 0x316F04u;
label_316f04:
    // 0x316f04: 0x16200078  bnez        $s1, . + 4 + (0x78 << 2)
label_316f08:
    if (ctx->pc == 0x316F08u) {
        ctx->pc = 0x316F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F04u;
        // 0x316f08: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F0Cu;
        goto label_316f0c;
    }
    ctx->pc = 0x316F04u;
    {
        const bool branch_taken_0x316f04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x316F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F04u;
        // 0x316f08: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f04) {
            ctx->pc = 0x3170E8u;
            goto label_3170e8;
        }
    }
    ctx->pc = 0x316F0Cu;
label_316f0c:
    // 0x316f0c: 0xc0ab084  jal         func_2AC210
label_316f10:
    if (ctx->pc == 0x316F10u) {
        ctx->pc = 0x316F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F0Cu;
        // 0x316f10: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F14u;
        goto label_316f14;
    }
    ctx->pc = 0x316F0Cu;
    SET_GPR_U32(ctx, 31, 0x316F14u);
    ctx->pc = 0x316F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F0Cu;
    // 0x316f10: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC210u, 0x316F0Cu, 0x316F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F14u;
label_316f14:
    // 0x316f14: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x316f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_316f18:
    // 0x316f18: 0xc082982  jal         func_20A608
label_316f1c:
    if (ctx->pc == 0x316F1Cu) {
        ctx->pc = 0x316F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F18u;
        // 0x316f1c: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F20u;
        goto label_316f20;
    }
    ctx->pc = 0x316F18u;
    SET_GPR_U32(ctx, 31, 0x316F20u);
    ctx->pc = 0x316F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F18u;
    // 0x316f1c: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A608u, 0x316F18u, 0x316F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F20u;
label_316f20:
    // 0x316f20: 0xc075248  jal         func_1D4920
label_316f24:
    if (ctx->pc == 0x316F24u) {
        ctx->pc = 0x316F28u;
        goto label_316f28;
    }
    ctx->pc = 0x316F20u;
    SET_GPR_U32(ctx, 31, 0x316F28u);
    ctx->pc = 0x1D4920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4920u, 0x316F20u, 0x316F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F28u;
label_316f28:
    // 0x316f28: 0xc086dc0  jal         func_21B700
label_316f2c:
    if (ctx->pc == 0x316F2Cu) {
        ctx->pc = 0x316F30u;
        goto label_316f30;
    }
    ctx->pc = 0x316F28u;
    SET_GPR_U32(ctx, 31, 0x316F30u);
    ctx->pc = 0x21B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B700u, 0x316F28u, 0x316F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F30u;
label_316f30:
    // 0x316f30: 0xc0d9542  jal         func_365508
label_316f34:
    if (ctx->pc == 0x316F34u) {
        ctx->pc = 0x316F38u;
        goto label_316f38;
    }
    ctx->pc = 0x316F30u;
    SET_GPR_U32(ctx, 31, 0x316F38u);
    ctx->pc = 0x365508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365508u, 0x316F30u, 0x316F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F38u;
label_316f38:
    // 0x316f38: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x316f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_316f3c:
    // 0x316f3c: 0x245021e8  addiu       $s0, $v0, 0x21E8
    ctx->pc = 0x316f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
label_316f40:
    // 0x316f40: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x316f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_316f44:
    // 0x316f44: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_316f48:
    if (ctx->pc == 0x316F48u) {
        ctx->pc = 0x316F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F44u;
        // 0x316f48: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F4Cu;
        goto label_316f4c;
    }
    ctx->pc = 0x316F44u;
    {
        const bool branch_taken_0x316f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x316f44) {
            ctx->pc = 0x316F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F44u;
            // 0x316f48: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F58u;
            goto label_316f58;
        }
    }
    ctx->pc = 0x316F4Cu;
label_316f4c:
    // 0x316f4c: 0xc0d442a  jal         func_3510A8
label_316f50:
    if (ctx->pc == 0x316F50u) {
        ctx->pc = 0x316F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F4Cu;
        // 0x316f50: 0xc6cc2b30  lwc1        $f12, 0x2B30($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F54u;
        goto label_316f54;
    }
    ctx->pc = 0x316F4Cu;
    SET_GPR_U32(ctx, 31, 0x316F54u);
    ctx->pc = 0x316F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F4Cu;
    // 0x316f50: 0xc6cc2b30  lwc1        $f12, 0x2B30($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3510A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3510A8u, 0x316F4Cu, 0x316F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F54u;
label_316f54:
    // 0x316f54: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x316f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_316f58:
    // 0x316f58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_316f5c:
    if (ctx->pc == 0x316F5Cu) {
        ctx->pc = 0x316F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F58u;
        // 0x316f5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F60u;
        goto label_316f60;
    }
    ctx->pc = 0x316F58u;
    {
        const bool branch_taken_0x316f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316f58) {
            ctx->pc = 0x316F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F58u;
            // 0x316f5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F6Cu;
            goto label_316f6c;
        }
    }
    ctx->pc = 0x316F60u;
label_316f60:
    // 0x316f60: 0xc0d3bce  jal         func_34EF38
label_316f64:
    if (ctx->pc == 0x316F64u) {
        ctx->pc = 0x316F68u;
        goto label_316f68;
    }
    ctx->pc = 0x316F60u;
    SET_GPR_U32(ctx, 31, 0x316F68u);
    ctx->pc = 0x34EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EF38u, 0x316F60u, 0x316F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F68u;
label_316f68:
    // 0x316f68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x316f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_316f6c:
    // 0x316f6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_316f70:
    if (ctx->pc == 0x316F70u) {
        ctx->pc = 0x316F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F6Cu;
        // 0x316f70: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F74u;
        goto label_316f74;
    }
    ctx->pc = 0x316F6Cu;
    {
        const bool branch_taken_0x316f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316f6c) {
            ctx->pc = 0x316F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F6Cu;
            // 0x316f70: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F80u;
            goto label_316f80;
        }
    }
    ctx->pc = 0x316F74u;
label_316f74:
    // 0x316f74: 0xc0d27e8  jal         func_349FA0
label_316f78:
    if (ctx->pc == 0x316F78u) {
        ctx->pc = 0x316F7Cu;
        goto label_316f7c;
    }
    ctx->pc = 0x316F74u;
    SET_GPR_U32(ctx, 31, 0x316F7Cu);
    ctx->pc = 0x349FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FA0u, 0x316F74u, 0x316F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F7Cu;
label_316f7c:
    // 0x316f7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x316f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_316f80:
    // 0x316f80: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_316f84:
    if (ctx->pc == 0x316F84u) {
        ctx->pc = 0x316F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F80u;
        // 0x316f84: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316F88u;
        goto label_316f88;
    }
    ctx->pc = 0x316F80u;
    {
        const bool branch_taken_0x316f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316f80) {
            ctx->pc = 0x316F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316F80u;
            // 0x316f84: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316F94u;
            goto label_316f94;
        }
    }
    ctx->pc = 0x316F88u;
label_316f88:
    // 0x316f88: 0xc0d4dee  jal         func_3537B8
label_316f8c:
    if (ctx->pc == 0x316F8Cu) {
        ctx->pc = 0x316F90u;
        goto label_316f90;
    }
    ctx->pc = 0x316F88u;
    SET_GPR_U32(ctx, 31, 0x316F90u);
    ctx->pc = 0x3537B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3537B8u, 0x316F88u, 0x316F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F90u;
label_316f90:
    // 0x316f90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x316f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_316f94:
    // 0x316f94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_316f98:
    if (ctx->pc == 0x316F98u) {
        ctx->pc = 0x316F9Cu;
        goto label_316f9c;
    }
    ctx->pc = 0x316F94u;
    {
        const bool branch_taken_0x316f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316f94) {
            ctx->pc = 0x316FA4u;
            goto label_316fa4;
        }
    }
    ctx->pc = 0x316F9Cu;
label_316f9c:
    // 0x316f9c: 0xc0cede4  jal         func_33B790
label_316fa0:
    if (ctx->pc == 0x316FA0u) {
        ctx->pc = 0x316FA4u;
        goto label_316fa4;
    }
    ctx->pc = 0x316F9Cu;
    SET_GPR_U32(ctx, 31, 0x316FA4u);
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x316F9Cu, 0x316FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FA4u;
label_316fa4:
    // 0x316fa4: 0xc0d614c  jal         func_358530
label_316fa8:
    if (ctx->pc == 0x316FA8u) {
        ctx->pc = 0x316FACu;
        goto label_316fac;
    }
    ctx->pc = 0x316FA4u;
    SET_GPR_U32(ctx, 31, 0x316FACu);
    ctx->pc = 0x358530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358530u, 0x316FA4u, 0x316FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FACu;
label_316fac:
    // 0x316fac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x316facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_316fb0:
    // 0x316fb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_316fb4:
    if (ctx->pc == 0x316FB4u) {
        ctx->pc = 0x316FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FB0u;
        // 0x316fb4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FB8u;
        goto label_316fb8;
    }
    ctx->pc = 0x316FB0u;
    {
        const bool branch_taken_0x316fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FB0u;
        // 0x316fb4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fb0) {
            ctx->pc = 0x316FC4u;
            goto label_316fc4;
        }
    }
    ctx->pc = 0x316FB8u;
label_316fb8:
    // 0x316fb8: 0xc0d00e0  jal         func_340380
label_316fbc:
    if (ctx->pc == 0x316FBCu) {
        ctx->pc = 0x316FC0u;
        goto label_316fc0;
    }
    ctx->pc = 0x316FB8u;
    SET_GPR_U32(ctx, 31, 0x316FC0u);
    ctx->pc = 0x340380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340380u, 0x316FB8u, 0x316FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FC0u;
label_316fc0:
    // 0x316fc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316fc4:
    // 0x316fc4: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x316fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950180)));
label_316fc8:
    // 0x316fc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_316fcc:
    if (ctx->pc == 0x316FCCu) {
        ctx->pc = 0x316FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FC8u;
        // 0x316fcc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FD0u;
        goto label_316fd0;
    }
    ctx->pc = 0x316FC8u;
    {
        const bool branch_taken_0x316fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FC8u;
        // 0x316fcc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fc8) {
            ctx->pc = 0x316FD8u;
            goto label_316fd8;
        }
    }
    ctx->pc = 0x316FD0u;
label_316fd0:
    // 0x316fd0: 0xc0b54f2  jal         func_2D53C8
label_316fd4:
    if (ctx->pc == 0x316FD4u) {
        ctx->pc = 0x316FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FD0u;
        // 0x316fd4: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FD8u;
        goto label_316fd8;
    }
    ctx->pc = 0x316FD0u;
    SET_GPR_U32(ctx, 31, 0x316FD8u);
    ctx->pc = 0x316FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316FD0u;
    // 0x316fd4: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53C8u, 0x316FD0u, 0x316FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FD8u;
label_316fd8:
    // 0x316fd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316fdc:
    // 0x316fdc: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x316fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_316fe0:
    // 0x316fe0: 0xc0b4e26  jal         func_2D3898
label_316fe4:
    if (ctx->pc == 0x316FE4u) {
        ctx->pc = 0x316FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FE0u;
        // 0x316fe4: 0x8c44bd2c  lw          $a0, -0x42D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FE8u;
        goto label_316fe8;
    }
    ctx->pc = 0x316FE0u;
    SET_GPR_U32(ctx, 31, 0x316FE8u);
    ctx->pc = 0x316FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316FE0u;
    // 0x316fe4: 0x8c44bd2c  lw          $a0, -0x42D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3898u, 0x316FE0u, 0x316FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FE8u;
label_316fe8:
    // 0x316fe8: 0xc0cd8fc  jal         func_3363F0
label_316fec:
    if (ctx->pc == 0x316FECu) {
        ctx->pc = 0x316FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FE8u;
        // 0x316fec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316FF0u;
        goto label_316ff0;
    }
    ctx->pc = 0x316FE8u;
    SET_GPR_U32(ctx, 31, 0x316FF0u);
    ctx->pc = 0x316FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316FE8u;
    // 0x316fec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363F0u, 0x316FE8u, 0x316FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FF0u;
label_316ff0:
    // 0x316ff0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316ff4:
    // 0x316ff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316ff8:
    // 0x316ff8: 0x8c62bd6c  lw          $v0, -0x4294($v1)
    ctx->pc = 0x316ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950252)));
label_316ffc:
    // 0x316ffc: 0x14440057  bne         $v0, $a0, . + 4 + (0x57 << 2)
label_317000:
    if (ctx->pc == 0x317000u) {
        ctx->pc = 0x317000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FFCu;
        // 0x317000: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317004u;
        goto label_317004;
    }
    ctx->pc = 0x316FFCu;
    {
        const bool branch_taken_0x316ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x317000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FFCu;
        // 0x317000: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ffc) {
            ctx->pc = 0x31715Cu;
            goto label_31715c;
        }
    }
    ctx->pc = 0x317004u;
label_317004:
    // 0x317004: 0xc0c1134  jal         func_3044D0
label_317008:
    if (ctx->pc == 0x317008u) {
        ctx->pc = 0x317008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317004u;
        // 0x317008: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31700Cu;
        goto label_31700c;
    }
    ctx->pc = 0x317004u;
    SET_GPR_U32(ctx, 31, 0x31700Cu);
    ctx->pc = 0x317008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317004u;
    // 0x317008: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x317004u, 0x31700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31700Cu;
label_31700c:
    // 0x31700c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x31700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_317010:
    // 0x317010: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x317010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_317014:
    // 0x317014: 0x24505870  addiu       $s0, $v0, 0x5870
    ctx->pc = 0x317014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
label_317018:
    // 0x317018: 0x92020620  lbu         $v0, 0x620($s0)
    ctx->pc = 0x317018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
label_31701c:
    // 0x31701c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_317020:
    if (ctx->pc == 0x317020u) {
        ctx->pc = 0x317020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31701Cu;
        // 0x317020: 0x8c71a300  lw          $s1, -0x5D00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317024u;
        goto label_317024;
    }
    ctx->pc = 0x31701Cu;
    {
        const bool branch_taken_0x31701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31701Cu;
        // 0x317020: 0x8c71a300  lw          $s1, -0x5D00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31701c) {
            ctx->pc = 0x31707Cu;
            goto label_31707c;
        }
    }
    ctx->pc = 0x317024u;
label_317024:
    // 0x317024: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x317024u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
label_317028:
    // 0x317028: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x317028u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_31702c:
    // 0x31702c: 0x0  nop
    ctx->pc = 0x31702cu;
    // NOP
label_317030:
    // 0x317030: 0xc0db256  jal         func_36C958
label_317034:
    if (ctx->pc == 0x317034u) {
        ctx->pc = 0x317034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317030u;
        // 0x317034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317038u;
        goto label_317038;
    }
    ctx->pc = 0x317030u;
    SET_GPR_U32(ctx, 31, 0x317038u);
    ctx->pc = 0x317034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317030u;
    // 0x317034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x317030u, 0x317038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317038u;
label_317038:
    // 0x317038: 0xc07f49c  jal         func_1FD270
label_31703c:
    if (ctx->pc == 0x31703Cu) {
        ctx->pc = 0x31703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317038u;
        // 0x31703c: 0x26649b10  addiu       $a0, $s3, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317040u;
        goto label_317040;
    }
    ctx->pc = 0x317038u;
    SET_GPR_U32(ctx, 31, 0x317040u);
    ctx->pc = 0x31703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317038u;
    // 0x31703c: 0x26649b10  addiu       $a0, $s3, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD270u, 0x317038u, 0x317040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317040u;
label_317040:
    // 0x317040: 0xc0c115c  jal         func_304570
label_317044:
    if (ctx->pc == 0x317044u) {
        ctx->pc = 0x317048u;
        goto label_317048;
    }
    ctx->pc = 0x317040u;
    SET_GPR_U32(ctx, 31, 0x317048u);
    ctx->pc = 0x304570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304570u, 0x317040u, 0x317048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317048u;
label_317048:
    // 0x317048: 0xc0c611a  jal         func_318468
label_31704c:
    if (ctx->pc == 0x31704Cu) {
        ctx->pc = 0x31704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317048u;
        // 0x31704c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317050u;
        goto label_317050;
    }
    ctx->pc = 0x317048u;
    SET_GPR_U32(ctx, 31, 0x317050u);
    ctx->pc = 0x31704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317048u;
    // 0x31704c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318468u, 0x317048u, 0x317050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317050u;
label_317050:
    // 0x317050: 0xc0db2b6  jal         func_36CAD8
label_317054:
    if (ctx->pc == 0x317054u) {
        ctx->pc = 0x317054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317050u;
        // 0x317054: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317058u;
        goto label_317058;
    }
    ctx->pc = 0x317050u;
    SET_GPR_U32(ctx, 31, 0x317058u);
    ctx->pc = 0x317054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317050u;
    // 0x317054: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x317050u, 0x317058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317058u;
label_317058:
    // 0x317058: 0x8e42cba8  lw          $v0, -0x3458($s2)
    ctx->pc = 0x317058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953896)));
label_31705c:
    // 0x31705c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x31705cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_317060:
    // 0x317060: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x317060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_317064:
    // 0x317064: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x317064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_317068:
    // 0x317068: 0x40f809  jalr        $v0
label_31706c:
    if (ctx->pc == 0x31706Cu) {
        ctx->pc = 0x317070u;
        goto label_317070;
    }
    ctx->pc = 0x317068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317070u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317068u, 0x317070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317070u;
label_317070:
    // 0x317070: 0x92030620  lbu         $v1, 0x620($s0)
    ctx->pc = 0x317070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
label_317074:
    // 0x317074: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_317078:
    if (ctx->pc == 0x317078u) {
        ctx->pc = 0x31707Cu;
        goto label_31707c;
    }
    ctx->pc = 0x317074u;
    {
        const bool branch_taken_0x317074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317074) {
            ctx->pc = 0x317030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317030;
        }
    }
    ctx->pc = 0x31707Cu;
label_31707c:
    // 0x31707c: 0xc0db256  jal         func_36C958
label_317080:
    if (ctx->pc == 0x317080u) {
        ctx->pc = 0x317080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31707Cu;
        // 0x317080: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317084u;
        goto label_317084;
    }
    ctx->pc = 0x31707Cu;
    SET_GPR_U32(ctx, 31, 0x317084u);
    ctx->pc = 0x317080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31707Cu;
    // 0x317080: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x31707Cu, 0x317084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317084u;
label_317084:
    // 0x317084: 0x8e84bd48  lw          $a0, -0x42B8($s4)
    ctx->pc = 0x317084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950216)));
label_317088:
    // 0x317088: 0xc0c2a36  jal         func_30A8D8
label_31708c:
    if (ctx->pc == 0x31708Cu) {
        ctx->pc = 0x31708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317088u;
        // 0x31708c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317090u;
        goto label_317090;
    }
    ctx->pc = 0x317088u;
    SET_GPR_U32(ctx, 31, 0x317090u);
    ctx->pc = 0x31708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317088u;
    // 0x31708c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x317088u, 0x317090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317090u;
label_317090:
    // 0x317090: 0xc0db0ea  jal         func_36C3A8
label_317094:
    if (ctx->pc == 0x317094u) {
        ctx->pc = 0x317094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317090u;
        // 0x317094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317098u;
        goto label_317098;
    }
    ctx->pc = 0x317090u;
    SET_GPR_U32(ctx, 31, 0x317098u);
    ctx->pc = 0x317094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317090u;
    // 0x317094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x317090u, 0x317098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317098u;
label_317098:
    // 0x317098: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x317098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31709c:
    // 0x31709c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31709cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3170a0:
    // 0x3170a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3170a4:
    // 0x3170a4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3170a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3170a8:
    // 0x3170a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3170a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3170ac:
    // 0x3170ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3170acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3170b0:
    // 0x3170b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3170b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3170b4:
    // 0x3170b4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3170b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3170b8:
    // 0x3170b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3170b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3170bc:
    // 0x3170bc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x3170bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_3170c0:
    // 0x3170c0: 0xc0da874  jal         func_36A1D0
label_3170c4:
    if (ctx->pc == 0x3170C4u) {
        ctx->pc = 0x3170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170C0u;
        // 0x3170c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170C8u;
        goto label_3170c8;
    }
    ctx->pc = 0x3170C0u;
    SET_GPR_U32(ctx, 31, 0x3170C8u);
    ctx->pc = 0x3170C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170C0u;
    // 0x3170c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x3170C0u, 0x3170C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170C8u;
label_3170c8:
    // 0x3170c8: 0xc0db0ea  jal         func_36C3A8
label_3170cc:
    if (ctx->pc == 0x3170CCu) {
        ctx->pc = 0x3170CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170C8u;
        // 0x3170cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170D0u;
        goto label_3170d0;
    }
    ctx->pc = 0x3170C8u;
    SET_GPR_U32(ctx, 31, 0x3170D0u);
    ctx->pc = 0x3170CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170C8u;
    // 0x3170cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x3170C8u, 0x3170D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170D0u;
label_3170d0:
    // 0x3170d0: 0xc0c2bb8  jal         func_30AEE0
label_3170d4:
    if (ctx->pc == 0x3170D4u) {
        ctx->pc = 0x3170D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170D0u;
        // 0x3170d4: 0x8e84bd48  lw          $a0, -0x42B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170D8u;
        goto label_3170d8;
    }
    ctx->pc = 0x3170D0u;
    SET_GPR_U32(ctx, 31, 0x3170D8u);
    ctx->pc = 0x3170D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170D0u;
    // 0x3170d4: 0x8e84bd48  lw          $a0, -0x42B8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x3170D0u, 0x3170D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170D8u;
label_3170d8:
    // 0x3170d8: 0xc0db2b6  jal         func_36CAD8
label_3170dc:
    if (ctx->pc == 0x3170DCu) {
        ctx->pc = 0x3170DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170D8u;
        // 0x3170dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170E0u;
        goto label_3170e0;
    }
    ctx->pc = 0x3170D8u;
    SET_GPR_U32(ctx, 31, 0x3170E0u);
    ctx->pc = 0x3170DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170D8u;
    // 0x3170dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x3170D8u, 0x3170E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170E0u;
label_3170e0:
    // 0x3170e0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3170e4:
    if (ctx->pc == 0x3170E4u) {
        ctx->pc = 0x3170E8u;
        goto label_3170e8;
    }
    ctx->pc = 0x3170E0u;
    {
        const bool branch_taken_0x3170e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3170e0) {
            ctx->pc = 0x31715Cu;
            goto label_31715c;
        }
    }
    ctx->pc = 0x3170E8u;
label_3170e8:
    // 0x3170e8: 0xc0a71e0  jal         func_29C780
label_3170ec:
    if (ctx->pc == 0x3170ECu) {
        ctx->pc = 0x3170F0u;
        goto label_3170f0;
    }
    ctx->pc = 0x3170E8u;
    SET_GPR_U32(ctx, 31, 0x3170F0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x3170E8u, 0x3170F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170F0u;
label_3170f0:
    // 0x3170f0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3170f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3170f4:
    // 0x3170f4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_3170f8:
    if (ctx->pc == 0x3170F8u) {
        ctx->pc = 0x3170F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170F4u;
        // 0x3170f8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3170FCu;
        goto label_3170fc;
    }
    ctx->pc = 0x3170F4u;
    {
        const bool branch_taken_0x3170f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3170F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170F4u;
        // 0x3170f8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170f4) {
            ctx->pc = 0x317134u;
            goto label_317134;
        }
    }
    ctx->pc = 0x3170FCu;
label_3170fc:
    // 0x3170fc: 0xc0a7ada  jal         func_29EB68
label_317100:
    if (ctx->pc == 0x317100u) {
        ctx->pc = 0x317104u;
        goto label_317104;
    }
    ctx->pc = 0x3170FCu;
    SET_GPR_U32(ctx, 31, 0x317104u);
    ctx->pc = 0x29EB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB68u, 0x3170FCu, 0x317104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317104u;
label_317104:
    // 0x317104: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x317104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_317108:
    // 0x317108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31710c:
    // 0x31710c: 0xc0d73cc  jal         func_35CF30
label_317110:
    if (ctx->pc == 0x317110u) {
        ctx->pc = 0x317110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31710Cu;
        // 0x317110: 0x24a53828  addiu       $a1, $a1, 0x3828 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317114u;
        goto label_317114;
    }
    ctx->pc = 0x31710Cu;
    SET_GPR_U32(ctx, 31, 0x317114u);
    ctx->pc = 0x317110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31710Cu;
    // 0x317110: 0x24a53828  addiu       $a1, $a1, 0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31710Cu, 0x317114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317114u;
label_317114:
    // 0x317114: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317118:
    // 0x317118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31711c:
    // 0x31711c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_317120:
    if (ctx->pc == 0x317120u) {
        ctx->pc = 0x317120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31711Cu;
        // 0x317120: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317124u;
        goto label_317124;
    }
    ctx->pc = 0x31711Cu;
    {
        const bool branch_taken_0x31711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31711Cu;
        // 0x317120: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31711c) {
            ctx->pc = 0x317134u;
            goto label_317134;
        }
    }
    ctx->pc = 0x317124u;
label_317124:
    // 0x317124: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x317124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_317128:
    // 0x317128: 0xc0ae686  jal         func_2B9A18
label_31712c:
    if (ctx->pc == 0x31712Cu) {
        ctx->pc = 0x31712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317128u;
        // 0x31712c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317130u;
        goto label_317130;
    }
    ctx->pc = 0x317128u;
    SET_GPR_U32(ctx, 31, 0x317130u);
    ctx->pc = 0x31712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317128u;
    // 0x31712c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A18u, 0x317128u, 0x317130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317130u;
label_317130:
    // 0x317130: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_317134:
    // 0x317134: 0x8c43bee8  lw          $v1, -0x4118($v0)
    ctx->pc = 0x317134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
label_317138:
    // 0x317138: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31713c:
    if (ctx->pc == 0x31713Cu) {
        ctx->pc = 0x317140u;
        goto label_317140;
    }
    ctx->pc = 0x317138u;
    {
        const bool branch_taken_0x317138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x317138) {
            ctx->pc = 0x317148u;
            goto label_317148;
        }
    }
    ctx->pc = 0x317140u;
label_317140:
    // 0x317140: 0xc0cd8fc  jal         func_3363F0
label_317144:
    if (ctx->pc == 0x317144u) {
        ctx->pc = 0x317144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317140u;
        // 0x317144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317148u;
        goto label_317148;
    }
    ctx->pc = 0x317140u;
    SET_GPR_U32(ctx, 31, 0x317148u);
    ctx->pc = 0x317144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317140u;
    // 0x317144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363F0u, 0x317140u, 0x317148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317148u;
label_317148:
    // 0x317148: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_31714c:
    if (ctx->pc == 0x31714Cu) {
        ctx->pc = 0x31714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317148u;
        // 0x31714c: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317150u;
        goto label_317150;
    }
    ctx->pc = 0x317148u;
    {
        const bool branch_taken_0x317148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317148u;
        // 0x31714c: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317148) {
            ctx->pc = 0x31715Cu;
            goto label_31715c;
        }
    }
    ctx->pc = 0x317150u;
label_317150:
    // 0x317150: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_317154:
    // 0x317154: 0xc0bbdd8  jal         func_2EF760
label_317158:
    if (ctx->pc == 0x317158u) {
        ctx->pc = 0x317158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317154u;
        // 0x317158: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31715Cu;
        goto label_31715c;
    }
    ctx->pc = 0x317154u;
    SET_GPR_U32(ctx, 31, 0x31715Cu);
    ctx->pc = 0x317158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317154u;
    // 0x317158: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF760u, 0x317154u, 0x31715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31715Cu;
label_31715c:
    // 0x31715c: 0xc0c9320  jal         func_324C80
label_317160:
    if (ctx->pc == 0x317160u) {
        ctx->pc = 0x317164u;
        goto label_317164;
    }
    ctx->pc = 0x31715Cu;
    SET_GPR_U32(ctx, 31, 0x317164u);
    ctx->pc = 0x324C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C80u, 0x31715Cu, 0x317164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317164u;
label_317164:
    // 0x317164: 0xc0c9324  jal         func_324C90
label_317168:
    if (ctx->pc == 0x317168u) {
        ctx->pc = 0x317168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317164u;
        // 0x317168: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31716Cu;
        goto label_31716c;
    }
    ctx->pc = 0x317164u;
    SET_GPR_U32(ctx, 31, 0x31716Cu);
    ctx->pc = 0x317168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317164u;
    // 0x317168: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C90u, 0x317164u, 0x31716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31716Cu;
label_31716c:
    // 0x31716c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317170:
    // 0x317170: 0xc0c50a8  jal         func_3142A0
label_317174:
    if (ctx->pc == 0x317174u) {
        ctx->pc = 0x317174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317170u;
        // 0x317174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317178u;
        goto label_317178;
    }
    ctx->pc = 0x317170u;
    SET_GPR_U32(ctx, 31, 0x317178u);
    ctx->pc = 0x317174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317170u;
    // 0x317174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3142A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3142A0u, 0x317170u, 0x317178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317178u;
label_317178:
    // 0x317178: 0xc0a3adc  jal         func_28EB70
label_31717c:
    if (ctx->pc == 0x31717Cu) {
        ctx->pc = 0x31717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317178u;
        // 0x31717c: 0xc6cc2b30  lwc1        $f12, 0x2B30($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x317180u;
        goto label_317180;
    }
    ctx->pc = 0x317178u;
    SET_GPR_U32(ctx, 31, 0x317180u);
    ctx->pc = 0x31717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317178u;
    // 0x31717c: 0xc6cc2b30  lwc1        $f12, 0x2B30($s6) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB70u, 0x317178u, 0x317180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317180u;
label_317180:
    // 0x317180: 0xc0c5780  jal         func_315E00
label_317184:
    if (ctx->pc == 0x317184u) {
        ctx->pc = 0x317188u;
        goto label_317188;
    }
    ctx->pc = 0x317180u;
    SET_GPR_U32(ctx, 31, 0x317188u);
    ctx->pc = 0x315E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315E00u, 0x317180u, 0x317188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317188u;
label_317188:
    // 0x317188: 0x8ea2bd60  lw          $v0, -0x42A0($s5)
    ctx->pc = 0x317188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950240)));
label_31718c:
    // 0x31718c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_317190:
    if (ctx->pc == 0x317190u) {
        ctx->pc = 0x317190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31718Cu;
        // 0x317190: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317194u;
        goto label_317194;
    }
    ctx->pc = 0x31718Cu;
    {
        const bool branch_taken_0x31718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31718Cu;
        // 0x317190: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31718c) {
            ctx->pc = 0x3171C0u;
            goto label_3171c0;
        }
    }
    ctx->pc = 0x317194u;
label_317194:
    // 0x317194: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_317198:
    // 0x317198: 0x8c44bd6c  lw          $a0, -0x4294($v0)
    ctx->pc = 0x317198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950252)));
label_31719c:
    // 0x31719c: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
label_3171a0:
    if (ctx->pc == 0x3171A0u) {
        ctx->pc = 0x3171A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31719Cu;
        // 0x3171a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171A4u;
        goto label_3171a4;
    }
    ctx->pc = 0x31719Cu;
    {
        const bool branch_taken_0x31719c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3171A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31719Cu;
        // 0x3171a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31719c) {
            ctx->pc = 0x317270u;
            goto label_317270;
        }
    }
    ctx->pc = 0x3171A4u;
label_3171a4:
    // 0x3171a4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_3171a8:
    if (ctx->pc == 0x3171A8u) {
        ctx->pc = 0x3171A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171A4u;
        // 0x3171a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171ACu;
        goto label_3171ac;
    }
    ctx->pc = 0x3171A4u;
    {
        const bool branch_taken_0x3171a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3171A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171A4u;
        // 0x3171a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171a4) {
            ctx->pc = 0x3171C4u;
            goto label_3171c4;
        }
    }
    ctx->pc = 0x3171ACu;
label_3171ac:
    // 0x3171ac: 0xaea0bd60  sw          $zero, -0x42A0($s5)
    ctx->pc = 0x3171acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294950240), GPR_U32(ctx, 0));
label_3171b0:
    // 0x3171b0: 0xc0a2306  jal         func_288C18
label_3171b4:
    if (ctx->pc == 0x3171B4u) {
        ctx->pc = 0x3171B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171B0u;
        // 0x3171b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171B8u;
        goto label_3171b8;
    }
    ctx->pc = 0x3171B0u;
    SET_GPR_U32(ctx, 31, 0x3171B8u);
    ctx->pc = 0x3171B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3171B0u;
    // 0x3171b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x3171B0u, 0x3171B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3171B8u;
label_3171b8:
    // 0x3171b8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3171bc:
    if (ctx->pc == 0x3171BCu) {
        ctx->pc = 0x3171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171B8u;
        // 0x3171bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171C0u;
        goto label_3171c0;
    }
    ctx->pc = 0x3171B8u;
    {
        const bool branch_taken_0x3171b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171B8u;
        // 0x3171bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171b8) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x3171C0u;
label_3171c0:
    // 0x3171c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3171c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3171c4:
    // 0x3171c4: 0x9043bd74  lbu         $v1, -0x428C($v0)
    ctx->pc = 0x3171c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950260)));
label_3171c8:
    // 0x3171c8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_3171cc:
    if (ctx->pc == 0x3171CCu) {
        ctx->pc = 0x3171CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171C8u;
        // 0x3171cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171D0u;
        goto label_3171d0;
    }
    ctx->pc = 0x3171C8u;
    {
        const bool branch_taken_0x3171c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3171CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171C8u;
        // 0x3171cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171c8) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x3171D0u;
label_3171d0:
    // 0x3171d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3171d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3171d4:
    // 0x3171d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3171d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3171d8:
    // 0x3171d8: 0x8c43bd6c  lw          $v1, -0x4294($v0)
    ctx->pc = 0x3171d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950252)));
label_3171dc:
    // 0x3171dc: 0x10640036  beq         $v1, $a0, . + 4 + (0x36 << 2)
label_3171e0:
    if (ctx->pc == 0x3171E0u) {
        ctx->pc = 0x3171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171DCu;
        // 0x3171e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171E4u;
        goto label_3171e4;
    }
    ctx->pc = 0x3171DCu;
    {
        const bool branch_taken_0x3171dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171DCu;
        // 0x3171e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171dc) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x3171E4u;
label_3171e4:
    // 0x3171e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3171e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3171e8:
    // 0x3171e8: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x3171e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_3171ec:
    // 0x3171ec: 0x908311c1  lbu         $v1, 0x11C1($a0)
    ctx->pc = 0x3171ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4545)));
label_3171f0:
    // 0x3171f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3171f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3171f4:
    // 0x3171f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3171f8:
    if (ctx->pc == 0x3171F8u) {
        ctx->pc = 0x3171F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171F4u;
        // 0x3171f8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3171FCu;
        goto label_3171fc;
    }
    ctx->pc = 0x3171F4u;
    {
        const bool branch_taken_0x3171f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3171F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171F4u;
        // 0x3171f8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171f4) {
            ctx->pc = 0x31720Cu;
            goto label_31720c;
        }
    }
    ctx->pc = 0x3171FCu;
label_3171fc:
    // 0x3171fc: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x3171fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_317200:
    // 0x317200: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_317204:
    // 0x317204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_317208:
    if (ctx->pc == 0x317208u) {
        ctx->pc = 0x317208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317204u;
        // 0x317208: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31720Cu;
        goto label_31720c;
    }
    ctx->pc = 0x317204u;
    {
        const bool branch_taken_0x317204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317204u;
        // 0x317208: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317204) {
            ctx->pc = 0x317218u;
            goto label_317218;
        }
    }
    ctx->pc = 0x31720Cu;
label_31720c:
    // 0x31720c: 0xc0c9868  jal         func_3261A0
label_317210:
    if (ctx->pc == 0x317210u) {
        ctx->pc = 0x317214u;
        goto label_317214;
    }
    ctx->pc = 0x31720Cu;
    SET_GPR_U32(ctx, 31, 0x317214u);
    ctx->pc = 0x3261A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3261A0u, 0x31720Cu, 0x317214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317214u;
label_317214:
    // 0x317214: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_317218:
    // 0x317218: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31721c:
    // 0x31721c: 0x8c43a450  lw          $v1, -0x5BB0($v0)
    ctx->pc = 0x31721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943824)));
label_317220:
    // 0x317220: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_317224:
    if (ctx->pc == 0x317224u) {
        ctx->pc = 0x317224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317220u;
        // 0x317224: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317228u;
        goto label_317228;
    }
    ctx->pc = 0x317220u;
    {
        const bool branch_taken_0x317220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x317224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317220u;
        // 0x317224: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317220) {
            ctx->pc = 0x31723Cu;
            goto label_31723c;
        }
    }
    ctx->pc = 0x317228u;
label_317228:
    // 0x317228: 0x8c43a30c  lw          $v1, -0x5CF4($v0)
    ctx->pc = 0x317228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943500)));
label_31722c:
    // 0x31722c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_317230:
    if (ctx->pc == 0x317230u) {
        ctx->pc = 0x317230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31722Cu;
        // 0x317230: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317234u;
        goto label_317234;
    }
    ctx->pc = 0x31722Cu;
    {
        const bool branch_taken_0x31722c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31722Cu;
        // 0x317230: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31722c) {
            ctx->pc = 0x317248u;
            goto label_317248;
        }
    }
    ctx->pc = 0x317234u;
label_317234:
    // 0x317234: 0x1000000f  b           . + 4 + (0xF << 2)
label_317238:
    if (ctx->pc == 0x317238u) {
        ctx->pc = 0x317238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317234u;
        // 0x317238: 0xaea0bd60  sw          $zero, -0x42A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294950240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31723Cu;
        goto label_31723c;
    }
    ctx->pc = 0x317234u;
    {
        const bool branch_taken_0x317234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317234u;
        // 0x317238: 0xaea0bd60  sw          $zero, -0x42A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294950240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317234) {
            ctx->pc = 0x317274u;
            goto label_317274;
        }
    }
    ctx->pc = 0x31723Cu;
label_31723c:
    // 0x31723c: 0x8c43a30c  lw          $v1, -0x5CF4($v0)
    ctx->pc = 0x31723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943500)));
label_317240:
    // 0x317240: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_317244:
    if (ctx->pc == 0x317244u) {
        ctx->pc = 0x317244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317240u;
        // 0x317244: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317248u;
        goto label_317248;
    }
    ctx->pc = 0x317240u;
    {
        const bool branch_taken_0x317240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317240u;
        // 0x317244: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317240) {
            ctx->pc = 0x317270u;
            goto label_317270;
        }
    }
    ctx->pc = 0x317248u;
label_317248:
    // 0x317248: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x317248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_31724c:
    // 0x31724c: 0x2464cb28  addiu       $a0, $v1, -0x34D8
    ctx->pc = 0x31724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
label_317250:
    // 0x317250: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x317250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_317254:
    // 0x317254: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_317258:
    if (ctx->pc == 0x317258u) {
        ctx->pc = 0x317258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317254u;
        // 0x317258: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31725Cu;
        goto label_31725c;
    }
    ctx->pc = 0x317254u;
    {
        const bool branch_taken_0x317254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317254u;
        // 0x317258: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317254) {
            ctx->pc = 0x317280u;
            goto label_317280;
        }
    }
    ctx->pc = 0x31725Cu;
label_31725c:
    // 0x31725c: 0x8ca3a30c  lw          $v1, -0x5CF4($a1)
    ctx->pc = 0x31725cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943500)));
label_317260:
    // 0x317260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317264:
    // 0x317264: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x317264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
label_317268:
    // 0x317268: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31726c:
    if (ctx->pc == 0x31726Cu) {
        ctx->pc = 0x31726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317268u;
        // 0x31726c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317270u;
        goto label_317270;
    }
    ctx->pc = 0x317268u;
    {
        const bool branch_taken_0x317268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317268u;
        // 0x31726c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317268) {
            ctx->pc = 0x31727Cu;
            goto label_31727c;
        }
    }
    ctx->pc = 0x317270u;
label_317270:
    // 0x317270: 0xaea0bd60  sw          $zero, -0x42A0($s5)
    ctx->pc = 0x317270u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294950240), GPR_U32(ctx, 0));
label_317274:
    // 0x317274: 0x10000010  b           . + 4 + (0x10 << 2)
label_317278:
    if (ctx->pc == 0x317278u) {
        ctx->pc = 0x317278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317274u;
        // 0x317278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31727Cu;
        goto label_31727c;
    }
    ctx->pc = 0x317274u;
    {
        const bool branch_taken_0x317274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317274u;
        // 0x317278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317274) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x31727Cu;
label_31727c:
    // 0x31727c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31727cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_317280:
    // 0x317280: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_317284:
    // 0x317284: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x317284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950244)));
label_317288:
    // 0x317288: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_31728c:
    if (ctx->pc == 0x31728Cu) {
        ctx->pc = 0x31728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317288u;
        // 0x31728c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317290u;
        goto label_317290;
    }
    ctx->pc = 0x317288u;
    {
        const bool branch_taken_0x317288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317288u;
        // 0x31728c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317288) {
            ctx->pc = 0x3172B4u;
            goto label_3172b4;
        }
    }
    ctx->pc = 0x317290u;
label_317290:
    // 0x317290: 0x8c43bd68  lw          $v1, -0x4298($v0)
    ctx->pc = 0x317290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950248)));
label_317294:
    // 0x317294: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_317298:
    if (ctx->pc == 0x317298u) {
        ctx->pc = 0x317298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317294u;
        // 0x317298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31729Cu;
        goto label_31729c;
    }
    ctx->pc = 0x317294u;
    {
        const bool branch_taken_0x317294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317294u;
        // 0x317298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317294) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x31729Cu;
label_31729c:
    // 0x31729c: 0x24c2cb28  addiu       $v0, $a2, -0x34D8
    ctx->pc = 0x31729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953768));
label_3172a0:
    // 0x3172a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3172a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3172a4:
    // 0x3172a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3172a8:
    if (ctx->pc == 0x3172A8u) {
        ctx->pc = 0x3172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172A4u;
        // 0x3172a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172ACu;
        goto label_3172ac;
    }
    ctx->pc = 0x3172A4u;
    {
        const bool branch_taken_0x3172a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172A4u;
        // 0x3172a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172a4) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x3172ACu;
label_3172ac:
    // 0x3172ac: 0xc0c6510  jal         func_319440
label_3172b0:
    if (ctx->pc == 0x3172B0u) {
        ctx->pc = 0x3172B4u;
        goto label_3172b4;
    }
    ctx->pc = 0x3172ACu;
    SET_GPR_U32(ctx, 31, 0x3172B4u);
    ctx->pc = 0x319440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319440u, 0x3172ACu, 0x3172B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3172B4u;
label_3172b4:
    // 0x3172b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3172b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3172b8:
    // 0x3172b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3172b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3172bc:
    // 0x3172bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3172bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3172c0:
    // 0x3172c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3172c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3172c4:
    // 0x3172c4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3172c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3172c8:
    // 0x3172c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3172c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3172cc:
    // 0x3172cc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3172ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3172d0:
    // 0x3172d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3172d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3172d4:
    // 0x3172d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3172d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3172d8:
    // 0x3172d8: 0x3e00008  jr          $ra
label_3172dc:
    if (ctx->pc == 0x3172DCu) {
        ctx->pc = 0x3172DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172D8u;
        // 0x3172dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3172E0u;
        goto label_fallthrough_0x3172d8;
    }
    ctx->pc = 0x3172D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3172DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172D8u;
        // 0x3172dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3172D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3172d8:
    ctx->pc = 0x3172E0u;
}
