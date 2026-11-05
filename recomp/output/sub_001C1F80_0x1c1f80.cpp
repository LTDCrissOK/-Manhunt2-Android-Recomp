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

// Function: sub_001C1F80
// Address: 0x1c1f80 - 0x1c2250
void sub_001C1F80_0x1c1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1F80_0x1c1f80");
#endif

    switch (ctx->pc) {
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f88u: goto label_1c1f88;
        case 0x1c1f8cu: goto label_1c1f8c;
        case 0x1c1f90u: goto label_1c1f90;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fa0u: goto label_1c1fa0;
        case 0x1c1fa4u: goto label_1c1fa4;
        case 0x1c1fa8u: goto label_1c1fa8;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fb4u: goto label_1c1fb4;
        case 0x1c1fb8u: goto label_1c1fb8;
        case 0x1c1fbcu: goto label_1c1fbc;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c1fc4u: goto label_1c1fc4;
        case 0x1c1fc8u: goto label_1c1fc8;
        case 0x1c1fccu: goto label_1c1fcc;
        case 0x1c1fd0u: goto label_1c1fd0;
        case 0x1c1fd4u: goto label_1c1fd4;
        case 0x1c1fd8u: goto label_1c1fd8;
        case 0x1c1fdcu: goto label_1c1fdc;
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1fe4u: goto label_1c1fe4;
        case 0x1c1fe8u: goto label_1c1fe8;
        case 0x1c1fecu: goto label_1c1fec;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ff4u: goto label_1c1ff4;
        case 0x1c1ff8u: goto label_1c1ff8;
        case 0x1c1ffcu: goto label_1c1ffc;
        case 0x1c2000u: goto label_1c2000;
        case 0x1c2004u: goto label_1c2004;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c200cu: goto label_1c200c;
        case 0x1c2010u: goto label_1c2010;
        case 0x1c2014u: goto label_1c2014;
        case 0x1c2018u: goto label_1c2018;
        case 0x1c201cu: goto label_1c201c;
        case 0x1c2020u: goto label_1c2020;
        case 0x1c2024u: goto label_1c2024;
        case 0x1c2028u: goto label_1c2028;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2030u: goto label_1c2030;
        case 0x1c2034u: goto label_1c2034;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c203cu: goto label_1c203c;
        case 0x1c2040u: goto label_1c2040;
        case 0x1c2044u: goto label_1c2044;
        case 0x1c2048u: goto label_1c2048;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2050u: goto label_1c2050;
        case 0x1c2054u: goto label_1c2054;
        case 0x1c2058u: goto label_1c2058;
        case 0x1c205cu: goto label_1c205c;
        case 0x1c2060u: goto label_1c2060;
        case 0x1c2064u: goto label_1c2064;
        case 0x1c2068u: goto label_1c2068;
        case 0x1c206cu: goto label_1c206c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2074u: goto label_1c2074;
        case 0x1c2078u: goto label_1c2078;
        case 0x1c207cu: goto label_1c207c;
        case 0x1c2080u: goto label_1c2080;
        case 0x1c2084u: goto label_1c2084;
        case 0x1c2088u: goto label_1c2088;
        case 0x1c208cu: goto label_1c208c;
        case 0x1c2090u: goto label_1c2090;
        case 0x1c2094u: goto label_1c2094;
        case 0x1c2098u: goto label_1c2098;
        case 0x1c209cu: goto label_1c209c;
        case 0x1c20a0u: goto label_1c20a0;
        case 0x1c20a4u: goto label_1c20a4;
        case 0x1c20a8u: goto label_1c20a8;
        case 0x1c20acu: goto label_1c20ac;
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20b4u: goto label_1c20b4;
        case 0x1c20b8u: goto label_1c20b8;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20c0u: goto label_1c20c0;
        case 0x1c20c4u: goto label_1c20c4;
        case 0x1c20c8u: goto label_1c20c8;
        case 0x1c20ccu: goto label_1c20cc;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20d4u: goto label_1c20d4;
        case 0x1c20d8u: goto label_1c20d8;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e0u: goto label_1c20e0;
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c20e8u: goto label_1c20e8;
        case 0x1c20ecu: goto label_1c20ec;
        case 0x1c20f0u: goto label_1c20f0;
        case 0x1c20f4u: goto label_1c20f4;
        case 0x1c20f8u: goto label_1c20f8;
        case 0x1c20fcu: goto label_1c20fc;
        case 0x1c2100u: goto label_1c2100;
        case 0x1c2104u: goto label_1c2104;
        case 0x1c2108u: goto label_1c2108;
        case 0x1c210cu: goto label_1c210c;
        case 0x1c2110u: goto label_1c2110;
        case 0x1c2114u: goto label_1c2114;
        case 0x1c2118u: goto label_1c2118;
        case 0x1c211cu: goto label_1c211c;
        case 0x1c2120u: goto label_1c2120;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c212cu: goto label_1c212c;
        case 0x1c2130u: goto label_1c2130;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2138u: goto label_1c2138;
        case 0x1c213cu: goto label_1c213c;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2144u: goto label_1c2144;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2158u: goto label_1c2158;
        case 0x1c215cu: goto label_1c215c;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2174u: goto label_1c2174;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c217cu: goto label_1c217c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2184u: goto label_1c2184;
        case 0x1c2188u: goto label_1c2188;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2190u: goto label_1c2190;
        case 0x1c2194u: goto label_1c2194;
        case 0x1c2198u: goto label_1c2198;
        case 0x1c219cu: goto label_1c219c;
        case 0x1c21a0u: goto label_1c21a0;
        case 0x1c21a4u: goto label_1c21a4;
        case 0x1c21a8u: goto label_1c21a8;
        case 0x1c21acu: goto label_1c21ac;
        case 0x1c21b0u: goto label_1c21b0;
        case 0x1c21b4u: goto label_1c21b4;
        case 0x1c21b8u: goto label_1c21b8;
        case 0x1c21bcu: goto label_1c21bc;
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c21c4u: goto label_1c21c4;
        case 0x1c21c8u: goto label_1c21c8;
        case 0x1c21ccu: goto label_1c21cc;
        case 0x1c21d0u: goto label_1c21d0;
        case 0x1c21d4u: goto label_1c21d4;
        case 0x1c21d8u: goto label_1c21d8;
        case 0x1c21dcu: goto label_1c21dc;
        case 0x1c21e0u: goto label_1c21e0;
        case 0x1c21e4u: goto label_1c21e4;
        case 0x1c21e8u: goto label_1c21e8;
        case 0x1c21ecu: goto label_1c21ec;
        case 0x1c21f0u: goto label_1c21f0;
        case 0x1c21f4u: goto label_1c21f4;
        case 0x1c21f8u: goto label_1c21f8;
        case 0x1c21fcu: goto label_1c21fc;
        case 0x1c2200u: goto label_1c2200;
        case 0x1c2204u: goto label_1c2204;
        case 0x1c2208u: goto label_1c2208;
        case 0x1c220cu: goto label_1c220c;
        case 0x1c2210u: goto label_1c2210;
        case 0x1c2214u: goto label_1c2214;
        case 0x1c2218u: goto label_1c2218;
        case 0x1c221cu: goto label_1c221c;
        case 0x1c2220u: goto label_1c2220;
        case 0x1c2224u: goto label_1c2224;
        case 0x1c2228u: goto label_1c2228;
        case 0x1c222cu: goto label_1c222c;
        case 0x1c2230u: goto label_1c2230;
        case 0x1c2234u: goto label_1c2234;
        case 0x1c2238u: goto label_1c2238;
        case 0x1c223cu: goto label_1c223c;
        case 0x1c2240u: goto label_1c2240;
        case 0x1c2244u: goto label_1c2244;
        case 0x1c2248u: goto label_1c2248;
        case 0x1c224cu: goto label_1c224c;
        default: break;
    }

    ctx->pc = 0x1c1f80u;

