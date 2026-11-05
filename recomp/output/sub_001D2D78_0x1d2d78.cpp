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

// Function: sub_001D2D78
// Address: 0x1d2d78 - 0x1d3048
void sub_001D2D78_0x1d2d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D78_0x1d2d78");
#endif

    switch (ctx->pc) {
        case 0x1d2d78u: goto label_1d2d78;
        case 0x1d2d7cu: goto label_1d2d7c;
        case 0x1d2d80u: goto label_1d2d80;
        case 0x1d2d84u: goto label_1d2d84;
        case 0x1d2d88u: goto label_1d2d88;
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2d90u: goto label_1d2d90;
        case 0x1d2d94u: goto label_1d2d94;
        case 0x1d2d98u: goto label_1d2d98;
        case 0x1d2d9cu: goto label_1d2d9c;
        case 0x1d2da0u: goto label_1d2da0;
        case 0x1d2da4u: goto label_1d2da4;
        case 0x1d2da8u: goto label_1d2da8;
        case 0x1d2dacu: goto label_1d2dac;
        case 0x1d2db0u: goto label_1d2db0;
        case 0x1d2db4u: goto label_1d2db4;
        case 0x1d2db8u: goto label_1d2db8;
        case 0x1d2dbcu: goto label_1d2dbc;
        case 0x1d2dc0u: goto label_1d2dc0;
        case 0x1d2dc4u: goto label_1d2dc4;
        case 0x1d2dc8u: goto label_1d2dc8;
        case 0x1d2dccu: goto label_1d2dcc;
        case 0x1d2dd0u: goto label_1d2dd0;
        case 0x1d2dd4u: goto label_1d2dd4;
        case 0x1d2dd8u: goto label_1d2dd8;
        case 0x1d2ddcu: goto label_1d2ddc;
        case 0x1d2de0u: goto label_1d2de0;
        case 0x1d2de4u: goto label_1d2de4;
        case 0x1d2de8u: goto label_1d2de8;
        case 0x1d2decu: goto label_1d2dec;
        case 0x1d2df0u: goto label_1d2df0;
        case 0x1d2df4u: goto label_1d2df4;
        case 0x1d2df8u: goto label_1d2df8;
        case 0x1d2dfcu: goto label_1d2dfc;
        case 0x1d2e00u: goto label_1d2e00;
        case 0x1d2e04u: goto label_1d2e04;
        case 0x1d2e08u: goto label_1d2e08;
        case 0x1d2e0cu: goto label_1d2e0c;
        case 0x1d2e10u: goto label_1d2e10;
        case 0x1d2e14u: goto label_1d2e14;
        case 0x1d2e18u: goto label_1d2e18;
        case 0x1d2e1cu: goto label_1d2e1c;
        case 0x1d2e20u: goto label_1d2e20;
        case 0x1d2e24u: goto label_1d2e24;
        case 0x1d2e28u: goto label_1d2e28;
        case 0x1d2e2cu: goto label_1d2e2c;
        case 0x1d2e30u: goto label_1d2e30;
        case 0x1d2e34u: goto label_1d2e34;
        case 0x1d2e38u: goto label_1d2e38;
        case 0x1d2e3cu: goto label_1d2e3c;
        case 0x1d2e40u: goto label_1d2e40;
        case 0x1d2e44u: goto label_1d2e44;
        case 0x1d2e48u: goto label_1d2e48;
        case 0x1d2e4cu: goto label_1d2e4c;
        case 0x1d2e50u: goto label_1d2e50;
        case 0x1d2e54u: goto label_1d2e54;
        case 0x1d2e58u: goto label_1d2e58;
        case 0x1d2e5cu: goto label_1d2e5c;
        case 0x1d2e60u: goto label_1d2e60;
        case 0x1d2e64u: goto label_1d2e64;
        case 0x1d2e68u: goto label_1d2e68;
        case 0x1d2e6cu: goto label_1d2e6c;
        case 0x1d2e70u: goto label_1d2e70;
        case 0x1d2e74u: goto label_1d2e74;
        case 0x1d2e78u: goto label_1d2e78;
        case 0x1d2e7cu: goto label_1d2e7c;
        case 0x1d2e80u: goto label_1d2e80;
        case 0x1d2e84u: goto label_1d2e84;
        case 0x1d2e88u: goto label_1d2e88;
        case 0x1d2e8cu: goto label_1d2e8c;
        case 0x1d2e90u: goto label_1d2e90;
        case 0x1d2e94u: goto label_1d2e94;
        case 0x1d2e98u: goto label_1d2e98;
        case 0x1d2e9cu: goto label_1d2e9c;
        case 0x1d2ea0u: goto label_1d2ea0;
        case 0x1d2ea4u: goto label_1d2ea4;
        case 0x1d2ea8u: goto label_1d2ea8;
        case 0x1d2eacu: goto label_1d2eac;
        case 0x1d2eb0u: goto label_1d2eb0;
        case 0x1d2eb4u: goto label_1d2eb4;
        case 0x1d2eb8u: goto label_1d2eb8;
        case 0x1d2ebcu: goto label_1d2ebc;
        case 0x1d2ec0u: goto label_1d2ec0;
        case 0x1d2ec4u: goto label_1d2ec4;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2eccu: goto label_1d2ecc;
        case 0x1d2ed0u: goto label_1d2ed0;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ed8u: goto label_1d2ed8;
        case 0x1d2edcu: goto label_1d2edc;
        case 0x1d2ee0u: goto label_1d2ee0;
        case 0x1d2ee4u: goto label_1d2ee4;
        case 0x1d2ee8u: goto label_1d2ee8;
        case 0x1d2eecu: goto label_1d2eec;
        case 0x1d2ef0u: goto label_1d2ef0;
        case 0x1d2ef4u: goto label_1d2ef4;
        case 0x1d2ef8u: goto label_1d2ef8;
        case 0x1d2efcu: goto label_1d2efc;
        case 0x1d2f00u: goto label_1d2f00;
        case 0x1d2f04u: goto label_1d2f04;
        case 0x1d2f08u: goto label_1d2f08;
        case 0x1d2f0cu: goto label_1d2f0c;
        case 0x1d2f10u: goto label_1d2f10;
        case 0x1d2f14u: goto label_1d2f14;
        case 0x1d2f18u: goto label_1d2f18;
        case 0x1d2f1cu: goto label_1d2f1c;
        case 0x1d2f20u: goto label_1d2f20;
        case 0x1d2f24u: goto label_1d2f24;
        case 0x1d2f28u: goto label_1d2f28;
        case 0x1d2f2cu: goto label_1d2f2c;
        case 0x1d2f30u: goto label_1d2f30;
        case 0x1d2f34u: goto label_1d2f34;
        case 0x1d2f38u: goto label_1d2f38;
        case 0x1d2f3cu: goto label_1d2f3c;
        case 0x1d2f40u: goto label_1d2f40;
        case 0x1d2f44u: goto label_1d2f44;
        case 0x1d2f48u: goto label_1d2f48;
        case 0x1d2f4cu: goto label_1d2f4c;
        case 0x1d2f50u: goto label_1d2f50;
        case 0x1d2f54u: goto label_1d2f54;
        case 0x1d2f58u: goto label_1d2f58;
        case 0x1d2f5cu: goto label_1d2f5c;
        case 0x1d2f60u: goto label_1d2f60;
        case 0x1d2f64u: goto label_1d2f64;
        case 0x1d2f68u: goto label_1d2f68;
        case 0x1d2f6cu: goto label_1d2f6c;
        case 0x1d2f70u: goto label_1d2f70;
        case 0x1d2f74u: goto label_1d2f74;
        case 0x1d2f78u: goto label_1d2f78;
        case 0x1d2f7cu: goto label_1d2f7c;
        case 0x1d2f80u: goto label_1d2f80;
        case 0x1d2f84u: goto label_1d2f84;
        case 0x1d2f88u: goto label_1d2f88;
        case 0x1d2f8cu: goto label_1d2f8c;
        case 0x1d2f90u: goto label_1d2f90;
        case 0x1d2f94u: goto label_1d2f94;
        case 0x1d2f98u: goto label_1d2f98;
        case 0x1d2f9cu: goto label_1d2f9c;
        case 0x1d2fa0u: goto label_1d2fa0;
        case 0x1d2fa4u: goto label_1d2fa4;
        case 0x1d2fa8u: goto label_1d2fa8;
        case 0x1d2facu: goto label_1d2fac;
        case 0x1d2fb0u: goto label_1d2fb0;
        case 0x1d2fb4u: goto label_1d2fb4;
        case 0x1d2fb8u: goto label_1d2fb8;
        case 0x1d2fbcu: goto label_1d2fbc;
        case 0x1d2fc0u: goto label_1d2fc0;
        case 0x1d2fc4u: goto label_1d2fc4;
        case 0x1d2fc8u: goto label_1d2fc8;
        case 0x1d2fccu: goto label_1d2fcc;
        case 0x1d2fd0u: goto label_1d2fd0;
        case 0x1d2fd4u: goto label_1d2fd4;
        case 0x1d2fd8u: goto label_1d2fd8;
        case 0x1d2fdcu: goto label_1d2fdc;
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d2fe4u: goto label_1d2fe4;
        case 0x1d2fe8u: goto label_1d2fe8;
        case 0x1d2fecu: goto label_1d2fec;
        case 0x1d2ff0u: goto label_1d2ff0;
        case 0x1d2ff4u: goto label_1d2ff4;
        case 0x1d2ff8u: goto label_1d2ff8;
        case 0x1d2ffcu: goto label_1d2ffc;
        case 0x1d3000u: goto label_1d3000;
        case 0x1d3004u: goto label_1d3004;
        case 0x1d3008u: goto label_1d3008;
        case 0x1d300cu: goto label_1d300c;
        case 0x1d3010u: goto label_1d3010;
        case 0x1d3014u: goto label_1d3014;
        case 0x1d3018u: goto label_1d3018;
        case 0x1d301cu: goto label_1d301c;
        case 0x1d3020u: goto label_1d3020;
        case 0x1d3024u: goto label_1d3024;
        case 0x1d3028u: goto label_1d3028;
        case 0x1d302cu: goto label_1d302c;
        case 0x1d3030u: goto label_1d3030;
        case 0x1d3034u: goto label_1d3034;
        case 0x1d3038u: goto label_1d3038;
        case 0x1d303cu: goto label_1d303c;
        case 0x1d3040u: goto label_1d3040;
        case 0x1d3044u: goto label_1d3044;
        default: break;
    }

    ctx->pc = 0x1d2d78u;

