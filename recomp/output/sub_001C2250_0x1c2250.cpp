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

// Function: sub_001C2250
// Address: 0x1c2250 - 0x1c23b8
void sub_001C2250_0x1c2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2250_0x1c2250");
#endif

    switch (ctx->pc) {
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2254u: goto label_1c2254;
        case 0x1c2258u: goto label_1c2258;
        case 0x1c225cu: goto label_1c225c;
        case 0x1c2260u: goto label_1c2260;
        case 0x1c2264u: goto label_1c2264;
        case 0x1c2268u: goto label_1c2268;
        case 0x1c226cu: goto label_1c226c;
        case 0x1c2270u: goto label_1c2270;
        case 0x1c2274u: goto label_1c2274;
        case 0x1c2278u: goto label_1c2278;
        case 0x1c227cu: goto label_1c227c;
        case 0x1c2280u: goto label_1c2280;
        case 0x1c2284u: goto label_1c2284;
        case 0x1c2288u: goto label_1c2288;
        case 0x1c228cu: goto label_1c228c;
        case 0x1c2290u: goto label_1c2290;
        case 0x1c2294u: goto label_1c2294;
        case 0x1c2298u: goto label_1c2298;
        case 0x1c229cu: goto label_1c229c;
        case 0x1c22a0u: goto label_1c22a0;
        case 0x1c22a4u: goto label_1c22a4;
        case 0x1c22a8u: goto label_1c22a8;
        case 0x1c22acu: goto label_1c22ac;
        case 0x1c22b0u: goto label_1c22b0;
        case 0x1c22b4u: goto label_1c22b4;
        case 0x1c22b8u: goto label_1c22b8;
        case 0x1c22bcu: goto label_1c22bc;
        case 0x1c22c0u: goto label_1c22c0;
        case 0x1c22c4u: goto label_1c22c4;
        case 0x1c22c8u: goto label_1c22c8;
        case 0x1c22ccu: goto label_1c22cc;
        case 0x1c22d0u: goto label_1c22d0;
        case 0x1c22d4u: goto label_1c22d4;
        case 0x1c22d8u: goto label_1c22d8;
        case 0x1c22dcu: goto label_1c22dc;
        case 0x1c22e0u: goto label_1c22e0;
        case 0x1c22e4u: goto label_1c22e4;
        case 0x1c22e8u: goto label_1c22e8;
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c22f0u: goto label_1c22f0;
        case 0x1c22f4u: goto label_1c22f4;
        case 0x1c22f8u: goto label_1c22f8;
        case 0x1c22fcu: goto label_1c22fc;
        case 0x1c2300u: goto label_1c2300;
        case 0x1c2304u: goto label_1c2304;
        case 0x1c2308u: goto label_1c2308;
        case 0x1c230cu: goto label_1c230c;
        case 0x1c2310u: goto label_1c2310;
        case 0x1c2314u: goto label_1c2314;
        case 0x1c2318u: goto label_1c2318;
        case 0x1c231cu: goto label_1c231c;
        case 0x1c2320u: goto label_1c2320;
        case 0x1c2324u: goto label_1c2324;
        case 0x1c2328u: goto label_1c2328;
        case 0x1c232cu: goto label_1c232c;
        case 0x1c2330u: goto label_1c2330;
        case 0x1c2334u: goto label_1c2334;
        case 0x1c2338u: goto label_1c2338;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2340u: goto label_1c2340;
        case 0x1c2344u: goto label_1c2344;
        case 0x1c2348u: goto label_1c2348;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c2354u: goto label_1c2354;
        case 0x1c2358u: goto label_1c2358;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c2360u: goto label_1c2360;
        case 0x1c2364u: goto label_1c2364;
        case 0x1c2368u: goto label_1c2368;
        case 0x1c236cu: goto label_1c236c;
        case 0x1c2370u: goto label_1c2370;
        case 0x1c2374u: goto label_1c2374;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c237cu: goto label_1c237c;
        case 0x1c2380u: goto label_1c2380;
        case 0x1c2384u: goto label_1c2384;
        case 0x1c2388u: goto label_1c2388;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c2390u: goto label_1c2390;
        case 0x1c2394u: goto label_1c2394;
        case 0x1c2398u: goto label_1c2398;
        case 0x1c239cu: goto label_1c239c;
        case 0x1c23a0u: goto label_1c23a0;
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23a8u: goto label_1c23a8;
        case 0x1c23acu: goto label_1c23ac;
        case 0x1c23b0u: goto label_1c23b0;
        case 0x1c23b4u: goto label_1c23b4;
        default: break;
    }

    ctx->pc = 0x1c2250u;

