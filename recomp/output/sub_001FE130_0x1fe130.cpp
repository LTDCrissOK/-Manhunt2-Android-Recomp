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

// Function: sub_001FE130
// Address: 0x1fe130 - 0x1fe2e0
void sub_001FE130_0x1fe130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE130_0x1fe130");
#endif

    switch (ctx->pc) {
        case 0x1fe130u: goto label_1fe130;
        case 0x1fe134u: goto label_1fe134;
        case 0x1fe138u: goto label_1fe138;
        case 0x1fe13cu: goto label_1fe13c;
        case 0x1fe140u: goto label_1fe140;
        case 0x1fe144u: goto label_1fe144;
        case 0x1fe148u: goto label_1fe148;
        case 0x1fe14cu: goto label_1fe14c;
        case 0x1fe150u: goto label_1fe150;
        case 0x1fe154u: goto label_1fe154;
        case 0x1fe158u: goto label_1fe158;
        case 0x1fe15cu: goto label_1fe15c;
        case 0x1fe160u: goto label_1fe160;
        case 0x1fe164u: goto label_1fe164;
        case 0x1fe168u: goto label_1fe168;
        case 0x1fe16cu: goto label_1fe16c;
        case 0x1fe170u: goto label_1fe170;
        case 0x1fe174u: goto label_1fe174;
        case 0x1fe178u: goto label_1fe178;
        case 0x1fe17cu: goto label_1fe17c;
        case 0x1fe180u: goto label_1fe180;
        case 0x1fe184u: goto label_1fe184;
        case 0x1fe188u: goto label_1fe188;
        case 0x1fe18cu: goto label_1fe18c;
        case 0x1fe190u: goto label_1fe190;
        case 0x1fe194u: goto label_1fe194;
        case 0x1fe198u: goto label_1fe198;
        case 0x1fe19cu: goto label_1fe19c;
        case 0x1fe1a0u: goto label_1fe1a0;
        case 0x1fe1a4u: goto label_1fe1a4;
        case 0x1fe1a8u: goto label_1fe1a8;
        case 0x1fe1acu: goto label_1fe1ac;
        case 0x1fe1b0u: goto label_1fe1b0;
        case 0x1fe1b4u: goto label_1fe1b4;
        case 0x1fe1b8u: goto label_1fe1b8;
        case 0x1fe1bcu: goto label_1fe1bc;
        case 0x1fe1c0u: goto label_1fe1c0;
        case 0x1fe1c4u: goto label_1fe1c4;
        case 0x1fe1c8u: goto label_1fe1c8;
        case 0x1fe1ccu: goto label_1fe1cc;
        case 0x1fe1d0u: goto label_1fe1d0;
        case 0x1fe1d4u: goto label_1fe1d4;
        case 0x1fe1d8u: goto label_1fe1d8;
        case 0x1fe1dcu: goto label_1fe1dc;
        case 0x1fe1e0u: goto label_1fe1e0;
        case 0x1fe1e4u: goto label_1fe1e4;
        case 0x1fe1e8u: goto label_1fe1e8;
        case 0x1fe1ecu: goto label_1fe1ec;
        case 0x1fe1f0u: goto label_1fe1f0;
        case 0x1fe1f4u: goto label_1fe1f4;
        case 0x1fe1f8u: goto label_1fe1f8;
        case 0x1fe1fcu: goto label_1fe1fc;
        case 0x1fe200u: goto label_1fe200;
        case 0x1fe204u: goto label_1fe204;
        case 0x1fe208u: goto label_1fe208;
        case 0x1fe20cu: goto label_1fe20c;
        case 0x1fe210u: goto label_1fe210;
        case 0x1fe214u: goto label_1fe214;
        case 0x1fe218u: goto label_1fe218;
        case 0x1fe21cu: goto label_1fe21c;
        case 0x1fe220u: goto label_1fe220;
        case 0x1fe224u: goto label_1fe224;
        case 0x1fe228u: goto label_1fe228;
        case 0x1fe22cu: goto label_1fe22c;
        case 0x1fe230u: goto label_1fe230;
        case 0x1fe234u: goto label_1fe234;
        case 0x1fe238u: goto label_1fe238;
        case 0x1fe23cu: goto label_1fe23c;
        case 0x1fe240u: goto label_1fe240;
        case 0x1fe244u: goto label_1fe244;
        case 0x1fe248u: goto label_1fe248;
        case 0x1fe24cu: goto label_1fe24c;
        case 0x1fe250u: goto label_1fe250;
        case 0x1fe254u: goto label_1fe254;
        case 0x1fe258u: goto label_1fe258;
        case 0x1fe25cu: goto label_1fe25c;
        case 0x1fe260u: goto label_1fe260;
        case 0x1fe264u: goto label_1fe264;
        case 0x1fe268u: goto label_1fe268;
        case 0x1fe26cu: goto label_1fe26c;
        case 0x1fe270u: goto label_1fe270;
        case 0x1fe274u: goto label_1fe274;
        case 0x1fe278u: goto label_1fe278;
        case 0x1fe27cu: goto label_1fe27c;
        case 0x1fe280u: goto label_1fe280;
        case 0x1fe284u: goto label_1fe284;
        case 0x1fe288u: goto label_1fe288;
        case 0x1fe28cu: goto label_1fe28c;
        case 0x1fe290u: goto label_1fe290;
        case 0x1fe294u: goto label_1fe294;
        case 0x1fe298u: goto label_1fe298;
        case 0x1fe29cu: goto label_1fe29c;
        case 0x1fe2a0u: goto label_1fe2a0;
        case 0x1fe2a4u: goto label_1fe2a4;
        case 0x1fe2a8u: goto label_1fe2a8;
        case 0x1fe2acu: goto label_1fe2ac;
        case 0x1fe2b0u: goto label_1fe2b0;
        case 0x1fe2b4u: goto label_1fe2b4;
        case 0x1fe2b8u: goto label_1fe2b8;
        case 0x1fe2bcu: goto label_1fe2bc;
        case 0x1fe2c0u: goto label_1fe2c0;
        case 0x1fe2c4u: goto label_1fe2c4;
        case 0x1fe2c8u: goto label_1fe2c8;
        case 0x1fe2ccu: goto label_1fe2cc;
        case 0x1fe2d0u: goto label_1fe2d0;
        case 0x1fe2d4u: goto label_1fe2d4;
        case 0x1fe2d8u: goto label_1fe2d8;
        case 0x1fe2dcu: goto label_1fe2dc;
        default: break;
    }

    ctx->pc = 0x1fe130u;