label_1d2d78:
    // 0x1d2d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d2d7c:
    // 0x1d2d7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d2d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d2d80:
    // 0x1d2d80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d2d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1d2d84:
    // 0x1d2d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d88:
    // 0x1d2d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d2d8c:
    // 0x1d2d8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d2d8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d90:
    // 0x1d2d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d2d94:
    // 0x1d2d94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d2d98:
    // 0x1d2d98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d2d9c:
    // 0x1d2d9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1d2da0:
    // 0x1d2da0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1d2da4:
    // 0x1d2da4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1d2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1d2da8:
    // 0x1d2da8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1d2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1d2dac:
    // 0x1d2dac: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d2dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1d2db0:
    // 0x1d2db0: 0x96430074  lhu         $v1, 0x74($s2)
    ctx->pc = 0x1d2db0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2db4:
    // 0x1d2db4: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d2db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d2db8:
    // 0x1d2db8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2dbc:
    // 0x1d2dbc: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1d2dc0:
    if (ctx->pc == 0x1D2DC0u) {
        ctx->pc = 0x1D2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DBCu;
        // 0x1d2dc0: 0xa6430076  sh          $v1, 0x76($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2DC4u;
        goto label_1d2dc4;
    }
    ctx->pc = 0x1D2DBCu;
    {
        const bool branch_taken_0x1d2dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DBCu;
        // 0x1d2dc0: 0xa6430076  sh          $v1, 0x76($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dbc) {
            ctx->pc = 0x1D2F00u;
            goto label_1d2f00;
        }
    }
    ctx->pc = 0x1D2DC4u;
