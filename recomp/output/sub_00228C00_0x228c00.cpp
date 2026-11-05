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

// Function: sub_00228C00
// Address: 0x228c00 - 0x22a608
void sub_00228C00_0x228c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228C00_0x228c00");
#endif

    switch (ctx->pc) {
        case 0x228c60u: goto label_228c60;
        case 0x228c8cu: goto label_228c8c;
        case 0x228cb4u: goto label_228cb4;
        case 0x228cf4u: goto label_228cf4;
        case 0x228cfcu: goto label_228cfc;
        case 0x228d34u: goto label_228d34;
        case 0x228d4cu: goto label_228d4c;
        case 0x228d84u: goto label_228d84;
        case 0x228da0u: goto label_228da0;
        case 0x228e08u: goto label_228e08;
        case 0x228e38u: goto label_228e38;
        case 0x228e50u: goto label_228e50;
        case 0x228e5cu: goto label_228e5c;
        case 0x228e6cu: goto label_228e6c;
        case 0x228e80u: goto label_228e80;
        case 0x228f1cu: goto label_228f1c;
        case 0x228f28u: goto label_228f28;
        case 0x228f38u: goto label_228f38;
        case 0x228f44u: goto label_228f44;
        case 0x228fb0u: goto label_228fb0;
        case 0x228fe0u: goto label_228fe0;
        case 0x228ff4u: goto label_228ff4;
        case 0x229074u: goto label_229074;
        case 0x2290e4u: goto label_2290e4;
        case 0x22911cu: goto label_22911c;
        case 0x229178u: goto label_229178;
        case 0x2291c0u: goto label_2291c0;
        case 0x2291c8u: goto label_2291c8;
        case 0x22925cu: goto label_22925c;
        case 0x229280u: goto label_229280;
        case 0x2292d8u: goto label_2292d8;
        case 0x2292ecu: goto label_2292ec;
        case 0x229348u: goto label_229348;
        case 0x229368u: goto label_229368;
        case 0x229388u: goto label_229388;
        case 0x22939cu: goto label_22939c;
        case 0x22941cu: goto label_22941c;
        case 0x22942cu: goto label_22942c;
        case 0x229438u: goto label_229438;
        case 0x22946cu: goto label_22946c;
        case 0x22947cu: goto label_22947c;
        case 0x229488u: goto label_229488;
        case 0x229494u: goto label_229494;
        case 0x2294d0u: goto label_2294d0;
        case 0x2294e0u: goto label_2294e0;
        case 0x22951cu: goto label_22951c;
        case 0x229538u: goto label_229538;
        case 0x22959cu: goto label_22959c;
        case 0x2295c4u: goto label_2295c4;
        case 0x2295d0u: goto label_2295d0;
        case 0x2295e8u: goto label_2295e8;
        case 0x2295f4u: goto label_2295f4;
        case 0x2295fcu: goto label_2295fc;
        case 0x229614u: goto label_229614;
        case 0x229624u: goto label_229624;
        case 0x229630u: goto label_229630;
        case 0x229640u: goto label_229640;
        case 0x229668u: goto label_229668;
        case 0x229678u: goto label_229678;
        case 0x229684u: goto label_229684;
        case 0x229690u: goto label_229690;
        case 0x2296a8u: goto label_2296a8;
        case 0x2296b8u: goto label_2296b8;
        case 0x2296c4u: goto label_2296c4;
        case 0x2296fcu: goto label_2296fc;
        case 0x229708u: goto label_229708;
        case 0x229788u: goto label_229788;
        case 0x2297ccu: goto label_2297cc;
        case 0x2297ecu: goto label_2297ec;
        case 0x229810u: goto label_229810;
        case 0x229844u: goto label_229844;
        case 0x229874u: goto label_229874;
        case 0x229890u: goto label_229890;
        case 0x2298ccu: goto label_2298cc;
        case 0x2298dcu: goto label_2298dc;
        case 0x2298e8u: goto label_2298e8;
        case 0x229930u: goto label_229930;
        case 0x229958u: goto label_229958;
        case 0x229964u: goto label_229964;
        case 0x229974u: goto label_229974;
        case 0x229990u: goto label_229990;
        case 0x2299a0u: goto label_2299a0;
        case 0x2299ccu: goto label_2299cc;
        case 0x2299e0u: goto label_2299e0;
        case 0x2299f0u: goto label_2299f0;
        case 0x229a00u: goto label_229a00;
        case 0x229a10u: goto label_229a10;
        case 0x229a1cu: goto label_229a1c;
        case 0x229a28u: goto label_229a28;
        case 0x229a40u: goto label_229a40;
        case 0x229a8cu: goto label_229a8c;
        case 0x229a9cu: goto label_229a9c;
        case 0x229aacu: goto label_229aac;
        case 0x229abcu: goto label_229abc;
        case 0x229ad8u: goto label_229ad8;
        case 0x229aecu: goto label_229aec;
        case 0x229afcu: goto label_229afc;
        case 0x229b18u: goto label_229b18;
        case 0x229b28u: goto label_229b28;
        case 0x229b3cu: goto label_229b3c;
        case 0x229b58u: goto label_229b58;
        case 0x229b68u: goto label_229b68;
        case 0x229b78u: goto label_229b78;
        case 0x229b88u: goto label_229b88;
        case 0x229b98u: goto label_229b98;
        case 0x229c08u: goto label_229c08;
        case 0x229c18u: goto label_229c18;
        case 0x229c24u: goto label_229c24;
        case 0x229c30u: goto label_229c30;
        case 0x229c50u: goto label_229c50;
        case 0x229c60u: goto label_229c60;
        case 0x229c88u: goto label_229c88;
        case 0x229c9cu: goto label_229c9c;
        case 0x229cacu: goto label_229cac;
        case 0x229cbcu: goto label_229cbc;
        case 0x229cccu: goto label_229ccc;
        case 0x229ce0u: goto label_229ce0;
        case 0x229cf4u: goto label_229cf4;
        case 0x229d04u: goto label_229d04;
        case 0x229d14u: goto label_229d14;
        case 0x229d24u: goto label_229d24;
        case 0x229d30u: goto label_229d30;
        case 0x229d68u: goto label_229d68;
        case 0x229d78u: goto label_229d78;
        case 0x229d8cu: goto label_229d8c;
        case 0x229d9cu: goto label_229d9c;
        case 0x229dacu: goto label_229dac;
        case 0x229dbcu: goto label_229dbc;
        case 0x229dccu: goto label_229dcc;
        case 0x229df4u: goto label_229df4;
        case 0x229e08u: goto label_229e08;
        case 0x229e1cu: goto label_229e1c;
        case 0x229e28u: goto label_229e28;
        case 0x229e38u: goto label_229e38;
        case 0x229e48u: goto label_229e48;
        case 0x229e58u: goto label_229e58;
        case 0x229e88u: goto label_229e88;
        case 0x229f04u: goto label_229f04;
        case 0x229f5cu: goto label_229f5c;
        case 0x229f64u: goto label_229f64;
        case 0x229f78u: goto label_229f78;
        case 0x229f8cu: goto label_229f8c;
        case 0x229f9cu: goto label_229f9c;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fbcu: goto label_229fbc;
        case 0x229fccu: goto label_229fcc;
        case 0x229fdcu: goto label_229fdc;
        case 0x229fecu: goto label_229fec;
        case 0x22a000u: goto label_22a000;
        case 0x22a00cu: goto label_22a00c;
        case 0x22a01cu: goto label_22a01c;
        case 0x22a064u: goto label_22a064;
        case 0x22a07cu: goto label_22a07c;
        case 0x22a0a4u: goto label_22a0a4;
        case 0x22a0b4u: goto label_22a0b4;
        case 0x22a0c4u: goto label_22a0c4;
        case 0x22a0d4u: goto label_22a0d4;
        case 0x22a0e8u: goto label_22a0e8;
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a108u: goto label_22a108;
        case 0x22a118u: goto label_22a118;
        case 0x22a124u: goto label_22a124;
        case 0x22a130u: goto label_22a130;
        case 0x22a144u: goto label_22a144;
        case 0x22a150u: goto label_22a150;
        case 0x22a168u: goto label_22a168;
        case 0x22a18cu: goto label_22a18c;
        case 0x22a19cu: goto label_22a19c;
        case 0x22a1acu: goto label_22a1ac;
        case 0x22a1bcu: goto label_22a1bc;
        case 0x22a1c4u: goto label_22a1c4;
        case 0x22a234u: goto label_22a234;
        case 0x22a244u: goto label_22a244;
        case 0x22a26cu: goto label_22a26c;
        case 0x22a27cu: goto label_22a27c;
        case 0x22a290u: goto label_22a290;
        case 0x22a2a8u: goto label_22a2a8;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2c8u: goto label_22a2c8;
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a308u: goto label_22a308;
        case 0x22a338u: goto label_22a338;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a398u: goto label_22a398;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a464u: goto label_22a464;
        case 0x22a484u: goto label_22a484;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a500u: goto label_22a500;
        case 0x22a50cu: goto label_22a50c;
        case 0x22a534u: goto label_22a534;
        case 0x22a540u: goto label_22a540;
        case 0x22a560u: goto label_22a560;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a59cu: goto label_22a59c;
        case 0x22a5b0u: goto label_22a5b0;
        case 0x22a5bcu: goto label_22a5bc;
        case 0x22a5ccu: goto label_22a5cc;
        default: break;
    }

    ctx->pc = 0x228c00u;

    // 0x228c00: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x228c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x228c04: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x228c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x228c08: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x228c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x228c0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c10: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x228c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x228c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x228c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c18: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x228c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x228c1c: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x228c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x228c20: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x228c20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c24: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x228c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x228c28: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x228c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c2c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x228c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x228c30: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x228c30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c34: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x228c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x228c38: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x228c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x228c3c: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x228c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x228c40: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x228c40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x228c44: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x228c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x228c48: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x228c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x228c4c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x228c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x228c50: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x228c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x228c54: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x228c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x228c58: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x228C58u;
    SET_GPR_U32(ctx, 31, 0x228C60u);
    ctx->pc = 0x228C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C58u;
    // 0x228c5c: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x228C58u, 0x228C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C60u;
label_228c60:
    // 0x228c60: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x228c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x228c64: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x228c68: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x228c68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c6c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x228C6Cu;
    {
        const bool branch_taken_0x228c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C6Cu;
        // 0x228c70: 0xafa30134  sw          $v1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c6c) {
            ctx->pc = 0x228C9Cu;
            goto label_228c9c;
        }
    }
    ctx->pc = 0x228C74u;
    // 0x228c74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x228c78: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x228C78u;
    {
        const bool branch_taken_0x228c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c78) {
            ctx->pc = 0x228C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228C78u;
            // 0x228c7c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228CA0u;
            goto label_228ca0;
        }
    }
    ctx->pc = 0x228C80u;
    // 0x228c80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x228c80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c84: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x228C84u;
    SET_GPR_U32(ctx, 31, 0x228C8Cu);
    ctx->pc = 0x228C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C84u;
    // 0x228c88: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x228C84u, 0x228C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C8Cu;
label_228c8c:
    // 0x228c8c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x228c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x228c90: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x228c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x228c94: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x228c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x228c98: 0x8c7100b8  lw          $s1, 0xB8($v1)
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_228c9c:
    // 0x228c9c: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x228c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_228ca0:
    // 0x228ca0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x228ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x228ca4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x228CA4u;
    {
        const bool branch_taken_0x228ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CA4u;
        // 0x228ca8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ca4) {
            ctx->pc = 0x228D8Cu;
            goto label_228d8c;
        }
    }
    ctx->pc = 0x228CACu;
    // 0x228cac: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x228CACu;
    SET_GPR_U32(ctx, 31, 0x228CB4u);
    ctx->pc = 0x228CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CACu;
    // 0x228cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x228CACu, 0x228CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CB4u;
label_228cb4:
    // 0x228cb4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x228CB4u;
    {
        const bool branch_taken_0x228cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228cb4) {
            ctx->pc = 0x228CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228CB4u;
            // 0x228cb8: 0x8e4211c0  lw          $v0, 0x11C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228D00u;
            goto label_228d00;
        }
    }
    ctx->pc = 0x228CBCu;
    // 0x228cbc: 0x9242047d  lbu         $v0, 0x47D($s2)
    ctx->pc = 0x228cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
    // 0x228cc0: 0x14400643  bnez        $v0, . + 4 + (0x643 << 2)
    ctx->pc = 0x228CC0u;
    {
        const bool branch_taken_0x228cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CC0u;
        // 0x228cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228cc0) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x228CC8u;
    // 0x228cc8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x228cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x228ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228cd0: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x228cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228cd4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x228cd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228cd8: 0x0  nop
    ctx->pc = 0x228cd8u;
    // NOP
    // 0x228cdc: 0x4501063c  bc1t        . + 4 + (0x63C << 2)
    ctx->pc = 0x228CDCu;
    {
        const bool branch_taken_0x228cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CDCu;
        // 0x228ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228cdc) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x228CE4u;
    // 0x228ce4: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x228ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228cec: 0xc08f8a6  jal         func_23E298
    ctx->pc = 0x228CECu;
    SET_GPR_U32(ctx, 31, 0x228CF4u);
    ctx->pc = 0x228CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CECu;
    // 0x228cf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E298u, 0x228CECu, 0x228CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CF4u;
label_228cf4:
    // 0x228cf4: 0xc0b93c6  jal         func_2E4F18
    ctx->pc = 0x228CF4u;
    SET_GPR_U32(ctx, 31, 0x228CFCu);
    ctx->pc = 0x228CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CF4u;
    // 0x228cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F18u, 0x228CF4u, 0x228CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CFCu;
label_228cfc:
    // 0x228cfc: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x228cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_228d00:
    // 0x228d00: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x228d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x228d04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x228d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x228d08: 0x54430031  bnel        $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x228D08u;
    {
        const bool branch_taken_0x228d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228d08) {
            ctx->pc = 0x228D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228D08u;
            // 0x228d0c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DD0u;
            goto label_228dd0;
        }
    }
    ctx->pc = 0x228D10u;
    // 0x228d10: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x228d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x228d14: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x228d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x228d18: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228D18u;
    {
        const bool branch_taken_0x228d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D18u;
        // 0x228d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d18) {
            ctx->pc = 0x228D24u;
            goto label_228d24;
        }
    }
    ctx->pc = 0x228D20u;
    // 0x228d20: 0x8e4411e4  lw          $a0, 0x11E4($s2)
    ctx->pc = 0x228d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_228d24:
    // 0x228d24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228D24u;
    {
        const bool branch_taken_0x228d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D24u;
        // 0x228d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d24) {
            ctx->pc = 0x228D3Cu;
            goto label_228d3c;
        }
    }
    ctx->pc = 0x228D2Cu;
    // 0x228d2c: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x228D2Cu;
    SET_GPR_U32(ctx, 31, 0x228D34u);
    ctx->pc = 0x228D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D2Cu;
    // 0x228d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x228D2Cu, 0x228D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D34u;
label_228d34:
    // 0x228d34: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x228D34u;
    {
        const bool branch_taken_0x228d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D34u;
        // 0x228d38: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d34) {
            ctx->pc = 0x228DD0u;
            goto label_228dd0;
        }
    }
    ctx->pc = 0x228D3Cu;
label_228d3c:
    // 0x228d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d44: 0xc0bc58c  jal         func_2F1630
    ctx->pc = 0x228D44u;
    SET_GPR_U32(ctx, 31, 0x228D4Cu);
    ctx->pc = 0x228D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D44u;
    // 0x228d48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1630u, 0x228D44u, 0x228D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D4Cu;
label_228d4c:
    // 0x228d4c: 0x9242047d  lbu         $v0, 0x47D($s2)
    ctx->pc = 0x228d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
    // 0x228d50: 0x1440061f  bnez        $v0, . + 4 + (0x61F << 2)
    ctx->pc = 0x228D50u;
    {
        const bool branch_taken_0x228d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D50u;
        // 0x228d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d50) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x228D58u;
    // 0x228d58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x228d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x228d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d60: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x228d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228d64: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x228d64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228d68: 0x0  nop
    ctx->pc = 0x228d68u;
    // NOP
    // 0x228d6c: 0x45010618  bc1t        . + 4 + (0x618 << 2)
    ctx->pc = 0x228D6Cu;
    {
        const bool branch_taken_0x228d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D6Cu;
        // 0x228d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d6c) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x228D74u;
    // 0x228d74: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x228d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x228d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d7c: 0xc08f8a6  jal         func_23E298
    ctx->pc = 0x228D7Cu;
    SET_GPR_U32(ctx, 31, 0x228D84u);
    ctx->pc = 0x228D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D7Cu;
    // 0x228d80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E298u, 0x228D7Cu, 0x228D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D84u;
label_228d84:
    // 0x228d84: 0x10000612  b           . + 4 + (0x612 << 2)
    ctx->pc = 0x228D84u;
    {
        const bool branch_taken_0x228d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D84u;
        // 0x228d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d84) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x228D8Cu;
label_228d8c:
    // 0x228d8c: 0x8c43ebc8  lw          $v1, -0x1438($v0)
    ctx->pc = 0x228d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962120)));
    // 0x228d90: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x228D90u;
    {
        const bool branch_taken_0x228d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d90) {
            ctx->pc = 0x228D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228D90u;
            // 0x228d94: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DD0u;
            goto label_228dd0;
        }
    }
    ctx->pc = 0x228D98u;
    // 0x228d98: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x228D98u;
    SET_GPR_U32(ctx, 31, 0x228DA0u);
    ctx->pc = 0x228D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D98u;
    // 0x228d9c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x228D98u, 0x228DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DA0u;
label_228da0:
    // 0x228da0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x228da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x228da4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x228DA4u;
    {
        const bool branch_taken_0x228da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228da4) {
            ctx->pc = 0x228DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228DA4u;
            // 0x228da8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DD0u;
            goto label_228dd0;
        }
    }
    ctx->pc = 0x228DACu;
    // 0x228dac: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x228dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x228db0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x228db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228db4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x228DB4u;
    {
        const bool branch_taken_0x228db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228db4) {
            ctx->pc = 0x228DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228DB4u;
            // 0x228db8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DD0u;
            goto label_228dd0;
        }
    }
    ctx->pc = 0x228DBCu;
    // 0x228dbc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x228dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x228dc0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x228dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x228dc4: 0x10400602  beqz        $v0, . + 4 + (0x602 << 2)
    ctx->pc = 0x228DC4u;
    {
        const bool branch_taken_0x228dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DC4u;
        // 0x228dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dc4) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x228DCCu;
    // 0x228dcc: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x228dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_228dd0:
    // 0x228dd0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x228dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x228dd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228DD4u;
    {
        const bool branch_taken_0x228dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DD4u;
        // 0x228dd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dd4) {
            ctx->pc = 0x228DECu;
            goto label_228dec;
        }
    }
    ctx->pc = 0x228DDCu;
    // 0x228ddc: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x228ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x228de0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x228de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x228de4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x228DE4u;
    {
        const bool branch_taken_0x228de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228de4) {
            ctx->pc = 0x228DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228DE4u;
            // 0x228de8: 0x8e420370  lw          $v0, 0x370($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DF4u;
            goto label_228df4;
        }
    }
    ctx->pc = 0x228DECu;
label_228dec:
    // 0x228dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228df0: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x228df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_228df4:
    // 0x228df4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228df8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228DF8u;
    {
        const bool branch_taken_0x228df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228df8) {
            ctx->pc = 0x228E18u;
            goto label_228e18;
        }
    }
    ctx->pc = 0x228E00u;
    // 0x228e00: 0xc0d7638  jal         func_35D8E0
    ctx->pc = 0x228E00u;
    SET_GPR_U32(ctx, 31, 0x228E08u);
    ctx->pc = 0x228E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E00u;
    // 0x228e04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D8E0u, 0x228E00u, 0x228E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E08u;
