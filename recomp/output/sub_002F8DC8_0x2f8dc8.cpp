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

// Function: sub_002F8DC8
// Address: 0x2f8dc8 - 0x2f9138
void sub_002F8DC8_0x2f8dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8DC8_0x2f8dc8");
#endif

    switch (ctx->pc) {
        case 0x2f8dc8u: goto label_2f8dc8;
        case 0x2f8dccu: goto label_2f8dcc;
        case 0x2f8dd0u: goto label_2f8dd0;
        case 0x2f8dd4u: goto label_2f8dd4;
        case 0x2f8dd8u: goto label_2f8dd8;
        case 0x2f8ddcu: goto label_2f8ddc;
        case 0x2f8de0u: goto label_2f8de0;
        case 0x2f8de4u: goto label_2f8de4;
        case 0x2f8de8u: goto label_2f8de8;
        case 0x2f8decu: goto label_2f8dec;
        case 0x2f8df0u: goto label_2f8df0;
        case 0x2f8df4u: goto label_2f8df4;
        case 0x2f8df8u: goto label_2f8df8;
        case 0x2f8dfcu: goto label_2f8dfc;
        case 0x2f8e00u: goto label_2f8e00;
        case 0x2f8e04u: goto label_2f8e04;
        case 0x2f8e08u: goto label_2f8e08;
        case 0x2f8e0cu: goto label_2f8e0c;
        case 0x2f8e10u: goto label_2f8e10;
        case 0x2f8e14u: goto label_2f8e14;
        case 0x2f8e18u: goto label_2f8e18;
        case 0x2f8e1cu: goto label_2f8e1c;
        case 0x2f8e20u: goto label_2f8e20;
        case 0x2f8e24u: goto label_2f8e24;
        case 0x2f8e28u: goto label_2f8e28;
        case 0x2f8e2cu: goto label_2f8e2c;
        case 0x2f8e30u: goto label_2f8e30;
        case 0x2f8e34u: goto label_2f8e34;
        case 0x2f8e38u: goto label_2f8e38;
        case 0x2f8e3cu: goto label_2f8e3c;
        case 0x2f8e40u: goto label_2f8e40;
        case 0x2f8e44u: goto label_2f8e44;
        case 0x2f8e48u: goto label_2f8e48;
        case 0x2f8e4cu: goto label_2f8e4c;
        case 0x2f8e50u: goto label_2f8e50;
        case 0x2f8e54u: goto label_2f8e54;
        case 0x2f8e58u: goto label_2f8e58;
        case 0x2f8e5cu: goto label_2f8e5c;
        case 0x2f8e60u: goto label_2f8e60;
        case 0x2f8e64u: goto label_2f8e64;
        case 0x2f8e68u: goto label_2f8e68;
        case 0x2f8e6cu: goto label_2f8e6c;
        case 0x2f8e70u: goto label_2f8e70;
        case 0x2f8e74u: goto label_2f8e74;
        case 0x2f8e78u: goto label_2f8e78;
        case 0x2f8e7cu: goto label_2f8e7c;
        case 0x2f8e80u: goto label_2f8e80;
        case 0x2f8e84u: goto label_2f8e84;
        case 0x2f8e88u: goto label_2f8e88;
        case 0x2f8e8cu: goto label_2f8e8c;
        case 0x2f8e90u: goto label_2f8e90;
        case 0x2f8e94u: goto label_2f8e94;
        case 0x2f8e98u: goto label_2f8e98;
        case 0x2f8e9cu: goto label_2f8e9c;
        case 0x2f8ea0u: goto label_2f8ea0;
        case 0x2f8ea4u: goto label_2f8ea4;
        case 0x2f8ea8u: goto label_2f8ea8;
        case 0x2f8eacu: goto label_2f8eac;
        case 0x2f8eb0u: goto label_2f8eb0;
        case 0x2f8eb4u: goto label_2f8eb4;
        case 0x2f8eb8u: goto label_2f8eb8;
        case 0x2f8ebcu: goto label_2f8ebc;
        case 0x2f8ec0u: goto label_2f8ec0;
        case 0x2f8ec4u: goto label_2f8ec4;
        case 0x2f8ec8u: goto label_2f8ec8;
        case 0x2f8eccu: goto label_2f8ecc;
        case 0x2f8ed0u: goto label_2f8ed0;
        case 0x2f8ed4u: goto label_2f8ed4;
        case 0x2f8ed8u: goto label_2f8ed8;
        case 0x2f8edcu: goto label_2f8edc;
        case 0x2f8ee0u: goto label_2f8ee0;
        case 0x2f8ee4u: goto label_2f8ee4;
        case 0x2f8ee8u: goto label_2f8ee8;
        case 0x2f8eecu: goto label_2f8eec;
        case 0x2f8ef0u: goto label_2f8ef0;
        case 0x2f8ef4u: goto label_2f8ef4;
        case 0x2f8ef8u: goto label_2f8ef8;
        case 0x2f8efcu: goto label_2f8efc;
        case 0x2f8f00u: goto label_2f8f00;
        case 0x2f8f04u: goto label_2f8f04;
        case 0x2f8f08u: goto label_2f8f08;
        case 0x2f8f0cu: goto label_2f8f0c;
        case 0x2f8f10u: goto label_2f8f10;
        case 0x2f8f14u: goto label_2f8f14;
        case 0x2f8f18u: goto label_2f8f18;
        case 0x2f8f1cu: goto label_2f8f1c;
        case 0x2f8f20u: goto label_2f8f20;
        case 0x2f8f24u: goto label_2f8f24;
        case 0x2f8f28u: goto label_2f8f28;
        case 0x2f8f2cu: goto label_2f8f2c;
        case 0x2f8f30u: goto label_2f8f30;
        case 0x2f8f34u: goto label_2f8f34;
        case 0x2f8f38u: goto label_2f8f38;
        case 0x2f8f3cu: goto label_2f8f3c;
        case 0x2f8f40u: goto label_2f8f40;
        case 0x2f8f44u: goto label_2f8f44;
        case 0x2f8f48u: goto label_2f8f48;
        case 0x2f8f4cu: goto label_2f8f4c;
        case 0x2f8f50u: goto label_2f8f50;
        case 0x2f8f54u: goto label_2f8f54;
        case 0x2f8f58u: goto label_2f8f58;
        case 0x2f8f5cu: goto label_2f8f5c;
        case 0x2f8f60u: goto label_2f8f60;
        case 0x2f8f64u: goto label_2f8f64;
        case 0x2f8f68u: goto label_2f8f68;
        case 0x2f8f6cu: goto label_2f8f6c;
        case 0x2f8f70u: goto label_2f8f70;
        case 0x2f8f74u: goto label_2f8f74;
        case 0x2f8f78u: goto label_2f8f78;
        case 0x2f8f7cu: goto label_2f8f7c;
        case 0x2f8f80u: goto label_2f8f80;
        case 0x2f8f84u: goto label_2f8f84;
        case 0x2f8f88u: goto label_2f8f88;
        case 0x2f8f8cu: goto label_2f8f8c;
        case 0x2f8f90u: goto label_2f8f90;
        case 0x2f8f94u: goto label_2f8f94;
        case 0x2f8f98u: goto label_2f8f98;
        case 0x2f8f9cu: goto label_2f8f9c;
        case 0x2f8fa0u: goto label_2f8fa0;
        case 0x2f8fa4u: goto label_2f8fa4;
        case 0x2f8fa8u: goto label_2f8fa8;
        case 0x2f8facu: goto label_2f8fac;
        case 0x2f8fb0u: goto label_2f8fb0;
        case 0x2f8fb4u: goto label_2f8fb4;
        case 0x2f8fb8u: goto label_2f8fb8;
        case 0x2f8fbcu: goto label_2f8fbc;
        case 0x2f8fc0u: goto label_2f8fc0;
        case 0x2f8fc4u: goto label_2f8fc4;
        case 0x2f8fc8u: goto label_2f8fc8;
        case 0x2f8fccu: goto label_2f8fcc;
        case 0x2f8fd0u: goto label_2f8fd0;
        case 0x2f8fd4u: goto label_2f8fd4;
        case 0x2f8fd8u: goto label_2f8fd8;
        case 0x2f8fdcu: goto label_2f8fdc;
        case 0x2f8fe0u: goto label_2f8fe0;
        case 0x2f8fe4u: goto label_2f8fe4;
        case 0x2f8fe8u: goto label_2f8fe8;
        case 0x2f8fecu: goto label_2f8fec;
        case 0x2f8ff0u: goto label_2f8ff0;
        case 0x2f8ff4u: goto label_2f8ff4;
        case 0x2f8ff8u: goto label_2f8ff8;
        case 0x2f8ffcu: goto label_2f8ffc;
        case 0x2f9000u: goto label_2f9000;
        case 0x2f9004u: goto label_2f9004;
        case 0x2f9008u: goto label_2f9008;
        case 0x2f900cu: goto label_2f900c;
        case 0x2f9010u: goto label_2f9010;
        case 0x2f9014u: goto label_2f9014;
        case 0x2f9018u: goto label_2f9018;
        case 0x2f901cu: goto label_2f901c;
        case 0x2f9020u: goto label_2f9020;
        case 0x2f9024u: goto label_2f9024;
        case 0x2f9028u: goto label_2f9028;
        case 0x2f902cu: goto label_2f902c;
        case 0x2f9030u: goto label_2f9030;
        case 0x2f9034u: goto label_2f9034;
        case 0x2f9038u: goto label_2f9038;
        case 0x2f903cu: goto label_2f903c;
        case 0x2f9040u: goto label_2f9040;
        case 0x2f9044u: goto label_2f9044;
        case 0x2f9048u: goto label_2f9048;
        case 0x2f904cu: goto label_2f904c;
        case 0x2f9050u: goto label_2f9050;
        case 0x2f9054u: goto label_2f9054;
        case 0x2f9058u: goto label_2f9058;
        case 0x2f905cu: goto label_2f905c;
        case 0x2f9060u: goto label_2f9060;
        case 0x2f9064u: goto label_2f9064;
        case 0x2f9068u: goto label_2f9068;
        case 0x2f906cu: goto label_2f906c;
        case 0x2f9070u: goto label_2f9070;
        case 0x2f9074u: goto label_2f9074;
        case 0x2f9078u: goto label_2f9078;
        case 0x2f907cu: goto label_2f907c;
        case 0x2f9080u: goto label_2f9080;
        case 0x2f9084u: goto label_2f9084;
        case 0x2f9088u: goto label_2f9088;
        case 0x2f908cu: goto label_2f908c;
        case 0x2f9090u: goto label_2f9090;
        case 0x2f9094u: goto label_2f9094;
        case 0x2f9098u: goto label_2f9098;
        case 0x2f909cu: goto label_2f909c;
        case 0x2f90a0u: goto label_2f90a0;
        case 0x2f90a4u: goto label_2f90a4;
        case 0x2f90a8u: goto label_2f90a8;
        case 0x2f90acu: goto label_2f90ac;
        case 0x2f90b0u: goto label_2f90b0;
        case 0x2f90b4u: goto label_2f90b4;
        case 0x2f90b8u: goto label_2f90b8;
        case 0x2f90bcu: goto label_2f90bc;
        case 0x2f90c0u: goto label_2f90c0;
        case 0x2f90c4u: goto label_2f90c4;
        case 0x2f90c8u: goto label_2f90c8;
        case 0x2f90ccu: goto label_2f90cc;
        case 0x2f90d0u: goto label_2f90d0;
        case 0x2f90d4u: goto label_2f90d4;
        case 0x2f90d8u: goto label_2f90d8;
        case 0x2f90dcu: goto label_2f90dc;
        case 0x2f90e0u: goto label_2f90e0;
        case 0x2f90e4u: goto label_2f90e4;
        case 0x2f90e8u: goto label_2f90e8;
        case 0x2f90ecu: goto label_2f90ec;
        case 0x2f90f0u: goto label_2f90f0;
        case 0x2f90f4u: goto label_2f90f4;
        case 0x2f90f8u: goto label_2f90f8;
        case 0x2f90fcu: goto label_2f90fc;
        case 0x2f9100u: goto label_2f9100;
        case 0x2f9104u: goto label_2f9104;
        case 0x2f9108u: goto label_2f9108;
        case 0x2f910cu: goto label_2f910c;
        case 0x2f9110u: goto label_2f9110;
        case 0x2f9114u: goto label_2f9114;
        case 0x2f9118u: goto label_2f9118;
        case 0x2f911cu: goto label_2f911c;
        case 0x2f9120u: goto label_2f9120;
        case 0x2f9124u: goto label_2f9124;
        case 0x2f9128u: goto label_2f9128;
        case 0x2f912cu: goto label_2f912c;
        case 0x2f9130u: goto label_2f9130;
        case 0x2f9134u: goto label_2f9134;
        default: break;
    }

    ctx->pc = 0x2f8dc8u;