label_1fe130:
    // 0x1fe130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fe134:
    // 0x1fe134: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1fe134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_1fe138:
    // 0x1fe138: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fe138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe13c:
    // 0x1fe13c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1fe13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1fe140:
    // 0x1fe140: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1fe140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1fe144:
    // 0x1fe144: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1fe144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1fe148:
    // 0x1fe148: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1fe148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1fe14c:
    // 0x1fe14c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1fe14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1fe150:
    // 0x1fe150: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1fe150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1fe154:
    // 0x1fe154: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1fe154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_1fe158:
    // 0x1fe158: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fe158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fe15c:
    // 0x1fe15c: 0xc075e16  jal         func_1D7858
label_1fe160:
    if (ctx->pc == 0x1FE160u) {
        ctx->pc = 0x1FE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE15Cu;
        // 0x1fe160: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE164u;
        goto label_1fe164;
    }
    ctx->pc = 0x1FE15Cu;
    SET_GPR_U32(ctx, 31, 0x1FE164u);
    ctx->pc = 0x1FE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE15Cu;
    // 0x1fe160: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7858u, 0x1FE15Cu, 0x1FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE164u;
label_1fe164:
    // 0x1fe164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe168:
    // 0x1fe168: 0xc0d75d0  jal         func_35D740
label_1fe16c:
    if (ctx->pc == 0x1FE16Cu) {
        ctx->pc = 0x1FE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE168u;
        // 0x1fe16c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE170u;
        goto label_1fe170;
    }
    ctx->pc = 0x1FE168u;
    SET_GPR_U32(ctx, 31, 0x1FE170u);
    ctx->pc = 0x1FE16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE168u;
    // 0x1fe16c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x1FE168u, 0x1FE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE170u;