label_1c1f80:
    // 0x1c1f80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1c1f84:
    // 0x1c1f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c1f88:
    // 0x1c1f88: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1c1f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_1c1f8c:
    // 0x1c1f8c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1c1f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_1c1f90:
    // 0x1c1f90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f94:
    // 0x1c1f94: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1c1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_1c1f98:
    // 0x1c1f98: 0x26510310  addiu       $s1, $s2, 0x310
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_1c1f9c:
    // 0x1c1f9c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1c1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1c1fa0:
    // 0x1c1fa0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c1fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fa4:
    // 0x1c1fa4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1c1fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_1c1fa8:
    // 0x1c1fa8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1c1fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c1fac:
    // 0x1c1fac: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1c1facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_1c1fb0:
    // 0x1c1fb0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c1fb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fb4:
    // 0x1c1fb4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1c1fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_1c1fb8:
    // 0x1c1fb8: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1c1fb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c1fbc:
    // 0x1c1fbc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1c1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_1c1fc0:
    // 0x1c1fc0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c1fc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1c1fc4:
    // 0x1c1fc4: 0xae4204b0  sw          $v0, 0x4B0($s2)
    ctx->pc = 0x1c1fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1200), GPR_U32(ctx, 2));
label_1c1fc8:
    // 0x1c1fc8: 0xae4004d0  sw          $zero, 0x4D0($s2)
    ctx->pc = 0x1c1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 0));