label_228e08:
    // 0x228e08: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x228E08u;
    {
        const bool branch_taken_0x228e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E08u;
        // 0x228e0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e08) {
            ctx->pc = 0x2292ECu;
            goto label_2292ec;
        }
    }
    ctx->pc = 0x228E10u;
    // 0x228e10: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x228E10u;
    {
        const bool branch_taken_0x228e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228e10) {
            ctx->pc = 0x228FD8u;
            goto label_228fd8;
        }
    }
    ctx->pc = 0x228E18u;
label_228e18:
    // 0x228e18: 0x54600135  bnel        $v1, $zero, . + 4 + (0x135 << 2)
    ctx->pc = 0x228E18u;
    {
        const bool branch_taken_0x228e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228e18) {
            ctx->pc = 0x228E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228E18u;
            // 0x228e1c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x228E20u;
    // 0x228e20: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x228e20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x228e24: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x228e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x228e28: 0x26109890  addiu       $s0, $s0, -0x6770
    ctx->pc = 0x228e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940816));
    // 0x228e2c: 0x2604ffd8  addiu       $a0, $s0, -0x28
    ctx->pc = 0x228e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
    // 0x228e30: 0xc0f7cd0  jal         func_3DF340
    ctx->pc = 0x228E30u;
    SET_GPR_U32(ctx, 31, 0x228E38u);
    ctx->pc = 0x228E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E30u;
    // 0x228e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF340u, 0x228E30u, 0x228E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E38u;
label_228e38:
    // 0x228e38: 0x10500061  beq         $v0, $s0, . + 4 + (0x61 << 2)
    ctx->pc = 0x228E38u;
    {
        const bool branch_taken_0x228e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x228E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E38u;
        // 0x228e3c: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e38) {
            ctx->pc = 0x228FC0u;
            goto label_228fc0;
        }
    }
    ctx->pc = 0x228E40u;
    // 0x228e40: 0x1280005f  beqz        $s4, . + 4 + (0x5F << 2)
    ctx->pc = 0x228E40u;
    {
        const bool branch_taken_0x228e40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E40u;
        // 0x228e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e40) {
            ctx->pc = 0x228FC0u;
            goto label_228fc0;
        }
    }
    ctx->pc = 0x228E48u;
    // 0x228e48: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x228E48u;
    SET_GPR_U32(ctx, 31, 0x228E50u);
    ctx->pc = 0x228E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E48u;
    // 0x228e4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x228E48u, 0x228E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E50u;
label_228e50:
    // 0x228e50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e54: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x228E54u;
    SET_GPR_U32(ctx, 31, 0x228E5Cu);
    ctx->pc = 0x228E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E54u;
    // 0x228e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x228E54u, 0x228E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E5Cu;
label_228e5c:
    // 0x228e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228E5Cu;
    {
        const bool branch_taken_0x228e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E5Cu;
        // 0x228e60: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e5c) {
            ctx->pc = 0x228E70u;
            goto label_228e70;
        }
    }
    ctx->pc = 0x228E64u;
    // 0x228e64: 0xc0c4900  jal         func_312400
    ctx->pc = 0x228E64u;
    SET_GPR_U32(ctx, 31, 0x228E6Cu);
    ctx->pc = 0x228E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E64u;
    // 0x228e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x228E64u, 0x228E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E6Cu;
label_228e6c:
    // 0x228e6c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x228e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_228e70:
    // 0x228e70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x228e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x228e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e78: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x228E78u;
    SET_GPR_U32(ctx, 31, 0x228E80u);
    ctx->pc = 0x228E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E78u;
    // 0x228e7c: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x228E78u, 0x228E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E80u;
label_228e80:
    // 0x228e80: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x228e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x228e84: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x228e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x228e88: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x228e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x228e8c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x228e8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x228e90: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x228e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x228e94: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x228e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228e98: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x228e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x228e9c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x228e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228ea0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x228ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ea4: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x228ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228ea8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x228ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x228eac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x228eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x228eb0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x228eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x228eb4: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x228eb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x228eb8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x228eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228ebc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x228ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228ec0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x228ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228ec4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x228ec4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x228ec8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x228ec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x228ecc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x228eccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x228ed0: 0x46010044  c1          0x10044
    ctx->pc = 0x228ed0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x228ed4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x228ed4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x228ed8: 0xc6e096ec  lwc1        $f0, -0x6914($s7)
    ctx->pc = 0x228ed8u;
    { uint32_t bits = FAST_READ32(0x3F96ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228edc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228ee0: 0x0  nop
    ctx->pc = 0x228ee0u;
    // NOP
    // 0x228ee4: 0x45000101  bc1f        . + 4 + (0x101 << 2)
    ctx->pc = 0x228EE4u;
    {
        const bool branch_taken_0x228ee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EE4u;
        // 0x228ee8: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ee4) {
            ctx->pc = 0x2292ECu;
            goto label_2292ec;
        }
    }
    ctx->pc = 0x228EECu;
    // 0x228eec: 0x56820100  bnel        $s4, $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x228EECu;
    {
        const bool branch_taken_0x228eec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x228eec) {
            ctx->pc = 0x228EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228EECu;
            // 0x228ef0: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x228EF4u;
    // 0x228ef4: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x228ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x228ef8: 0x504000fd  beql        $v0, $zero, . + 4 + (0xFD << 2)
    ctx->pc = 0x228EF8u;
    {
        const bool branch_taken_0x228ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ef8) {
            ctx->pc = 0x228EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228EF8u;
            // 0x228efc: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x228F00u;
    // 0x228f00: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x228f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x228f04: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x228f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x228f08: 0x546000f9  bnel        $v1, $zero, . + 4 + (0xF9 << 2)
    ctx->pc = 0x228F08u;
    {
        const bool branch_taken_0x228f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228f08) {
            ctx->pc = 0x228F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228F08u;
            // 0x228f0c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x228F10u;
    // 0x228f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f14: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x228F14u;
    SET_GPR_U32(ctx, 31, 0x228F1Cu);
    ctx->pc = 0x228F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F14u;
    // 0x228f18: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x228F14u, 0x228F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F1Cu;
label_228f1c:
    // 0x228f1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f20: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x228F20u;
    SET_GPR_U32(ctx, 31, 0x228F28u);
    ctx->pc = 0x228F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F20u;
    // 0x228f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x228F20u, 0x228F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F28u;
label_228f28:
    // 0x228f28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228F28u;
    {
        const bool branch_taken_0x228f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F28u;
        // 0x228f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f28) {
            ctx->pc = 0x228F3Cu;
            goto label_228f3c;
        }
    }
    ctx->pc = 0x228F30u;
    // 0x228f30: 0xc0c4900  jal         func_312400
    ctx->pc = 0x228F30u;
    SET_GPR_U32(ctx, 31, 0x228F38u);
    ctx->pc = 0x228F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F30u;
    // 0x228f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x228F30u, 0x228F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F38u;
label_228f38:
    // 0x228f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228f3c:
    // 0x228f3c: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x228F3Cu;
    SET_GPR_U32(ctx, 31, 0x228F44u);
    ctx->pc = 0x228F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F3Cu;
    // 0x228f40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x228F3Cu, 0x228F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F44u;
label_228f44:
    // 0x228f44: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x228f48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x228f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228f4c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x228f4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x228f50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x228f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x228f54: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x228f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x228f58: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x228f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f5c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x228f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228f60: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x228f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228f64: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x228f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228f68: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x228f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x228f6c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x228f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x228f70: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x228f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x228f74: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x228f74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x228f78: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x228f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228f7c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x228f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228f80: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x228f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228f84: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x228f84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x228f88: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x228f88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x228f8c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x228f8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x228f90: 0x46010044  c1          0x10044
    ctx->pc = 0x228f90u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x228f94: 0xc6e096ec  lwc1        $f0, -0x6914($s7)
    ctx->pc = 0x228f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294940396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228f9c: 0x0  nop
    ctx->pc = 0x228f9cu;
    // NOP
    // 0x228fa0: 0x450000d2  bc1f        . + 4 + (0xD2 << 2)
    ctx->pc = 0x228FA0u;
    {
        const bool branch_taken_0x228fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FA0u;
        // 0x228fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fa0) {
            ctx->pc = 0x2292ECu;
            goto label_2292ec;
        }
    }
    ctx->pc = 0x228FA8u;
    // 0x228fa8: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x228FA8u;
    SET_GPR_U32(ctx, 31, 0x228FB0u);
    ctx->pc = 0x228FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FA8u;
    // 0x228fac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x228FA8u, 0x228FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FB0u;
label_228fb0:
    // 0x228fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x228fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fb4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x228fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x228FB8u;
    {
        const bool branch_taken_0x228fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FB8u;
        // 0x228fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fb8) {
            ctx->pc = 0x228FECu;
            goto label_228fec;
        }
    }
    ctx->pc = 0x228FC0u;
label_228fc0:
    // 0x228fc0: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x228FC0u;
    {
        const bool branch_taken_0x228fc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x228FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FC0u;
        // 0x228fc4: 0x24020448  addiu       $v0, $zero, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fc0) {
            ctx->pc = 0x228FFCu;
            goto label_228ffc;
        }
    }
    ctx->pc = 0x228FC8u;
    // 0x228fc8: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x228fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x228fcc: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x228fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x228fd0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228FD0u;
    {
        const bool branch_taken_0x228fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FD0u;
        // 0x228fd4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fd0) {
            ctx->pc = 0x229004u;
            goto label_229004;
        }
    }
    ctx->pc = 0x228FD8u;
label_228fd8:
    // 0x228fd8: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x228FD8u;
    SET_GPR_U32(ctx, 31, 0x228FE0u);
    ctx->pc = 0x228FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FD8u;
    // 0x228fdc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x228FD8u, 0x228FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FE0u;
label_228fe0:
    // 0x228fe0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x228fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x228fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fe8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x228fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_228fec:
    // 0x228fec: 0xc08a008  jal         func_228020
    ctx->pc = 0x228FECu;
    SET_GPR_U32(ctx, 31, 0x228FF4u);
    ctx->pc = 0x228FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FECu;
    // 0x228ff0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228020u, 0x228FECu, 0x228FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FF4u;
label_228ff4:
    // 0x228ff4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x228FF4u;
    {
        const bool branch_taken_0x228ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FF4u;
        // 0x228ff8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ff4) {
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x228FFCu;
label_228ffc:
    // 0x228ffc: 0x568200bc  bnel        $s4, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x228FFCu;
    {
        const bool branch_taken_0x228ffc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x228ffc) {
            ctx->pc = 0x229000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228FFCu;
            // 0x229000: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x229004u;
label_229004:
    // 0x229004: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x229004u;
    {
        const bool branch_taken_0x229004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x229008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229004u;
        // 0x229008: 0x8fa30134  lw          $v1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229004) {
            ctx->pc = 0x22901Cu;
            goto label_22901c;
        }
    }
    ctx->pc = 0x22900Cu;
    // 0x22900c: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x22900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x229010: 0x544000b7  bnel        $v0, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x229010u;
    {
        const bool branch_taken_0x229010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229010) {
            ctx->pc = 0x229014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229010u;
            // 0x229014: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x229018u;
    // 0x229018: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x229018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_22901c:
    // 0x22901c: 0x2462ffdd  addiu       $v0, $v1, -0x23
    ctx->pc = 0x22901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
    // 0x229020: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x229020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x229024: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x229024u;
    {
        const bool branch_taken_0x229024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229024) {
            ctx->pc = 0x229028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229024u;
            // 0x229028: 0xc64000d0  lwc1        $f0, 0xD0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x229054u;
            goto label_229054;
        }
    }
    ctx->pc = 0x22902Cu;
    // 0x22902c: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x22902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x229030: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229030u;
    {
        const bool branch_taken_0x229030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229030u;
        // 0x229034: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229030) {
            ctx->pc = 0x229050u;
            goto label_229050;
        }
    }
    ctx->pc = 0x229038u;
    // 0x229038: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229038u;
    {
        const bool branch_taken_0x229038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229038u;
        // 0x22903c: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229038) {
            ctx->pc = 0x229050u;
            goto label_229050;
        }
    }
    ctx->pc = 0x229040u;
    // 0x229040: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229040u;
    {
        const bool branch_taken_0x229040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229040u;
        // 0x229044: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229040) {
            ctx->pc = 0x229050u;
            goto label_229050;
        }
    }
    ctx->pc = 0x229048u;
    // 0x229048: 0x546200a9  bnel        $v1, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x229048u;
    {
        const bool branch_taken_0x229048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229048) {
            ctx->pc = 0x22904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229048u;
            // 0x22904c: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x229050u;
label_229050:
    // 0x229050: 0xc64000d0  lwc1        $f0, 0xD0($s2)
    ctx->pc = 0x229050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229054:
    // 0x229054: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x229054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x229058: 0x0  nop
    ctx->pc = 0x229058u;
    // NOP
    // 0x22905c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x22905cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229060: 0x0  nop
    ctx->pc = 0x229060u;
    // NOP
    // 0x229064: 0x450200a2  bc1fl       . + 4 + (0xA2 << 2)
    ctx->pc = 0x229064u;
    {
        const bool branch_taken_0x229064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229064) {
            ctx->pc = 0x229068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229064u;
            // 0x229068: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292F0u;
            goto label_2292f0;
        }
    }
    ctx->pc = 0x22906Cu;
    // 0x22906c: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x22906Cu;
    SET_GPR_U32(ctx, 31, 0x229074u);
    ctx->pc = 0x229070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22906Cu;
    // 0x229070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x22906Cu, 0x229074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229074u;
label_229074:
    // 0x229074: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x229074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x229078: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x229078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22907c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x22907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x229080: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x229080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229084: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x229084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229088: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x229088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22908c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x22908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x229090: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x229090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229094: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x229094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229098: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x229098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22909c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x22909cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2290a0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2290a4: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x2290a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x2290a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2290a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2290ac: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2290acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2290b0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2290b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2290b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2290b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2290b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2290b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2290bc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2290bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2290c0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2290c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2290c4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2290c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2290c8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2290c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2290cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2290ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2290d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2290d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2290d4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2290d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2290d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2290d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2290dc: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x2290DCu;
    SET_GPR_U32(ctx, 31, 0x2290E4u);
    ctx->pc = 0x2290E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290DCu;
    // 0x2290e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x2290DCu, 0x2290E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290E4u;
label_2290e4:
    // 0x2290e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2290e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2290e8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2290e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2290ec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2290ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2290f0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2290f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2290f4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2290f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2290f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2290f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290fc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2290fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229100: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x229100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229104: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x229104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229108: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x229108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22910c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x229110: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x229110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x229114: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x229114u;
    SET_GPR_U32(ctx, 31, 0x22911Cu);
    ctx->pc = 0x229118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229114u;
    // 0x229118: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x229114u, 0x22911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22911Cu;
label_22911c:
    // 0x22911c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x229120: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x229120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x229124: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229128: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x229128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22912c: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x22912cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x229130: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x229130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x229134: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x229134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x229138: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x229138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22913c: 0xe7b5004c  swc1        $f21, 0x4C($sp)
    ctx->pc = 0x22913cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x229140: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x229140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229144: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x229144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229148: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x229148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22914c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x22914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x229150: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x229150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x229154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229158: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x229158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22915c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x22915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229160: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x229160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229164: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x229164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x229168: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x229168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22916c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x22916cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x229170: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x229170u;
    SET_GPR_U32(ctx, 31, 0x229178u);
    ctx->pc = 0x229174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229170u;
    // 0x229174: 0xe7a2003c  swc1        $f2, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x229170u, 0x229178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229178u;
label_229178:
    // 0x229178: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x229178u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22917c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x22917cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x229180: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x229180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x229184: 0xe7b5005c  swc1        $f21, 0x5C($sp)
    ctx->pc = 0x229184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x229188: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x229188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22918c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x22918cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x229190: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x229190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x229194: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x229194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x229198: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x229198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22919c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2291a0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2291a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2291a4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2291a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2291a8: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x2291a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2291ac: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2291acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2291b0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2291b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2291b4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2291b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2291b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2291B8u;
    SET_GPR_U32(ctx, 31, 0x2291C0u);
    ctx->pc = 0x2291BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291B8u;
    // 0x2291bc: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2291B8u, 0x2291C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291C0u;
label_2291c0:
    // 0x2291c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2291C0u;
    SET_GPR_U32(ctx, 31, 0x2291C8u);
    ctx->pc = 0x2291C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291C0u;
    // 0x2291c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2291C0u, 0x2291C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291C8u;
label_2291c8:
    // 0x2291c8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2291c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2291cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2291ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2291d0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2291d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2291d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2291d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2291d8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2291d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2291dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2291dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2291e0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2291e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2291e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2291e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2291e8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2291e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2291ec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2291ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2291f0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2291f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2291f4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2291f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2291f8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2291f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2291fc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2291fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x229200: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x229200u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x229204: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x229204u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x229208: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x229208u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x22920c: 0x0  nop
    ctx->pc = 0x22920cu;
    // NOP
    // 0x229210: 0x0  nop
    ctx->pc = 0x229210u;
    // NOP
    // 0x229214: 0x46000044  c1          0x44
    ctx->pc = 0x229214u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x229218: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x229218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x22921c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x22921cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229220: 0x0  nop
    ctx->pc = 0x229220u;
    // NOP
    // 0x229224: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x229224u;
    {
        const bool branch_taken_0x229224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229224u;
        // 0x229228: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229224) {
            ctx->pc = 0x229250u;
            goto label_229250;
        }
    }
    ctx->pc = 0x22922Cu;
    // 0x22922c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229234: 0x0  nop
    ctx->pc = 0x229234u;
    // NOP
    // 0x229238: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x229238u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22923c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22923cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x229240: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x229240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x229244: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x229244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x229248: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x229248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22924c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x22924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_229250:
    // 0x229250: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x229250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x229254: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x229254u;
    SET_GPR_U32(ctx, 31, 0x22925Cu);
    ctx->pc = 0x229258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229254u;
    // 0x229258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x229254u, 0x22925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22925Cu;