label_1fe170:
    // 0x1fe170: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
label_1fe174:
    // 0x1fe174: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1fe174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fe178:
    // 0x1fe178: 0x267306b0  addiu       $s3, $s3, 0x6B0
    ctx->pc = 0x1fe178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1712));
label_1fe17c:
    // 0x1fe17c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_1fe180:
    // 0x1fe180: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fe184:
    // 0x1fe184: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1fe184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe188:
    // 0x1fe188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe18c:
    // 0x1fe18c: 0x24a50468  addiu       $a1, $a1, 0x468
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
label_1fe190:
    // 0x1fe190: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fe190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe194:
    // 0x1fe194: 0xc0d74c6  jal         func_35D318
label_1fe198:
    if (ctx->pc == 0x1FE198u) {
        ctx->pc = 0x1FE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE194u;
        // 0x1fe198: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE19Cu;
        goto label_1fe19c;
    }
    ctx->pc = 0x1FE194u;
    SET_GPR_U32(ctx, 31, 0x1FE19Cu);
    ctx->pc = 0x1FE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE194u;
    // 0x1fe198: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE194u, 0x1FE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE19Cu;
label_1fe19c:
    // 0x1fe19c: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x1fe19cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1a0:
    // 0x1fe1a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1a4:
    // 0x1fe1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1a8:
    // 0x1fe1a8: 0xc0d74a8  jal         func_35D2A0
label_1fe1ac:
    if (ctx->pc == 0x1FE1ACu) {
        ctx->pc = 0x1FE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1A8u;
        // 0x1fe1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1B0u;
        goto label_1fe1b0;
    }
    ctx->pc = 0x1FE1A8u;
    SET_GPR_U32(ctx, 31, 0x1FE1B0u);
    ctx->pc = 0x1FE1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1A8u;
    // 0x1fe1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1FE1A8u, 0x1FE1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1B0u;
label_1fe1b0:
    // 0x1fe1b0: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x1fe1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
label_1fe1b4:
    // 0x1fe1b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fe1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1b8:
    // 0x1fe1b8: 0x263106b8  addiu       $s1, $s1, 0x6B8
    ctx->pc = 0x1fe1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1720));
label_1fe1bc:
    // 0x1fe1bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1c0:
    // 0x1fe1c0: 0xc0d74c6  jal         func_35D318
label_1fe1c4:
    if (ctx->pc == 0x1FE1C4u) {
        ctx->pc = 0x1FE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1C0u;
        // 0x1fe1c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1C8u;
        goto label_1fe1c8;
    }
    ctx->pc = 0x1FE1C0u;
    SET_GPR_U32(ctx, 31, 0x1FE1C8u);
    ctx->pc = 0x1FE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1C0u;
    // 0x1fe1c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE1C0u, 0x1FE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1C8u;
label_1fe1c8:
    // 0x1fe1c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1cc:
    // 0x1fe1cc: 0xc0d7412  jal         func_35D048
label_1fe1d0:
    if (ctx->pc == 0x1FE1D0u) {
        ctx->pc = 0x1FE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1CCu;
        // 0x1fe1d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1D4u;
        goto label_1fe1d4;
    }
    ctx->pc = 0x1FE1CCu;
    SET_GPR_U32(ctx, 31, 0x1FE1D4u);
    ctx->pc = 0x1FE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1CCu;
    // 0x1fe1d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE1CCu, 0x1FE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1D4u;