label_1c1fcc:
    // 0x1c1fcc: 0xae400338  sw          $zero, 0x338($s2)
    ctx->pc = 0x1c1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 0));
label_1c1fd0:
    // 0x1c1fd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c1fd4:
    // 0x1c1fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c1fd8:
    if (ctx->pc == 0x1C1FD8u) {
        ctx->pc = 0x1C1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD4u;
        // 0x1c1fd8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FDCu;
        goto label_1c1fdc;
    }
    ctx->pc = 0x1C1FD4u;
    {
        const bool branch_taken_0x1c1fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD4u;
        // 0x1c1fd8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fd4) {
            ctx->pc = 0x1C1FF8u;
            goto label_1c1ff8;
        }
    }
    ctx->pc = 0x1C1FDCu;
label_1c1fdc:
    // 0x1c1fdc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c1fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c1fe0:
    // 0x1c1fe0: 0xc0f61e8  jal         func_3D87A0
label_1c1fe4:
    if (ctx->pc == 0x1C1FE4u) {
        ctx->pc = 0x1C1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FE0u;
        // 0x1c1fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FE8u;
        goto label_1c1fe8;
    }
    ctx->pc = 0x1C1FE0u;
    SET_GPR_U32(ctx, 31, 0x1C1FE8u);
    ctx->pc = 0x1C1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE0u;
    // 0x1c1fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1C1FE0u, 0x1C1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FE8u;
label_1c1fe8:
    // 0x1c1fe8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c1fec:
    // 0x1c1fec: 0x0  nop
    ctx->pc = 0x1c1fecu;
    // NOP
label_1c1ff0:
    // 0x1c1ff0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1c1ff4:
    if (ctx->pc == 0x1C1FF4u) {
        ctx->pc = 0x1C1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF0u;
        // 0x1c1ff4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FF8u;
        goto label_1c1ff8;
    }
    ctx->pc = 0x1C1FF0u;
    {
        const bool branch_taken_0x1c1ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ff0) {
            ctx->pc = 0x1C1FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1FF0u;
            // 0x1c1ff4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1fe0;
        }
    }
    ctx->pc = 0x1C1FF8u;
label_1c1ff8:
    // 0x1c1ff8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1c1ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_1c1ffc:
    // 0x1c1ffc: 0x265001e0  addiu       $s0, $s2, 0x1E0
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1c2000:
    // 0x1c2000: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c2000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c2004:
    // 0x1c2004: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c2004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c2008:
    // 0x1c2008: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c2008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1c200c:
    // 0x1c200c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c200cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1c2010:
    // 0x1c2010: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c2010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c2014:
    // 0x1c2014: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c2014u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2018:
    // 0x1c2018: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c201c:
    // 0x1c201c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2020:
    // 0x1c2020: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c2020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2024:
    // 0x1c2024: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c2024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2028:
    // 0x1c2028: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c202c:
    // 0x1c202c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x1c202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2030:
    // 0x1c2030: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c2030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c2034:
    // 0x1c2034: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c2034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c2038:
    // 0x1c2038: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c2038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c203c:
    // 0x1c203c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1c203cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c2040:
    // 0x1c2040: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2044:
    // 0x1c2044: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c2044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c2048:
    // 0x1c2048: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c2048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c204c:
    // 0x1c204c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c204cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c2050:
    // 0x1c2050: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c2050u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1c2054:
    // 0x1c2054: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c2054u;
    // VWAITQ (Q already resolved in this runtime)