label_22925c:
    // 0x22925c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x22925cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x229260: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x229260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x229264: 0xc4604514  lwc1        $f0, 0x4514($v1)
    ctx->pc = 0x229264u;
    { uint32_t bits = FAST_READ32(0x464514u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229268: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x229268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22926c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x22926cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x229270: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x229270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229274: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x229274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x229278: 0xc077912  jal         func_1DE448
    ctx->pc = 0x229278u;
    SET_GPR_U32(ctx, 31, 0x229280u);
    ctx->pc = 0x22927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229278u;
    // 0x22927c: 0x27a70138  addiu       $a3, $sp, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x229278u, 0x229280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229280u;
label_229280:
    // 0x229280: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x229280u;
    {
        const bool branch_taken_0x229280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229280u;
        // 0x229284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229280) {
            ctx->pc = 0x2292D8u;
            goto label_2292d8;
        }
    }
    ctx->pc = 0x229288u;
    // 0x229288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22928c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22928cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229290: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x229290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x229294: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x229294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x229298: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x229298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22929c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2292a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2292a4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2292a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2292a8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2292a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2292ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2292acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2292b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2292b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2292b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2292b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2292bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2292bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2292c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2292c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2292c4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2292c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2292c8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2292c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2292cc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2292d0: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x2292D0u;
    SET_GPR_U32(ctx, 31, 0x2292D8u);
    ctx->pc = 0x2292D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292D0u;
    // 0x2292d4: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x2292D0u, 0x2292D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292D8u;
label_2292d8:
    // 0x2292d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2292d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2292dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2292e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292e4: 0xc08a008  jal         func_228020
    ctx->pc = 0x2292E4u;
    SET_GPR_U32(ctx, 31, 0x2292ECu);
    ctx->pc = 0x2292E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292E4u;
    // 0x2292e8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228020u, 0x2292E4u, 0x2292ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292ECu;
label_2292ec:
    // 0x2292ec: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2292ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_2292f0:
    // 0x2292f0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2292f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2292f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2292F4u;
    {
        const bool branch_taken_0x2292f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2292f4) {
            ctx->pc = 0x2292F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2292F4u;
            // 0x2292f8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229310u;
            goto label_229310;
        }
    }
    ctx->pc = 0x2292FCu;
    // 0x2292fc: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x2292fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x229300: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x229304: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x229304u;
    {
        const bool branch_taken_0x229304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229304) {
            ctx->pc = 0x229394u;
            goto label_229394;
        }
    }
    ctx->pc = 0x22930Cu;
    // 0x22930c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x22930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_229310:
    // 0x229310: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x229310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229314: 0xc44c0034  lwc1        $f12, 0x34($v0)
    ctx->pc = 0x229314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229318: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x229318u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22931c: 0x0  nop
    ctx->pc = 0x22931cu;
    // NOP
    // 0x229320: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x229320u;
    {
        const bool branch_taken_0x229320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229320) {
            ctx->pc = 0x229394u;
            goto label_229394;
        }
    }
    ctx->pc = 0x229328u;
    // 0x229328: 0xc64000d0  lwc1        $f0, 0xD0($s2)
    ctx->pc = 0x229328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22932c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22932cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229330: 0x0  nop
    ctx->pc = 0x229330u;
    // NOP
    // 0x229334: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x229334u;
    {
        const bool branch_taken_0x229334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229334u;
        // 0x229338: 0x8fa60134  lw          $a2, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229334) {
            ctx->pc = 0x229394u;
            goto label_229394;
        }
    }
    ctx->pc = 0x22933Cu;
    // 0x22933c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229340: 0xc08f8a6  jal         func_23E298
    ctx->pc = 0x229340u;
    SET_GPR_U32(ctx, 31, 0x229348u);
    ctx->pc = 0x229344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229340u;
    // 0x229344: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E298u, 0x229340u, 0x229348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229348u;
label_229348:
    // 0x229348: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x229348u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22934c: 0x160004a0  bnez        $s0, . + 4 + (0x4A0 << 2)
    ctx->pc = 0x22934Cu;
    {
        const bool branch_taken_0x22934c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x229350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22934Cu;
        // 0x229350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22934c) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229354u;
    // 0x229354: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x229354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x229358: 0x52820006  beql        $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229358u;
    {
        const bool branch_taken_0x229358 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x229358) {
            ctx->pc = 0x22935Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229358u;
            // 0x22935c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229374u;
            goto label_229374;
        }
    }
    ctx->pc = 0x229360u;
    // 0x229360: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x229360u;
    SET_GPR_U32(ctx, 31, 0x229368u);
    ctx->pc = 0x229364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229360u;
    // 0x229364: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x229360u, 0x229368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229368u;
label_229368:
    // 0x229368: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x229368u;
    {
        const bool branch_taken_0x229368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229368) {
            ctx->pc = 0x22938Cu;
            goto label_22938c;
        }
    }
    ctx->pc = 0x229370u;
    // 0x229370: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x229370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_229374:
    // 0x229374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229378: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x229378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x22937c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229380: 0xc08f8a6  jal         func_23E298
    ctx->pc = 0x229380u;
    SET_GPR_U32(ctx, 31, 0x229388u);
    ctx->pc = 0x229384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229380u;
    // 0x229384: 0xc44c0034  lwc1        $f12, 0x34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E298u, 0x229380u, 0x229388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229388u;
label_229388:
    // 0x229388: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x229388u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22938c:
    // 0x22938c: 0x16000490  bnez        $s0, . + 4 + (0x490 << 2)
    ctx->pc = 0x22938Cu;
    {
        const bool branch_taken_0x22938c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x229390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22938Cu;
        // 0x229390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22938c) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229394u;
label_229394:
    // 0x229394: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x229394u;
    SET_GPR_U32(ctx, 31, 0x22939Cu);
    ctx->pc = 0x229398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229394u;
    // 0x229398: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x229394u, 0x22939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22939Cu;
label_22939c:
    // 0x22939c: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x22939Cu;
    {
        const bool branch_taken_0x22939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22939Cu;
        // 0x2293a0: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22939c) {
            ctx->pc = 0x2296CCu;
            goto label_2296cc;
        }
    }
    ctx->pc = 0x2293A4u;
    // 0x2293a4: 0xc64100d0  lwc1        $f1, 0xD0($s2)
    ctx->pc = 0x2293a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2293a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2293a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2293ac: 0x0  nop
    ctx->pc = 0x2293acu;
    // NOP
    // 0x2293b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2293b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2293b4: 0x0  nop
    ctx->pc = 0x2293b4u;
    // NOP
    // 0x2293b8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2293B8u;
    {
        const bool branch_taken_0x2293b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2293BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293B8u;
        // 0x2293bc: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293b8) {
            ctx->pc = 0x229440u;
            goto label_229440;
        }
    }
    ctx->pc = 0x2293C0u;
    // 0x2293c0: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2293c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2293c4: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x2293c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2293c8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2293C8u;
    {
        const bool branch_taken_0x2293c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2293CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293C8u;
        // 0x2293cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293c8) {
            ctx->pc = 0x2293E4u;
            goto label_2293e4;
        }
    }
    ctx->pc = 0x2293D0u;
    // 0x2293d0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2293d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2293d4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2293D4u;
    {
        const bool branch_taken_0x2293d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2293D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293D4u;
        // 0x2293d8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293d4) {
            ctx->pc = 0x2293E4u;
            goto label_2293e4;
        }
    }
    ctx->pc = 0x2293DCu;
    // 0x2293dc: 0x14a2047c  bne         $a1, $v0, . + 4 + (0x47C << 2)
    ctx->pc = 0x2293DCu;
    {
        const bool branch_taken_0x2293dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2293E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293DCu;
        // 0x2293e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293dc) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x2293E4u;
label_2293e4:
    // 0x2293e4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2293e8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2293e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2293ec: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2293ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2293f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2293F0u;
    {
        const bool branch_taken_0x2293f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2293F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F0u;
        // 0x2293f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293f0) {
            ctx->pc = 0x229400u;
            goto label_229400;
        }
    }
    ctx->pc = 0x2293F8u;
    // 0x2293f8: 0x92421104  lbu         $v0, 0x1104($s2)
    ctx->pc = 0x2293f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4356)));
    // 0x2293fc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2293fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_229400:
    // 0x229400: 0x10600473  beqz        $v1, . + 4 + (0x473 << 2)
    ctx->pc = 0x229400u;
    {
        const bool branch_taken_0x229400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229400u;
        // 0x229404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229400) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229408u;
    // 0x229408: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x229408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x22940c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22940Cu;
    {
        const bool branch_taken_0x22940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22940c) {
            ctx->pc = 0x229424u;
            goto label_229424;
        }
    }
    ctx->pc = 0x229414u;
    // 0x229414: 0xc069b80  jal         func_1A6E00
    ctx->pc = 0x229414u;
    SET_GPR_U32(ctx, 31, 0x22941Cu);
    ctx->pc = 0x229418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229414u;
    // 0x229418: 0x2405067e  addiu       $a1, $zero, 0x67E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1662));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E00u, 0x229414u, 0x22941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22941Cu;
label_22941c:
    // 0x22941c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22941Cu;
    {
        const bool branch_taken_0x22941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22941Cu;
        // 0x229420: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22941c) {
            ctx->pc = 0x229430u;
            goto label_229430;
        }
    }
    ctx->pc = 0x229424u;
label_229424:
    // 0x229424: 0xc069b80  jal         func_1A6E00
    ctx->pc = 0x229424u;
    SET_GPR_U32(ctx, 31, 0x22942Cu);
    ctx->pc = 0x229428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229424u;
    // 0x229428: 0x2405067f  addiu       $a1, $zero, 0x67F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1663));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E00u, 0x229424u, 0x22942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22942Cu;
label_22942c:
    // 0x22942c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229430:
    // 0x229430: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x229430u;
    SET_GPR_U32(ctx, 31, 0x229438u);
    ctx->pc = 0x229434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229430u;
    // 0x229434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x229430u, 0x229438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229438u;
label_229438:
    // 0x229438: 0x10000465  b           . + 4 + (0x465 << 2)
    ctx->pc = 0x229438u;
    {
        const bool branch_taken_0x229438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229438u;
        // 0x22943c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229438) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229440u;
label_229440:
    // 0x229440: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x229440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x229444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229448: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x229448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22944c: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22944Cu;
    {
        const bool branch_taken_0x22944c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22944Cu;
        // 0x229450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22944c) {
            ctx->pc = 0x22950Cu;
            goto label_22950c;
        }
    }
    ctx->pc = 0x229454u;
    // 0x229454: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229458: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x229458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x22945c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22945Cu;
    {
        const bool branch_taken_0x22945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22945Cu;
        // 0x229460: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22945c) {
            ctx->pc = 0x229474u;
            goto label_229474;
        }
    }
    ctx->pc = 0x229464u;
    // 0x229464: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229464u;
    SET_GPR_U32(ctx, 31, 0x22946Cu);
    ctx->pc = 0x229468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229464u;
    // 0x229468: 0x240605a6  addiu       $a2, $zero, 0x5A6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1446));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229464u, 0x22946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22946Cu;
label_22946c:
    // 0x22946c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22946Cu;
    {
        const bool branch_taken_0x22946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22946Cu;
        // 0x229470: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22946c) {
            ctx->pc = 0x229480u;
            goto label_229480;
        }
    }
    ctx->pc = 0x229474u;
label_229474:
    // 0x229474: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229474u;
    SET_GPR_U32(ctx, 31, 0x22947Cu);
    ctx->pc = 0x229478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229474u;
    // 0x229478: 0x240605a7  addiu       $a2, $zero, 0x5A7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1447));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229474u, 0x22947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22947Cu;
label_22947c:
    // 0x22947c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229480:
    // 0x229480: 0xc069b5e  jal         func_1A6D78
    ctx->pc = 0x229480u;
    SET_GPR_U32(ctx, 31, 0x229488u);
    ctx->pc = 0x229484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229480u;
    // 0x229484: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D78u, 0x229480u, 0x229488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229488u;
label_229488:
    // 0x229488: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22948c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22948Cu;
    SET_GPR_U32(ctx, 31, 0x229494u);
    ctx->pc = 0x229490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22948Cu;
    // 0x229490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22948Cu, 0x229494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229494u;
label_229494:
    // 0x229494: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x229494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229498: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x229498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x22949c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2294a0: 0x5464007c  bnel        $v1, $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2294A0u;
    {
        const bool branch_taken_0x2294a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2294a0) {
            ctx->pc = 0x2294A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2294A0u;
            // 0x2294a4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229694u;
            goto label_229694;
        }
    }
    ctx->pc = 0x2294A8u;
    // 0x2294a8: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2294ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2294acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2294b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2294b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2294b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2294b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2294b8: 0x0  nop
    ctx->pc = 0x2294b8u;
    // NOP
    // 0x2294bc: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2294bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2294c0: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x2294c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2294c4: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2294c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2294c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2294C8u;
    {
        const bool branch_taken_0x2294c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294C8u;
        // 0x2294cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294c8) {
            ctx->pc = 0x2294D8u;
            goto label_2294d8;
        }
    }
    ctx->pc = 0x2294D0u;
label_2294d0:
    // 0x2294d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2294D0u;
    {
        const bool branch_taken_0x2294d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294D0u;
        // 0x2294d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294d0) {
            ctx->pc = 0x2294FCu;
            goto label_2294fc;
        }
    }
    ctx->pc = 0x2294D8u;
label_2294d8:
    // 0x2294d8: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2294d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x2294dc: 0x0  nop
    ctx->pc = 0x2294dcu;
    // NOP
label_2294e0:
    // 0x2294e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2294e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2294E4u;
    {
        const bool branch_taken_0x2294e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2294E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294E4u;
        // 0x2294e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294e4) {
            ctx->pc = 0x2294D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2294d0;
        }
    }
    ctx->pc = 0x2294ECu;
    // 0x2294ec: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2294ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2294f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2294F0u;
    {
        const bool branch_taken_0x2294f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2294F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294F0u;
        // 0x2294f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294f0) {
            ctx->pc = 0x2294E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2294e0;
        }
    }
    ctx->pc = 0x2294F8u;
    // 0x2294f8: 0x8ca301e8  lw          $v1, 0x1E8($a1)
    ctx->pc = 0x2294f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2294fc:
    // 0x2294fc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2294fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x229500: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x229500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x229504: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x229504u;
    {
        const bool branch_taken_0x229504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229504u;
        // 0x229508: 0xa462002a  sh          $v0, 0x2A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229504) {
            ctx->pc = 0x229690u;
            goto label_229690;
        }
    }
    ctx->pc = 0x22950Cu;
label_22950c:
    // 0x22950c: 0x54620051  bnel        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x22950Cu;
    {
        const bool branch_taken_0x22950c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22950c) {
            ctx->pc = 0x229510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22950Cu;
            // 0x229510: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229654u;
            goto label_229654;
        }
    }
    ctx->pc = 0x229514u;
    // 0x229514: 0xc091d94  jal         func_247650
    ctx->pc = 0x229514u;
    SET_GPR_U32(ctx, 31, 0x22951Cu);
    ctx->pc = 0x229518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229514u;
    // 0x229518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247650u, 0x229514u, 0x22951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22951Cu;
label_22951c:
    // 0x22951c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x22951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229520: 0x904301a5  lbu         $v1, 0x1A5($v0)
    ctx->pc = 0x229520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 421)));
    // 0x229524: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x229524u;
    {
        const bool branch_taken_0x229524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229524u;
        // 0x229528: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229524) {
            ctx->pc = 0x22954Cu;
            goto label_22954c;
        }
    }
    ctx->pc = 0x22952Cu;
    // 0x22952c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229530: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x229530u;
    SET_GPR_U32(ctx, 31, 0x229538u);
    ctx->pc = 0x229534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229530u;
    // 0x229534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x229530u, 0x229538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229538u;
label_229538:
    // 0x229538: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x229538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22953c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229540: 0xa06201a5  sb          $v0, 0x1A5($v1)
    ctx->pc = 0x229540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 421), (uint8_t)GPR_U32(ctx, 2));
    // 0x229544: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x229544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229548: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22954c:
    // 0x22954c: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x22954cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x229550: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x229550u;
    {
        const bool branch_taken_0x229550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x229554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229550u;
        // 0x229554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229550) {
            ctx->pc = 0x229588u;
            goto label_229588;
        }
    }
    ctx->pc = 0x229558u;
    // 0x229558: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x229558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x22955c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22955Cu;
    {
        const bool branch_taken_0x22955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22955Cu;
        // 0x229560: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22955c) {
            ctx->pc = 0x22956Cu;
            goto label_22956c;
        }
    }
    ctx->pc = 0x229564u;
    // 0x229564: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229564u;
    {
        const bool branch_taken_0x229564 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x229564) {
            ctx->pc = 0x229568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229564u;
            // 0x229568: 0x908201a4  lbu         $v0, 0x1A4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22958Cu;
            goto label_22958c;
        }
    }
    ctx->pc = 0x22956Cu;
label_22956c:
    // 0x22956c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x22956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x229570: 0x54a20024  bnel        $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x229570u;
    {
        const bool branch_taken_0x229570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x229570) {
            ctx->pc = 0x229574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229570u;
            // 0x229574: 0x908201a4  lbu         $v0, 0x1A4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229604u;
            goto label_229604;
        }
    }
    ctx->pc = 0x229578u;
    // 0x229578: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x229578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x22957c: 0x240205a2  addiu       $v0, $zero, 0x5A2
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
    // 0x229580: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x229580u;
    {
        const bool branch_taken_0x229580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229580) {
            ctx->pc = 0x229584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229580u;
            // 0x229584: 0x908201a4  lbu         $v0, 0x1A4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229604u;
            goto label_229604;
        }
    }
    ctx->pc = 0x229588u;
label_229588:
    // 0x229588: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x229588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
label_22958c:
    // 0x22958c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22958Cu;
    {
        const bool branch_taken_0x22958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22958c) {
            ctx->pc = 0x2295E0u;
            goto label_2295e0;
        }
    }
    ctx->pc = 0x229594u;
    // 0x229594: 0xc069b5e  jal         func_1A6D78
    ctx->pc = 0x229594u;
    SET_GPR_U32(ctx, 31, 0x22959Cu);
    ctx->pc = 0x229598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229594u;
    // 0x229598: 0x240505a8  addiu       $a1, $zero, 0x5A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D78u, 0x229594u, 0x22959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22959Cu;
label_22959c:
    // 0x22959c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x22959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2295a0: 0x24030596  addiu       $v1, $zero, 0x596
    ctx->pc = 0x2295a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1430));
    // 0x2295a4: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x2295a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2295a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2295A8u;
    {
        const bool branch_taken_0x2295a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295A8u;
        // 0x2295ac: 0x2402059a  addiu       $v0, $zero, 0x59A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295a8) {
            ctx->pc = 0x2295B8u;
            goto label_2295b8;
        }
    }
    ctx->pc = 0x2295B0u;
    // 0x2295b0: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2295B0u;
    {
        const bool branch_taken_0x2295b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2295b0) {
            ctx->pc = 0x2295B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2295B0u;
            // 0x2295b4: 0x8e430334  lw          $v1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2295D4u;
            goto label_2295d4;
        }
    }
    ctx->pc = 0x2295B8u;
label_2295b8:
    // 0x2295b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2295b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295bc: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x2295BCu;
    SET_GPR_U32(ctx, 31, 0x2295C4u);
    ctx->pc = 0x2295C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295BCu;
    // 0x2295c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x2295BCu, 0x2295C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295C4u;
label_2295c4:
    // 0x2295c4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2295c8: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x2295C8u;
    SET_GPR_U32(ctx, 31, 0x2295D0u);
    ctx->pc = 0x2295CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295C8u;
    // 0x2295cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2295C8u, 0x2295D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295D0u;
label_2295d0:
    // 0x2295d0: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2295d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2295d4:
    // 0x2295d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2295d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2295d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2295D8u;
    {
        const bool branch_taken_0x2295d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295D8u;
        // 0x2295dc: 0xa06201a6  sb          $v0, 0x1A6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 422), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295d8) {
            ctx->pc = 0x2295E8u;
            goto label_2295e8;
        }
    }
    ctx->pc = 0x2295E0u;
label_2295e0:
    // 0x2295e0: 0xc069b5e  jal         func_1A6D78
    ctx->pc = 0x2295E0u;
    SET_GPR_U32(ctx, 31, 0x2295E8u);
    ctx->pc = 0x2295E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295E0u;
    // 0x2295e4: 0x240505a9  addiu       $a1, $zero, 0x5A9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1449));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D78u, 0x2295E0u, 0x2295E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295E8u;
label_2295e8:
    // 0x2295e8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2295e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2295ec: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x2295ECu;
    SET_GPR_U32(ctx, 31, 0x2295F4u);
    ctx->pc = 0x2295F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295ECu;
    // 0x2295f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2295ECu, 0x2295F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295F4u;
label_2295f4:
    // 0x2295f4: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x2295F4u;
    SET_GPR_U32(ctx, 31, 0x2295FCu);
    ctx->pc = 0x2295F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295F4u;
    // 0x2295f8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x2295F4u, 0x2295FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295FCu;
label_2295fc:
    // 0x2295fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2295FCu;
    {
        const bool branch_taken_0x2295fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295FCu;
        // 0x229600: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295fc) {
            ctx->pc = 0x229634u;
            goto label_229634;
        }
    }
    ctx->pc = 0x229604u;