label_1d2dc4:
    // 0x1d2dc4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d2dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d2dc8:
    // 0x1d2dc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d2dcc:
    // 0x1d2dcc: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x1d2dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2dd0:
    // 0x1d2dd0: 0x245e8e90  addiu       $fp, $v0, -0x7170
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
label_1d2dd4:
    // 0x1d2dd4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d2dd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2dd8:
    // 0x1d2dd8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1d2dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2ddc:
    // 0x1d2ddc: 0x0  nop
    ctx->pc = 0x1d2ddcu;
    // NOP
label_1d2de0:
    // 0x1d2de0: 0x45000085  bc1f        . + 4 + (0x85 << 2)
label_1d2de4:
    if (ctx->pc == 0x1D2DE4u) {
        ctx->pc = 0x1D2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DE0u;
        // 0x1d2de4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2DE8u;
        goto label_1d2de8;
    }
    ctx->pc = 0x1D2DE0u;
    {
        const bool branch_taken_0x1d2de0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DE0u;
        // 0x1d2de4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2de0) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2DE8u;
label_1d2de8:
    // 0x1d2de8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1d2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d2dec:
    // 0x1d2dec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1d2decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1d2df0:
    // 0x1d2df0: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
label_1d2df4:
    if (ctx->pc == 0x1D2DF4u) {
        ctx->pc = 0x1D2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DF0u;
        // 0x1d2df4: 0xa6420074  sh          $v0, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2DF8u;
        goto label_1d2df8;
    }
    ctx->pc = 0x1D2DF0u;
    {
        const bool branch_taken_0x1d2df0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1D2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DF0u;
        // 0x1d2df4: 0xa6420074  sh          $v0, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2df0) {
            ctx->pc = 0x1D2E38u;
            goto label_1d2e38;
        }
    }
    ctx->pc = 0x1D2DF8u;