label_2f8dc8:
    // 0x2f8dc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2f8dcc:
    // 0x2f8dcc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2f8dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_2f8dd0:
    // 0x2f8dd0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2f8dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2f8dd4:
    // 0x2f8dd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f8dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8dd8:
    // 0x2f8dd8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2f8dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2f8ddc:
    // 0x2f8ddc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f8ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f8de0:
    // 0x2f8de0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2f8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_2f8de4:
    // 0x2f8de4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f8de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2f8de8:
    // 0x2f8de8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2f8de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_2f8dec:
    // 0x2f8dec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f8decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2f8df0:
    // 0x2f8df0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2f8df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2f8df4:
    // 0x2f8df4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2f8df4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2f8df8:
    // 0x2f8df8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2f8df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2f8dfc:
    // 0x2f8dfc: 0xc0b9400  jal         func_2E5000
label_2f8e00:
    if (ctx->pc == 0x2F8E00u) {
        ctx->pc = 0x2F8E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DFCu;
        // 0x2f8e00: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E04u;
        goto label_2f8e04;
    }
    ctx->pc = 0x2F8DFCu;
    SET_GPR_U32(ctx, 31, 0x2F8E04u);
    ctx->pc = 0x2F8E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8DFCu;
    // 0x2f8e00: 0xae2004f4  sw          $zero, 0x4F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2F8DFCu, 0x2F8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E04u;