label_229604:
    // 0x229604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229604u;
    {
        const bool branch_taken_0x229604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229604u;
        // 0x229608: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229604) {
            ctx->pc = 0x22961Cu;
            goto label_22961c;
        }
    }
    ctx->pc = 0x22960Cu;
    // 0x22960c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22960Cu;
    SET_GPR_U32(ctx, 31, 0x229614u);
    ctx->pc = 0x229610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22960Cu;
    // 0x229610: 0x240605a4  addiu       $a2, $zero, 0x5A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22960Cu, 0x229614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229614u;
label_229614:
    // 0x229614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229614u;
    {
        const bool branch_taken_0x229614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229614u;
        // 0x229618: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229614) {
            ctx->pc = 0x229628u;
            goto label_229628;
        }
    }
    ctx->pc = 0x22961Cu;
label_22961c:
    // 0x22961c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22961Cu;
    SET_GPR_U32(ctx, 31, 0x229624u);
    ctx->pc = 0x229620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22961Cu;
    // 0x229620: 0x240605a5  addiu       $a2, $zero, 0x5A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1445));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22961Cu, 0x229624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229624u;
label_229624:
    // 0x229624: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229628:
    // 0x229628: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x229628u;
    SET_GPR_U32(ctx, 31, 0x229630u);
    ctx->pc = 0x22962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229628u;
    // 0x22962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x229628u, 0x229630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229630u;
label_229630:
    // 0x229630: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229634:
    // 0x229634: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x229638: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229638u;
    SET_GPR_U32(ctx, 31, 0x229640u);
    ctx->pc = 0x22963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229638u;
    // 0x22963c: 0x240605a2  addiu       $a2, $zero, 0x5A2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229638u, 0x229640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229640u;
label_229640:
    // 0x229640: 0x8e430390  lw          $v1, 0x390($s2)
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 912)));
    // 0x229644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229648: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x229648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x22964c: 0x100003e0  b           . + 4 + (0x3E0 << 2)
    ctx->pc = 0x22964Cu;
    {
        const bool branch_taken_0x22964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22964Cu;
        // 0x229650: 0xae430390  sw          $v1, 0x390($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22964c) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229654u;
label_229654:
    // 0x229654: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x229654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x229658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229658u;
    {
        const bool branch_taken_0x229658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229658u;
        // 0x22965c: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229658) {
            ctx->pc = 0x229670u;
            goto label_229670;
        }
    }
    ctx->pc = 0x229660u;
    // 0x229660: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229660u;
    SET_GPR_U32(ctx, 31, 0x229668u);
    ctx->pc = 0x229664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229660u;
    // 0x229664: 0x240605a4  addiu       $a2, $zero, 0x5A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229660u, 0x229668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229668u;
label_229668:
    // 0x229668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229668u;
    {
        const bool branch_taken_0x229668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229668u;
        // 0x22966c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229668) {
            ctx->pc = 0x22967Cu;
            goto label_22967c;
        }
    }
    ctx->pc = 0x229670u;
label_229670:
    // 0x229670: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229670u;
    SET_GPR_U32(ctx, 31, 0x229678u);
    ctx->pc = 0x229674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229670u;
    // 0x229674: 0x240605a5  addiu       $a2, $zero, 0x5A5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1445));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229670u, 0x229678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229678u;
label_229678:
    // 0x229678: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22967c:
    // 0x22967c: 0xc069b5e  jal         func_1A6D78
    ctx->pc = 0x22967Cu;
    SET_GPR_U32(ctx, 31, 0x229684u);
    ctx->pc = 0x229680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22967Cu;
    // 0x229680: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D78u, 0x22967Cu, 0x229684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229684u;
label_229684:
    // 0x229684: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229688: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x229688u;
    SET_GPR_U32(ctx, 31, 0x229690u);
    ctx->pc = 0x22968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229688u;
    // 0x22968c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x229688u, 0x229690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229690u;
label_229690:
    // 0x229690: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229694:
    // 0x229694: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x229694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x229698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229698u;
    {
        const bool branch_taken_0x229698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229698u;
        // 0x22969c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229698) {
            ctx->pc = 0x2296B0u;
            goto label_2296b0;
        }
    }
    ctx->pc = 0x2296A0u;
    // 0x2296a0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x2296A0u;
    SET_GPR_U32(ctx, 31, 0x2296A8u);
    ctx->pc = 0x2296A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296A0u;
    // 0x2296a4: 0x2406059e  addiu       $a2, $zero, 0x59E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1438));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x2296A0u, 0x2296A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296A8u;
label_2296a8:
    // 0x2296a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2296A8u;
    {
        const bool branch_taken_0x2296a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2296ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296A8u;
        // 0x2296ac: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296a8) {
            ctx->pc = 0x2296BCu;
            goto label_2296bc;
        }
    }
    ctx->pc = 0x2296B0u;
label_2296b0:
    // 0x2296b0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x2296B0u;
    SET_GPR_U32(ctx, 31, 0x2296B8u);
    ctx->pc = 0x2296B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296B0u;
    // 0x2296b4: 0x2406059f  addiu       $a2, $zero, 0x59F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1439));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x2296B0u, 0x2296B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296B8u;
label_2296b8:
    // 0x2296b8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2296b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2296bc:
    // 0x2296bc: 0xc069b56  jal         func_1A6D58
    ctx->pc = 0x2296BCu;
    SET_GPR_U32(ctx, 31, 0x2296C4u);
    ctx->pc = 0x2296C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296BCu;
    // 0x2296c0: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D58u, 0x2296BCu, 0x2296C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296C4u;
label_2296c4:
    // 0x2296c4: 0x100003c2  b           . + 4 + (0x3C2 << 2)
    ctx->pc = 0x2296C4u;
    {
        const bool branch_taken_0x2296c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2296C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296C4u;
        // 0x2296c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296c4) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x2296CCu;
label_2296cc:
    // 0x2296cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2296ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2296d0: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2296D0u;
    {
        const bool branch_taken_0x2296d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2296d0) {
            ctx->pc = 0x2296D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296D0u;
            // 0x2296d4: 0xc64100d0  lwc1        $f1, 0xD0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x229710u;
            goto label_229710;
        }
    }
    ctx->pc = 0x2296D8u;
    // 0x2296d8: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2296dc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2296dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2296e0: 0x2442ffea  addiu       $v0, $v0, -0x16
    ctx->pc = 0x2296e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
    // 0x2296e4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2296e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2296e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2296E8u;
    {
        const bool branch_taken_0x2296e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296e8) {
            ctx->pc = 0x2296ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296E8u;
            // 0x2296ec: 0xc64100d0  lwc1        $f1, 0xD0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x229710u;
            goto label_229710;
        }
    }
    ctx->pc = 0x2296F0u;
    // 0x2296f0: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x2296f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2296f4: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x2296F4u;
    SET_GPR_U32(ctx, 31, 0x2296FCu);
    ctx->pc = 0x2296F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296F4u;
    // 0x2296f8: 0x24050168  addiu       $a1, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x2296F4u, 0x2296FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296FCu;
label_2296fc:
    // 0x2296fc: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x2296fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x229700: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x229700u;
    SET_GPR_U32(ctx, 31, 0x229708u);
    ctx->pc = 0x229704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229700u;
    // 0x229704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x229700u, 0x229708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229708u;
label_229708:
    // 0x229708: 0x100003b1  b           . + 4 + (0x3B1 << 2)
    ctx->pc = 0x229708u;
    {
        const bool branch_taken_0x229708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229708u;
        // 0x22970c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229708) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229710u;
label_229710:
    // 0x229710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229714: 0x0  nop
    ctx->pc = 0x229714u;
    // NOP
    // 0x229718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22971c: 0x0  nop
    ctx->pc = 0x22971cu;
    // NOP
    // 0x229720: 0x450103ab  bc1t        . + 4 + (0x3AB << 2)
    ctx->pc = 0x229720u;
    {
        const bool branch_taken_0x229720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229720u;
        // 0x229724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229720) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229728u;
    // 0x229728: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x22972c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229734: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229734u;
    {
        const bool branch_taken_0x229734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229734u;
        // 0x229738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229734) {
            ctx->pc = 0x229750u;
            goto label_229750;
        }
    }
    ctx->pc = 0x22973Cu;
    // 0x22973c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229740: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229740u;
    {
        const bool branch_taken_0x229740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229740u;
        // 0x229744: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229740) {
            ctx->pc = 0x229750u;
            goto label_229750;
        }
    }
    ctx->pc = 0x229748u;
    // 0x229748: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x229748u;
    {
        const bool branch_taken_0x229748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229748) {
            ctx->pc = 0x229754u;
            goto label_229754;
        }
    }
    ctx->pc = 0x229750u;
label_229750:
    // 0x229750: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229754:
    // 0x229754: 0x1080022f  beqz        $a0, . + 4 + (0x22F << 2)
    ctx->pc = 0x229754u;
    {
        const bool branch_taken_0x229754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x229754) {
            ctx->pc = 0x22A014u;
            goto label_22a014;
        }
    }
    ctx->pc = 0x22975Cu;
    // 0x22975c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x22975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x229760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229764: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x229764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x229768: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22976c: 0x8c960004  lw          $s6, 0x4($a0)
    ctx->pc = 0x22976cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x229770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229778: 0x12c00028  beqz        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x229778u;
    {
        const bool branch_taken_0x229778 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x22977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229778u;
        // 0x22977c: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229778) {
            ctx->pc = 0x22981Cu;
            goto label_22981c;
        }
    }
    ctx->pc = 0x229780u;
    // 0x229780: 0xc089490  jal         func_225240
    ctx->pc = 0x229780u;
    SET_GPR_U32(ctx, 31, 0x229788u);
    ctx->pc = 0x229784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229780u;
    // 0x229784: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x229780u, 0x229788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229788u;
label_229788:
    // 0x229788: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x229788u;
    {
        const bool branch_taken_0x229788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229788u;
        // 0x22978c: 0x26e2ff7d  addiu       $v0, $s7, -0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229788) {
            ctx->pc = 0x229820u;
            goto label_229820;
        }
    }
    ctx->pc = 0x229790u;
    // 0x229790: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x229794: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x229794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x229798: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x229798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x22979c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22979Cu;
    {
        const bool branch_taken_0x22979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2297A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22979Cu;
        // 0x2297a0: 0x26e2ff7d  addiu       $v0, $s7, -0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22979c) {
            ctx->pc = 0x229820u;
            goto label_229820;
        }
    }
    ctx->pc = 0x2297A4u;
    // 0x2297a4: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x2297a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x2297a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2297a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2297ac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2297ACu;
    {
        const bool branch_taken_0x2297ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2297B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297ACu;
        // 0x2297b0: 0x26e2ff7d  addiu       $v0, $s7, -0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297ac) {
            ctx->pc = 0x229820u;
            goto label_229820;
        }
    }
    ctx->pc = 0x2297B4u;
    // 0x2297b4: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x2297b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2297b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297bc: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x2297bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x2297c0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2297c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2297c4: 0xc04785a  jal         func_11E168
    ctx->pc = 0x2297C4u;
    SET_GPR_U32(ctx, 31, 0x2297CCu);
    ctx->pc = 0x2297C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297C4u;
    // 0x2297c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x2297C4u, 0x2297CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297CCu;
label_2297cc:
    // 0x2297cc: 0x8c5100b0  lw          $s1, 0xB0($v0)
    ctx->pc = 0x2297ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2297d0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2297d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2297d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2297d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2297d8: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x2297d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2297dc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2297DCu;
    {
        const bool branch_taken_0x2297dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2297E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297DCu;
        // 0x2297e0: 0x8ed301d4  lw          $s3, 0x1D4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297dc) {
            ctx->pc = 0x22981Cu;
            goto label_22981c;
        }
    }
    ctx->pc = 0x2297E4u;
    // 0x2297e4: 0xc044150  jal         func_110540
    ctx->pc = 0x2297E4u;
    SET_GPR_U32(ctx, 31, 0x2297ECu);
    ctx->pc = 0x2297E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297E4u;
    // 0x2297e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110540u, 0x2297E4u, 0x2297ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297ECu;
label_2297ec:
    // 0x2297ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2297ECu;
    {
        const bool branch_taken_0x2297ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2297F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297ECu;
        // 0x2297f0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297ec) {
            ctx->pc = 0x22981Cu;
            goto label_22981c;
        }
    }
    ctx->pc = 0x2297F4u;
    // 0x2297f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2297f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297f8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x2297f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x2297fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2297fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229800: 0x27a7013c  addiu       $a3, $sp, 0x13C
    ctx->pc = 0x229800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x229804: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x229804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x229808: 0xc04aeda  jal         func_12BB68
    ctx->pc = 0x229808u;
    SET_GPR_U32(ctx, 31, 0x229810u);
    ctx->pc = 0x22980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229808u;
    // 0x22980c: 0x27a90130  addiu       $t1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB68u, 0x229808u, 0x229810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229810u;
label_229810:
    // 0x229810: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x229810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x229814: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x229814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x229818: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x229818u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_22981c:
    // 0x22981c: 0x26e2ff7d  addiu       $v0, $s7, -0x83
    ctx->pc = 0x22981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967165));
label_229820:
    // 0x229820: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x229820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x229824: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x229824u;
    {
        const bool branch_taken_0x229824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229824) {
            ctx->pc = 0x229828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229824u;
            // 0x229828: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229838u;
            goto label_229838;
        }
    }
    ctx->pc = 0x22982Cu;
    // 0x22982c: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22982Cu;
    {
        const bool branch_taken_0x22982c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x22982c) {
            ctx->pc = 0x229830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22982Cu;
            // 0x229830: 0x8ec30334  lw          $v1, 0x334($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22984Cu;
            goto label_22984c;
        }
    }
    ctx->pc = 0x229834u;
    // 0x229834: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229838:
    // 0x229838: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22983c: 0xc069892  jal         func_1A6248
    ctx->pc = 0x22983Cu;
    SET_GPR_U32(ctx, 31, 0x229844u);
    ctx->pc = 0x229840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22983Cu;
    // 0x229840: 0x24050366  addiu       $a1, $zero, 0x366 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22983Cu, 0x229844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229844u;
label_229844:
    // 0x229844: 0x10000362  b           . + 4 + (0x362 << 2)
    ctx->pc = 0x229844u;
    {
        const bool branch_taken_0x229844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229844u;
        // 0x229848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229844) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x22984Cu;
label_22984c:
    // 0x22984c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x22984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x229850: 0x38420037  xori        $v0, $v0, 0x37
    ctx->pc = 0x229850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)55);
    // 0x229854: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x229854u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x229858: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x229858u;
    {
        const bool branch_taken_0x229858 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x229858) {
            ctx->pc = 0x22985Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229858u;
            // 0x22985c: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22987Cu;
            goto label_22987c;
        }
    }
    ctx->pc = 0x229860u;
    // 0x229860: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x229864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229868: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22986c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22986Cu;
    {
        const bool branch_taken_0x22986c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22986c) {
            ctx->pc = 0x229870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22986Cu;
            // 0x229870: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22987Cu;
            goto label_22987c;
        }
    }
    ctx->pc = 0x229874u;
label_229874:
    // 0x229874: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x229874u;
    {
        const bool branch_taken_0x229874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229874u;
        // 0x229878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229874) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x22987Cu;
label_22987c:
    // 0x22987c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x229880: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x229880u;
    {
        const bool branch_taken_0x229880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229880u;
        // 0x229884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229880) {
            ctx->pc = 0x2298F0u;
            goto label_2298f0;
        }
    }
    ctx->pc = 0x229888u;
    // 0x229888: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x229888u;
    SET_GPR_U32(ctx, 31, 0x229890u);
    ctx->pc = 0x22988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229888u;
    // 0x22988c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x229888u, 0x229890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229890u;
label_229890:
    // 0x229890: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229890u;
    {
        const bool branch_taken_0x229890 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x229894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229890u;
        // 0x229894: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229890) {
            ctx->pc = 0x2298ACu;
            goto label_2298ac;
        }
    }
    ctx->pc = 0x229898u;
    // 0x229898: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x229898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22989c: 0x0  nop
    ctx->pc = 0x22989cu;
    // NOP
    // 0x2298a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2298a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2298a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2298A4u;
    {
        const bool branch_taken_0x2298a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2298a4) {
            ctx->pc = 0x2298C4u;
            goto label_2298c4;
        }
    }
    ctx->pc = 0x2298ACu;
label_2298ac:
    // 0x2298ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2298acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2298b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2298b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2298b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2298b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2298b8: 0x0  nop
    ctx->pc = 0x2298b8u;
    // NOP
    // 0x2298bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2298bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2298c0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2298c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2298c4:
    // 0x2298c4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2298C4u;
    SET_GPR_U32(ctx, 31, 0x2298CCu);
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2298C4u, 0x2298CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298CCu;
label_2298cc:
    // 0x2298cc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2298ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2298d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2298d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2298d4: 0xc069892  jal         func_1A6248
    ctx->pc = 0x2298D4u;
    SET_GPR_U32(ctx, 31, 0x2298DCu);
    ctx->pc = 0x2298D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298D4u;
    // 0x2298d8: 0x24450363  addiu       $a1, $v0, 0x363 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 867));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x2298D4u, 0x2298DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298DCu;
label_2298dc:
    // 0x2298dc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2298dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2298e0: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x2298E0u;
    SET_GPR_U32(ctx, 31, 0x2298E8u);
    ctx->pc = 0x2298E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298E0u;
    // 0x2298e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2298E0u, 0x2298E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298E8u;
label_2298e8:
    // 0x2298e8: 0x10000339  b           . + 4 + (0x339 << 2)
    ctx->pc = 0x2298E8u;
    {
        const bool branch_taken_0x2298e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298E8u;
        // 0x2298ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298e8) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x2298F0u;
label_2298f0:
    // 0x2298f0: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2298f4: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2298f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2298f8: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2298f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x2298fc: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2298fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x229900: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x229900u;
    {
        const bool branch_taken_0x229900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229900u;
        // 0x229904: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229900) {
            ctx->pc = 0x229930u;
            goto label_229930;
        }
    }
    ctx->pc = 0x229908u;
    // 0x229908: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229908u;
    {
        const bool branch_taken_0x229908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229908u;
        // 0x22990c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229908) {
            ctx->pc = 0x229930u;
            goto label_229930;
        }
    }
    ctx->pc = 0x229910u;
    // 0x229910: 0x240407a1  addiu       $a0, $zero, 0x7A1
    ctx->pc = 0x229910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    // 0x229914: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x229914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229918: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22991c: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22991Cu;
    {
        const bool branch_taken_0x22991c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22991c) {
            ctx->pc = 0x229920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22991Cu;
            // 0x229920: 0x8ec30338  lw          $v1, 0x338($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229934u;
            goto label_229934;
        }
    }
    ctx->pc = 0x229924u;
    // 0x229924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229928: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x229928u;
    SET_GPR_U32(ctx, 31, 0x229930u);
    ctx->pc = 0x22992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229928u;
    // 0x22992c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x229928u, 0x229930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229930u;
label_229930:
    // 0x229930: 0x8ec30338  lw          $v1, 0x338($s6)
    ctx->pc = 0x229930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 824)));
label_229934:
    // 0x229934: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x229934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x229938: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x22993c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x22993cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x229940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229944: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x229944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x229948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22994c: 0x8cb70028  lw          $s7, 0x28($a1)
    ctx->pc = 0x22994cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x229950: 0xc08807a  jal         func_2201E8
    ctx->pc = 0x229950u;
    SET_GPR_U32(ctx, 31, 0x229958u);
    ctx->pc = 0x229954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229950u;
    // 0x229954: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201E8u, 0x229950u, 0x229958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229958u;
label_229958:
    // 0x229958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x229958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22995c: 0xc09694c  jal         func_25A530
    ctx->pc = 0x22995Cu;
    SET_GPR_U32(ctx, 31, 0x229964u);
    ctx->pc = 0x229960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22995Cu;
    // 0x229960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A530u, 0x22995Cu, 0x229964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229964u;