label_1d2df8:
    // 0x1d2df8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1d2dfc:
    // 0x1d2dfc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1d2dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1d2e00:
    // 0x1d2e00: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d2e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d2e04:
    // 0x1d2e04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1d2e08:
    if (ctx->pc == 0x1D2E08u) {
        ctx->pc = 0x1D2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E04u;
        // 0x1d2e08: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E0Cu;
        goto label_1d2e0c;
    }
    ctx->pc = 0x1D2E04u;
    {
        const bool branch_taken_0x1d2e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e04) {
            ctx->pc = 0x1D2E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2E04u;
            // 0x1d2e08: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2E18u;
            goto label_1d2e18;
        }
    }
    ctx->pc = 0x1D2E0Cu;
label_1d2e0c:
    // 0x1d2e0c: 0xa6550074  sh          $s5, 0x74($s2)
    ctx->pc = 0x1d2e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 21));
label_1d2e10:
    // 0x1d2e10: 0x10000079  b           . + 4 + (0x79 << 2)
label_1d2e14:
    if (ctx->pc == 0x1D2E14u) {
        ctx->pc = 0x1D2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E10u;
        // 0x1d2e14: 0xe6540078  swc1        $f20, 0x78($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E18u;
        goto label_1d2e18;
    }
    ctx->pc = 0x1D2E10u;
    {
        const bool branch_taken_0x1d2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E10u;
        // 0x1d2e14: 0xe6540078  swc1        $f20, 0x78($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e10) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2E18u;
label_1d2e18:
    // 0x1d2e18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2e1c:
    // 0x1d2e1c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1d2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_1d2e20:
    // 0x1d2e20: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d2e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d2e24:
    // 0x1d2e24: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
label_1d2e28:
    if (ctx->pc == 0x1D2E28u) {
        ctx->pc = 0x1D2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E24u;
        // 0x1d2e28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E2Cu;
        goto label_1d2e2c;
    }
    ctx->pc = 0x1D2E24u;
    {
        const bool branch_taken_0x1d2e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1d2e24) {
            ctx->pc = 0x1D2E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2E24u;
            // 0x1d2e28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2E2Cu;
            goto label_1d2e2c;
        }
    }
    ctx->pc = 0x1D2E2Cu;