label_1fe1d4:
    // 0x1fe1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1d8:
    // 0x1fe1d8: 0xc0d7412  jal         func_35D048
label_1fe1dc:
    if (ctx->pc == 0x1FE1DCu) {
        ctx->pc = 0x1FE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1D8u;
        // 0x1fe1dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1E0u;
        goto label_1fe1e0;
    }
    ctx->pc = 0x1FE1D8u;
    SET_GPR_U32(ctx, 31, 0x1FE1E0u);
    ctx->pc = 0x1FE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1D8u;
    // 0x1fe1dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE1D8u, 0x1FE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1E0u;
label_1fe1e0:
    // 0x1fe1e0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fe1e4:
    // 0x1fe1e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fe1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1e8:
    // 0x1fe1e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1ec:
    // 0x1fe1ec: 0xc0d74e8  jal         func_35D3A0
label_1fe1f0:
    if (ctx->pc == 0x1FE1F0u) {
        ctx->pc = 0x1FE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1ECu;
        // 0x1fe1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1F4u;
        goto label_1fe1f4;
    }
    ctx->pc = 0x1FE1ECu;
    SET_GPR_U32(ctx, 31, 0x1FE1F4u);
    ctx->pc = 0x1FE1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1ECu;
    // 0x1fe1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A0u, 0x1FE1ECu, 0x1FE1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1F4u;
label_1fe1f4:
    // 0x1fe1f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fe1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1f8:
    // 0x1fe1f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1fc:
    // 0x1fe1fc: 0xc0d74c6  jal         func_35D318
label_1fe200:
    if (ctx->pc == 0x1FE200u) {
        ctx->pc = 0x1FE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1FCu;
        // 0x1fe200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE204u;
        goto label_1fe204;
    }
    ctx->pc = 0x1FE1FCu;
    SET_GPR_U32(ctx, 31, 0x1FE204u);
    ctx->pc = 0x1FE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1FCu;
    // 0x1fe200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x1FE1FCu, 0x1FE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE204u;
label_1fe204:
    // 0x1fe204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe208:
    // 0x1fe208: 0xc0d7412  jal         func_35D048
label_1fe20c:
    if (ctx->pc == 0x1FE20Cu) {
        ctx->pc = 0x1FE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE208u;
        // 0x1fe20c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE210u;
        goto label_1fe210;
    }
    ctx->pc = 0x1FE208u;
    SET_GPR_U32(ctx, 31, 0x1FE210u);
    ctx->pc = 0x1FE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE208u;
    // 0x1fe20c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE208u, 0x1FE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE210u;
label_1fe210:
    // 0x1fe210: 0xc09dbf8  jal         func_276FE0
label_1fe214:
    if (ctx->pc == 0x1FE214u) {
        ctx->pc = 0x1FE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE210u;
        // 0x1fe214: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE218u;
        goto label_1fe218;
    }
    ctx->pc = 0x1FE210u;
    SET_GPR_U32(ctx, 31, 0x1FE218u);
    ctx->pc = 0x1FE214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE210u;
    // 0x1fe214: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x1FE210u, 0x1FE218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE218u;
label_1fe218:
    // 0x1fe218: 0x92a20100  lbu         $v0, 0x100($s5)
    ctx->pc = 0x1fe218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 256)));
label_1fe21c:
    // 0x1fe21c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fe220:
    if (ctx->pc == 0x1FE220u) {
        ctx->pc = 0x1FE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE21Cu;
        // 0x1fe220: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE224u;
        goto label_1fe224;
    }
    ctx->pc = 0x1FE21Cu;
    {
        const bool branch_taken_0x1fe21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE21Cu;
        // 0x1fe220: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe21c) {
            ctx->pc = 0x1FE254u;
            goto label_1fe254;
        }
    }
    ctx->pc = 0x1FE224u;
label_1fe224:
    // 0x1fe224: 0xc0805d6  jal         func_201758