label_2f8e04:
    // 0x2f8e04: 0x544000c0  bnel        $v0, $zero, . + 4 + (0xC0 << 2)
label_2f8e08:
    if (ctx->pc == 0x2F8E08u) {
        ctx->pc = 0x2F8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E04u;
        // 0x2f8e08: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E0Cu;
        goto label_2f8e0c;
    }
    ctx->pc = 0x2F8E04u;
    {
        const bool branch_taken_0x2f8e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e04) {
            ctx->pc = 0x2F8E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E04u;
            // 0x2f8e08: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8E0Cu;
label_2f8e0c:
    // 0x2f8e0c: 0xc0b93fe  jal         func_2E4FF8
label_2f8e10:
    if (ctx->pc == 0x2F8E10u) {
        ctx->pc = 0x2F8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E0Cu;
        // 0x2f8e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E14u;
        goto label_2f8e14;
    }
    ctx->pc = 0x2F8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E14u);
    ctx->pc = 0x2F8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E0Cu;
    // 0x2f8e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2F8E0Cu, 0x2F8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E14u;
label_2f8e14:
    // 0x2f8e14: 0x544000bc  bnel        $v0, $zero, . + 4 + (0xBC << 2)
label_2f8e18:
    if (ctx->pc == 0x2F8E18u) {
        ctx->pc = 0x2F8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E14u;
        // 0x2f8e18: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E1Cu;
        goto label_2f8e1c;
    }
    ctx->pc = 0x2F8E14u;
    {
        const bool branch_taken_0x2f8e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e14) {
            ctx->pc = 0x2F8E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E14u;
            // 0x2f8e18: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8E1Cu;
label_2f8e1c:
    // 0x2f8e1c: 0x9222047d  lbu         $v0, 0x47D($s1)
    ctx->pc = 0x2f8e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1149)));
label_2f8e20:
    // 0x2f8e20: 0x544000b8  bnel        $v0, $zero, . + 4 + (0xB8 << 2)
label_2f8e24:
    if (ctx->pc == 0x2F8E24u) {
        ctx->pc = 0x2F8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E20u;
        // 0x2f8e24: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E28u;
        goto label_2f8e28;
    }
    ctx->pc = 0x2F8E20u;
    {
        const bool branch_taken_0x2f8e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e20) {
            ctx->pc = 0x2F8E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E20u;
            // 0x2f8e24: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9104u;
            goto label_2f9104;
        }
    }
    ctx->pc = 0x2F8E28u;
label_2f8e28:
    // 0x2f8e28: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2f8e2c:
    if (ctx->pc == 0x2F8E2Cu) {
        ctx->pc = 0x2F8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E28u;
        // 0x2f8e2c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E30u;
        goto label_2f8e30;
    }
    ctx->pc = 0x2F8E28u;
    {
        const bool branch_taken_0x2f8e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E28u;
        // 0x2f8e2c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e28) {
            ctx->pc = 0x2F8E60u;
            goto label_2f8e60;
        }
    }
    ctx->pc = 0x2F8E30u;
label_2f8e30:
    // 0x2f8e30: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2f8e34:
    // 0x2f8e34: 0x504000b3  beql        $v0, $zero, . + 4 + (0xB3 << 2)
label_2f8e38:
    if (ctx->pc == 0x2F8E38u) {
        ctx->pc = 0x2F8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E34u;
        // 0x2f8e38: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E3Cu;
        goto label_2f8e3c;
    }
    ctx->pc = 0x2F8E34u;
    {
        const bool branch_taken_0x2f8e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e34) {
            ctx->pc = 0x2F8E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E34u;
            // 0x2f8e38: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9104u;
            goto label_2f9104;
        }
    }
    ctx->pc = 0x2F8E3Cu;
label_2f8e3c:
    // 0x2f8e3c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2f8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8e40:
    // 0x2f8e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f8e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8e44:
    // 0x2f8e44: 0x0  nop
    ctx->pc = 0x2f8e44u;
    // NOP
label_2f8e48:
    // 0x2f8e48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f8e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8e4c:
    // 0x2f8e4c: 0x0  nop
    ctx->pc = 0x2f8e4cu;
    // NOP