label_1d2e2c:
    // 0x1d2e2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d2e30:
    // 0x1d2e30: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2e34:
    // 0x1d2e34: 0xa6420074  sh          $v0, 0x74($s2)
    ctx->pc = 0x1d2e34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
label_1d2e38:
    // 0x1d2e38: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2e3c:
    // 0x1d2e3c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1d2e40:
    // 0x1d2e40: 0x86510074  lh          $s1, 0x74($s2)
    ctx->pc = 0x1d2e40u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2e44:
    // 0x1d2e44: 0x2454f290  addiu       $s4, $v0, -0xD70
    ctx->pc = 0x1d2e44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
label_1d2e48:
    // 0x1d2e48: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2e4c:
    // 0x1d2e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e50:
    // 0x1d2e50: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d2e54:
    // 0x1d2e54: 0x101f42  srl         $v1, $s0, 29
    ctx->pc = 0x1d2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d2e58:
    // 0x1d2e58: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2e5c:
    // 0x1d2e5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d2e60:
    // 0x1d2e60: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2e64:
    // 0x1d2e64: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1d2e68:
    // 0x1d2e68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2e6c:
    // 0x1d2e6c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d2e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2e70:
    // 0x1d2e70: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d2e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d2e74:
    // 0x1d2e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e78:
    // 0x1d2e78: 0xe0f809  jalr        $a3
label_1d2e7c:
    if (ctx->pc == 0x1D2E7Cu) {
        ctx->pc = 0x1D2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E78u;
        // 0x1d2e7c: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E80u;
        goto label_1d2e80;
    }
    ctx->pc = 0x1D2E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2E80u);
        ctx->pc = 0x1D2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E78u;
        // 0x1d2e7c: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E78u, 0x1D2E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2E80u;
label_1d2e80:
    // 0x1d2e80: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2e80u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2e84:
    // 0x1d2e84: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d2e88:
    if (ctx->pc == 0x1D2E88u) {
        ctx->pc = 0x1D2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E84u;
        // 0x1d2e88: 0xc6810020  lwc1        $f1, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E8Cu;
        goto label_1d2e8c;
    }
    ctx->pc = 0x1D2E84u;
    {
        const bool branch_taken_0x1d2e84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e84) {
            ctx->pc = 0x1D2E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2E84u;
            // 0x1d2e88: 0xc6810020  lwc1        $f1, 0x20($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2E98u;
            goto label_1d2e98;
        }
    }
    ctx->pc = 0x1D2E8Cu;
label_1d2e8c:
    // 0x1d2e8c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2e90:
    // 0x1d2e90: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d2e94:
    // 0x1d2e94: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1d2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2e98:
    // 0x1d2e98: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x1d2e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2e9c:
    // 0x1d2e9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d2e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d2ea0:
    // 0x1d2ea0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1d2ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2ea4:
    // 0x1d2ea4: 0x0  nop
    ctx->pc = 0x1d2ea4u;
    // NOP
label_1d2ea8:
    // 0x1d2ea8: 0x45000053  bc1f        . + 4 + (0x53 << 2)
label_1d2eac:
    if (ctx->pc == 0x1D2EACu) {
        ctx->pc = 0x1D2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA8u;
        // 0x1d2eac: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EB0u;
        goto label_1d2eb0;
    }
    ctx->pc = 0x1D2EA8u;
    {
        const bool branch_taken_0x1d2ea8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA8u;
        // 0x1d2eac: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ea8) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2EB0u;
label_1d2eb0:
    // 0x1d2eb0: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x1d2eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2eb4:
    // 0x1d2eb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d2eb8:
    // 0x1d2eb8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1d2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1d2ebc:
    // 0x1d2ebc: 0x1c60ffde  bgtz        $v1, . + 4 + (-0x22 << 2)
label_1d2ec0:
    if (ctx->pc == 0x1D2EC0u) {
        ctx->pc = 0x1D2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EBCu;
        // 0x1d2ec0: 0xa6420074  sh          $v0, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EC4u;
        goto label_1d2ec4;
    }
    ctx->pc = 0x1D2EBCu;
    {
        const bool branch_taken_0x1d2ebc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1D2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EBCu;
        // 0x1d2ec0: 0xa6420074  sh          $v0, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ebc) {
            ctx->pc = 0x1D2E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2e38;
        }
    }
    ctx->pc = 0x1D2EC4u;