label_1c2058:
    // 0x1c2058: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c2058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c205c:
    // 0x1c205c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2060:
    // 0x1c2060: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x1c2060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2064:
    // 0x1c2064: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1c2064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2068:
    // 0x1c2068: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1c2068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c206c:
    // 0x1c206c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x1c206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2070:
    // 0x1c2070: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c2070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1c2074:
    // 0x1c2074: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1c2074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c2078:
    // 0x1c2078: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c2078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c207c:
    // 0x1c207c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1c207cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1c2080:
    // 0x1c2080: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1c2080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c2084:
    // 0x1c2084: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c2084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c2088:
    // 0x1c2088: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c2088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c208c:
    // 0x1c208c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c208cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1c2090:
    // 0x1c2090: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c2090u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1c2094:
    // 0x1c2094: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c2094u;
    // VWAITQ (Q already resolved in this runtime)
label_1c2098:
    // 0x1c2098: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c2098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c209c:
    // 0x1c209c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c20a0:
    // 0x1c20a0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1c20a4:
    // 0x1c20a4: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1c20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_1c20a8:
    // 0x1c20a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c20a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c20ac:
    // 0x1c20ac: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c20acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c20b0:
    // 0x1c20b0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c20b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1c20b4:
    // 0x1c20b4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c20b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c20b8:
    // 0x1c20b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c20bc:
    // 0x1c20bc: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c20bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1c20c0:
    // 0x1c20c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c20c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c20c4:
    // 0x1c20c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c20c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c20c8:
    // 0x1c20c8: 0x0  nop
    ctx->pc = 0x1c20c8u;
    // NOP
label_1c20cc:
    // 0x1c20cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c20ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1c20d0:
    // 0x1c20d0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1c20d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c20d4:
    // 0x1c20d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c20d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c20d8:
    // 0x1c20d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c20d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c20dc:
    // 0x1c20dc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c20e0:
    // 0x1c20e0: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1c20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c20e4:
    // 0x1c20e4: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x1c20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c20e8:
    // 0x1c20e8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c20e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c20ec:
    // 0x1c20ec: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1c20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c20f0:
    // 0x1c20f0: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x1c20f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c20f4:
    // 0x1c20f4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c20f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1c20f8:
    // 0x1c20f8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1c20f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c20fc:
    // 0x1c20fc: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x1c20fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2100:
    // 0x1c2100: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x1c2100u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1c2104:
    // 0x1c2104: 0xc0f6a96  jal         func_3DAA58
label_1c2108:
    if (ctx->pc == 0x1C2108u) {
        ctx->pc = 0x1C2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2104u;
        // 0x1c2108: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C210Cu;
        goto label_1c210c;
    }
    ctx->pc = 0x1C2104u;
    SET_GPR_U32(ctx, 31, 0x1C210Cu);
    ctx->pc = 0x1C2108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2104u;
    // 0x1c2108: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2104u, 0x1C210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C210Cu;
label_1c210c:
    // 0x1c210c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c210cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1c2110:
    // 0x1c2110: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c2110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c2114:
    // 0x1c2114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c2118:
    // 0x1c2118: 0x0  nop
    ctx->pc = 0x1c2118u;
    // NOP
label_1c211c:
    // 0x1c211c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c211cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2120:
    // 0x1c2120: 0x0  nop
    ctx->pc = 0x1c2120u;
    // NOP
label_1c2124:
    // 0x1c2124: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1c2128:
    if (ctx->pc == 0x1C2128u) {
        ctx->pc = 0x1C212Cu;
        goto label_1c212c;
    }
    ctx->pc = 0x1C2124u;
    {
        const bool branch_taken_0x1c2124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2124) {
            ctx->pc = 0x1C2164u;
            goto label_1c2164;
        }
    }
    ctx->pc = 0x1C212Cu;