label_229964:
    // 0x229964: 0x2179823  subu        $s3, $s0, $s7
    ctx->pc = 0x229964u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x229968: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x229968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22996c: 0xc0d7656  jal         func_35D958
    ctx->pc = 0x22996Cu;
    SET_GPR_U32(ctx, 31, 0x229974u);
    ctx->pc = 0x229970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22996Cu;
    // 0x229970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D958u, 0x22996Cu, 0x229974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229974u;
label_229974:
    // 0x229974: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x229974u;
    {
        const bool branch_taken_0x229974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229974u;
        // 0x229978: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229974) {
            ctx->pc = 0x2299A4u;
            goto label_2299a4;
        }
    }
    ctx->pc = 0x22997Cu;
    // 0x22997c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x22997cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x229980: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x229980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x229984: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x229984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229988: 0xc096a7a  jal         func_25A9E8
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x24a5003c  addiu       $a1, $a1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A9E8u, 0x229988u, 0x229990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0xa242070c  sb          $v0, 0x70C($s2)
    ctx->pc = 0x229990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1804), (uint8_t)GPR_U32(ctx, 2));
    // 0x229994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x229994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229998: 0xc0d7658  jal         func_35D960
    ctx->pc = 0x229998u;
    SET_GPR_U32(ctx, 31, 0x2299A0u);
    ctx->pc = 0x22999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229998u;
    // 0x22999c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D960u, 0x229998u, 0x2299A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299A0u;
label_2299a0:
    // 0x2299a0: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x2299a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_2299a4:
    // 0x2299a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2299A4u;
    {
        const bool branch_taken_0x2299a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2299a4) {
            ctx->pc = 0x2299B4u;
            goto label_2299b4;
        }
    }
    ctx->pc = 0x2299ACu;
    // 0x2299ac: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2299b0: 0x1ea00b  movn        $s4, $zero, $fp
    ctx->pc = 0x2299b0u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_2299b4:
    // 0x2299b4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2299B4u;
    {
        const bool branch_taken_0x2299b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2299B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299B4u;
        // 0x2299b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299b4) {
            ctx->pc = 0x229A30u;
            goto label_229a30;
        }
    }
    ctx->pc = 0x2299BCu;
    // 0x2299bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2299c0: 0x27a50144  addiu       $a1, $sp, 0x144
    ctx->pc = 0x2299c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x2299c4: 0xc096a10  jal         func_25A840
    ctx->pc = 0x2299C4u;
    SET_GPR_U32(ctx, 31, 0x2299CCu);
    ctx->pc = 0x2299C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C4u;
    // 0x2299c8: 0x1e300b  movn        $a2, $zero, $fp (Delay Slot)
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A840u, 0x2299C4u, 0x2299CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299CCu;
label_2299cc:
    // 0x2299cc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2299ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2299d0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2299d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2299d4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2299d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2299d8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x2299D8u;
    SET_GPR_U32(ctx, 31, 0x2299E0u);
    ctx->pc = 0x2299DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299D8u;
    // 0x2299dc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x2299D8u, 0x2299E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299E0u;
label_2299e0:
    // 0x2299e0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2299e4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x2299e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2299e8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x2299E8u;
    SET_GPR_U32(ctx, 31, 0x2299F0u);
    ctx->pc = 0x2299ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299E8u;
    // 0x2299ec: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x2299E8u, 0x2299F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299F0u;
label_2299f0:
    // 0x2299f0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2299f4: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2299f8: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x2299F8u;
    SET_GPR_U32(ctx, 31, 0x229A00u);
    ctx->pc = 0x2299FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299F8u;
    // 0x2299fc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x2299F8u, 0x229A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A00u;
label_229a00:
    // 0x229a00: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229a04: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x229a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x229a08: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229A08u;
    SET_GPR_U32(ctx, 31, 0x229A10u);
    ctx->pc = 0x229A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A08u;
    // 0x229a0c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229A08u, 0x229A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A10u;
label_229a10:
    // 0x229a10: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229a14: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x229A14u;
    SET_GPR_U32(ctx, 31, 0x229A1Cu);
    ctx->pc = 0x229A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A14u;
    // 0x229a18: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x229A14u, 0x229A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A1Cu;
label_229a1c:
    // 0x229a1c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229a20: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x229A20u;
    SET_GPR_U32(ctx, 31, 0x229A28u);
    ctx->pc = 0x229A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A20u;
    // 0x229a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x229A20u, 0x229A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A28u;
label_229a28:
    // 0x229a28: 0x100002e9  b           . + 4 + (0x2E9 << 2)
    ctx->pc = 0x229A28u;
    {
        const bool branch_taken_0x229a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A28u;
        // 0x229a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a28) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229A30u;
label_229a30:
    // 0x229a30: 0x53c00082  beql        $fp, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x229A30u;
    {
        const bool branch_taken_0x229a30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a30) {
            ctx->pc = 0x229A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229A30u;
            // 0x229a34: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229C3Cu;
            goto label_229c3c;
        }
    }
    ctx->pc = 0x229A38u;
    // 0x229a38: 0xc08f64a  jal         func_23D928
    ctx->pc = 0x229A38u;
    SET_GPR_U32(ctx, 31, 0x229A40u);
    ctx->pc = 0x229A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A38u;
    // 0x229a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D928u, 0x229A38u, 0x229A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A40u;
label_229a40:
    // 0x229a40: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x229A40u;
    {
        const bool branch_taken_0x229a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A40u;
        // 0x229a44: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a40) {
            ctx->pc = 0x229C38u;
            goto label_229c38;
        }
    }
    ctx->pc = 0x229A48u;
    // 0x229a48: 0x8ec20334  lw          $v0, 0x334($s6)
    ctx->pc = 0x229a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
    // 0x229a4c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x229a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x229a50: 0x10640079  beq         $v1, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x229A50u;
    {
        const bool branch_taken_0x229a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x229A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A50u;
        // 0x229a54: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a50) {
            ctx->pc = 0x229C38u;
            goto label_229c38;
        }
    }
    ctx->pc = 0x229A58u;
    // 0x229a58: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x229a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x229a5c: 0xc4419864  lwc1        $f1, -0x679C($v0)
    ctx->pc = 0x229a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a60: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x229a64: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x229a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229a6c: 0x0  nop
    ctx->pc = 0x229a6cu;
    // NOP
    // 0x229a70: 0x45000072  bc1f        . + 4 + (0x72 << 2)
    ctx->pc = 0x229A70u;
    {
        const bool branch_taken_0x229a70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A70u;
        // 0x229a74: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a70) {
            ctx->pc = 0x229C3Cu;
            goto label_229c3c;
        }
    }
    ctx->pc = 0x229A78u;
    // 0x229a78: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x229a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x229a7c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x229A7Cu;
    {
        const bool branch_taken_0x229a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A7Cu;
        // 0x229a80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a7c) {
            ctx->pc = 0x229AD0u;
            goto label_229ad0;
        }
    }
    ctx->pc = 0x229A84u;
    // 0x229a84: 0xc08da92  jal         func_236A48
    ctx->pc = 0x229A84u;
    SET_GPR_U32(ctx, 31, 0x229A8Cu);
    ctx->pc = 0x229A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A84u;
    // 0x229a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x229A84u, 0x229A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A8Cu;
label_229a8c:
    // 0x229a8c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x229A8Cu;
    {
        const bool branch_taken_0x229a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a8c) {
            ctx->pc = 0x229A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229A8Cu;
            // 0x229a90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229AC8u;
            goto label_229ac8;
        }
    }
    ctx->pc = 0x229A94u;
    // 0x229a94: 0xc08db10  jal         func_236C40
    ctx->pc = 0x229A94u;
    SET_GPR_U32(ctx, 31, 0x229A9Cu);
    ctx->pc = 0x229A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A94u;
    // 0x229a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C40u, 0x229A94u, 0x229A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A9Cu;
label_229a9c:
    // 0x229a9c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x229A9Cu;
    {
        const bool branch_taken_0x229a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a9c) {
            ctx->pc = 0x229AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229A9Cu;
            // 0x229aa0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229AC8u;
            goto label_229ac8;
        }
    }
    ctx->pc = 0x229AA4u;
    // 0x229aa4: 0xc08db00  jal         func_236C00
    ctx->pc = 0x229AA4u;
    SET_GPR_U32(ctx, 31, 0x229AACu);
    ctx->pc = 0x229AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AA4u;
    // 0x229aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x229AA4u, 0x229AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AACu;
label_229aac:
    // 0x229aac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x229AACu;
    {
        const bool branch_taken_0x229aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229aac) {
            ctx->pc = 0x229AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229AACu;
            // 0x229ab0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229AC8u;
            goto label_229ac8;
        }
    }
    ctx->pc = 0x229AB4u;
    // 0x229ab4: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x229AB4u;
    SET_GPR_U32(ctx, 31, 0x229ABCu);
    ctx->pc = 0x229AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AB4u;
    // 0x229ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x229AB4u, 0x229ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229ABCu;
label_229abc:
    // 0x229abc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229ABCu;
    {
        const bool branch_taken_0x229abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ABCu;
        // 0x229ac0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229abc) {
            ctx->pc = 0x229ADCu;
            goto label_229adc;
        }
    }
    ctx->pc = 0x229AC4u;
    // 0x229ac4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x229ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229ac8:
    // 0x229ac8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229AC8u;
    {
        const bool branch_taken_0x229ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AC8u;
        // 0x229acc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ac8) {
            ctx->pc = 0x229ADCu;
            goto label_229adc;
        }
    }
    ctx->pc = 0x229AD0u;
label_229ad0:
    // 0x229ad0: 0xc08da92  jal         func_236A48
    ctx->pc = 0x229AD0u;
    SET_GPR_U32(ctx, 31, 0x229AD8u);
    ctx->pc = 0x229AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AD0u;
    // 0x229ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x229AD0u, 0x229AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AD8u;
label_229ad8:
    // 0x229ad8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x229ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_229adc:
    // 0x229adc: 0x1040ff65  beqz        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x229ADCu;
    {
        const bool branch_taken_0x229adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ADCu;
        // 0x229ae0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229adc) {
            ctx->pc = 0x229874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229874;
        }
    }
    ctx->pc = 0x229AE4u;
    // 0x229ae4: 0xc08da92  jal         func_236A48
    ctx->pc = 0x229AE4u;
    SET_GPR_U32(ctx, 31, 0x229AECu);
    ctx->pc = 0x229AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AE4u;
    // 0x229ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x229AE4u, 0x229AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AECu;
label_229aec:
    // 0x229aec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229AECu;
    {
        const bool branch_taken_0x229aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AECu;
        // 0x229af0: 0x27b10144  addiu       $s1, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229aec) {
            ctx->pc = 0x229B0Cu;
            goto label_229b0c;
        }
    }
    ctx->pc = 0x229AF4u;
    // 0x229af4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x229AF4u;
    SET_GPR_U32(ctx, 31, 0x229AFCu);
    ctx->pc = 0x229AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF4u;
    // 0x229af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x229AF4u, 0x229AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AFCu;
label_229afc:
    // 0x229afc: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x229afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x229b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x229b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229b04: 0x8c540028  lw          $s4, 0x28($v0)
    ctx->pc = 0x229b04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x229b08: 0x27b10144  addiu       $s1, $sp, 0x144
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_229b0c:
    // 0x229b0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b10: 0xc09695a  jal         func_25A568
    ctx->pc = 0x229B10u;
    SET_GPR_U32(ctx, 31, 0x229B18u);
    ctx->pc = 0x229B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B10u;
    // 0x229b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A568u, 0x229B10u, 0x229B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B18u;
label_229b18:
    // 0x229b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b20: 0xc09697e  jal         func_25A5F8
    ctx->pc = 0x229B20u;
    SET_GPR_U32(ctx, 31, 0x229B28u);
    ctx->pc = 0x229B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B20u;
    // 0x229b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5F8u, 0x229B20u, 0x229B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B28u;
label_229b28:
    // 0x229b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b34: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x229B34u;
    SET_GPR_U32(ctx, 31, 0x229B3Cu);
    ctx->pc = 0x229B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B34u;
    // 0x229b38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x229B34u, 0x229B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B3Cu;
label_229b3c:
    // 0x229b3c: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x229b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x229b40: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x229b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x229b44: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x229B44u;
    {
        const bool branch_taken_0x229b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B44u;
        // 0x229b48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b44) {
            ctx->pc = 0x229B5Cu;
            goto label_229b5c;
        }
    }
    ctx->pc = 0x229B4Cu;
    // 0x229b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b50: 0xc0969be  jal         func_25A6F8
    ctx->pc = 0x229B50u;
    SET_GPR_U32(ctx, 31, 0x229B58u);
    ctx->pc = 0x229B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B50u;
    // 0x229b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6F8u, 0x229B50u, 0x229B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B58u;
label_229b58:
    // 0x229b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229b5c:
    // 0x229b5c: 0xc64c00d0  lwc1        $f12, 0xD0($s2)
    ctx->pc = 0x229b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229b60: 0xc0969c4  jal         func_25A710
    ctx->pc = 0x229B60u;
    SET_GPR_U32(ctx, 31, 0x229B68u);
    ctx->pc = 0x229B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B60u;
    // 0x229b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A710u, 0x229B60u, 0x229B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B68u;
label_229b68:
    // 0x229b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x229b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b70: 0xc0969ea  jal         func_25A7A8
    ctx->pc = 0x229B70u;
    SET_GPR_U32(ctx, 31, 0x229B78u);
    ctx->pc = 0x229B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B70u;
    // 0x229b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7A8u, 0x229B70u, 0x229B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B78u;
label_229b78:
    // 0x229b78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b80: 0xc096a06  jal         func_25A818
    ctx->pc = 0x229B80u;
    SET_GPR_U32(ctx, 31, 0x229B88u);
    ctx->pc = 0x229B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B80u;
    // 0x229b84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A818u, 0x229B80u, 0x229B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B88u;
label_229b88:
    // 0x229b88: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229b8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229b90: 0xc069892  jal         func_1A6248
    ctx->pc = 0x229B90u;
    SET_GPR_U32(ctx, 31, 0x229B98u);
    ctx->pc = 0x229B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B90u;
    // 0x229b94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x229B90u, 0x229B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B98u;
label_229b98:
    // 0x229b98: 0x8ec40338  lw          $a0, 0x338($s6)
    ctx->pc = 0x229b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 824)));
    // 0x229b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ba0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229ba4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x229ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x229ba8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229BA8u;
    {
        const bool branch_taken_0x229ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BA8u;
        // 0x229bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ba8) {
            ctx->pc = 0x229BB8u;
            goto label_229bb8;
        }
    }
    ctx->pc = 0x229BB0u;
    // 0x229bb0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x229bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x229bb4: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x229bb4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_229bb8:
    // 0x229bb8: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x229BB8u;
    {
        const bool branch_taken_0x229bb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x229bb8) {
            ctx->pc = 0x229BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BB8u;
            // 0x229bbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229BF8u;
            goto label_229bf8;
        }
    }
    ctx->pc = 0x229BC0u;
    // 0x229bc0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x229bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x229bc4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229BC4u;
    {
        const bool branch_taken_0x229bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC4u;
        // 0x229bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bc4) {
            ctx->pc = 0x229BD4u;
            goto label_229bd4;
        }
    }
    ctx->pc = 0x229BCCu;
    // 0x229bcc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x229bd0: 0x28450083  slti        $a1, $v0, 0x83
    ctx->pc = 0x229bd0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_229bd4:
    // 0x229bd4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x229BD4u;
    {
        const bool branch_taken_0x229bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x229bd4) {
            ctx->pc = 0x229BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BD4u;
            // 0x229bd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229BF8u;
            goto label_229bf8;
        }
    }
    ctx->pc = 0x229BDCu;
    // 0x229bdc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x229be0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229BE0u;
    {
        const bool branch_taken_0x229be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BE0u;
        // 0x229be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229be0) {
            ctx->pc = 0x229BF0u;
            goto label_229bf0;
        }
    }
    ctx->pc = 0x229BE8u;
    // 0x229be8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x229be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x229bec: 0x28450097  slti        $a1, $v0, 0x97
    ctx->pc = 0x229becu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_229bf0:
    // 0x229bf0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x229BF0u;
    {
        const bool branch_taken_0x229bf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x229bf0) {
            ctx->pc = 0x229BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BF0u;
            // 0x229bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229BF8u;
            goto label_229bf8;
        }
    }
    ctx->pc = 0x229BF8u;
label_229bf8:
    // 0x229bf8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x229BF8u;
    {
        const bool branch_taken_0x229bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x229BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BF8u;
        // 0x229bfc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bf8) {
            ctx->pc = 0x229C10u;
            goto label_229c10;
        }
    }
    ctx->pc = 0x229C00u;
    // 0x229c00: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x229C00u;
    SET_GPR_U32(ctx, 31, 0x229C08u);
    ctx->pc = 0x229C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C00u;
    // 0x229c04: 0x24050174  addiu       $a1, $zero, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x229C00u, 0x229C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C08u;
label_229c08:
    // 0x229c08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x229C08u;
    {
        const bool branch_taken_0x229c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C08u;
        // 0x229c0c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c08) {
            ctx->pc = 0x229C1Cu;
            goto label_229c1c;
        }
    }
    ctx->pc = 0x229C10u;
label_229c10:
    // 0x229c10: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x229C10u;
    SET_GPR_U32(ctx, 31, 0x229C18u);
    ctx->pc = 0x229C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C10u;
    // 0x229c14: 0x24050179  addiu       $a1, $zero, 0x179 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 377));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x229C10u, 0x229C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C18u;
label_229c18:
    // 0x229c18: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229c1c:
    // 0x229c1c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x229C1Cu;
    SET_GPR_U32(ctx, 31, 0x229C24u);
    ctx->pc = 0x229C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C1Cu;
    // 0x229c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x229C1Cu, 0x229C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C24u;
label_229c24:
    // 0x229c24: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x229c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x229c28: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x229C28u;
    SET_GPR_U32(ctx, 31, 0x229C30u);
    ctx->pc = 0x229C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C28u;
    // 0x229c2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x229C28u, 0x229C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C30u;
label_229c30:
    // 0x229c30: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x229C30u;
    {
        const bool branch_taken_0x229c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C30u;
        // 0x229c34: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c30) {
            ctx->pc = 0x22A5C4u;
            goto label_22a5c4;
        }
    }
    ctx->pc = 0x229C38u;
label_229c38:
    // 0x229c38: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x229c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_229c3c:
    // 0x229c3c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x229c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x229c40: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x229C40u;
    {
        const bool branch_taken_0x229c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229c40) {
            ctx->pc = 0x229C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229C40u;
            // 0x229c44: 0x9242070c  lbu         $v0, 0x70C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229C6Cu;
            goto label_229c6c;
        }
    }
    ctx->pc = 0x229C48u;
    // 0x229c48: 0xc0b93ea  jal         func_2E4FA8
    ctx->pc = 0x229C48u;
    SET_GPR_U32(ctx, 31, 0x229C50u);
    ctx->pc = 0x229C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C48u;
    // 0x229c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FA8u, 0x229C48u, 0x229C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C50u;
label_229c50:
    // 0x229c50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x229C50u;
    {
        const bool branch_taken_0x229c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229c50) {
            ctx->pc = 0x229C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229C50u;
            // 0x229c54: 0x9242070c  lbu         $v0, 0x70C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229C6Cu;
            goto label_229c6c;
        }
    }
    ctx->pc = 0x229C58u;
    // 0x229c58: 0xc06c3f6  jal         func_1B0FD8
    ctx->pc = 0x229C58u;
    SET_GPR_U32(ctx, 31, 0x229C60u);
    ctx->pc = 0x229C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C58u;
    // 0x229c5c: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FD8u, 0x229C58u, 0x229C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C60u;