label_1d2ec4:
    // 0x1d2ec4: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1d2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1d2ec8:
    // 0x1d2ec8: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1d2ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1d2ecc:
    // 0x1d2ecc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d2eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d2ed0:
    // 0x1d2ed0: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
label_1d2ed4:
    if (ctx->pc == 0x1D2ED4u) {
        ctx->pc = 0x1D2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED0u;
        // 0x1d2ed4: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ED8u;
        goto label_1d2ed8;
    }
    ctx->pc = 0x1D2ED0u;
    {
        const bool branch_taken_0x1d2ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ed0) {
            ctx->pc = 0x1D2ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2ED0u;
            // 0x1d2ed4: 0x8e430094  lw          $v1, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2e18;
        }
    }
    ctx->pc = 0x1D2ED8u;
label_1d2ed8:
    // 0x1d2ed8: 0xa6570074  sh          $s7, 0x74($s2)
    ctx->pc = 0x1d2ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 23));
label_1d2edc:
    // 0x1d2edc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d2edcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ee0:
    // 0x1d2ee0: 0x10000045  b           . + 4 + (0x45 << 2)
label_1d2ee4:
    if (ctx->pc == 0x1D2EE4u) {
        ctx->pc = 0x1D2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EE0u;
        // 0x1d2ee4: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EE8u;
        goto label_1d2ee8;
    }
    ctx->pc = 0x1D2EE0u;
    {
        const bool branch_taken_0x1d2ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EE0u;
        // 0x1d2ee4: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ee0) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2EE8u;
label_1d2ee8:
    // 0x1d2ee8: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x1d2ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2eec:
    // 0x1d2eec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d2eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ef0:
    // 0x1d2ef0: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x1d2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_1d2ef4:
    // 0x1d2ef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d2ef8:
    // 0x1d2ef8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1d2efc:
    if (ctx->pc == 0x1D2EFCu) {
        ctx->pc = 0x1D2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EF8u;
        // 0x1d2efc: 0xa6420074  sh          $v0, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F00u;
        goto label_1d2f00;
    }
    ctx->pc = 0x1D2EF8u;
    {
        const bool branch_taken_0x1d2ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EF8u;
        // 0x1d2efc: 0xa6420074  sh          $v0, 0x74($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ef8) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2F00u;
label_1d2f00:
    // 0x1d2f00: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x1d2f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2f04:
    // 0x1d2f04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d2f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2f08:
    // 0x1d2f08: 0x0  nop
    ctx->pc = 0x1d2f08u;
    // NOP
label_1d2f0c:
    // 0x1d2f0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d2f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2f10:
    // 0x1d2f10: 0x0  nop
    ctx->pc = 0x1d2f10u;
    // NOP
label_1d2f14:
    // 0x1d2f14: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_1d2f18:
    if (ctx->pc == 0x1D2F18u) {
        ctx->pc = 0x1D2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F14u;
        // 0x1d2f18: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F1Cu;
        goto label_1d2f1c;
    }
    ctx->pc = 0x1D2F14u;
    {
        const bool branch_taken_0x1d2f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F14u;
        // 0x1d2f18: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f14) {
            ctx->pc = 0x1D2FF8u;
            goto label_1d2ff8;
        }
    }
    ctx->pc = 0x1D2F1Cu;
label_1d2f1c:
    // 0x1d2f1c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2f20:
    // 0x1d2f20: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2f24:
    // 0x1d2f24: 0x3c150049  lui         $s5, 0x49
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
label_1d2f28:
    // 0x1d2f28: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x1d2f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2f2c:
    // 0x1d2f2c: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1d2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2f30:
    // 0x1d2f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d2f34:
    // 0x1d2f34: 0xa6420074  sh          $v0, 0x74($s2)
    ctx->pc = 0x1d2f34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
label_1d2f38:
    // 0x1d2f38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1d2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1d2f3c:
    // 0x1d2f3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2f40:
    // 0x1d2f40: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1d2f40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1d2f44:
    // 0x1d2f44: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
label_1d2f48:
    // 0x1d2f48: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1d2f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1d2f4c:
    // 0x1d2f4c: 0x107e0002  beq         $v1, $fp, . + 4 + (0x2 << 2)
label_1d2f50:
    if (ctx->pc == 0x1D2F50u) {
        ctx->pc = 0x1D2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F4Cu;
        // 0x1d2f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F54u;
        goto label_1d2f54;
    }
    ctx->pc = 0x1D2F4Cu;
    {
        const bool branch_taken_0x1d2f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x1D2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F4Cu;
        // 0x1d2f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f4c) {
            ctx->pc = 0x1D2F58u;
            goto label_1d2f58;
        }
    }
    ctx->pc = 0x1D2F54u;