label_1c2250:
    // 0x1c2250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c2254:
    // 0x1c2254: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c2254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c2258:
    // 0x1c2258: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c2258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c225c:
    // 0x1c225c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c225cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2260:
    // 0x1c2260: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1c2264:
    // 0x1c2264: 0x26110210  addiu       $s1, $s0, 0x210
    ctx->pc = 0x1c2264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_1c2268:
    // 0x1c2268: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c2268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1c226c:
    // 0x1c226c: 0x26120260  addiu       $s2, $s0, 0x260
    ctx->pc = 0x1c226cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_1c2270:
    // 0x1c2270: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1c2270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c2274:
    // 0x1c2274: 0x261301e0  addiu       $s3, $s0, 0x1E0
    ctx->pc = 0x1c2274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_1c2278:
    // 0x1c2278: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1c2278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c227c:
    // 0x1c227c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c227cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c2280:
    // 0x1c2280: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c2280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c2284:
    // 0x1c2284: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c2284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c2288:
    // 0x1c2288: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1c2288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1c228c:
    // 0x1c228c: 0xc06fc1a  jal         func_1BF068
label_1c2290:
    if (ctx->pc == 0x1C2290u) {
        ctx->pc = 0x1C2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C228Cu;
        // 0x1c2290: 0x8e0504bc  lw          $a1, 0x4BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2294u;
        goto label_1c2294;
    }
    ctx->pc = 0x1C228Cu;
    SET_GPR_U32(ctx, 31, 0x1C2294u);
    ctx->pc = 0x1C2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C228Cu;
    // 0x1c2290: 0x8e0504bc  lw          $a1, 0x4BC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF068u, 0x1C228Cu, 0x1C2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2294u;
label_1c2294:
    // 0x1c2294: 0xc06fc34  jal         func_1BF0D0
label_1c2298:
    if (ctx->pc == 0x1C2298u) {
        ctx->pc = 0x1C2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2294u;
        // 0x1c2298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C229Cu;
        goto label_1c229c;
    }
    ctx->pc = 0x1C2294u;
    SET_GPR_U32(ctx, 31, 0x1C229Cu);
    ctx->pc = 0x1C2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2294u;
    // 0x1c2298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1C2294u, 0x1C229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C229Cu;
label_1c229c:
    // 0x1c229c: 0xc06fc34  jal         func_1BF0D0
label_1c22a0:
    if (ctx->pc == 0x1C22A0u) {
        ctx->pc = 0x1C22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C229Cu;
        // 0x1c22a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22A4u;
        goto label_1c22a4;
    }
    ctx->pc = 0x1C229Cu;
    SET_GPR_U32(ctx, 31, 0x1C22A4u);
    ctx->pc = 0x1C22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C229Cu;
    // 0x1c22a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1C229Cu, 0x1C22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22A4u;
label_1c22a4:
    // 0x1c22a4: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x1c22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
label_1c22a8:
    // 0x1c22a8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1c22a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c22ac:
    // 0x1c22ac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c22acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c22b0:
    // 0x1c22b0: 0x0  nop
    ctx->pc = 0x1c22b0u;
    // NOP
label_1c22b4:
    // 0x1c22b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c22b8:
    if (ctx->pc == 0x1C22B8u) {
        ctx->pc = 0x1C22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22B4u;
        // 0x1c22b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22BCu;
        goto label_1c22bc;
    }
    ctx->pc = 0x1C22B4u;
    {
        const bool branch_taken_0x1c22b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22B4u;
        // 0x1c22b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22b4) {
            ctx->pc = 0x1C22C0u;
            goto label_1c22c0;
        }
    }
    ctx->pc = 0x1C22BCu;