label_2f8e50:
    // 0x2f8e50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f8e54:
    if (ctx->pc == 0x2F8E54u) {
        ctx->pc = 0x2F8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E50u;
        // 0x2f8e54: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E58u;
        goto label_2f8e58;
    }
    ctx->pc = 0x2F8E50u;
    {
        const bool branch_taken_0x2f8e50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E50u;
        // 0x2f8e54: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e50) {
            ctx->pc = 0x2F8E60u;
            goto label_2f8e60;
        }
    }
    ctx->pc = 0x2F8E58u;
label_2f8e58:
    // 0x2f8e58: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2f8e5c:
    if (ctx->pc == 0x2F8E5Cu) {
        ctx->pc = 0x2F8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E58u;
        // 0x2f8e5c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E60u;
        goto label_2f8e60;
    }
    ctx->pc = 0x2F8E58u;
    {
        const bool branch_taken_0x2f8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E58u;
        // 0x2f8e5c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e58) {
            ctx->pc = 0x2F9104u;
            goto label_2f9104;
        }
    }
    ctx->pc = 0x2F8E60u;
label_2f8e60:
    // 0x2f8e60: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x2f8e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
label_2f8e64:
    // 0x2f8e64: 0x506000a8  beql        $v1, $zero, . + 4 + (0xA8 << 2)
label_2f8e68:
    if (ctx->pc == 0x2F8E68u) {
        ctx->pc = 0x2F8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E64u;
        // 0x2f8e68: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E6Cu;
        goto label_2f8e6c;
    }
    ctx->pc = 0x2F8E64u;
    {
        const bool branch_taken_0x2f8e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e64) {
            ctx->pc = 0x2F8E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E64u;
            // 0x2f8e68: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8E6Cu;
label_2f8e6c:
    // 0x2f8e6c: 0xc0899bc  jal         func_2266F0
label_2f8e70:
    if (ctx->pc == 0x2F8E70u) {
        ctx->pc = 0x2F8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E6Cu;
        // 0x2f8e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E74u;
        goto label_2f8e74;
    }
    ctx->pc = 0x2F8E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E74u);
    ctx->pc = 0x2F8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E6Cu;
    // 0x2f8e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F8E6Cu, 0x2F8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E74u;
label_2f8e74:
    // 0x2f8e74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f8e74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8e78:
    // 0x2f8e78: 0xc08dab6  jal         func_236AD8
label_2f8e7c:
    if (ctx->pc == 0x2F8E7Cu) {
        ctx->pc = 0x2F8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E78u;
        // 0x2f8e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E80u;
        goto label_2f8e80;
    }
    ctx->pc = 0x2F8E78u;
    SET_GPR_U32(ctx, 31, 0x2F8E80u);
    ctx->pc = 0x2F8E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E78u;
    // 0x2f8e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F8E78u, 0x2F8E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E80u;
label_2f8e80:
    // 0x2f8e80: 0x544000a1  bnel        $v0, $zero, . + 4 + (0xA1 << 2)
label_2f8e84:
    if (ctx->pc == 0x2F8E84u) {
        ctx->pc = 0x2F8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E80u;
        // 0x2f8e84: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E88u;
        goto label_2f8e88;
    }
    ctx->pc = 0x2F8E80u;
    {
        const bool branch_taken_0x2f8e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e80) {
            ctx->pc = 0x2F8E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E80u;
            // 0x2f8e84: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8E88u;
label_2f8e88:
    // 0x2f8e88: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_2f8e8c:
    if (ctx->pc == 0x2F8E8Cu) {
        ctx->pc = 0x2F8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E88u;
        // 0x2f8e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E90u;
        goto label_2f8e90;
    }
    ctx->pc = 0x2F8E88u;
    {
        const bool branch_taken_0x2f8e88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E88u;
        // 0x2f8e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e88) {
            ctx->pc = 0x2F8ECCu;
            goto label_2f8ecc;
        }
    }
    ctx->pc = 0x2F8E90u;
label_2f8e90:
    // 0x2f8e90: 0xc08da92  jal         func_236A48
label_2f8e94:
    if (ctx->pc == 0x2F8E94u) {
        ctx->pc = 0x2F8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E90u;
        // 0x2f8e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8E98u;
        goto label_2f8e98;
    }
    ctx->pc = 0x2F8E90u;
    SET_GPR_U32(ctx, 31, 0x2F8E98u);
    ctx->pc = 0x2F8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E90u;
    // 0x2f8e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F8E90u, 0x2F8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E98u;
label_2f8e98:
    // 0x2f8e98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f8e9c:
    if (ctx->pc == 0x2F8E9Cu) {
        ctx->pc = 0x2F8EA0u;
        goto label_2f8ea0;
    }
    ctx->pc = 0x2F8E98u;
    {
        const bool branch_taken_0x2f8e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e98) {
            ctx->pc = 0x2F8EB4u;
            goto label_2f8eb4;
        }
    }
    ctx->pc = 0x2F8EA0u;
label_2f8ea0:
    // 0x2f8ea0: 0xc097f26  jal         func_25FC98
label_2f8ea4:
    if (ctx->pc == 0x2F8EA4u) {
        ctx->pc = 0x2F8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EA0u;
        // 0x2f8ea4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EA8u;
        goto label_2f8ea8;
    }
    ctx->pc = 0x2F8EA0u;
    SET_GPR_U32(ctx, 31, 0x2F8EA8u);
    ctx->pc = 0x2F8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EA0u;
    // 0x2f8ea4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F8EA0u, 0x2F8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EA8u;
label_2f8ea8:
    // 0x2f8ea8: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2f8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2f8eac:
    // 0x2f8eac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2f8eb0:
    if (ctx->pc == 0x2F8EB0u) {
        ctx->pc = 0x2F8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EACu;
        // 0x2f8eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EB4u;
        goto label_2f8eb4;
    }
    ctx->pc = 0x2F8EACu;
    {
        const bool branch_taken_0x2f8eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EACu;
        // 0x2f8eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8eac) {
            ctx->pc = 0x2F8ECCu;
            goto label_2f8ecc;
        }
    }
    ctx->pc = 0x2F8EB4u;
label_2f8eb4:
    // 0x2f8eb4: 0xc09876c  jal         func_261DB0