label_1d2f54:
    // 0x1d2f54: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d2f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f58:
    // 0x1d2f58: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d2f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d2f5c:
    // 0x1d2f5c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1d2f60:
    if (ctx->pc == 0x1D2F60u) {
        ctx->pc = 0x1D2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F5Cu;
        // 0x1d2f60: 0x8e530094  lw          $s3, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F64u;
        goto label_1d2f64;
    }
    ctx->pc = 0x1D2F5Cu;
    {
        const bool branch_taken_0x1d2f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f5c) {
            ctx->pc = 0x1D2F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2F5Cu;
            // 0x1d2f60: 0x8e530094  lw          $s3, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F80u;
            goto label_1d2f80;
        }
    }
    ctx->pc = 0x1D2F64u;
label_1d2f64:
    // 0x1d2f64: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1d2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1d2f68:
    // 0x1d2f68: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1d2f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1d2f6c:
    // 0x1d2f6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d2f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d2f70:
    // 0x1d2f70: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_1d2f74:
    if (ctx->pc == 0x1D2F74u) {
        ctx->pc = 0x1D2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F70u;
        // 0x1d2f74: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F78u;
        goto label_1d2f78;
    }
    ctx->pc = 0x1D2F70u;
    {
        const bool branch_taken_0x1d2f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F70u;
        // 0x1d2f74: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f70) {
            ctx->pc = 0x1D2EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2ee8;
        }
    }
    ctx->pc = 0x1D2F78u;
label_1d2f78:
    // 0x1d2f78: 0xa6570074  sh          $s7, 0x74($s2)
    ctx->pc = 0x1d2f78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 23));
label_1d2f7c:
    // 0x1d2f7c: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d2f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d2f80:
    // 0x1d2f80: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d2f84:
    // 0x1d2f84: 0x86510074  lh          $s1, 0x74($s2)
    ctx->pc = 0x1d2f84u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2f88:
    // 0x1d2f88: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x1d2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
label_1d2f8c:
    // 0x1d2f8c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d2f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2f90:
    // 0x1d2f90: 0x26b4f290  addiu       $s4, $s5, -0xD70
    ctx->pc = 0x1d2f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963856));
label_1d2f94:
    // 0x1d2f94: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d2f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d2f98:
    // 0x1d2f98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f9c:
    // 0x1d2f9c: 0x101f42  srl         $v1, $s0, 29
    ctx->pc = 0x1d2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d2fa0:
    // 0x1d2fa0: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2fa4:
    // 0x1d2fa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d2fa8:
    // 0x1d2fa8: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2fa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2fac:
    // 0x1d2fac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d2fb0:
    // 0x1d2fb0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2fb4:
    // 0x1d2fb4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d2fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2fb8:
    // 0x1d2fb8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d2fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d2fbc:
    // 0x1d2fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fc0:
    // 0x1d2fc0: 0xe0f809  jalr        $a3