label_229c60:
    // 0x229c60: 0x1440025b  bnez        $v0, . + 4 + (0x25B << 2)
    ctx->pc = 0x229C60u;
    {
        const bool branch_taken_0x229c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C60u;
        // 0x229c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c60) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x229C68u;
    // 0x229c68: 0x9242070c  lbu         $v0, 0x70C($s2)
    ctx->pc = 0x229c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1804)));
label_229c6c:
    // 0x229c6c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x229C6Cu;
    {
        const bool branch_taken_0x229c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c6c) {
            ctx->pc = 0x229D38u;
            goto label_229d38;
        }
    }
    ctx->pc = 0x229C74u;
    // 0x229c74: 0x13c00017  beqz        $fp, . + 4 + (0x17 << 2)
    ctx->pc = 0x229C74u;
    {
        const bool branch_taken_0x229c74 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C74u;
        // 0x229c78: 0x27a50144  addiu       $a1, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c74) {
            ctx->pc = 0x229CD4u;
            goto label_229cd4;
        }
    }
    ctx->pc = 0x229C7Cu;
    // 0x229c7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x229c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x229c80: 0xc096a10  jal         func_25A840
    ctx->pc = 0x229C80u;
    SET_GPR_U32(ctx, 31, 0x229C88u);
    ctx->pc = 0x229C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C80u;
    // 0x229c84: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A840u, 0x229C80u, 0x229C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C88u;
label_229c88:
    // 0x229c88: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x229c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229c8c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x229c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x229c90: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229c94: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229C94u;
    SET_GPR_U32(ctx, 31, 0x229C9Cu);
    ctx->pc = 0x229C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C94u;
    // 0x229c98: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229C94u, 0x229C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C9Cu;
label_229c9c:
    // 0x229c9c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x229c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229ca0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x229ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x229ca4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229CA4u;
    SET_GPR_U32(ctx, 31, 0x229CACu);
    ctx->pc = 0x229CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CA4u;
    // 0x229ca8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229CA4u, 0x229CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CACu;
label_229cac:
    // 0x229cac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x229cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229cb0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x229cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x229cb4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229CB4u;
    SET_GPR_U32(ctx, 31, 0x229CBCu);
    ctx->pc = 0x229CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CB4u;
    // 0x229cb8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229CB4u, 0x229CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CBCu;
label_229cbc:
    // 0x229cbc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229cc0: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x229cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x229cc4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229CC4u;
    SET_GPR_U32(ctx, 31, 0x229CCCu);
    ctx->pc = 0x229CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CC4u;
    // 0x229cc8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229CC4u, 0x229CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CCCu;
label_229ccc:
    // 0x229ccc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x229CCCu;
    {
        const bool branch_taken_0x229ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229CCCu;
        // 0x229cd0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ccc) {
            ctx->pc = 0x229D28u;
            goto label_229d28;
        }
    }
    ctx->pc = 0x229CD4u;
label_229cd4:
    // 0x229cd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x229cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x229cd8: 0xc096a10  jal         func_25A840
    ctx->pc = 0x229CD8u;
    SET_GPR_U32(ctx, 31, 0x229CE0u);
    ctx->pc = 0x229CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CD8u;
    // 0x229cdc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A840u, 0x229CD8u, 0x229CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CE0u;
label_229ce0:
    // 0x229ce0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x229ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229ce4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x229ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x229ce8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229cec: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229CECu;
    SET_GPR_U32(ctx, 31, 0x229CF4u);
    ctx->pc = 0x229CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CECu;
    // 0x229cf0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229CECu, 0x229CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CF4u;
label_229cf4:
    // 0x229cf4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x229cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229cf8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x229cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x229cfc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229CFCu;
    SET_GPR_U32(ctx, 31, 0x229D04u);
    ctx->pc = 0x229D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229CFCu;
    // 0x229d00: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229CFCu, 0x229D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D04u;
label_229d04:
    // 0x229d04: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229d08: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x229d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x229d0c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229D0Cu;
    SET_GPR_U32(ctx, 31, 0x229D14u);
    ctx->pc = 0x229D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D0Cu;
    // 0x229d10: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229D0Cu, 0x229D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D14u;
label_229d14:
    // 0x229d14: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229d18: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x229d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x229d1c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x229D1Cu;
    SET_GPR_U32(ctx, 31, 0x229D24u);
    ctx->pc = 0x229D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D1Cu;
    // 0x229d20: 0x24060685  addiu       $a2, $zero, 0x685 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x229D1Cu, 0x229D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D24u;
label_229d24:
    // 0x229d24: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_229d28:
    // 0x229d28: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x229D28u;
    SET_GPR_U32(ctx, 31, 0x229D30u);
    ctx->pc = 0x229D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D28u;
    // 0x229d2c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x229D28u, 0x229D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D30u;
label_229d30:
    // 0x229d30: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x229D30u;
    {
        const bool branch_taken_0x229d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D30u;
        // 0x229d34: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d30) {
            ctx->pc = 0x22A004u;
            goto label_22a004;
        }
    }
    ctx->pc = 0x229D38u;
label_229d38:
    // 0x229d38: 0x13c00026  beqz        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x229D38u;
    {
        const bool branch_taken_0x229d38 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D38u;
        // 0x229d3c: 0x8fa20148  lw          $v0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d38) {
            ctx->pc = 0x229DD4u;
            goto label_229dd4;
        }
    }
    ctx->pc = 0x229D40u;
    // 0x229d40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229d44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229d48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229D48u;
    {
        const bool branch_taken_0x229d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D48u;
        // 0x229d4c: 0x27b00144  addiu       $s0, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d48) {
            ctx->pc = 0x229D5Cu;
            goto label_229d5c;
        }
    }
    ctx->pc = 0x229D50u;
    // 0x229d50: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229d54: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x229D54u;
    {
        const bool branch_taken_0x229d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D54u;
        // 0x229d58: 0x2405028f  addiu       $a1, $zero, 0x28F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d54) {
            ctx->pc = 0x229FF4u;
            goto label_229ff4;
        }
    }
    ctx->pc = 0x229D5Cu;
label_229d5c:
    // 0x229d5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d60: 0xc09695a  jal         func_25A568
    ctx->pc = 0x229D60u;
    SET_GPR_U32(ctx, 31, 0x229D68u);
    ctx->pc = 0x229D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D60u;
    // 0x229d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A568u, 0x229D60u, 0x229D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D68u;
label_229d68:
    // 0x229d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d70: 0xc09697e  jal         func_25A5F8
    ctx->pc = 0x229D70u;
    SET_GPR_U32(ctx, 31, 0x229D78u);
    ctx->pc = 0x229D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D70u;
    // 0x229d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5F8u, 0x229D70u, 0x229D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D78u;
label_229d78:
    // 0x229d78: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x229d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x229d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d84: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x229D84u;
    SET_GPR_U32(ctx, 31, 0x229D8Cu);
    ctx->pc = 0x229D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D84u;
    // 0x229d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x229D84u, 0x229D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D8Cu;
label_229d8c:
    // 0x229d8c: 0xc64c00d0  lwc1        $f12, 0xD0($s2)
    ctx->pc = 0x229d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229d90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d94: 0xc0969c4  jal         func_25A710
    ctx->pc = 0x229D94u;
    SET_GPR_U32(ctx, 31, 0x229D9Cu);
    ctx->pc = 0x229D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229D94u;
    // 0x229d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A710u, 0x229D94u, 0x229D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D9Cu;
label_229d9c:
    // 0x229d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229da0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229da4: 0xc0969e2  jal         func_25A788
    ctx->pc = 0x229DA4u;
    SET_GPR_U32(ctx, 31, 0x229DACu);
    ctx->pc = 0x229DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DA4u;
    // 0x229da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A788u, 0x229DA4u, 0x229DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DACu;
label_229dac:
    // 0x229dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229db4: 0xc0969f2  jal         func_25A7C8
    ctx->pc = 0x229DB4u;
    SET_GPR_U32(ctx, 31, 0x229DBCu);
    ctx->pc = 0x229DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DB4u;
    // 0x229db8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7C8u, 0x229DB4u, 0x229DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DBCu;
label_229dbc:
    // 0x229dbc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229dc4: 0xc069892  jal         func_1A6248
    ctx->pc = 0x229DC4u;
    SET_GPR_U32(ctx, 31, 0x229DCCu);
    ctx->pc = 0x229DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DC4u;
    // 0x229dc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x229DC4u, 0x229DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DCCu;
label_229dcc:
    // 0x229dcc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x229DCCu;
    {
        const bool branch_taken_0x229dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DCCu;
        // 0x229dd0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dcc) {
            ctx->pc = 0x22A004u;
            goto label_22a004;
        }
    }
    ctx->pc = 0x229DD4u;
label_229dd4:
    // 0x229dd4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x229dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x229dd8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x229dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x229ddc: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x229DDCu;
    {
        const bool branch_taken_0x229ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DDCu;
        // 0x229de0: 0x27b00144  addiu       $s0, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ddc) {
            ctx->pc = 0x229F80u;
            goto label_229f80;
        }
    }
    ctx->pc = 0x229DE4u;
    // 0x229de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dec: 0xc09695a  jal         func_25A568
    ctx->pc = 0x229DECu;
    SET_GPR_U32(ctx, 31, 0x229DF4u);
    ctx->pc = 0x229DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229DECu;
    // 0x229df0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A568u, 0x229DECu, 0x229DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DF4u;
label_229df4:
    // 0x229df4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x229df4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e00: 0xc09697e  jal         func_25A5F8
    ctx->pc = 0x229E00u;
    SET_GPR_U32(ctx, 31, 0x229E08u);
    ctx->pc = 0x229E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E00u;
    // 0x229e04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5F8u, 0x229E00u, 0x229E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E08u;
label_229e08:
    // 0x229e08: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x229e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x229e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e14: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x229E14u;
    SET_GPR_U32(ctx, 31, 0x229E1Cu);
    ctx->pc = 0x229E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E14u;
    // 0x229e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x229E14u, 0x229E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E1Cu;
label_229e1c:
    // 0x229e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e20: 0xc0969be  jal         func_25A6F8
    ctx->pc = 0x229E20u;
    SET_GPR_U32(ctx, 31, 0x229E28u);
    ctx->pc = 0x229E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E20u;
    // 0x229e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6F8u, 0x229E20u, 0x229E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E28u;
label_229e28:
    // 0x229e28: 0xc64c00d0  lwc1        $f12, 0xD0($s2)
    ctx->pc = 0x229e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e30: 0xc0969c4  jal         func_25A710
    ctx->pc = 0x229E30u;
    SET_GPR_U32(ctx, 31, 0x229E38u);
    ctx->pc = 0x229E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E30u;
    // 0x229e34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A710u, 0x229E30u, 0x229E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E38u;
label_229e38:
    // 0x229e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e40: 0xc0969e2  jal         func_25A788
    ctx->pc = 0x229E40u;
    SET_GPR_U32(ctx, 31, 0x229E48u);
    ctx->pc = 0x229E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E40u;
    // 0x229e44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A788u, 0x229E40u, 0x229E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E48u;
label_229e48:
    // 0x229e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e50: 0xc0969f2  jal         func_25A7C8
    ctx->pc = 0x229E50u;
    SET_GPR_U32(ctx, 31, 0x229E58u);
    ctx->pc = 0x229E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E50u;
    // 0x229e54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7C8u, 0x229E50u, 0x229E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E58u;
label_229e58:
    // 0x229e58: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x229e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229e5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x229e5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e60: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x229e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x229e64: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x229e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x229e68: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x229e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x229e6c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x229E6Cu;
    {
        const bool branch_taken_0x229e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229e6c) {
            ctx->pc = 0x229E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229E6Cu;
            // 0x229e70: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229EACu;
            goto label_229eac;
        }
    }
    ctx->pc = 0x229E74u;
    // 0x229e74: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x229e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x229e78: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229E78u;
    {
        const bool branch_taken_0x229e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229e78) {
            ctx->pc = 0x229E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229E78u;
            // 0x229e7c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229EACu;
            goto label_229eac;
        }
    }
    ctx->pc = 0x229E80u;
    // 0x229e80: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x229E80u;
    SET_GPR_U32(ctx, 31, 0x229E88u);
    ctx->pc = 0x229E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E80u;
    // 0x229e84: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x229E80u, 0x229E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E88u;
label_229e88:
    // 0x229e88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x229E88u;
    {
        const bool branch_taken_0x229e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229e88) {
            ctx->pc = 0x229E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229E88u;
            // 0x229e8c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229EACu;
            goto label_229eac;
        }
    }
    ctx->pc = 0x229E90u;
    // 0x229e90: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x229e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x229e94: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x229e98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229E98u;
    {
        const bool branch_taken_0x229e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E98u;
        // 0x229e9c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e98) {
            ctx->pc = 0x229EA8u;
            goto label_229ea8;
        }
    }
    ctx->pc = 0x229EA0u;
    // 0x229ea0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x229EA0u;
    {
        const bool branch_taken_0x229ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229ea0) {
            ctx->pc = 0x229EACu;
            goto label_229eac;
        }
    }
    ctx->pc = 0x229EA8u;
label_229ea8:
    // 0x229ea8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x229ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229eac:
    // 0x229eac: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x229EACu;
    {
        const bool branch_taken_0x229eac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x229eac) {
            ctx->pc = 0x229ECCu;
            goto label_229ecc;
        }
    }
    ctx->pc = 0x229EB4u;
    // 0x229eb4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x229eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x229eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x229eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229ebc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x229ec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229ec4: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x229ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x229ec8: 0x2c760001  sltiu       $s6, $v1, 0x1
    ctx->pc = 0x229ec8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_229ecc:
    // 0x229ecc: 0x56c00020  bnel        $s6, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x229ECCu;
    {
        const bool branch_taken_0x229ecc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x229ecc) {
            ctx->pc = 0x229ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229ECCu;
            // 0x229ed0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229F50u;
            goto label_229f50;
        }
    }
    ctx->pc = 0x229ED4u;
    // 0x229ed4: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229ed8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x229ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229edc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x229ee0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x229ee4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x229ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x229ee8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x229EE8u;
    {
        const bool branch_taken_0x229ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EE8u;
        // 0x229eec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ee8) {
            ctx->pc = 0x229F24u;
            goto label_229f24;
        }
    }
    ctx->pc = 0x229EF0u;
    // 0x229ef0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x229ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x229ef4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229EF4u;
    {
        const bool branch_taken_0x229ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x229ef4) {
            ctx->pc = 0x229EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229EF4u;
            // 0x229ef8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229EFCu;
    // 0x229efc: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x229EFCu;
    SET_GPR_U32(ctx, 31, 0x229F04u);
    ctx->pc = 0x229F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229EFCu;
    // 0x229f00: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x229EFCu, 0x229F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F04u;
label_229f04:
    // 0x229f04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x229F04u;
    {
        const bool branch_taken_0x229f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229f04) {
            ctx->pc = 0x229F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229F04u;
            // 0x229f08: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229F0Cu;
    // 0x229f0c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x229f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x229f10: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x229f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x229f14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229F14u;
    {
        const bool branch_taken_0x229f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x229F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F14u;
        // 0x229f18: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f14) {
            ctx->pc = 0x229F24u;
            goto label_229f24;
        }
    }
    ctx->pc = 0x229F1Cu;
    // 0x229f1c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x229F1Cu;
    {
        const bool branch_taken_0x229f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229f1c) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229F24u;
label_229f24:
    // 0x229f24: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x229f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229f28:
    // 0x229f28: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x229F28u;
    {
        const bool branch_taken_0x229f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f28) {
            ctx->pc = 0x229F48u;
            goto label_229f48;
        }
    }
    ctx->pc = 0x229F30u;
    // 0x229f30: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x229f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x229f34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229f38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x229f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x229f3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229f40: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x229f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x229f44: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x229f44u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_229f48:
    // 0x229f48: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x229F48u;
    {
        const bool branch_taken_0x229f48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F48u;
        // 0x229f4c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f48) {
            ctx->pc = 0x229F6Cu;
            goto label_229f6c;
        }
    }
    ctx->pc = 0x229F50u;
label_229f50:
    // 0x229f50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229f54: 0xc069892  jal         func_1A6248
    ctx->pc = 0x229F54u;
    SET_GPR_U32(ctx, 31, 0x229F5Cu);
    ctx->pc = 0x229F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F54u;
    // 0x229f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x229F54u, 0x229F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F5Cu;
label_229f5c:
    // 0x229f5c: 0xc06985e  jal         func_1A6178
    ctx->pc = 0x229F5Cu;
    SET_GPR_U32(ctx, 31, 0x229F64u);
    ctx->pc = 0x229F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F5Cu;
    // 0x229f60: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6178u, 0x229F5Cu, 0x229F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F64u;
label_229f64:
    // 0x229f64: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x229F64u;
    {
        const bool branch_taken_0x229f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F64u;
        // 0x229f68: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f64) {
            ctx->pc = 0x22A004u;
            goto label_22a004;
        }
    }
    ctx->pc = 0x229F6Cu;
label_229f6c:
    // 0x229f6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229f70: 0xc069892  jal         func_1A6248
    ctx->pc = 0x229F70u;
    SET_GPR_U32(ctx, 31, 0x229F78u);
    ctx->pc = 0x229F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F70u;
    // 0x229f74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x229F70u, 0x229F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F78u;
label_229f78:
    // 0x229f78: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x229F78u;
    {
        const bool branch_taken_0x229f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229F78u;
        // 0x229f7c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f78) {
            ctx->pc = 0x22A004u;
            goto label_22a004;
        }
    }
    ctx->pc = 0x229F80u;
label_229f80:
    // 0x229f80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f84: 0xc09695a  jal         func_25A568
    ctx->pc = 0x229F84u;
    SET_GPR_U32(ctx, 31, 0x229F8Cu);
    ctx->pc = 0x229F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F84u;
    // 0x229f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A568u, 0x229F84u, 0x229F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F8Cu;
label_229f8c:
    // 0x229f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f94: 0xc09697e  jal         func_25A5F8
    ctx->pc = 0x229F94u;
    SET_GPR_U32(ctx, 31, 0x229F9Cu);
    ctx->pc = 0x229F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229F94u;
    // 0x229f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5F8u, 0x229F94u, 0x229F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F9Cu;
label_229f9c:
    // 0x229f9c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x229f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x229fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fa8: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x229FA8u;
    SET_GPR_U32(ctx, 31, 0x229FB0u);
    ctx->pc = 0x229FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FA8u;
    // 0x229fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x229FA8u, 0x229FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FB0u;
label_229fb0:
    // 0x229fb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fb4: 0xc0969be  jal         func_25A6F8
    ctx->pc = 0x229FB4u;
    SET_GPR_U32(ctx, 31, 0x229FBCu);
    ctx->pc = 0x229FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FB4u;
    // 0x229fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6F8u, 0x229FB4u, 0x229FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FBCu;
label_229fbc:
    // 0x229fbc: 0xc64c00d0  lwc1        $f12, 0xD0($s2)
    ctx->pc = 0x229fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229fc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fc4: 0xc0969c4  jal         func_25A710
    ctx->pc = 0x229FC4u;
    SET_GPR_U32(ctx, 31, 0x229FCCu);
    ctx->pc = 0x229FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FC4u;
    // 0x229fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A710u, 0x229FC4u, 0x229FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FCCu;
label_229fcc:
    // 0x229fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fd4: 0xc0969e2  jal         func_25A788
    ctx->pc = 0x229FD4u;
    SET_GPR_U32(ctx, 31, 0x229FDCu);
    ctx->pc = 0x229FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FD4u;
    // 0x229fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A788u, 0x229FD4u, 0x229FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FDCu;
label_229fdc:
    // 0x229fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229fe4: 0xc0969f2  jal         func_25A7C8
    ctx->pc = 0x229FE4u;
    SET_GPR_U32(ctx, 31, 0x229FECu);
    ctx->pc = 0x229FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FE4u;
    // 0x229fe8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7C8u, 0x229FE4u, 0x229FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FECu;