label_2f8eb8:
    if (ctx->pc == 0x2F8EB8u) {
        ctx->pc = 0x2F8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EB4u;
        // 0x2f8eb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EBCu;
        goto label_2f8ebc;
    }
    ctx->pc = 0x2F8EB4u;
    SET_GPR_U32(ctx, 31, 0x2F8EBCu);
    ctx->pc = 0x2F8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EB4u;
    // 0x2f8eb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2F8EB4u, 0x2F8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EBCu;
label_2f8ebc:
    // 0x2f8ebc: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x2f8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_2f8ec0:
    // 0x2f8ec0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_2f8ec4:
    if (ctx->pc == 0x2F8EC4u) {
        ctx->pc = 0x2F8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EC0u;
        // 0x2f8ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EC8u;
        goto label_2f8ec8;
    }
    ctx->pc = 0x2F8EC0u;
    {
        const bool branch_taken_0x2f8ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EC0u;
        // 0x2f8ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ec0) {
            ctx->pc = 0x2F8ECCu;
            goto label_2f8ecc;
        }
    }
    ctx->pc = 0x2F8EC8u;
label_2f8ec8:
    // 0x2f8ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ecc:
    // 0x2f8ecc: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_2f8ed0:
    if (ctx->pc == 0x2F8ED0u) {
        ctx->pc = 0x2F8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ECCu;
        // 0x2f8ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8ED4u;
        goto label_2f8ed4;
    }
    ctx->pc = 0x2F8ECCu;
    {
        const bool branch_taken_0x2f8ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ECCu;
        // 0x2f8ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ecc) {
            ctx->pc = 0x2F9104u;
            goto label_2f9104;
        }
    }
    ctx->pc = 0x2F8ED4u;
label_2f8ed4:
    // 0x2f8ed4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2f8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2f8ed8:
    // 0x2f8ed8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8edc:
    // 0x2f8edc: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f8ee0:
    // 0x2f8ee0: 0x40f809  jalr        $v0
label_2f8ee4:
    if (ctx->pc == 0x2F8EE4u) {
        ctx->pc = 0x2F8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EE0u;
        // 0x2f8ee4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EE8u;
        goto label_2f8ee8;
    }
    ctx->pc = 0x2F8EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8EE8u);
        ctx->pc = 0x2F8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EE0u;
        // 0x2f8ee4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8EE0u, 0x2F8EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8EE8u;
label_2f8ee8:
    // 0x2f8ee8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f8eec:
    if (ctx->pc == 0x2F8EECu) {
        ctx->pc = 0x2F8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EE8u;
        // 0x2f8eec: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EF0u;
        goto label_2f8ef0;
    }
    ctx->pc = 0x2F8EE8u;
    {
        const bool branch_taken_0x2f8ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ee8) {
            ctx->pc = 0x2F8EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8EE8u;
            // 0x2f8eec: 0x8e230338  lw          $v1, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F04u;
            goto label_2f8f04;
        }
    }
    ctx->pc = 0x2F8EF0u;
label_2f8ef0:
    // 0x2f8ef0: 0xc08f672  jal         func_23D9C8
label_2f8ef4:
    if (ctx->pc == 0x2F8EF4u) {
        ctx->pc = 0x2F8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EF0u;
        // 0x2f8ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8EF8u;
        goto label_2f8ef8;
    }
    ctx->pc = 0x2F8EF0u;
    SET_GPR_U32(ctx, 31, 0x2F8EF8u);
    ctx->pc = 0x2F8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EF0u;
    // 0x2f8ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2F8EF0u, 0x2F8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EF8u;
label_2f8ef8:
    // 0x2f8ef8: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
label_2f8efc:
    if (ctx->pc == 0x2F8EFCu) {
        ctx->pc = 0x2F8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EF8u;
        // 0x2f8efc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F00u;
        goto label_2f8f00;
    }
    ctx->pc = 0x2F8EF8u;
    {
        const bool branch_taken_0x2f8ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ef8) {
            ctx->pc = 0x2F8EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8EF8u;
            // 0x2f8efc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8F00u;
label_2f8f00:
    // 0x2f8f00: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2f8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2f8f04:
    // 0x2f8f04: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2f8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2f8f08:
    // 0x2f8f08: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x2f8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_2f8f0c:
    // 0x2f8f0c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f8f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f8f10:
    // 0x2f8f10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f8f14:
    if (ctx->pc == 0x2F8F14u) {
        ctx->pc = 0x2F8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F10u;
        // 0x2f8f14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F18u;
        goto label_2f8f18;
    }
    ctx->pc = 0x2F8F10u;
    {
        const bool branch_taken_0x2f8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F10u;
        // 0x2f8f14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f10) {
            ctx->pc = 0x2F8F34u;
            goto label_2f8f34;
        }
    }
    ctx->pc = 0x2F8F18u;
label_2f8f18:
    // 0x2f8f18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f8f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f8f1c:
    // 0x2f8f1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f8f20:
    if (ctx->pc == 0x2F8F20u) {
        ctx->pc = 0x2F8F24u;
        goto label_2f8f24;
    }
    ctx->pc = 0x2F8F1Cu;
    {
        const bool branch_taken_0x2f8f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f1c) {
            ctx->pc = 0x2F8F34u;
            goto label_2f8f34;
        }
    }
    ctx->pc = 0x2F8F24u;
label_2f8f24:
    // 0x2f8f24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f8f28:
    if (ctx->pc == 0x2F8F28u) {
        ctx->pc = 0x2F8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F24u;
        // 0x2f8f28: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F2Cu;
        goto label_2f8f2c;
    }
    ctx->pc = 0x2F8F24u;
    {
        const bool branch_taken_0x2f8f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F24u;
        // 0x2f8f28: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f24) {
            ctx->pc = 0x2F8F34u;
            goto label_2f8f34;
        }
    }
    ctx->pc = 0x2F8F2Cu;
label_2f8f2c:
    // 0x2f8f2c: 0x54620076  bnel        $v1, $v0, . + 4 + (0x76 << 2)