label_1c22bc:
    // 0x1c22bc: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x1c22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_1c22c0:
    // 0x1c22c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c22c4:
    if (ctx->pc == 0x1C22C4u) {
        ctx->pc = 0x1C22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22C0u;
        // 0x1c22c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22C8u;
        goto label_1c22c8;
    }
    ctx->pc = 0x1C22C0u;
    {
        const bool branch_taken_0x1c22c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22C0u;
        // 0x1c22c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22c0) {
            ctx->pc = 0x1C22E0u;
            goto label_1c22e0;
        }
    }
    ctx->pc = 0x1C22C8u;
label_1c22c8:
    // 0x1c22c8: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c22cc:
    // 0x1c22cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1c22d0:
    // 0x1c22d0: 0x40f809  jalr        $v0
label_1c22d4:
    if (ctx->pc == 0x1C22D4u) {
        ctx->pc = 0x1C22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22D0u;
        // 0x1c22d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22D8u;
        goto label_1c22d8;
    }
    ctx->pc = 0x1C22D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C22D8u);
        ctx->pc = 0x1C22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22D0u;
        // 0x1c22d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22D0u, 0x1C22D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C22D8u;
label_1c22d8:
    // 0x1c22d8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1c22dc:
    if (ctx->pc == 0x1C22DCu) {
        ctx->pc = 0x1C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22D8u;
        // 0x1c22dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22E0u;
        goto label_1c22e0;
    }
    ctx->pc = 0x1C22D8u;
    {
        const bool branch_taken_0x1c22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22D8u;
        // 0x1c22dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22d8) {
            ctx->pc = 0x1C2394u;
            goto label_1c2394;
        }
    }
    ctx->pc = 0x1C22E0u;
label_1c22e0:
    // 0x1c22e0: 0xc06fcc8  jal         func_1BF320
label_1c22e4:
    if (ctx->pc == 0x1C22E4u) {
        ctx->pc = 0x1C22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22E0u;
        // 0x1c22e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22E8u;
        goto label_1c22e8;
    }
    ctx->pc = 0x1C22E0u;
    SET_GPR_U32(ctx, 31, 0x1C22E8u);
    ctx->pc = 0x1C22E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22E0u;
    // 0x1c22e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1C22E0u, 0x1C22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22E8u;
label_1c22e8:
    // 0x1c22e8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1c22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c22ec:
    // 0x1c22ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c22ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c22f0:
    // 0x1c22f0: 0x0  nop
    ctx->pc = 0x1c22f0u;
    // NOP
label_1c22f4:
    // 0x1c22f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c22f8:
    if (ctx->pc == 0x1C22F8u) {
        ctx->pc = 0x1C22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22F4u;
        // 0x1c22f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22FCu;
        goto label_1c22fc;
    }
    ctx->pc = 0x1C22F4u;
    {
        const bool branch_taken_0x1c22f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22F4u;
        // 0x1c22f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22f4) {
            ctx->pc = 0x1C2300u;
            goto label_1c2300;
        }
    }
    ctx->pc = 0x1C22FCu;
label_1c22fc:
    // 0x1c22fc: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x1c22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_1c2300:
    // 0x1c2300: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1c2300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2304:
    // 0x1c2304: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c2304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2308:
    // 0x1c2308: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c2308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c230c:
    // 0x1c230c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c230cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1c2310:
    // 0x1c2310: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c2310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2314:
    // 0x1c2314: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c2314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1c2318:
    // 0x1c2318: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1c2318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_1c231c:
    // 0x1c231c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c231cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c2320:
    // 0x1c2320: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1c2320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c2324:
    // 0x1c2324: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c2324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c2328:
    // 0x1c2328: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1c2328u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c232c:
    // 0x1c232c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c232cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c2330:
    // 0x1c2330: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2334:
    // 0x1c2334: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1c2334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c2338:
    // 0x1c2338: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c233c:
    // 0x1c233c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2340:
    // 0x1c2340: 0x8e0204bc  lw          $v0, 0x4BC($s0)
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
label_1c2344:
    // 0x1c2344: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c2344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2348:
    // 0x1c2348: 0xc072596  jal         func_1C9658