label_1c212c:
    // 0x1c212c: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1c212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_1c2130:
    // 0x1c2130: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c2130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c2134:
    // 0x1c2134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c2138:
    // 0x1c2138: 0x0  nop
    ctx->pc = 0x1c2138u;
    // NOP
label_1c213c:
    // 0x1c213c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c213cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2140:
    // 0x1c2140: 0x0  nop
    ctx->pc = 0x1c2140u;
    // NOP
label_1c2144:
    // 0x1c2144: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c2148:
    if (ctx->pc == 0x1C2148u) {
        ctx->pc = 0x1C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2144u;
        // 0x1c2148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C214Cu;
        goto label_1c214c;
    }
    ctx->pc = 0x1C2144u;
    {
        const bool branch_taken_0x1c2144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2144u;
        // 0x1c2148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2144) {
            ctx->pc = 0x1C2164u;
            goto label_1c2164;
        }
    }
    ctx->pc = 0x1C214Cu;
label_1c214c:
    // 0x1c214c: 0x8e430394  lw          $v1, 0x394($s2)
    ctx->pc = 0x1c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
label_1c2150:
    // 0x1c2150: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c2150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1c2154:
    // 0x1c2154: 0x40f809  jalr        $v0
label_1c2158:
    if (ctx->pc == 0x1C2158u) {
        ctx->pc = 0x1C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2154u;
        // 0x1c2158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C215Cu;
        goto label_1c215c;
    }
    ctx->pc = 0x1C2154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C215Cu);
        ctx->pc = 0x1C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2154u;
        // 0x1c2158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2154u, 0x1C215Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C215Cu;
label_1c215c:
    // 0x1c215c: 0x10000031  b           . + 4 + (0x31 << 2)
label_1c2160:
    if (ctx->pc == 0x1C2160u) {
        ctx->pc = 0x1C2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C215Cu;
        // 0x1c2160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2164u;
        goto label_1c2164;
    }
    ctx->pc = 0x1C215Cu;
    {
        const bool branch_taken_0x1c215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C215Cu;
        // 0x1c2160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c215c) {
            ctx->pc = 0x1C2224u;
            goto label_1c2224;
        }
    }
    ctx->pc = 0x1C2164u;
label_1c2164:
    // 0x1c2164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c2168:
    // 0x1c2168: 0x0  nop
    ctx->pc = 0x1c2168u;
    // NOP
label_1c216c:
    // 0x1c216c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c216cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2170:
    // 0x1c2170: 0x0  nop
    ctx->pc = 0x1c2170u;
    // NOP
label_1c2174:
    // 0x1c2174: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1c2178:
    if (ctx->pc == 0x1C2178u) {
        ctx->pc = 0x1C217Cu;
        goto label_1c217c;
    }
    ctx->pc = 0x1C2174u;
    {
        const bool branch_taken_0x1c2174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2174) {
            ctx->pc = 0x1C2194u;
            goto label_1c2194;
        }
    }
    ctx->pc = 0x1C217Cu;
label_1c217c:
    // 0x1c217c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c217cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2180:
    // 0x1c2180: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1c2180u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2184:
    // 0x1c2184: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c2188:
    // 0x1c2188: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c218c:
    // 0x1c218c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c2190:
    if (ctx->pc == 0x1C2190u) {
        ctx->pc = 0x1C2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C218Cu;
        // 0x1c2190: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2194u;
        goto label_1c2194;
    }
    ctx->pc = 0x1C218Cu;
    {
        const bool branch_taken_0x1c218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C218Cu;
        // 0x1c2190: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c218c) {
            ctx->pc = 0x1C21A8u;
            goto label_1c21a8;
        }
    }
    ctx->pc = 0x1C2194u;