label_2f8f30:
    if (ctx->pc == 0x2F8F30u) {
        ctx->pc = 0x2F8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F2Cu;
        // 0x2f8f30: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F34u;
        goto label_2f8f34;
    }
    ctx->pc = 0x2F8F2Cu;
    {
        const bool branch_taken_0x2f8f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f8f2c) {
            ctx->pc = 0x2F8F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8F2Cu;
            // 0x2f8f30: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8F34u;
label_2f8f34:
    // 0x2f8f34: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_2f8f38:
    if (ctx->pc == 0x2F8F38u) {
        ctx->pc = 0x2F8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F34u;
        // 0x2f8f38: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F3Cu;
        goto label_2f8f3c;
    }
    ctx->pc = 0x2F8F34u;
    {
        const bool branch_taken_0x2f8f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f34) {
            ctx->pc = 0x2F8F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8F34u;
            // 0x2f8f38: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F4Cu;
            goto label_2f8f4c;
        }
    }
    ctx->pc = 0x2F8F3Cu;
label_2f8f3c:
    // 0x2f8f3c: 0xc0be62e  jal         func_2F98B8
label_2f8f40:
    if (ctx->pc == 0x2F8F40u) {
        ctx->pc = 0x2F8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F3Cu;
        // 0x2f8f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F44u;
        goto label_2f8f44;
    }
    ctx->pc = 0x2F8F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F8F44u);
    ctx->pc = 0x2F8F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F3Cu;
    // 0x2f8f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F98B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F98B8u, 0x2F8F3Cu, 0x2F8F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F44u;
label_2f8f44:
    // 0x2f8f44: 0x10000070  b           . + 4 + (0x70 << 2)
label_2f8f48:
    if (ctx->pc == 0x2F8F48u) {
        ctx->pc = 0x2F8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F44u;
        // 0x2f8f48: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F4Cu;
        goto label_2f8f4c;
    }
    ctx->pc = 0x2F8F44u;
    {
        const bool branch_taken_0x2f8f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F44u;
        // 0x2f8f48: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f44) {
            ctx->pc = 0x2F9108u;
            goto label_2f9108;
        }
    }
    ctx->pc = 0x2F8F4Cu;
label_2f8f4c:
    // 0x2f8f4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f8f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8f50:
    // 0x2f8f50: 0x8e3411e8  lw          $s4, 0x11E8($s1)
    ctx->pc = 0x2f8f50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2f8f54:
    // 0x2f8f54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f8f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f8f58:
    // 0x2f8f58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f8f5c:
    if (ctx->pc == 0x2F8F5Cu) {
        ctx->pc = 0x2F8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F58u;
        // 0x2f8f5c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F60u;
        goto label_2f8f60;
    }
    ctx->pc = 0x2F8F58u;
    {
        const bool branch_taken_0x2f8f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F58u;
        // 0x2f8f5c: 0xae2011e8  sw          $zero, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f58) {
            ctx->pc = 0x2F8F68u;
            goto label_2f8f68;
        }
    }
    ctx->pc = 0x2F8F60u;
label_2f8f60:
    // 0x2f8f60: 0x8e221208  lw          $v0, 0x1208($s1)
    ctx->pc = 0x2f8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4616)));
label_2f8f64:
    // 0x2f8f64: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2f8f64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8f68:
    // 0x2f8f68: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2f8f6c:
    if (ctx->pc == 0x2F8F6Cu) {
        ctx->pc = 0x2F8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F68u;
        // 0x2f8f6c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F70u;
        goto label_2f8f70;
    }
    ctx->pc = 0x2F8F68u;
    {
        const bool branch_taken_0x2f8f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F68u;
        // 0x2f8f6c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f68) {
            ctx->pc = 0x2F8FA8u;
            goto label_2f8fa8;
        }
    }
    ctx->pc = 0x2F8F70u;
label_2f8f70:
    // 0x2f8f70: 0x8e30121c  lw          $s0, 0x121C($s1)
    ctx->pc = 0x2f8f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
label_2f8f74:
    // 0x2f8f74: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
label_2f8f78:
    if (ctx->pc == 0x2F8F78u) {
        ctx->pc = 0x2F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F74u;
        // 0x2f8f78: 0x2143026  xor         $a2, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F7Cu;
        goto label_2f8f7c;
    }
    ctx->pc = 0x2F8F74u;
    {
        const bool branch_taken_0x2f8f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F74u;
        // 0x2f8f78: 0x2143026  xor         $a2, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f74) {
            ctx->pc = 0x2F90C4u;
            goto label_2f90c4;
        }
    }
    ctx->pc = 0x2F8F7Cu;
label_2f8f7c:
    // 0x2f8f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f8f80:
    // 0x2f8f80: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2f8f80u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8f84:
    // 0x2f8f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f8f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8f88:
    // 0x2f8f88: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2f8f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f8f8c:
    // 0x2f8f8c: 0xc0bdd46  jal         func_2F7518
label_2f8f90:
    if (ctx->pc == 0x2F8F90u) {
        ctx->pc = 0x2F8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F8Cu;
        // 0x2f8f90: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F94u;
        goto label_2f8f94;
    }
    ctx->pc = 0x2F8F8Cu;
    SET_GPR_U32(ctx, 31, 0x2F8F94u);
    ctx->pc = 0x2F8F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8F8Cu;
    // 0x2f8f90: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7518u, 0x2F8F8Cu, 0x2F8F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F94u;
label_2f8f94:
    // 0x2f8f94: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2f8f98:
    if (ctx->pc == 0x2F8F98u) {
        ctx->pc = 0x2F8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F94u;
        // 0x2f8f98: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8F9Cu;
        goto label_2f8f9c;
    }
    ctx->pc = 0x2F8F94u;
    {
        const bool branch_taken_0x2f8f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F94u;
        // 0x2f8f98: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f94) {
            ctx->pc = 0x2F90C4u;
            goto label_2f90c4;
        }
    }
    ctx->pc = 0x2F8F9Cu;
label_2f8f9c:
    // 0x2f8f9c: 0xae3011e8  sw          $s0, 0x11E8($s1)
    ctx->pc = 0x2f8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 16));
label_2f8fa0:
    // 0x2f8fa0: 0x10000048  b           . + 4 + (0x48 << 2)
label_2f8fa4:
    if (ctx->pc == 0x2F8FA4u) {
        ctx->pc = 0x2F8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FA0u;
        // 0x2f8fa4: 0xae2211fc  sw          $v0, 0x11FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8FA8u;
        goto label_2f8fa8;
    }
    ctx->pc = 0x2F8FA0u;
    {
        const bool branch_taken_0x2f8fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FA0u;
        // 0x2f8fa4: 0xae2211fc  sw          $v0, 0x11FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8fa0) {
            ctx->pc = 0x2F90C4u;
            goto label_2f90c4;
        }
    }
    ctx->pc = 0x2F8FA8u;