label_1c234c:
    if (ctx->pc == 0x1C234Cu) {
        ctx->pc = 0x1C234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2348u;
        // 0x1c234c: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2350u;
        goto label_1c2350;
    }
    ctx->pc = 0x1C2348u;
    SET_GPR_U32(ctx, 31, 0x1C2350u);
    ctx->pc = 0x1C234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2348u;
    // 0x1c234c: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x1C2348u, 0x1C2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2350u;
label_1c2350:
    // 0x1c2350: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c2354:
    if (ctx->pc == 0x1C2354u) {
        ctx->pc = 0x1C2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2350u;
        // 0x1c2354: 0x8e020394  lw          $v0, 0x394($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2358u;
        goto label_1c2358;
    }
    ctx->pc = 0x1C2350u;
    {
        const bool branch_taken_0x1c2350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2350) {
            ctx->pc = 0x1C2354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2350u;
            // 0x1c2354: 0x8e020394  lw          $v0, 0x394($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2378u;
            goto label_1c2378;
        }
    }
    ctx->pc = 0x1C2358u;
label_1c2358:
    // 0x1c2358: 0x8e0204bc  lw          $v0, 0x4BC($s0)
    ctx->pc = 0x1c2358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
label_1c235c:
    // 0x1c235c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2360:
    // 0x1c2360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2364:
    // 0x1c2364: 0xc0725e0  jal         func_1C9780
label_1c2368:
    if (ctx->pc == 0x1C2368u) {
        ctx->pc = 0x1C2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2364u;
        // 0x1c2368: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C236Cu;
        goto label_1c236c;
    }
    ctx->pc = 0x1C2364u;
    SET_GPR_U32(ctx, 31, 0x1C236Cu);
    ctx->pc = 0x1C2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2364u;
    // 0x1c2368: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x1C2364u, 0x1C236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C236Cu;
label_1c236c:
    // 0x1c236c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1c2370:
    if (ctx->pc == 0x1C2370u) {
        ctx->pc = 0x1C2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C236Cu;
        // 0x1c2370: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2374u;
        goto label_1c2374;
    }
    ctx->pc = 0x1C236Cu;
    {
        const bool branch_taken_0x1c236c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c236c) {
            ctx->pc = 0x1C2370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C236Cu;
            // 0x1c2370: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2394u;
            goto label_1c2394;
        }
    }
    ctx->pc = 0x1C2374u;
label_1c2374:
    // 0x1c2374: 0x8e020394  lw          $v0, 0x394($s0)
    ctx->pc = 0x1c2374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c2378:
    // 0x1c2378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c237c:
    // 0x1c237c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c2380:
    // 0x1c2380: 0x60f809  jalr        $v1
label_1c2384:
    if (ctx->pc == 0x1C2384u) {
        ctx->pc = 0x1C2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2380u;
        // 0x1c2384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2388u;
        goto label_1c2388;
    }
    ctx->pc = 0x1C2380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2388u);
        ctx->pc = 0x1C2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2380u;
        // 0x1c2384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2380u, 0x1C2388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2388u;
label_1c2388:
    // 0x1c2388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c238c:
    // 0x1c238c: 0xae0204d0  sw          $v0, 0x4D0($s0)
    ctx->pc = 0x1c238cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 2));
label_1c2390:
    // 0x1c2390: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c2390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2394:
    // 0x1c2394: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c2394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c2398:
    // 0x1c2398: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c2398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c239c:
    // 0x1c239c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c239cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c23a0:
    // 0x1c23a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c23a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c23a4:
    // 0x1c23a4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1c23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c23a8:
    // 0x1c23a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1c23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c23ac:
    // 0x1c23ac: 0x3e00008  jr          $ra
label_1c23b0:
    if (ctx->pc == 0x1C23B0u) {
        ctx->pc = 0x1C23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23ACu;
        // 0x1c23b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23B4u;
        goto label_1c23b4;
    }
    ctx->pc = 0x1C23ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23ACu;
        // 0x1c23b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C23ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C23B4u;
label_1c23b4:
    // 0x1c23b4: 0x0  nop
    ctx->pc = 0x1c23b4u;
    // NOP
    ctx->pc = 0x1c23b8u;
}