label_229fec:
    // 0x229fec: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x229fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x229ff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229ff4:
    // 0x229ff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x229ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229ff8: 0xc069892  jal         func_1A6248
    ctx->pc = 0x229FF8u;
    SET_GPR_U32(ctx, 31, 0x22A000u);
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x229FF8u, 0x22A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A000u;
label_22a000:
    // 0x22a000: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a004:
    // 0x22a004: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22A004u;
    SET_GPR_U32(ctx, 31, 0x22A00Cu);
    ctx->pc = 0x22A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A004u;
    // 0x22a008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22A004u, 0x22A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A00Cu;
label_22a00c:
    // 0x22a00c: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x22A00Cu;
    {
        const bool branch_taken_0x22a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A00Cu;
        // 0x22a010: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a00c) {
            ctx->pc = 0x22A5C4u;
            goto label_22a5c4;
        }
    }
    ctx->pc = 0x22A014u;
label_22a014:
    // 0x22a014: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x22A014u;
    SET_GPR_U32(ctx, 31, 0x22A01Cu);
    ctx->pc = 0x22A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A014u;
    // 0x22a018: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22A014u, 0x22A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A01Cu;
label_22a01c:
    // 0x22a01c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x22a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x22a020: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x22A020u;
    {
        const bool branch_taken_0x22a020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a020) {
            ctx->pc = 0x22A160u;
            goto label_22a160;
        }
    }
    ctx->pc = 0x22A028u;
    // 0x22a028: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x22a028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a02c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x22a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x22a030: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x22a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x22a034: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22a034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22a038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22A038u;
    {
        const bool branch_taken_0x22a038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A038u;
        // 0x22a03c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a038) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x22A040u;
    // 0x22a040: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A040u;
    {
        const bool branch_taken_0x22a040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A040u;
        // 0x22a044: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a040) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x22A048u;
    // 0x22a048: 0x240407a1  addiu       $a0, $zero, 0x7A1
    ctx->pc = 0x22a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    // 0x22a04c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a054: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A054u;
    {
        const bool branch_taken_0x22a054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x22A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A054u;
        // 0x22a058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a054) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x22A05Cu;
    // 0x22a05c: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x22A05Cu;
    SET_GPR_U32(ctx, 31, 0x22A064u);
    ctx->pc = 0x22A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A05Cu;
    // 0x22a060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x22A05Cu, 0x22A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A064u;
label_22a064:
    // 0x22a064: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22a064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22a068: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x22a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x22a06c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22a06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22a070: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x22a070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x22a074: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x22A074u;
    SET_GPR_U32(ctx, 31, 0x22A07Cu);
    ctx->pc = 0x22A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A074u;
    // 0x22a078: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x22A074u, 0x22A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A07Cu;
label_22a07c:
    // 0x22a07c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x22a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a080: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22a080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a084: 0x0  nop
    ctx->pc = 0x22a084u;
    // NOP
    // 0x22a088: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x22A088u;
    {
        const bool branch_taken_0x22a088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a088) {
            ctx->pc = 0x22A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A088u;
            // 0x22a08c: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A138u;
            goto label_22a138;
        }
    }
    ctx->pc = 0x22A090u;
    // 0x22a090: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
    ctx->pc = 0x22A090u;
    {
        const bool branch_taken_0x22a090 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A090u;
        // 0x22a094: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a090) {
            ctx->pc = 0x22A0DCu;
            goto label_22a0dc;
        }
    }
    ctx->pc = 0x22A098u;
    // 0x22a098: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a09c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A09Cu;
    SET_GPR_U32(ctx, 31, 0x22A0A4u);
    ctx->pc = 0x22A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A09Cu;
    // 0x22a0a0: 0x24060569  addiu       $a2, $zero, 0x569 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1385));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A09Cu, 0x22A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0A4u;
label_22a0a4:
    // 0x22a0a4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a0a8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22a0ac: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A0ACu;
    SET_GPR_U32(ctx, 31, 0x22A0B4u);
    ctx->pc = 0x22A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0ACu;
    // 0x22a0b0: 0x24060596  addiu       $a2, $zero, 0x596 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1430));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A0ACu, 0x22A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0B4u;
label_22a0b4:
    // 0x22a0b4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a0b8: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22a0bc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A0BCu;
    SET_GPR_U32(ctx, 31, 0x22A0C4u);
    ctx->pc = 0x22A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0BCu;
    // 0x22a0c0: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A0BCu, 0x22A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0C4u;
label_22a0c4:
    // 0x22a0c4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a0c8: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22a0cc: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A0CCu;
    SET_GPR_U32(ctx, 31, 0x22A0D4u);
    ctx->pc = 0x22A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0CCu;
    // 0x22a0d0: 0x24060686  addiu       $a2, $zero, 0x686 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1670));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A0CCu, 0x22A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0D4u;
label_22a0d4:
    // 0x22a0d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22A0D4u;
    {
        const bool branch_taken_0x22a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0D4u;
        // 0x22a0d8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0d4) {
            ctx->pc = 0x22A11Cu;
            goto label_22a11c;
        }
    }
    ctx->pc = 0x22A0DCu;
label_22a0dc:
    // 0x22a0dc: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a0e0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A0E0u;
    SET_GPR_U32(ctx, 31, 0x22A0E8u);
    ctx->pc = 0x22A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0E0u;
    // 0x22a0e4: 0x2406056c  addiu       $a2, $zero, 0x56C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A0E0u, 0x22A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0E8u;
label_22a0e8:
    // 0x22a0e8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a0ec: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22a0f0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A0F0u;
    SET_GPR_U32(ctx, 31, 0x22A0F8u);
    ctx->pc = 0x22A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0F0u;
    // 0x22a0f4: 0x24060599  addiu       $a2, $zero, 0x599 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1433));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A0F0u, 0x22A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0F8u;
label_22a0f8:
    // 0x22a0f8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a0fc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22a100: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A100u;
    SET_GPR_U32(ctx, 31, 0x22A108u);
    ctx->pc = 0x22A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A100u;
    // 0x22a104: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A100u, 0x22A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A108u;
label_22a108:
    // 0x22a108: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a10c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x22a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22a110: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22A110u;
    SET_GPR_U32(ctx, 31, 0x22A118u);
    ctx->pc = 0x22A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A110u;
    // 0x22a114: 0x24060685  addiu       $a2, $zero, 0x685 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22A110u, 0x22A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A118u;
label_22a118:
    // 0x22a118: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a11c:
    // 0x22a11c: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x22A11Cu;
    SET_GPR_U32(ctx, 31, 0x22A124u);
    ctx->pc = 0x22A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A11Cu;
    // 0x22a120: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22A11Cu, 0x22A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A124u;
label_22a124:
    // 0x22a124: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a128: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22A128u;
    SET_GPR_U32(ctx, 31, 0x22A130u);
    ctx->pc = 0x22A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A128u;
    // 0x22a12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22A128u, 0x22A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A130u;
label_22a130:
    // 0x22a130: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22A130u;
    {
        const bool branch_taken_0x22a130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A130u;
        // 0x22a134: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a130) {
            ctx->pc = 0x22A148u;
            goto label_22a148;
        }
    }
    ctx->pc = 0x22A138u;
label_22a138:
    // 0x22a138: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a13c: 0xc069892  jal         func_1A6248
    ctx->pc = 0x22A13Cu;
    SET_GPR_U32(ctx, 31, 0x22A144u);
    ctx->pc = 0x22A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A13Cu;
    // 0x22a140: 0x24050366  addiu       $a1, $zero, 0x366 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22A13Cu, 0x22A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A144u;
label_22a144:
    // 0x22a144: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a148:
    // 0x22a148: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22A148u;
    SET_GPR_U32(ctx, 31, 0x22A150u);
    ctx->pc = 0x22A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A148u;
    // 0x22a14c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22A148u, 0x22A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A150u;
label_22a150:
    // 0x22a150: 0x8e420390  lw          $v0, 0x390($s2)
    ctx->pc = 0x22a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 912)));
    // 0x22a154: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22a154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22a158: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x22A158u;
    {
        const bool branch_taken_0x22a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A158u;
        // 0x22a15c: 0xae420390  sw          $v0, 0x390($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a158) {
            ctx->pc = 0x22A5C0u;
            goto label_22a5c0;
        }
    }
    ctx->pc = 0x22A160u;
label_22a160:
    // 0x22a160: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x22A160u;
    SET_GPR_U32(ctx, 31, 0x22A168u);
    ctx->pc = 0x22A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A160u;
    // 0x22a164: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22A160u, 0x22A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A168u;
label_22a168:
    // 0x22a168: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x22a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x22a16c: 0x50400115  beql        $v0, $zero, . + 4 + (0x115 << 2)
    ctx->pc = 0x22A16Cu;
    {
        const bool branch_taken_0x22a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a16c) {
            ctx->pc = 0x22A170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A16Cu;
            // 0x22a170: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5C4u;
            goto label_22a5c4;
        }
    }
    ctx->pc = 0x22A174u;
    // 0x22a174: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x22a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x22a178: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22a178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22a17c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A17Cu;
    {
        const bool branch_taken_0x22a17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A17Cu;
        // 0x22a180: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a17c) {
            ctx->pc = 0x22A1A4u;
            goto label_22a1a4;
        }
    }
    ctx->pc = 0x22A184u;
    // 0x22a184: 0xc0b93ea  jal         func_2E4FA8
    ctx->pc = 0x22A184u;
    SET_GPR_U32(ctx, 31, 0x22A18Cu);
    ctx->pc = 0x22A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A184u;
    // 0x22a188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FA8u, 0x22A184u, 0x22A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A18Cu;
label_22a18c:
    // 0x22a18c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A18Cu;
    {
        const bool branch_taken_0x22a18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a18c) {
            ctx->pc = 0x22A1A4u;
            goto label_22a1a4;
        }
    }
    ctx->pc = 0x22A194u;
    // 0x22a194: 0xc06c3f6  jal         func_1B0FD8
    ctx->pc = 0x22A194u;
    SET_GPR_U32(ctx, 31, 0x22A19Cu);
    ctx->pc = 0x22A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A194u;
    // 0x22a198: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FD8u, 0x22A194u, 0x22A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A19Cu;
label_22a19c:
    // 0x22a19c: 0x1440010c  bnez        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x22A19Cu;
    {
        const bool branch_taken_0x22a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A19Cu;
        // 0x22a1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a19c) {
            ctx->pc = 0x22A5D0u;
            goto label_22a5d0;
        }
    }
    ctx->pc = 0x22A1A4u;
label_22a1a4:
    // 0x22a1a4: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x22A1A4u;
    SET_GPR_U32(ctx, 31, 0x22A1ACu);
    ctx->pc = 0x22A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1A4u;
    // 0x22a1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x22A1A4u, 0x22A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1ACu;
label_22a1ac:
    // 0x22a1ac: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x22A1ACu;
    {
        const bool branch_taken_0x22a1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a1ac) {
            ctx->pc = 0x22A1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A1ACu;
            // 0x22a1b0: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A294u;
            goto label_22a294;
        }
    }
    ctx->pc = 0x22A1B4u;
    // 0x22a1b4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x22A1B4u;
    SET_GPR_U32(ctx, 31, 0x22A1BCu);
    ctx->pc = 0x22A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1B4u;
    // 0x22a1b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22A1B4u, 0x22A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1BCu;
label_22a1bc:
    // 0x22a1bc: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x22A1BCu;
    SET_GPR_U32(ctx, 31, 0x22A1C4u);
    ctx->pc = 0x22A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1BCu;
    // 0x22a1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x22A1BCu, 0x22A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1C4u;
label_22a1c4:
    // 0x22a1c4: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x22a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x22a1c8: 0x50430032  beql        $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x22A1C8u;
    {
        const bool branch_taken_0x22a1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22a1c8) {
            ctx->pc = 0x22A1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A1C8u;
            // 0x22a1cc: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A294u;
            goto label_22a294;
        }
    }
    ctx->pc = 0x22A1D0u;
    // 0x22a1d0: 0x8e450338  lw          $a1, 0x338($s2)
    ctx->pc = 0x22a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x22a1d4: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x22a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x22a1d8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x22a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22a1dc: 0x2c470002  sltiu       $a3, $v0, 0x2
    ctx->pc = 0x22a1dcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22a1e0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A1E0u;
    {
        const bool branch_taken_0x22a1e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1E0u;
        // 0x22a1e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1e0) {
            ctx->pc = 0x22A1FCu;
            goto label_22a1fc;
        }
    }
    ctx->pc = 0x22A1E8u;
    // 0x22a1e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x22a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22a1ec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a1f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a1f4: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x22a1f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x22a1f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x22a1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_22a1fc:
    // 0x22a1fc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22A1FCu;
    {
        const bool branch_taken_0x22a1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1FCu;
        // 0x22a200: 0x38820003  xori        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1fc) {
            ctx->pc = 0x22A22Cu;
            goto label_22a22c;
        }
    }
    ctx->pc = 0x22A204u;
    // 0x22a204: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x22a204u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22a208: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A208u;
    {
        const bool branch_taken_0x22a208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A208u;
        // 0x22a20c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a208) {
            ctx->pc = 0x22A224u;
            goto label_22a224;
        }
    }
    ctx->pc = 0x22A210u;
    // 0x22a210: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x22a210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22a214: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a21c: 0x28630046  slti        $v1, $v1, 0x46
    ctx->pc = 0x22a21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x22a220: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x22a220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_22a224:
    // 0x22a224: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22A224u;
    {
        const bool branch_taken_0x22a224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a224) {
            ctx->pc = 0x22A254u;
            goto label_22a254;
        }
    }
    ctx->pc = 0x22A22Cu;
label_22a22c:
    // 0x22a22c: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x22A22Cu;
    SET_GPR_U32(ctx, 31, 0x22A234u);
    ctx->pc = 0x22A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A22Cu;
    // 0x22a230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x22A22Cu, 0x22A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A234u;
label_22a234:
    // 0x22a234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A234u;
    {
        const bool branch_taken_0x22a234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A234u;
        // 0x22a238: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a234) {
            ctx->pc = 0x22A24Cu;
            goto label_22a24c;
        }
    }
    ctx->pc = 0x22A23Cu;
    // 0x22a23c: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A23Cu;
    SET_GPR_U32(ctx, 31, 0x22A244u);
    ctx->pc = 0x22A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A23Cu;
    // 0x22a240: 0x2405016e  addiu       $a1, $zero, 0x16E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A23Cu, 0x22A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A244u;
label_22a244:
    // 0x22a244: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22A244u;
    {
        const bool branch_taken_0x22a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A244u;
        // 0x22a248: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a244) {
            ctx->pc = 0x22A290u;
            goto label_22a290;
        }
    }
    ctx->pc = 0x22A24Cu;
label_22a24c:
    // 0x22a24c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22A24Cu;
    {
        const bool branch_taken_0x22a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A24Cu;
        // 0x22a250: 0x2405016b  addiu       $a1, $zero, 0x16B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a24c) {
            ctx->pc = 0x22A288u;
            goto label_22a288;
        }
    }
    ctx->pc = 0x22A254u;
label_22a254:
    // 0x22a254: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A254u;
    {
        const bool branch_taken_0x22a254 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a254) {
            ctx->pc = 0x22A264u;
            goto label_22a264;
        }
    }
    ctx->pc = 0x22A25Cu;
    // 0x22a25c: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22A25Cu;
    {
        const bool branch_taken_0x22a25c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a25c) {
            ctx->pc = 0x22A260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A25Cu;
            // 0x22a260: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A294u;
            goto label_22a294;
        }
    }
    ctx->pc = 0x22A264u;
label_22a264:
    // 0x22a264: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x22A264u;
    SET_GPR_U32(ctx, 31, 0x22A26Cu);
    ctx->pc = 0x22A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A264u;
    // 0x22a268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x22A264u, 0x22A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A26Cu;
label_22a26c:
    // 0x22a26c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A26Cu;
    {
        const bool branch_taken_0x22a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A26Cu;
        // 0x22a270: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a26c) {
            ctx->pc = 0x22A284u;
            goto label_22a284;
        }
    }
    ctx->pc = 0x22A274u;
    // 0x22a274: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A274u;
    SET_GPR_U32(ctx, 31, 0x22A27Cu);
    ctx->pc = 0x22A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A274u;
    // 0x22a278: 0x2405016d  addiu       $a1, $zero, 0x16D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A274u, 0x22A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A27Cu;
label_22a27c:
    // 0x22a27c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A27Cu;
    {
        const bool branch_taken_0x22a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A27Cu;
        // 0x22a280: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a27c) {
            ctx->pc = 0x22A290u;
            goto label_22a290;
        }
    }
    ctx->pc = 0x22A284u;
label_22a284:
    // 0x22a284: 0x2405016a  addiu       $a1, $zero, 0x16A
    ctx->pc = 0x22a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
label_22a288:
    // 0x22a288: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A288u;
    SET_GPR_U32(ctx, 31, 0x22A290u);
    ctx->pc = 0x22A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A288u;
    // 0x22a28c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A288u, 0x22A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A290u;
label_22a290:
    // 0x22a290: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_22a294:
    // 0x22a294: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22a298: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x22A298u;
    {
        const bool branch_taken_0x22a298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a298) {
            ctx->pc = 0x22A29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A298u;
            // 0x22a29c: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A310u;
            goto label_22a310;
        }
    }
    ctx->pc = 0x22A2A0u;
    // 0x22a2a0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x22A2A0u;
    SET_GPR_U32(ctx, 31, 0x22A2A8u);
    ctx->pc = 0x22A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2A0u;
    // 0x22a2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x22A2A0u, 0x22A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2A8u;
label_22a2a8:
    // 0x22a2a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22A2A8u;
    {
        const bool branch_taken_0x22a2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2a8) {
            ctx->pc = 0x22A2E0u;
            goto label_22a2e0;
        }
    }
    ctx->pc = 0x22A2B0u;
    // 0x22a2b0: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x22A2B0u;
    SET_GPR_U32(ctx, 31, 0x22A2B8u);
    ctx->pc = 0x22A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2B0u;
    // 0x22a2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x22A2B0u, 0x22A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2B8u;
label_22a2b8:
    // 0x22a2b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A2B8u;
    {
        const bool branch_taken_0x22a2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2B8u;
        // 0x22a2bc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2b8) {
            ctx->pc = 0x22A2D0u;
            goto label_22a2d0;
        }
    }
    ctx->pc = 0x22A2C0u;
    // 0x22a2c0: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A2C0u;
    SET_GPR_U32(ctx, 31, 0x22A2C8u);
    ctx->pc = 0x22A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2C0u;
    // 0x22a2c4: 0x2405016c  addiu       $a1, $zero, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A2C0u, 0x22A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2C8u;