label_2f8fa8:
    // 0x2f8fa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f8fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f8fac:
    // 0x2f8fac: 0xc0f6a96  jal         func_3DAA58
label_2f8fb0:
    if (ctx->pc == 0x2F8FB0u) {
        ctx->pc = 0x2F8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FACu;
        // 0x2f8fb0: 0x24533d20  addiu       $s3, $v0, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8FB4u;
        goto label_2f8fb4;
    }
    ctx->pc = 0x2F8FACu;
    SET_GPR_U32(ctx, 31, 0x2F8FB4u);
    ctx->pc = 0x2F8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8FACu;
    // 0x2f8fb0: 0x24533d20  addiu       $s3, $v0, 0x3D20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F8FACu, 0x2F8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8FB4u;
label_2f8fb4:
    // 0x2f8fb4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2f8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2f8fb8:
    // 0x2f8fb8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2f8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f8fbc:
    // 0x2f8fbc: 0xc4551b8c  lwc1        $f21, 0x1B8C($v0)
    ctx->pc = 0x2f8fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f8fc0:
    // 0x2f8fc0: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2f8fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f8fc4:
    // 0x2f8fc4: 0x10000034  b           . + 4 + (0x34 << 2)
label_2f8fc8:
    if (ctx->pc == 0x2F8FC8u) {
        ctx->pc = 0x2F8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FC4u;
        // 0x2f8fc8: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8FCCu;
        goto label_2f8fcc;
    }
    ctx->pc = 0x2F8FC4u;
    {
        const bool branch_taken_0x2f8fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8FC4u;
        // 0x2f8fc8: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8fc4) {
            ctx->pc = 0x2F9098u;
            goto label_2f9098;
        }
    }
    ctx->pc = 0x2F8FCCu;
label_2f8fcc:
    // 0x2f8fcc: 0x0  nop
    ctx->pc = 0x2f8fccu;
    // NOP
label_2f8fd0:
    // 0x2f8fd0: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x2f8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f8fd4:
    // 0x2f8fd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8fd8:
    // 0x2f8fd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f8fdc:
    // 0x2f8fdc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f8fe0:
    // 0x2f8fe0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f8fe4:
    // 0x2f8fe4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8fe8:
    // 0x2f8fe8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f8fe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8fec:
    // 0x2f8fec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8fecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8ff0:
    // 0x2f8ff0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8ff4:
    // 0x2f8ff4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2f8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8ff8:
    // 0x2f8ff8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2f8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ffc:
    // 0x2f8ffc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f8ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9000:
    // 0x2f9000: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2f9000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9004:
    // 0x2f9004: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f9004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f9008:
    // 0x2f9008: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f9008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f900c:
    // 0x2f900c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2f900cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f9010:
    // 0x2f9010: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f9010u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f9014:
    // 0x2f9014: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2f9014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2f9018:
    // 0x2f9018: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f901c:
    // 0x2f901c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f9020:
    // 0x2f9020: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f9020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f9024:
    // 0x2f9024: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f9024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f9028:
    // 0x2f9028: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f9028u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f902c:
    // 0x2f902c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f902cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f9030:
    // 0x2f9030: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f9030u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f9034:
    // 0x2f9034: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2f9034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2f9038:
    // 0x2f9038: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x2f9038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_2f903c:
    // 0x2f903c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f9040:
    if (ctx->pc == 0x2F9040u) {
        ctx->pc = 0x2F9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F903Cu;
        // 0x2f9040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9044u;
        goto label_2f9044;
    }
    ctx->pc = 0x2F903Cu;
    {
        const bool branch_taken_0x2f903c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F903Cu;
        // 0x2f9040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f903c) {
            ctx->pc = 0x2F9050u;
            goto label_2f9050;
        }
    }
    ctx->pc = 0x2F9044u;
label_2f9044:
    // 0x2f9044: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2f9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2f9048:
    // 0x2f9048: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f904c:
    if (ctx->pc == 0x2F904Cu) {
        ctx->pc = 0x2F9050u;
        goto label_2f9050;
    }
    ctx->pc = 0x2F9048u;
    {
        const bool branch_taken_0x2f9048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9048) {
            ctx->pc = 0x2F9054u;
            goto label_2f9054;
        }
    }
    ctx->pc = 0x2F9050u;
label_2f9050:
    // 0x2f9050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f9050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9054:
    // 0x2f9054: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_2f9058:
    if (ctx->pc == 0x2F9058u) {
        ctx->pc = 0x2F9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9054u;
        // 0x2f9058: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F905Cu;
        goto label_2f905c;
    }
    ctx->pc = 0x2F9054u;
    {
        const bool branch_taken_0x2f9054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9054) {
            ctx->pc = 0x2F9058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9054u;
            // 0x2f9058: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F909Cu;
            goto label_2f909c;
        }
    }
    ctx->pc = 0x2F905Cu;
label_2f905c:
    // 0x2f905c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2f905cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f9060:
    // 0x2f9060: 0x0  nop
    ctx->pc = 0x2f9060u;
    // NOP
label_2f9064:
    // 0x2f9064: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2f9068:
    if (ctx->pc == 0x2F9068u) {
        ctx->pc = 0x2F9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9064u;
        // 0x2f9068: 0x2543026  xor         $a2, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F906Cu;
        goto label_2f906c;
    }
    ctx->pc = 0x2F9064u;
    {
        const bool branch_taken_0x2f9064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9064u;
        // 0x2f9068: 0x2543026  xor         $a2, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9064) {
            ctx->pc = 0x2F9098u;
            goto label_2f9098;
        }
    }
    ctx->pc = 0x2F906Cu;
label_2f906c:
    // 0x2f906c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9070:
    // 0x2f9070: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2f9070u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f9074:
    // 0x2f9074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f9074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9078:
    // 0x2f9078: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2f9078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f907c:
    // 0x2f907c: 0xc0bdd46  jal         func_2F7518