label_1fe228:
    if (ctx->pc == 0x1FE228u) {
        ctx->pc = 0x1FE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE224u;
        // 0x1fe228: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE22Cu;
        goto label_1fe22c;
    }
    ctx->pc = 0x1FE224u;
    SET_GPR_U32(ctx, 31, 0x1FE22Cu);
    ctx->pc = 0x1FE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE224u;
    // 0x1fe228: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201758u, 0x1FE224u, 0x1FE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE22Cu;
label_1fe22c:
    // 0x1fe22c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fe22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe230:
    // 0x1fe230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe234:
    // 0x1fe234: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
label_1fe238:
    if (ctx->pc == 0x1FE238u) {
        ctx->pc = 0x1FE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE234u;
        // 0x1fe238: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE23Cu;
        goto label_1fe23c;
    }
    ctx->pc = 0x1FE234u;
    {
        const bool branch_taken_0x1fe234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE234u;
        // 0x1fe238: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe234) {
            ctx->pc = 0x1FE288u;
            goto label_1fe288;
        }
    }
    ctx->pc = 0x1FE23Cu;
label_1fe23c:
    // 0x1fe23c: 0x8ea200fc  lw          $v0, 0xFC($s5)
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 252)));
label_1fe240:
    // 0x1fe240: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1fe240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1fe244:
    // 0x1fe244: 0xc08161c  jal         func_205870
label_1fe248:
    if (ctx->pc == 0x1FE248u) {
        ctx->pc = 0x1FE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE244u;
        // 0x1fe248: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE24Cu;
        goto label_1fe24c;
    }
    ctx->pc = 0x1FE244u;
    SET_GPR_U32(ctx, 31, 0x1FE24Cu);
    ctx->pc = 0x1FE248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE244u;
    // 0x1fe248: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205870u, 0x1FE244u, 0x1FE24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE24Cu;
label_1fe24c:
    // 0x1fe24c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fe250:
    if (ctx->pc == 0x1FE250u) {
        ctx->pc = 0x1FE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE24Cu;
        // 0x1fe250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE254u;
        goto label_1fe254;
    }
    ctx->pc = 0x1FE24Cu;
    {
        const bool branch_taken_0x1fe24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE24Cu;
        // 0x1fe250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe24c) {
            ctx->pc = 0x1FE28Cu;
            goto label_1fe28c;
        }
    }
    ctx->pc = 0x1FE254u;
label_1fe254:
    // 0x1fe254: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fe254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1fe258:
    // 0x1fe258: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x1fe258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_1fe25c:
    // 0x1fe25c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1fe260:
    if (ctx->pc == 0x1FE260u) {
        ctx->pc = 0x1FE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE25Cu;
        // 0x1fe260: 0x8ea4000c  lw          $a0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE264u;
        goto label_1fe264;
    }
    ctx->pc = 0x1FE25Cu;
    {
        const bool branch_taken_0x1fe25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe25c) {
            ctx->pc = 0x1FE260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE25Cu;
            // 0x1fe260: 0x8ea4000c  lw          $a0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE274u;
            goto label_1fe274;
        }
    }
    ctx->pc = 0x1FE264u;
label_1fe264:
    // 0x1fe264: 0xc0dbe86  jal         func_36FA18
label_1fe268:
    if (ctx->pc == 0x1FE268u) {
        ctx->pc = 0x1FE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE264u;
        // 0x1fe268: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE26Cu;
        goto label_1fe26c;
    }
    ctx->pc = 0x1FE264u;
    SET_GPR_U32(ctx, 31, 0x1FE26Cu);
    ctx->pc = 0x1FE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE264u;
    // 0x1fe268: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x1FE264u, 0x1FE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE26Cu;
label_1fe26c:
    // 0x1fe26c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fe270:
    if (ctx->pc == 0x1FE270u) {
        ctx->pc = 0x1FE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE26Cu;
        // 0x1fe270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE274u;
        goto label_1fe274;
    }
    ctx->pc = 0x1FE26Cu;
    {
        const bool branch_taken_0x1fe26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE26Cu;
        // 0x1fe270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe26c) {
            ctx->pc = 0x1FE28Cu;
            goto label_1fe28c;
        }
    }
    ctx->pc = 0x1FE274u;