label_22a2c8:
    // 0x22a2c8: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x22A2C8u;
    {
        const bool branch_taken_0x22a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2C8u;
        // 0x22a2cc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2c8) {
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A2D0u;
label_22a2d0:
    // 0x22a2d0: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A2D0u;
    SET_GPR_U32(ctx, 31, 0x22A2D8u);
    ctx->pc = 0x22A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2D0u;
    // 0x22a2d4: 0x24050169  addiu       $a1, $zero, 0x169 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A2D0u, 0x22A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2D8u;
label_22a2d8:
    // 0x22a2d8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x22A2D8u;
    {
        const bool branch_taken_0x22a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2D8u;
        // 0x22a2dc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2d8) {
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A2E0u;
label_22a2e0:
    // 0x22a2e0: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x22A2E0u;
    SET_GPR_U32(ctx, 31, 0x22A2E8u);
    ctx->pc = 0x22A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2E0u;
    // 0x22a2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x22A2E0u, 0x22A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2E8u;
label_22a2e8:
    // 0x22a2e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A2E8u;
    {
        const bool branch_taken_0x22a2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2E8u;
        // 0x22a2ec: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2e8) {
            ctx->pc = 0x22A300u;
            goto label_22a300;
        }
    }
    ctx->pc = 0x22A2F0u;
    // 0x22a2f0: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A2F0u;
    SET_GPR_U32(ctx, 31, 0x22A2F8u);
    ctx->pc = 0x22A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2F0u;
    // 0x22a2f4: 0x2405016d  addiu       $a1, $zero, 0x16D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A2F0u, 0x22A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2F8u;
label_22a2f8:
    // 0x22a2f8: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x22A2F8u;
    {
        const bool branch_taken_0x22a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2F8u;
        // 0x22a2fc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2f8) {
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A300u;
label_22a300:
    // 0x22a300: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A300u;
    SET_GPR_U32(ctx, 31, 0x22A308u);
    ctx->pc = 0x22A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A300u;
    // 0x22a304: 0x24050168  addiu       $a1, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A300u, 0x22A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A308u;
label_22a308:
    // 0x22a308: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x22A308u;
    {
        const bool branch_taken_0x22a308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A308u;
        // 0x22a30c: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a308) {
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A310u;
label_22a310:
    // 0x22a310: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22a314: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22a318: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22a318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22a31c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22A31Cu;
    {
        const bool branch_taken_0x22a31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A31Cu;
        // 0x22a320: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a31c) {
            ctx->pc = 0x22A358u;
            goto label_22a358;
        }
    }
    ctx->pc = 0x22A324u;
    // 0x22a324: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22a328: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A328u;
    {
        const bool branch_taken_0x22a328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a328) {
            ctx->pc = 0x22A32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A328u;
            // 0x22a32c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A330u;
    // 0x22a330: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22A330u;
    SET_GPR_U32(ctx, 31, 0x22A338u);
    ctx->pc = 0x22A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A330u;
    // 0x22a334: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22A330u, 0x22A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A338u;
label_22a338:
    // 0x22a338: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A338u;
    {
        const bool branch_taken_0x22a338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a338) {
            ctx->pc = 0x22A33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A338u;
            // 0x22a33c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A340u;
    // 0x22a340: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22a344: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22a348: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A348u;
    {
        const bool branch_taken_0x22a348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A348u;
        // 0x22a34c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a348) {
            ctx->pc = 0x22A358u;
            goto label_22a358;
        }
    }
    ctx->pc = 0x22A350u;
    // 0x22a350: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A350u;
    {
        const bool branch_taken_0x22a350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a350) {
            ctx->pc = 0x22A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A350u;
            // 0x22a354: 0x8e450334  lw          $a1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A360u;
            goto label_22a360;
        }
    }
    ctx->pc = 0x22A358u;
label_22a358:
    // 0x22a358: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22a358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a35c:
    // 0x22a35c: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a360:
    // 0x22a360: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x22a360u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22a364: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x22a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x22a368: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x22a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x22a36c: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x22a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x22a370: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x22a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x22a374: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x22A374u;
    {
        const bool branch_taken_0x22a374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A374u;
        // 0x22a378: 0x2c510007  sltiu       $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a374) {
            ctx->pc = 0x22A40Cu;
            goto label_22a40c;
        }
    }
    ctx->pc = 0x22A37Cu;
    // 0x22a37c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a380: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a384: 0xc069892  jal         func_1A6248
    ctx->pc = 0x22A384u;
    SET_GPR_U32(ctx, 31, 0x22A38Cu);
    ctx->pc = 0x22A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A384u;
    // 0x22a388: 0x2405028e  addiu       $a1, $zero, 0x28E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22A384u, 0x22A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A38Cu;
label_22a38c:
    // 0x22a38c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a390: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22A390u;
    SET_GPR_U32(ctx, 31, 0x22A398u);
    ctx->pc = 0x22A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A390u;
    // 0x22a394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22A390u, 0x22A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A398u;
label_22a398:
    // 0x22a398: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a39c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x22a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x22a3a0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22a3a4: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x22A3A4u;
    {
        const bool branch_taken_0x22a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22a3a4) {
            ctx->pc = 0x22A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A3A4u;
            // 0x22a3a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A40Cu;
            goto label_22a40c;
        }
    }
    ctx->pc = 0x22A3ACu;
    // 0x22a3ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22a3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x22a3b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22a3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22a3b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22a3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a3b8: 0xc06a0ca  jal         func_1A8328
    ctx->pc = 0x22A3B8u;
    SET_GPR_U32(ctx, 31, 0x22A3C0u);
    ctx->pc = 0x1A8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8328u, 0x22A3B8u, 0x22A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3C0u;
label_22a3c0:
    // 0x22a3c0: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x22a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a3c4: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x22a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x22a3c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A3C8u;
    {
        const bool branch_taken_0x22a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3C8u;
        // 0x22a3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3c8) {
            ctx->pc = 0x22A3D8u;
            goto label_22a3d8;
        }
    }
    ctx->pc = 0x22A3D0u;
label_22a3d0:
    // 0x22a3d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22A3D0u;
    {
        const bool branch_taken_0x22a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D0u;
        // 0x22a3d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3d0) {
            ctx->pc = 0x22A3FCu;
            goto label_22a3fc;
        }
    }
    ctx->pc = 0x22A3D8u;
label_22a3d8:
    // 0x22a3d8: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x22a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x22a3dc: 0x0  nop
    ctx->pc = 0x22a3dcu;
    // NOP
label_22a3e0:
    // 0x22a3e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a3e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A3E4u;
    {
        const bool branch_taken_0x22a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3E4u;
        // 0x22a3e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3e4) {
            ctx->pc = 0x22A3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3d0;
        }
    }
    ctx->pc = 0x22A3ECu;
    // 0x22a3ec: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x22a3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22a3f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22A3F0u;
    {
        const bool branch_taken_0x22a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3F0u;
        // 0x22a3f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3f0) {
            ctx->pc = 0x22A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3e0;
        }
    }
    ctx->pc = 0x22A3F8u;
    // 0x22a3f8: 0x8ca301e8  lw          $v1, 0x1E8($a1)
    ctx->pc = 0x22a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_22a3fc:
    // 0x22a3fc: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x22a3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x22a400: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22a404: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x22a404u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x22a408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a40c:
    // 0x22a40c: 0x240203fb  addiu       $v0, $zero, 0x3FB
    ctx->pc = 0x22a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    // 0x22a410: 0x12820022  beq         $s4, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22A410u;
    {
        const bool branch_taken_0x22a410 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A410u;
        // 0x22a414: 0x2a8203fc  slti        $v0, $s4, 0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1020) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a410) {
            ctx->pc = 0x22A49Cu;
            goto label_22a49c;
        }
    }
    ctx->pc = 0x22A418u;
    // 0x22a418: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A418u;
    {
        const bool branch_taken_0x22a418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A418u;
        // 0x22a41c: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a418) {
            ctx->pc = 0x22A438u;
            goto label_22a438;
        }
    }
    ctx->pc = 0x22A420u;
    // 0x22a420: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A420u;
    {
        const bool branch_taken_0x22a420 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A420u;
        // 0x22a424: 0x240203ea  addiu       $v0, $zero, 0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a420) {
            ctx->pc = 0x22A454u;
            goto label_22a454;
        }
    }
    ctx->pc = 0x22A428u;
    // 0x22a428: 0x1282001c  beq         $s4, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22A428u;
    {
        const bool branch_taken_0x22a428 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a428) {
            ctx->pc = 0x22A49Cu;
            goto label_22a49c;
        }
    }
    ctx->pc = 0x22A430u;
    // 0x22a430: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x22A430u;
    {
        const bool branch_taken_0x22a430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a430) {
            ctx->pc = 0x22A4D8u;
            goto label_22a4d8;
        }
    }
    ctx->pc = 0x22A438u;
label_22a438:
    // 0x22a438: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x22a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x22a43c: 0x1282001b  beq         $s4, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22A43Cu;
    {
        const bool branch_taken_0x22a43c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A43Cu;
        // 0x22a440: 0x24020431  addiu       $v0, $zero, 0x431 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a43c) {
            ctx->pc = 0x22A4ACu;
            goto label_22a4ac;
        }
    }
    ctx->pc = 0x22A444u;
    // 0x22a444: 0x12820019  beq         $s4, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22A444u;
    {
        const bool branch_taken_0x22a444 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x22a444) {
            ctx->pc = 0x22A4ACu;
            goto label_22a4ac;
        }
    }
    ctx->pc = 0x22A44Cu;
    // 0x22a44c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x22A44Cu;
    {
        const bool branch_taken_0x22a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a44c) {
            ctx->pc = 0x22A4D8u;
            goto label_22a4d8;
        }
    }
    ctx->pc = 0x22A454u;
label_22a454:
    // 0x22a454: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A454u;
    {
        const bool branch_taken_0x22a454 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A454u;
        // 0x22a458: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a454) {
            ctx->pc = 0x22A47Cu;
            goto label_22a47c;
        }
    }
    ctx->pc = 0x22A45Cu;
    // 0x22a45c: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A45Cu;
    SET_GPR_U32(ctx, 31, 0x22A464u);
    ctx->pc = 0x22A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A45Cu;
    // 0x22a460: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A45Cu, 0x22A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A464u;
label_22a464:
    // 0x22a464: 0x52000053  beql        $s0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x22A464u;
    {
        const bool branch_taken_0x22a464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a464) {
            ctx->pc = 0x22A468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A464u;
            // 0x22a468: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A46Cu;
    // 0x22a46c: 0x1620004b  bnez        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x22A46Cu;
    {
        const bool branch_taken_0x22a46c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A46Cu;
        // 0x22a470: 0x24050289  addiu       $a1, $zero, 0x289 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a46c) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A474u;
    // 0x22a474: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x22A474u;
    {
        const bool branch_taken_0x22a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A474u;
        // 0x22a478: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a474) {
            ctx->pc = 0x22A554u;
            goto label_22a554;
        }
    }
    ctx->pc = 0x22A47Cu;
label_22a47c:
    // 0x22a47c: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A47Cu;
    SET_GPR_U32(ctx, 31, 0x22A484u);
    ctx->pc = 0x22A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A47Cu;
    // 0x22a480: 0x24050161  addiu       $a1, $zero, 0x161 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A47Cu, 0x22A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A484u;
label_22a484:
    // 0x22a484: 0x5200004b  beql        $s0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x22A484u;
    {
        const bool branch_taken_0x22a484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a484) {
            ctx->pc = 0x22A488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A484u;
            // 0x22a488: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A48Cu;
    // 0x22a48c: 0x16200043  bnez        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x22A48Cu;
    {
        const bool branch_taken_0x22a48c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A48Cu;
        // 0x22a490: 0x2405028b  addiu       $a1, $zero, 0x28B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 651));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a48c) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A494u;
    // 0x22a494: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x22A494u;
    {
        const bool branch_taken_0x22a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A494u;
        // 0x22a498: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a494) {
            ctx->pc = 0x22A554u;
            goto label_22a554;
        }
    }
    ctx->pc = 0x22A49Cu;
label_22a49c:
    // 0x22a49c: 0x1620003f  bnez        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x22A49Cu;
    {
        const bool branch_taken_0x22a49c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A49Cu;
        // 0x22a4a0: 0x2405028c  addiu       $a1, $zero, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a49c) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A4A4u;
    // 0x22a4a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A4A4u;
    {
        const bool branch_taken_0x22a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A4u;
        // 0x22a4a8: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4a4) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A4ACu;
label_22a4ac:
    // 0x22a4ac: 0x1620003b  bnez        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x22A4ACu;
    {
        const bool branch_taken_0x22a4ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4ACu;
        // 0x22a4b0: 0x2405028d  addiu       $a1, $zero, 0x28D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4ac) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A4B4u;
    // 0x22a4b4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a4b8:
    // 0x22a4b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a4bc: 0xc069892  jal         func_1A6248
    ctx->pc = 0x22A4BCu;
    SET_GPR_U32(ctx, 31, 0x22A4C4u);
    ctx->pc = 0x22A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4BCu;
    // 0x22a4c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22A4BCu, 0x22A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4C4u;
label_22a4c4:
    // 0x22a4c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4c8: 0xc08dc16  jal         func_237058
    ctx->pc = 0x22A4C8u;
    SET_GPR_U32(ctx, 31, 0x22A4D0u);
    ctx->pc = 0x22A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4C8u;
    // 0x22a4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x22A4C8u, 0x22A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4D0u;
label_22a4d0:
    // 0x22a4d0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x22A4D0u;
    {
        const bool branch_taken_0x22a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a4d0) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A4D8u;
label_22a4d8:
    // 0x22a4d8: 0x13c00023  beqz        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x22A4D8u;
    {
        const bool branch_taken_0x22a4d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4D8u;
        // 0x22a4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4d8) {
            ctx->pc = 0x22A568u;
            goto label_22a568;
        }
    }
    ctx->pc = 0x22A4E0u;
    // 0x22a4e0: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x22A4E0u;
    SET_GPR_U32(ctx, 31, 0x22A4E8u);
    ctx->pc = 0x22A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4E0u;
    // 0x22a4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x22A4E0u, 0x22A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4E8u;
label_22a4e8:
    // 0x22a4e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22A4E8u;
    {
        const bool branch_taken_0x22a4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a4e8) {
            ctx->pc = 0x22A524u;
            goto label_22a524;
        }
    }
    ctx->pc = 0x22A4F0u;
    // 0x22a4f0: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A4F0u;
    {
        const bool branch_taken_0x22a4f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F0u;
        // 0x22a4f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4f0) {
            ctx->pc = 0x22A50Cu;
            goto label_22a50c;
        }
    }
    ctx->pc = 0x22A4F8u;
    // 0x22a4f8: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x22A4F8u;
    SET_GPR_U32(ctx, 31, 0x22A500u);
    ctx->pc = 0x22A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4F8u;
    // 0x22a4fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x22A4F8u, 0x22A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A500u;
label_22a500:
    // 0x22a500: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x22a500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x22a504: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A504u;
    SET_GPR_U32(ctx, 31, 0x22A50Cu);
    ctx->pc = 0x22A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A504u;
    // 0x22a508: 0x24450162  addiu       $a1, $v0, 0x162 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 354));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A504u, 0x22A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A50Cu;
label_22a50c:
    // 0x22a50c: 0x52000029  beql        $s0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x22A50Cu;
    {
        const bool branch_taken_0x22a50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a50c) {
            ctx->pc = 0x22A510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A50Cu;
            // 0x22a510: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A514u;
    // 0x22a514: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x22A514u;
    {
        const bool branch_taken_0x22a514 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A514u;
        // 0x22a518: 0x24050289  addiu       $a1, $zero, 0x289 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a514) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A51Cu;
    // 0x22a51c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22A51Cu;
    {
        const bool branch_taken_0x22a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A51Cu;
        // 0x22a520: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a51c) {
            ctx->pc = 0x22A554u;
            goto label_22a554;
        }
    }
    ctx->pc = 0x22A524u;
label_22a524:
    // 0x22a524: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A524u;
    {
        const bool branch_taken_0x22a524 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A524u;
        // 0x22a528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a524) {
            ctx->pc = 0x22A540u;
            goto label_22a540;
        }
    }
    ctx->pc = 0x22A52Cu;
    // 0x22a52c: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x22A52Cu;
    SET_GPR_U32(ctx, 31, 0x22A534u);
    ctx->pc = 0x22A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A52Cu;
    // 0x22a530: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x22A52Cu, 0x22A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A534u;
label_22a534:
    // 0x22a534: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x22a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x22a538: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A538u;
    SET_GPR_U32(ctx, 31, 0x22A540u);
    ctx->pc = 0x22A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A538u;
    // 0x22a53c: 0x24450164  addiu       $a1, $v0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A538u, 0x22A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A540u;
label_22a540:
    // 0x22a540: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x22A540u;
    {
        const bool branch_taken_0x22a540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a540) {
            ctx->pc = 0x22A544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A540u;
            // 0x22a544: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A548u;
    // 0x22a548: 0x16200014  bnez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22A548u;
    {
        const bool branch_taken_0x22a548 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A548u;
        // 0x22a54c: 0x2405028a  addiu       $a1, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a548) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A550u;
    // 0x22a550: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22a554:
    // 0x22a554: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a558: 0xc069892  jal         func_1A6248
    ctx->pc = 0x22A558u;
    SET_GPR_U32(ctx, 31, 0x22A560u);
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22A558u, 0x22A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A560u;
label_22a560:
    // 0x22a560: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22A560u;
    {
        const bool branch_taken_0x22a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a560) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A568u;
label_22a568:
    // 0x22a568: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A568u;
    {
        const bool branch_taken_0x22a568 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a568) {
            ctx->pc = 0x22A57Cu;
            goto label_22a57c;
        }
    }
    ctx->pc = 0x22A570u;
    // 0x22a570: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x22a570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x22a574: 0xc06beba  jal         func_1AFAE8
    ctx->pc = 0x22A574u;
    SET_GPR_U32(ctx, 31, 0x22A57Cu);
    ctx->pc = 0x22A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A574u;
    // 0x22a578: 0x24050166  addiu       $a1, $zero, 0x166 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x22A574u, 0x22A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A57Cu;
label_22a57c:
    // 0x22a57c: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22A57Cu;
    {
        const bool branch_taken_0x22a57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a57c) {
            ctx->pc = 0x22A580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A57Cu;
            // 0x22a580: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A584u;
    // 0x22a584: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A584u;
    {
        const bool branch_taken_0x22a584 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a584) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A58Cu;
    // 0x22a58c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a594: 0xc069892  jal         func_1A6248
    ctx->pc = 0x22A594u;
    SET_GPR_U32(ctx, 31, 0x22A59Cu);
    ctx->pc = 0x22A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A594u;
    // 0x22a598: 0x2405028b  addiu       $a1, $zero, 0x28B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 651));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x22A594u, 0x22A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A59Cu;
label_22a59c:
    // 0x22a59c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A59Cu;
    {
        const bool branch_taken_0x22a59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a59c) {
            ctx->pc = 0x22A5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A59Cu;
            // 0x22a5a0: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A5B4u;
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A5A4u;
    // 0x22a5a4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x22a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x22a5a8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22A5A8u;
    SET_GPR_U32(ctx, 31, 0x22A5B0u);
    ctx->pc = 0x22A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5A8u;
    // 0x22a5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22A5A8u, 0x22A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5B0u;
label_22a5b0:
    // 0x22a5b0: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x22a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_22a5b4:
    // 0x22a5b4: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x22A5B4u;
    SET_GPR_U32(ctx, 31, 0x22A5BCu);
    ctx->pc = 0x22A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5B4u;
    // 0x22a5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x22A5B4u, 0x22A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5BCu;
label_22a5bc:
    // 0x22a5bc: 0x0  nop
    ctx->pc = 0x22a5bcu;
    // NOP
label_22a5c0:
    // 0x22a5c0: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x22a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_22a5c4:
    // 0x22a5c4: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x22A5C4u;
    SET_GPR_U32(ctx, 31, 0x22A5CCu);
    ctx->pc = 0x22A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5C4u;
    // 0x22a5c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x22A5C4u, 0x22A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5CCu;
label_22a5cc:
    // 0x22a5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a5d0:
    // 0x22a5d0: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x22a5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x22a5d4: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x22a5d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x22a5d8: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x22a5d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x22a5dc: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x22a5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x22a5e0: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x22a5e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22a5e4: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x22a5e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x22a5e8: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x22a5e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x22a5ec: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x22a5ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x22a5f0: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x22a5f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x22a5f4: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x22a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x22a5f8: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x22a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22a5fc: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x22a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a600: 0x3e00008  jr          $ra
    ctx->pc = 0x22A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A600u;
        // 0x22a604: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A608u;
}