label_2f9080:
    if (ctx->pc == 0x2F9080u) {
        ctx->pc = 0x2F9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F907Cu;
        // 0x2f9080: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9084u;
        goto label_2f9084;
    }
    ctx->pc = 0x2F907Cu;
    SET_GPR_U32(ctx, 31, 0x2F9084u);
    ctx->pc = 0x2F9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F907Cu;
    // 0x2f9080: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7518u, 0x2F907Cu, 0x2F9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9084u;
label_2f9084:
    // 0x2f9084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f9088:
    if (ctx->pc == 0x2F9088u) {
        ctx->pc = 0x2F9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9084u;
        // 0x2f9088: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F908Cu;
        goto label_2f908c;
    }
    ctx->pc = 0x2F9084u;
    {
        const bool branch_taken_0x2f9084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9084u;
        // 0x2f9088: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9084) {
            ctx->pc = 0x2F9098u;
            goto label_2f9098;
        }
    }
    ctx->pc = 0x2F908Cu;
label_2f908c:
    // 0x2f908c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2f908cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2f9090:
    // 0x2f9090: 0xae3211e8  sw          $s2, 0x11E8($s1)
    ctx->pc = 0x2f9090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 18));
label_2f9094:
    // 0x2f9094: 0xae2211fc  sw          $v0, 0x11FC($s1)
    ctx->pc = 0x2f9094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 2));
label_2f9098:
    // 0x2f9098: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2f9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2f909c:
    // 0x2f909c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f909cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f90a0:
    // 0x2f90a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f90a4:
    if (ctx->pc == 0x2F90A4u) {
        ctx->pc = 0x2F90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90A0u;
        // 0x2f90a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90A8u;
        goto label_2f90a8;
    }
    ctx->pc = 0x2F90A0u;
    {
        const bool branch_taken_0x2f90a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90A0u;
        // 0x2f90a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90a0) {
            ctx->pc = 0x2F90ACu;
            goto label_2f90ac;
        }
    }
    ctx->pc = 0x2F90A8u;
label_2f90a8:
    // 0x2f90a8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f90a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f90ac:
    // 0x2f90ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f90b0:
    if (ctx->pc == 0x2F90B0u) {
        ctx->pc = 0x2F90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90ACu;
        // 0x2f90b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90B4u;
        goto label_2f90b4;
    }
    ctx->pc = 0x2F90ACu;
    {
        const bool branch_taken_0x2f90ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90ACu;
        // 0x2f90b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90ac) {
            ctx->pc = 0x2F90BCu;
            goto label_2f90bc;
        }
    }
    ctx->pc = 0x2F90B4u;
label_2f90b4:
    // 0x2f90b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2f90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2f90b8:
    // 0x2f90b8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2f90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2f90bc:
    // 0x2f90bc: 0x5600ffc4  bnel        $s0, $zero, . + 4 + (-0x3C << 2)
label_2f90c0:
    if (ctx->pc == 0x2F90C0u) {
        ctx->pc = 0x2F90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90BCu;
        // 0x2f90c0: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90C4u;
        goto label_2f90c4;
    }
    ctx->pc = 0x2F90BCu;
    {
        const bool branch_taken_0x2f90bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f90bc) {
            ctx->pc = 0x2F90C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F90BCu;
            // 0x2f90c0: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8fd0;
        }
    }
    ctx->pc = 0x2F90C4u;
label_2f90c4:
    // 0x2f90c4: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2f90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_2f90c8:
    // 0x2f90c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2f90cc:
    if (ctx->pc == 0x2F90CCu) {
        ctx->pc = 0x2F90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90C8u;
        // 0x2f90cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90D0u;
        goto label_2f90d0;
    }
    ctx->pc = 0x2F90C8u;
    {
        const bool branch_taken_0x2f90c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90C8u;
        // 0x2f90cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90c8) {
            ctx->pc = 0x2F9104u;
            goto label_2f9104;
        }
    }
    ctx->pc = 0x2F90D0u;
label_2f90d0:
    // 0x2f90d0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2f90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2f90d4:
    // 0x2f90d4: 0xae2204f4  sw          $v0, 0x4F4($s1)
    ctx->pc = 0x2f90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 2));
label_2f90d8:
    // 0x2f90d8: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x2f90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
label_2f90dc:
    // 0x2f90dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f90dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f90e0:
    // 0x2f90e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f90e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f90e4:
    // 0x2f90e4: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x2f90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_2f90e8:
    // 0x2f90e8: 0xc08006c  jal         func_2001B0
label_2f90ec:
    if (ctx->pc == 0x2F90ECu) {
        ctx->pc = 0x2F90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F90E8u;
        // 0x2f90ec: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F90F0u;
        goto label_2f90f0;
    }
    ctx->pc = 0x2F90E8u;
    SET_GPR_U32(ctx, 31, 0x2F90F0u);
    ctx->pc = 0x2F90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F90E8u;
    // 0x2f90ec: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2001B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2001B0u, 0x2F90E8u, 0x2F90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F90F0u;
label_2f90f0:
    // 0x2f90f0: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2f90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2f90f4:
    // 0x2f90f4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2f90f8:
    // 0x2f90f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f90f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f90fc:
    // 0x2f90fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f90fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f9100:
    // 0x2f9100: 0xae2311c0  sw          $v1, 0x11C0($s1)
    ctx->pc = 0x2f9100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
label_2f9104:
    // 0x2f9104: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2f9104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f9108:
    // 0x2f9108: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2f9108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2f910c:
    // 0x2f910c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2f910cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f9110:
    // 0x2f9110: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2f9110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2f9114:
    // 0x2f9114: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f9114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f9118:
    // 0x2f9118: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2f9118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2f911c:
    // 0x2f911c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f911cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f9120:
    // 0x2f9120: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2f9120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2f9124:
    // 0x2f9124: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2f9124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f9128:
    // 0x2f9128: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f9128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f912c:
    // 0x2f912c: 0x3e00008  jr          $ra
label_2f9130:
    if (ctx->pc == 0x2F9130u) {
        ctx->pc = 0x2F9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F912Cu;
        // 0x2f9130: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9134u;
        goto label_2f9134;
    }
    ctx->pc = 0x2F912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F912Cu;
        // 0x2f9130: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9134u;
label_2f9134:
    // 0x2f9134: 0x0  nop
    ctx->pc = 0x2f9134u;
    // NOP
    ctx->pc = 0x2f9138u;
}