label_1fe274:
    // 0x1fe274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fe274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe278:
    // 0x1fe278: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe27c:
    // 0x1fe27c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fe27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fe280:
    // 0x1fe280: 0x40f809  jalr        $v0
label_1fe284:
    if (ctx->pc == 0x1FE284u) {
        ctx->pc = 0x1FE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE280u;
        // 0x1fe284: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE288u;
        goto label_1fe288;
    }
    ctx->pc = 0x1FE280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE288u);
        ctx->pc = 0x1FE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE280u;
        // 0x1fe284: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE280u, 0x1FE288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE288u;
label_1fe288:
    // 0x1fe288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe28c:
    // 0x1fe28c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fe28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fe290:
    // 0x1fe290: 0xa2a2004a  sb          $v0, 0x4A($s5)
    ctx->pc = 0x1fe290u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 74), (uint8_t)GPR_U32(ctx, 2));
label_1fe294:
    // 0x1fe294: 0xc0d7412  jal         func_35D048
label_1fe298:
    if (ctx->pc == 0x1FE298u) {
        ctx->pc = 0x1FE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE294u;
        // 0x1fe298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE29Cu;
        goto label_1fe29c;
    }
    ctx->pc = 0x1FE294u;
    SET_GPR_U32(ctx, 31, 0x1FE29Cu);
    ctx->pc = 0x1FE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE294u;
    // 0x1fe298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE294u, 0x1FE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE29Cu;
label_1fe29c:
    // 0x1fe29c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fe29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2a0:
    // 0x1fe2a0: 0xc0d7412  jal         func_35D048
label_1fe2a4:
    if (ctx->pc == 0x1FE2A4u) {
        ctx->pc = 0x1FE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2A0u;
        // 0x1fe2a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2A8u;
        goto label_1fe2a8;
    }
    ctx->pc = 0x1FE2A0u;
    SET_GPR_U32(ctx, 31, 0x1FE2A8u);
    ctx->pc = 0x1FE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2A0u;
    // 0x1fe2a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE2A0u, 0x1FE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2A8u;
label_1fe2a8:
    // 0x1fe2a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2ac:
    // 0x1fe2ac: 0xc0d7412  jal         func_35D048
label_1fe2b0:
    if (ctx->pc == 0x1FE2B0u) {
        ctx->pc = 0x1FE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2ACu;
        // 0x1fe2b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2B4u;
        goto label_1fe2b4;
    }
    ctx->pc = 0x1FE2ACu;
    SET_GPR_U32(ctx, 31, 0x1FE2B4u);
    ctx->pc = 0x1FE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2ACu;
    // 0x1fe2b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1FE2ACu, 0x1FE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2B4u;
label_1fe2b4:
    // 0x1fe2b4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1fe2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe2b8:
    // 0x1fe2b8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1fe2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1fe2bc:
    // 0x1fe2bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1fe2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe2c0:
    // 0x1fe2c0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1fe2c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1fe2c4:
    // 0x1fe2c4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1fe2c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fe2c8:
    // 0x1fe2c8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1fe2c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1fe2cc:
    // 0x1fe2cc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1fe2ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1fe2d0:
    // 0x1fe2d0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1fe2d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1fe2d4:
    // 0x1fe2d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fe2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fe2d8:
    // 0x1fe2d8: 0x3e00008  jr          $ra
label_1fe2dc:
    if (ctx->pc == 0x1FE2DCu) {
        ctx->pc = 0x1FE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2D8u;
        // 0x1fe2dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2E0u;
        goto label_fallthrough_0x1fe2d8;
    }
    ctx->pc = 0x1FE2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2D8u;
        // 0x1fe2dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe2d8:
    ctx->pc = 0x1FE2E0u;
}