label_1d2fc4:
    if (ctx->pc == 0x1D2FC4u) {
        ctx->pc = 0x1D2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FC0u;
        // 0x1d2fc4: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2FC8u;
        goto label_1d2fc8;
    }
    ctx->pc = 0x1D2FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2FC8u);
        ctx->pc = 0x1D2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FC0u;
        // 0x1d2fc4: 0x222280a  movz        $a1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2FC0u, 0x1D2FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2FC8u;
label_1d2fc8:
    // 0x1d2fc8: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2fc8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2fcc:
    // 0x1d2fcc: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d2fd0:
    if (ctx->pc == 0x1D2FD0u) {
        ctx->pc = 0x1D2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FCCu;
        // 0x1d2fd0: 0xc6810020  lwc1        $f1, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2FD4u;
        goto label_1d2fd4;
    }
    ctx->pc = 0x1D2FCCu;
    {
        const bool branch_taken_0x1d2fcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2fcc) {
            ctx->pc = 0x1D2FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2FCCu;
            // 0x1d2fd0: 0xc6810020  lwc1        $f1, 0x20($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2FE0u;
            goto label_1d2fe0;
        }
    }
    ctx->pc = 0x1D2FD4u;
label_1d2fd4:
    // 0x1d2fd4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2fd8:
    // 0x1d2fd8: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d2fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d2fdc:
    // 0x1d2fdc: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1d2fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2fe0:
    // 0x1d2fe0: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x1d2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2fe4:
    // 0x1d2fe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d2fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d2fe8:
    // 0x1d2fe8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1d2fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d2fec:
    // 0x1d2fec: 0x0  nop
    ctx->pc = 0x1d2fecu;
    // NOP
label_1d2ff0:
    // 0x1d2ff0: 0x4501ffcd  bc1t        . + 4 + (-0x33 << 2)
label_1d2ff4:
    if (ctx->pc == 0x1D2FF4u) {
        ctx->pc = 0x1D2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FF0u;
        // 0x1d2ff4: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2FF8u;
        goto label_1d2ff8;
    }
    ctx->pc = 0x1D2FF0u;
    {
        const bool branch_taken_0x1d2ff0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FF0u;
        // 0x1d2ff4: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ff0) {
            ctx->pc = 0x1D2F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2f28;
        }
    }
    ctx->pc = 0x1D2FF8u;
label_1d2ff8:
    // 0x1d2ff8: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x1d2ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d2ffc:
    // 0x1d2ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d3000:
    // 0x1d3000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d3004:
    // 0x1d3004: 0xc074c12  jal         func_1D3048
label_1d3008:
    if (ctx->pc == 0x1D3008u) {
        ctx->pc = 0x1D3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3004u;
        // 0x1d3008: 0xa6420076  sh          $v0, 0x76($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D300Cu;
        goto label_1d300c;
    }
    ctx->pc = 0x1D3004u;
    SET_GPR_U32(ctx, 31, 0x1D300Cu);
    ctx->pc = 0x1D3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3004u;
    // 0x1d3008: 0xa6420076  sh          $v0, 0x76($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 118), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3048u, 0x1D3004u, 0x1D300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D300Cu;
label_1d300c:
    // 0x1d300c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d300cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d3010:
    // 0x1d3010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3014:
    // 0x1d3014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d3018:
    // 0x1d3018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d301c:
    // 0x1d301c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d301cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d3020:
    // 0x1d3020: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d3020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3024:
    // 0x1d3024: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d3024u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d3028:
    // 0x1d3028: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d3028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d302c:
    // 0x1d302c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d302cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d3030:
    // 0x1d3030: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d3030u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3034:
    // 0x1d3034: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d3034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d3038:
    // 0x1d3038: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d303c:
    // 0x1d303c: 0x3e00008  jr          $ra
label_1d3040:
    if (ctx->pc == 0x1D3040u) {
        ctx->pc = 0x1D3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D303Cu;
        // 0x1d3040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3044u;
        goto label_1d3044;
    }
    ctx->pc = 0x1D303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D303Cu;
        // 0x1d3040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3044u;
label_1d3044:
    // 0x1d3044: 0x0  nop
    ctx->pc = 0x1d3044u;
    // NOP
    ctx->pc = 0x1d3048u;
}