label_1c2194:
    // 0x1c2194: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c2194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2198:
    // 0x1c2198: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1c2198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c219c:
    // 0x1c219c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c219cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c21a0:
    // 0x1c21a0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c21a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c21a4:
    // 0x1c21a4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1c21a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c21a8:
    // 0x1c21a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c21ac:
    // 0x1c21ac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c21acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c21b0:
    // 0x1c21b0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c21b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c21b4:
    // 0x1c21b4: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1c21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c21b8:
    // 0x1c21b8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1c21b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c21bc:
    // 0x1c21bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c21bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c21c0:
    // 0x1c21c0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c21c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c21c4:
    // 0x1c21c4: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1c21c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1c21c8:
    // 0x1c21c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c21c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c21cc:
    // 0x1c21cc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c21ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c21d0:
    // 0x1c21d0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c21d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c21d4:
    // 0x1c21d4: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x1c21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_1c21d8:
    // 0x1c21d8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c21d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c21dc:
    // 0x1c21dc: 0xc0f7218  jal         func_3DC860
label_1c21e0:
    if (ctx->pc == 0x1C21E0u) {
        ctx->pc = 0x1C21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21DCu;
        // 0x1c21e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21E4u;
        goto label_1c21e4;
    }
    ctx->pc = 0x1C21DCu;
    SET_GPR_U32(ctx, 31, 0x1C21E4u);
    ctx->pc = 0x1C21E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21DCu;
    // 0x1c21e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C21DCu, 0x1C21E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21E4u;
label_1c21e4:
    // 0x1c21e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c21e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c21e8:
    // 0x1c21e8: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x1c21e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_1c21ec:
    // 0x1c21ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c21ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c21f0:
    // 0x1c21f0: 0xc0f7218  jal         func_3DC860
label_1c21f4:
    if (ctx->pc == 0x1C21F4u) {
        ctx->pc = 0x1C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F0u;
        // 0x1c21f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21F8u;
        goto label_1c21f8;
    }
    ctx->pc = 0x1C21F0u;
    SET_GPR_U32(ctx, 31, 0x1C21F8u);
    ctx->pc = 0x1C21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F0u;
    // 0x1c21f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C21F0u, 0x1C21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F8u;
label_1c21f8:
    // 0x1c21f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c21f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c21fc:
    // 0x1c21fc: 0x26440130  addiu       $a0, $s2, 0x130
    ctx->pc = 0x1c21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
label_1c2200:
    // 0x1c2200: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c2200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c2204:
    // 0x1c2204: 0xc0f7218  jal         func_3DC860
label_1c2208:
    if (ctx->pc == 0x1C2208u) {
        ctx->pc = 0x1C2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2204u;
        // 0x1c2208: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C220Cu;
        goto label_1c220c;
    }
    ctx->pc = 0x1C2204u;
    SET_GPR_U32(ctx, 31, 0x1C220Cu);
    ctx->pc = 0x1C2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2204u;
    // 0x1c2208: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C2204u, 0x1C220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C220Cu;
label_1c220c:
    // 0x1c220c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1c220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1c2210:
    // 0x1c2210: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c2210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1c2214:
    // 0x1c2214: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c2218:
    // 0x1c2218: 0xc070894  jal         func_1C2250
label_1c221c:
    if (ctx->pc == 0x1C221Cu) {
        ctx->pc = 0x1C221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2218u;
        // 0x1c221c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2220u;
        goto label_1c2220;
    }
    ctx->pc = 0x1C2218u;
    SET_GPR_U32(ctx, 31, 0x1C2220u);
    ctx->pc = 0x1C221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2218u;
    // 0x1c221c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2218u, 0x1C2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2220u;
label_1c2220:
    // 0x1c2220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2224:
    // 0x1c2224: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c2224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c2228:
    // 0x1c2228: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1c2228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1c222c:
    // 0x1c222c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1c222cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c2230:
    // 0x1c2230: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1c2230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1c2234:
    // 0x1c2234: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1c2234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1c2238:
    // 0x1c2238: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1c2238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1c223c:
    // 0x1c223c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1c223cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1c2240:
    // 0x1c2240: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1c2240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1c2244:
    // 0x1c2244: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c2244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c2248:
    // 0x1c2248: 0x3e00008  jr          $ra
label_1c224c:
    if (ctx->pc == 0x1C224Cu) {
        ctx->pc = 0x1C224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2248u;
        // 0x1c224c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2250u;
        goto label_fallthrough_0x1c2248;
    }
    ctx->pc = 0x1C2248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2248u;
        // 0x1c224c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2248:
    ctx->pc = 0x1C2250u;
}
