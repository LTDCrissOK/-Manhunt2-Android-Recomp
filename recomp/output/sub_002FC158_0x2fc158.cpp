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

// Function: sub_002FC158
// Address: 0x2fc158 - 0x2fc3e0
void sub_002FC158_0x2fc158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC158_0x2fc158");
#endif

    switch (ctx->pc) {
        case 0x2fc158u: goto label_2fc158;
        case 0x2fc15cu: goto label_2fc15c;
        case 0x2fc160u: goto label_2fc160;
        case 0x2fc164u: goto label_2fc164;
        case 0x2fc168u: goto label_2fc168;
        case 0x2fc16cu: goto label_2fc16c;
        case 0x2fc170u: goto label_2fc170;
        case 0x2fc174u: goto label_2fc174;
        case 0x2fc178u: goto label_2fc178;
        case 0x2fc17cu: goto label_2fc17c;
        case 0x2fc180u: goto label_2fc180;
        case 0x2fc184u: goto label_2fc184;
        case 0x2fc188u: goto label_2fc188;
        case 0x2fc18cu: goto label_2fc18c;
        case 0x2fc190u: goto label_2fc190;
        case 0x2fc194u: goto label_2fc194;
        case 0x2fc198u: goto label_2fc198;
        case 0x2fc19cu: goto label_2fc19c;
        case 0x2fc1a0u: goto label_2fc1a0;
        case 0x2fc1a4u: goto label_2fc1a4;
        case 0x2fc1a8u: goto label_2fc1a8;
        case 0x2fc1acu: goto label_2fc1ac;
        case 0x2fc1b0u: goto label_2fc1b0;
        case 0x2fc1b4u: goto label_2fc1b4;
        case 0x2fc1b8u: goto label_2fc1b8;
        case 0x2fc1bcu: goto label_2fc1bc;
        case 0x2fc1c0u: goto label_2fc1c0;
        case 0x2fc1c4u: goto label_2fc1c4;
        case 0x2fc1c8u: goto label_2fc1c8;
        case 0x2fc1ccu: goto label_2fc1cc;
        case 0x2fc1d0u: goto label_2fc1d0;
        case 0x2fc1d4u: goto label_2fc1d4;
        case 0x2fc1d8u: goto label_2fc1d8;
        case 0x2fc1dcu: goto label_2fc1dc;
        case 0x2fc1e0u: goto label_2fc1e0;
        case 0x2fc1e4u: goto label_2fc1e4;
        case 0x2fc1e8u: goto label_2fc1e8;
        case 0x2fc1ecu: goto label_2fc1ec;
        case 0x2fc1f0u: goto label_2fc1f0;
        case 0x2fc1f4u: goto label_2fc1f4;
        case 0x2fc1f8u: goto label_2fc1f8;
        case 0x2fc1fcu: goto label_2fc1fc;
        case 0x2fc200u: goto label_2fc200;
        case 0x2fc204u: goto label_2fc204;
        case 0x2fc208u: goto label_2fc208;
        case 0x2fc20cu: goto label_2fc20c;
        case 0x2fc210u: goto label_2fc210;
        case 0x2fc214u: goto label_2fc214;
        case 0x2fc218u: goto label_2fc218;
        case 0x2fc21cu: goto label_2fc21c;
        case 0x2fc220u: goto label_2fc220;
        case 0x2fc224u: goto label_2fc224;
        case 0x2fc228u: goto label_2fc228;
        case 0x2fc22cu: goto label_2fc22c;
        case 0x2fc230u: goto label_2fc230;
        case 0x2fc234u: goto label_2fc234;
        case 0x2fc238u: goto label_2fc238;
        case 0x2fc23cu: goto label_2fc23c;
        case 0x2fc240u: goto label_2fc240;
        case 0x2fc244u: goto label_2fc244;
        case 0x2fc248u: goto label_2fc248;
        case 0x2fc24cu: goto label_2fc24c;
        case 0x2fc250u: goto label_2fc250;
        case 0x2fc254u: goto label_2fc254;
        case 0x2fc258u: goto label_2fc258;
        case 0x2fc25cu: goto label_2fc25c;
        case 0x2fc260u: goto label_2fc260;
        case 0x2fc264u: goto label_2fc264;
        case 0x2fc268u: goto label_2fc268;
        case 0x2fc26cu: goto label_2fc26c;
        case 0x2fc270u: goto label_2fc270;
        case 0x2fc274u: goto label_2fc274;
        case 0x2fc278u: goto label_2fc278;
        case 0x2fc27cu: goto label_2fc27c;
        case 0x2fc280u: goto label_2fc280;
        case 0x2fc284u: goto label_2fc284;
        case 0x2fc288u: goto label_2fc288;
        case 0x2fc28cu: goto label_2fc28c;
        case 0x2fc290u: goto label_2fc290;
        case 0x2fc294u: goto label_2fc294;
        case 0x2fc298u: goto label_2fc298;
        case 0x2fc29cu: goto label_2fc29c;
        case 0x2fc2a0u: goto label_2fc2a0;
        case 0x2fc2a4u: goto label_2fc2a4;
        case 0x2fc2a8u: goto label_2fc2a8;
        case 0x2fc2acu: goto label_2fc2ac;
        case 0x2fc2b0u: goto label_2fc2b0;
        case 0x2fc2b4u: goto label_2fc2b4;
        case 0x2fc2b8u: goto label_2fc2b8;
        case 0x2fc2bcu: goto label_2fc2bc;
        case 0x2fc2c0u: goto label_2fc2c0;
        case 0x2fc2c4u: goto label_2fc2c4;
        case 0x2fc2c8u: goto label_2fc2c8;
        case 0x2fc2ccu: goto label_2fc2cc;
        case 0x2fc2d0u: goto label_2fc2d0;
        case 0x2fc2d4u: goto label_2fc2d4;
        case 0x2fc2d8u: goto label_2fc2d8;
        case 0x2fc2dcu: goto label_2fc2dc;
        case 0x2fc2e0u: goto label_2fc2e0;
        case 0x2fc2e4u: goto label_2fc2e4;
        case 0x2fc2e8u: goto label_2fc2e8;
        case 0x2fc2ecu: goto label_2fc2ec;
        case 0x2fc2f0u: goto label_2fc2f0;
        case 0x2fc2f4u: goto label_2fc2f4;
        case 0x2fc2f8u: goto label_2fc2f8;
        case 0x2fc2fcu: goto label_2fc2fc;
        case 0x2fc300u: goto label_2fc300;
        case 0x2fc304u: goto label_2fc304;
        case 0x2fc308u: goto label_2fc308;
        case 0x2fc30cu: goto label_2fc30c;
        case 0x2fc310u: goto label_2fc310;
        case 0x2fc314u: goto label_2fc314;
        case 0x2fc318u: goto label_2fc318;
        case 0x2fc31cu: goto label_2fc31c;
        case 0x2fc320u: goto label_2fc320;
        case 0x2fc324u: goto label_2fc324;
        case 0x2fc328u: goto label_2fc328;
        case 0x2fc32cu: goto label_2fc32c;
        case 0x2fc330u: goto label_2fc330;
        case 0x2fc334u: goto label_2fc334;
        case 0x2fc338u: goto label_2fc338;
        case 0x2fc33cu: goto label_2fc33c;
        case 0x2fc340u: goto label_2fc340;
        case 0x2fc344u: goto label_2fc344;
        case 0x2fc348u: goto label_2fc348;
        case 0x2fc34cu: goto label_2fc34c;
        case 0x2fc350u: goto label_2fc350;
        case 0x2fc354u: goto label_2fc354;
        case 0x2fc358u: goto label_2fc358;
        case 0x2fc35cu: goto label_2fc35c;
        case 0x2fc360u: goto label_2fc360;
        case 0x2fc364u: goto label_2fc364;
        case 0x2fc368u: goto label_2fc368;
        case 0x2fc36cu: goto label_2fc36c;
        case 0x2fc370u: goto label_2fc370;
        case 0x2fc374u: goto label_2fc374;
        case 0x2fc378u: goto label_2fc378;
        case 0x2fc37cu: goto label_2fc37c;
        case 0x2fc380u: goto label_2fc380;
        case 0x2fc384u: goto label_2fc384;
        case 0x2fc388u: goto label_2fc388;
        case 0x2fc38cu: goto label_2fc38c;
        case 0x2fc390u: goto label_2fc390;
        case 0x2fc394u: goto label_2fc394;
        case 0x2fc398u: goto label_2fc398;
        case 0x2fc39cu: goto label_2fc39c;
        case 0x2fc3a0u: goto label_2fc3a0;
        case 0x2fc3a4u: goto label_2fc3a4;
        case 0x2fc3a8u: goto label_2fc3a8;
        case 0x2fc3acu: goto label_2fc3ac;
        case 0x2fc3b0u: goto label_2fc3b0;
        case 0x2fc3b4u: goto label_2fc3b4;
        case 0x2fc3b8u: goto label_2fc3b8;
        case 0x2fc3bcu: goto label_2fc3bc;
        case 0x2fc3c0u: goto label_2fc3c0;
        case 0x2fc3c4u: goto label_2fc3c4;
        case 0x2fc3c8u: goto label_2fc3c8;
        case 0x2fc3ccu: goto label_2fc3cc;
        case 0x2fc3d0u: goto label_2fc3d0;
        case 0x2fc3d4u: goto label_2fc3d4;
        case 0x2fc3d8u: goto label_2fc3d8;
        case 0x2fc3dcu: goto label_2fc3dc;
        default: break;
    }

    ctx->pc = 0x2fc158u;

label_2fc158:
    // 0x2fc158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fc15c:
    // 0x2fc15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fc160:
    // 0x2fc160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2fc164:
    // 0x2fc164: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x2fc164u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
label_2fc168:
    // 0x2fc168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fc168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2fc16c:
    // 0x2fc16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc170:
    // 0x2fc170: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fc170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2fc174:
    // 0x2fc174: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2fc174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2fc178:
    // 0x2fc178: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2fc178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2fc17c:
    // 0x2fc17c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2fc17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_2fc180:
    // 0x2fc180: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_2fc184:
    if (ctx->pc == 0x2FC184u) {
        ctx->pc = 0x2FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC180u;
        // 0x2fc184: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC188u;
        goto label_2fc188;
    }
    ctx->pc = 0x2FC180u;
    {
        const bool branch_taken_0x2fc180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC180u;
        // 0x2fc184: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc180) {
            ctx->pc = 0x2FC198u;
            goto label_2fc198;
        }
    }
    ctx->pc = 0x2FC188u;
label_2fc188:
    // 0x2fc188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fc18c:
    // 0x2fc18c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc190:
    // 0x2fc190: 0x10000056  b           . + 4 + (0x56 << 2)
label_2fc194:
    if (ctx->pc == 0x2FC194u) {
        ctx->pc = 0x2FC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC190u;
        // 0x2fc194: 0xe62012b4  swc1        $f0, 0x12B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC198u;
        goto label_2fc198;
    }
    ctx->pc = 0x2FC190u;
    {
        const bool branch_taken_0x2fc190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC190u;
        // 0x2fc194: 0xe62012b4  swc1        $f0, 0x12B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc190) {
            ctx->pc = 0x2FC2ECu;
            goto label_2fc2ec;
        }
    }
    ctx->pc = 0x2FC198u;
label_2fc198:
    // 0x2fc198: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_2fc19c:
    if (ctx->pc == 0x2FC19Cu) {
        ctx->pc = 0x2FC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC198u;
        // 0x2fc19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1A0u;
        goto label_2fc1a0;
    }
    ctx->pc = 0x2FC198u;
    {
        const bool branch_taken_0x2fc198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC198u;
        // 0x2fc19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc198) {
            ctx->pc = 0x2FC1D4u;
            goto label_2fc1d4;
        }
    }
    ctx->pc = 0x2FC1A0u;
label_2fc1a0:
    // 0x2fc1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fc1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc1a4:
    // 0x2fc1a4: 0xc08db1e  jal         func_236C78
label_2fc1a8:
    if (ctx->pc == 0x2FC1A8u) {
        ctx->pc = 0x2FC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1A4u;
        // 0x2fc1a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1ACu;
        goto label_2fc1ac;
    }
    ctx->pc = 0x2FC1A4u;
    SET_GPR_U32(ctx, 31, 0x2FC1ACu);
    ctx->pc = 0x2FC1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1A4u;
    // 0x2fc1a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x2FC1A4u, 0x2FC1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1ACu;
label_2fc1ac:
    // 0x2fc1ac: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2fc1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2fc1b0:
    // 0x2fc1b0: 0xc06bfc8  jal         func_1AFF20
label_2fc1b4:
    if (ctx->pc == 0x2FC1B4u) {
        ctx->pc = 0x2FC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1B0u;
        // 0x2fc1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1B8u;
        goto label_2fc1b8;
    }
    ctx->pc = 0x2FC1B0u;
    SET_GPR_U32(ctx, 31, 0x2FC1B8u);
    ctx->pc = 0x2FC1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1B0u;
    // 0x2fc1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2FC1B0u, 0x2FC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1B8u;
label_2fc1b8:
    // 0x2fc1b8: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2fc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2fc1bc:
    // 0x2fc1bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fc1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2fc1c0:
    // 0x2fc1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fc1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fc1c4:
    // 0x2fc1c4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x2fc1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_2fc1c8:
    // 0x2fc1c8: 0xe62012b4  swc1        $f0, 0x12B4($s1)
    ctx->pc = 0x2fc1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
label_2fc1cc:
    // 0x2fc1cc: 0x10000047  b           . + 4 + (0x47 << 2)
label_2fc1d0:
    if (ctx->pc == 0x2FC1D0u) {
        ctx->pc = 0x2FC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1CCu;
        // 0x2fc1d0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1D4u;
        goto label_2fc1d4;
    }
    ctx->pc = 0x2FC1CCu;
    {
        const bool branch_taken_0x2fc1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1CCu;
        // 0x2fc1d0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1cc) {
            ctx->pc = 0x2FC2ECu;
            goto label_2fc2ec;
        }
    }
    ctx->pc = 0x2FC1D4u;
label_2fc1d4:
    // 0x2fc1d4: 0xc0899bc  jal         func_2266F0
label_2fc1d8:
    if (ctx->pc == 0x2FC1D8u) {
        ctx->pc = 0x2FC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1D4u;
        // 0x2fc1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1DCu;
        goto label_2fc1dc;
    }
    ctx->pc = 0x2FC1D4u;
    SET_GPR_U32(ctx, 31, 0x2FC1DCu);
    ctx->pc = 0x2FC1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1D4u;
    // 0x2fc1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC1D4u, 0x2FC1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1DCu;
label_2fc1dc:
    // 0x2fc1dc: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_2fc1e0:
    if (ctx->pc == 0x2FC1E0u) {
        ctx->pc = 0x2FC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1DCu;
        // 0x2fc1e0: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1E4u;
        goto label_2fc1e4;
    }
    ctx->pc = 0x2FC1DCu;
    {
        const bool branch_taken_0x2fc1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc1dc) {
            ctx->pc = 0x2FC1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC1DCu;
            // 0x2fc1e0: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC2D8u;
            goto label_2fc2d8;
        }
    }
    ctx->pc = 0x2FC1E4u;
label_2fc1e4:
    // 0x2fc1e4: 0xc0899bc  jal         func_2266F0
label_2fc1e8:
    if (ctx->pc == 0x2FC1E8u) {
        ctx->pc = 0x2FC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1E4u;
        // 0x2fc1e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1ECu;
        goto label_2fc1ec;
    }
    ctx->pc = 0x2FC1E4u;
    SET_GPR_U32(ctx, 31, 0x2FC1ECu);
    ctx->pc = 0x2FC1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1E4u;
    // 0x2fc1e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC1E4u, 0x2FC1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1ECu;
label_2fc1ec:
    // 0x2fc1ec: 0x8c430264  lw          $v1, 0x264($v0)
    ctx->pc = 0x2fc1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
label_2fc1f0:
    // 0x2fc1f0: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
label_2fc1f4:
    if (ctx->pc == 0x2FC1F4u) {
        ctx->pc = 0x2FC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1F0u;
        // 0x2fc1f4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC1F8u;
        goto label_2fc1f8;
    }
    ctx->pc = 0x2FC1F0u;
    {
        const bool branch_taken_0x2fc1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc1f0) {
            ctx->pc = 0x2FC1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC1F0u;
            // 0x2fc1f4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC2D8u;
            goto label_2fc2d8;
        }
    }
    ctx->pc = 0x2FC1F8u;
label_2fc1f8:
    // 0x2fc1f8: 0xc0899bc  jal         func_2266F0
label_2fc1fc:
    if (ctx->pc == 0x2FC1FCu) {
        ctx->pc = 0x2FC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1F8u;
        // 0x2fc1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC200u;
        goto label_2fc200;
    }
    ctx->pc = 0x2FC1F8u;
    SET_GPR_U32(ctx, 31, 0x2FC200u);
    ctx->pc = 0x2FC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1F8u;
    // 0x2fc1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC1F8u, 0x2FC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC200u;
label_2fc200:
    // 0x2fc200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fc200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc204:
    // 0x2fc204: 0xc0899bc  jal         func_2266F0
label_2fc208:
    if (ctx->pc == 0x2FC208u) {
        ctx->pc = 0x2FC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC204u;
        // 0x2fc208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC20Cu;
        goto label_2fc20c;
    }
    ctx->pc = 0x2FC204u;
    SET_GPR_U32(ctx, 31, 0x2FC20Cu);
    ctx->pc = 0x2FC208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC204u;
    // 0x2fc208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC204u, 0x2FC20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC20Cu;
label_2fc20c:
    // 0x2fc20c: 0x8c450264  lw          $a1, 0x264($v0)
    ctx->pc = 0x2fc20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
label_2fc210:
    // 0x2fc210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fc214:
    // 0x2fc214: 0xc0984bc  jal         func_2612F0
label_2fc218:
    if (ctx->pc == 0x2FC218u) {
        ctx->pc = 0x2FC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC214u;
        // 0x2fc218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC21Cu;
        goto label_2fc21c;
    }
    ctx->pc = 0x2FC214u;
    SET_GPR_U32(ctx, 31, 0x2FC21Cu);
    ctx->pc = 0x2FC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC214u;
    // 0x2fc218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x2FC214u, 0x2FC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC21Cu;
label_2fc21c:
    // 0x2fc21c: 0xc0899bc  jal         func_2266F0
label_2fc220:
    if (ctx->pc == 0x2FC220u) {
        ctx->pc = 0x2FC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC21Cu;
        // 0x2fc220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC224u;
        goto label_2fc224;
    }
    ctx->pc = 0x2FC21Cu;
    SET_GPR_U32(ctx, 31, 0x2FC224u);
    ctx->pc = 0x2FC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC21Cu;
    // 0x2fc220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC21Cu, 0x2FC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC224u;
label_2fc224:
    // 0x2fc224: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x2fc224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_2fc228:
    // 0x2fc228: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_2fc22c:
    if (ctx->pc == 0x2FC22Cu) {
        ctx->pc = 0x2FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC228u;
        // 0x2fc22c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC230u;
        goto label_2fc230;
    }
    ctx->pc = 0x2FC228u;
    {
        const bool branch_taken_0x2fc228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc228) {
            ctx->pc = 0x2FC22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC228u;
            // 0x2fc22c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC2D8u;
            goto label_2fc2d8;
        }
    }
    ctx->pc = 0x2FC230u;
label_2fc230:
    // 0x2fc230: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2fc230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fc234:
    // 0x2fc234: 0xc0899bc  jal         func_2266F0
label_2fc238:
    if (ctx->pc == 0x2FC238u) {
        ctx->pc = 0x2FC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC234u;
        // 0x2fc238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC23Cu;
        goto label_2fc23c;
    }
    ctx->pc = 0x2FC234u;
    SET_GPR_U32(ctx, 31, 0x2FC23Cu);
    ctx->pc = 0x2FC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC234u;
    // 0x2fc238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC234u, 0x2FC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC23Cu;
label_2fc23c:
    // 0x2fc23c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2fc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2fc240:
    // 0x2fc240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc244:
    // 0x2fc244: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2fc244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2fc248:
    // 0x2fc248: 0xc0899bc  jal         func_2266F0
label_2fc24c:
    if (ctx->pc == 0x2FC24Cu) {
        ctx->pc = 0x2FC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC248u;
        // 0x2fc24c: 0xac4300c0  sw          $v1, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC250u;
        goto label_2fc250;
    }
    ctx->pc = 0x2FC248u;
    SET_GPR_U32(ctx, 31, 0x2FC250u);
    ctx->pc = 0x2FC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC248u;
    // 0x2fc24c: 0xac4300c0  sw          $v1, 0xC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC248u, 0x2FC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC250u;
label_2fc250:
    // 0x2fc250: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_2fc254:
    // 0x2fc254: 0xc073e86  jal         func_1CFA18
label_2fc258:
    if (ctx->pc == 0x2FC258u) {
        ctx->pc = 0x2FC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC254u;
        // 0x2fc258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC25Cu;
        goto label_2fc25c;
    }
    ctx->pc = 0x2FC254u;
    SET_GPR_U32(ctx, 31, 0x2FC25Cu);
    ctx->pc = 0x2FC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC254u;
    // 0x2fc258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FC254u, 0x2FC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC25Cu;
label_2fc25c:
    // 0x2fc25c: 0xc0899bc  jal         func_2266F0
label_2fc260:
    if (ctx->pc == 0x2FC260u) {
        ctx->pc = 0x2FC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC25Cu;
        // 0x2fc260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC264u;
        goto label_2fc264;
    }
    ctx->pc = 0x2FC25Cu;
    SET_GPR_U32(ctx, 31, 0x2FC264u);
    ctx->pc = 0x2FC260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC25Cu;
    // 0x2fc260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC25Cu, 0x2FC264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC264u;
label_2fc264:
    // 0x2fc264: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x2fc264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_2fc268:
    // 0x2fc268: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fc268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2fc26c:
    // 0x2fc26c: 0xc073f08  jal         func_1CFC20
label_2fc270:
    if (ctx->pc == 0x2FC270u) {
        ctx->pc = 0x2FC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC26Cu;
        // 0x2fc270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC274u;
        goto label_2fc274;
    }
    ctx->pc = 0x2FC26Cu;
    SET_GPR_U32(ctx, 31, 0x2FC274u);
    ctx->pc = 0x2FC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC26Cu;
    // 0x2fc270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2FC26Cu, 0x2FC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC274u;
label_2fc274:
    // 0x2fc274: 0xc0899bc  jal         func_2266F0
label_2fc278:
    if (ctx->pc == 0x2FC278u) {
        ctx->pc = 0x2FC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC274u;
        // 0x2fc278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC27Cu;
        goto label_2fc27c;
    }
    ctx->pc = 0x2FC274u;
    SET_GPR_U32(ctx, 31, 0x2FC27Cu);
    ctx->pc = 0x2FC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC274u;
    // 0x2fc278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC274u, 0x2FC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC27Cu;
label_2fc27c:
    // 0x2fc27c: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x2fc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_2fc280:
    // 0x2fc280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fc280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc284:
    // 0x2fc284: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2fc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2fc288:
    // 0x2fc288: 0x40f809  jalr        $v0
label_2fc28c:
    if (ctx->pc == 0x2FC28Cu) {
        ctx->pc = 0x2FC290u;
        goto label_2fc290;
    }
    ctx->pc = 0x2FC288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FC290u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC288u, 0x2FC290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC290u;
label_2fc290:
    // 0x2fc290: 0xc0899bc  jal         func_2266F0
label_2fc294:
    if (ctx->pc == 0x2FC294u) {
        ctx->pc = 0x2FC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC290u;
        // 0x2fc294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC298u;
        goto label_2fc298;
    }
    ctx->pc = 0x2FC290u;
    SET_GPR_U32(ctx, 31, 0x2FC298u);
    ctx->pc = 0x2FC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC290u;
    // 0x2fc294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC290u, 0x2FC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC298u;
label_2fc298:
    // 0x2fc298: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x2fc298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_2fc29c:
    // 0x2fc29c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fc29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc2a0:
    // 0x2fc2a0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2fc2a4:
    // 0x2fc2a4: 0x40f809  jalr        $v0
label_2fc2a8:
    if (ctx->pc == 0x2FC2A8u) {
        ctx->pc = 0x2FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2A4u;
        // 0x2fc2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC2ACu;
        goto label_2fc2ac;
    }
    ctx->pc = 0x2FC2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FC2ACu);
        ctx->pc = 0x2FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2A4u;
        // 0x2fc2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC2A4u, 0x2FC2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC2ACu;
label_2fc2ac:
    // 0x2fc2ac: 0xc0899bc  jal         func_2266F0
label_2fc2b0:
    if (ctx->pc == 0x2FC2B0u) {
        ctx->pc = 0x2FC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2ACu;
        // 0x2fc2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC2B4u;
        goto label_2fc2b4;
    }
    ctx->pc = 0x2FC2ACu;
    SET_GPR_U32(ctx, 31, 0x2FC2B4u);
    ctx->pc = 0x2FC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2ACu;
    // 0x2fc2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC2ACu, 0x2FC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2B4u;
label_2fc2b4:
    // 0x2fc2b4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2fc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2fc2b8:
    // 0x2fc2b8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2fc2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fc2bc:
    // 0x2fc2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc2c0:
    // 0x2fc2c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2fc2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2fc2c4:
    // 0x2fc2c4: 0xc0899bc  jal         func_2266F0
label_2fc2c8:
    if (ctx->pc == 0x2FC2C8u) {
        ctx->pc = 0x2FC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2C4u;
        // 0x2fc2c8: 0xac4300c0  sw          $v1, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC2CCu;
        goto label_2fc2cc;
    }
    ctx->pc = 0x2FC2C4u;
    SET_GPR_U32(ctx, 31, 0x2FC2CCu);
    ctx->pc = 0x2FC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2C4u;
    // 0x2fc2c8: 0xac4300c0  sw          $v1, 0xC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FC2C4u, 0x2FC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2CCu;
label_2fc2cc:
    // 0x2fc2cc: 0xc098514  jal         func_261450
label_2fc2d0:
    if (ctx->pc == 0x2FC2D0u) {
        ctx->pc = 0x2FC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2CCu;
        // 0x2fc2d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC2D4u;
        goto label_2fc2d4;
    }
    ctx->pc = 0x2FC2CCu;
    SET_GPR_U32(ctx, 31, 0x2FC2D4u);
    ctx->pc = 0x2FC2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2CCu;
    // 0x2fc2d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x2FC2CCu, 0x2FC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2D4u;
label_2fc2d4:
    // 0x2fc2d4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2fc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2fc2d8:
    // 0x2fc2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc2dc:
    // 0x2fc2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fc2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc2e0:
    // 0x2fc2e0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2fc2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2fc2e4:
    // 0x2fc2e4: 0x40f809  jalr        $v0
label_2fc2e8:
    if (ctx->pc == 0x2FC2E8u) {
        ctx->pc = 0x2FC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2E4u;
        // 0x2fc2e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC2ECu;
        goto label_2fc2ec;
    }
    ctx->pc = 0x2FC2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FC2ECu);
        ctx->pc = 0x2FC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2E4u;
        // 0x2fc2e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC2E4u, 0x2FC2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FC2ECu;
label_2fc2ec:
    // 0x2fc2ec: 0x16400036  bnez        $s2, . + 4 + (0x36 << 2)
label_2fc2f0:
    if (ctx->pc == 0x2FC2F0u) {
        ctx->pc = 0x2FC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2ECu;
        // 0x2fc2f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC2F4u;
        goto label_2fc2f4;
    }
    ctx->pc = 0x2FC2ECu;
    {
        const bool branch_taken_0x2fc2ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2ECu;
        // 0x2fc2f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2ec) {
            ctx->pc = 0x2FC3C8u;
            goto label_2fc3c8;
        }
    }
    ctx->pc = 0x2FC2F4u;
label_2fc2f4:
    // 0x2fc2f4: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x2fc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2fc2f8:
    // 0x2fc2f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2fc2fc:
    if (ctx->pc == 0x2FC2FCu) {
        ctx->pc = 0x2FC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2F8u;
        // 0x2fc2fc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC300u;
        goto label_2fc300;
    }
    ctx->pc = 0x2FC2F8u;
    {
        const bool branch_taken_0x2fc2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2F8u;
        // 0x2fc2fc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2f8) {
            ctx->pc = 0x2FC338u;
            goto label_2fc338;
        }
    }
    ctx->pc = 0x2FC300u;
label_2fc300:
    // 0x2fc300: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2fc300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2fc304:
    // 0x2fc304: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2fc304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2fc308:
    // 0x2fc308: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_2fc30c:
    if (ctx->pc == 0x2FC30Cu) {
        ctx->pc = 0x2FC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC308u;
        // 0x2fc30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC310u;
        goto label_2fc310;
    }
    ctx->pc = 0x2FC308u;
    {
        const bool branch_taken_0x2fc308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC308u;
        // 0x2fc30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc308) {
            ctx->pc = 0x2FC320u;
            goto label_2fc320;
        }
    }
    ctx->pc = 0x2FC310u;
label_2fc310:
    // 0x2fc310: 0xc0bc5e2  jal         func_2F1788
label_2fc314:
    if (ctx->pc == 0x2FC314u) {
        ctx->pc = 0x2FC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC310u;
        // 0x2fc314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC318u;
        goto label_2fc318;
    }
    ctx->pc = 0x2FC310u;
    SET_GPR_U32(ctx, 31, 0x2FC318u);
    ctx->pc = 0x2FC314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC310u;
    // 0x2fc314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x2FC310u, 0x2FC318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC318u;
label_2fc318:
    // 0x2fc318: 0x10000017  b           . + 4 + (0x17 << 2)
label_2fc31c:
    if (ctx->pc == 0x2FC31Cu) {
        ctx->pc = 0x2FC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC318u;
        // 0x2fc31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC320u;
        goto label_2fc320;
    }
    ctx->pc = 0x2FC318u;
    {
        const bool branch_taken_0x2fc318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC318u;
        // 0x2fc31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc318) {
            ctx->pc = 0x2FC378u;
            goto label_2fc378;
        }
    }
    ctx->pc = 0x2FC320u;
label_2fc320:
    // 0x2fc320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fc320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc324:
    // 0x2fc324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc328:
    // 0x2fc328: 0xc0bc58c  jal         func_2F1630
label_2fc32c:
    if (ctx->pc == 0x2FC32Cu) {
        ctx->pc = 0x2FC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC328u;
        // 0x2fc32c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC330u;
        goto label_2fc330;
    }
    ctx->pc = 0x2FC328u;
    SET_GPR_U32(ctx, 31, 0x2FC330u);
    ctx->pc = 0x2FC32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC328u;
    // 0x2fc32c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1630u, 0x2FC328u, 0x2FC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC330u;
label_2fc330:
    // 0x2fc330: 0x10000011  b           . + 4 + (0x11 << 2)
label_2fc334:
    if (ctx->pc == 0x2FC334u) {
        ctx->pc = 0x2FC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC330u;
        // 0x2fc334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC338u;
        goto label_2fc338;
    }
    ctx->pc = 0x2FC330u;
    {
        const bool branch_taken_0x2fc330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC330u;
        // 0x2fc334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc330) {
            ctx->pc = 0x2FC378u;
            goto label_2fc378;
        }
    }
    ctx->pc = 0x2FC338u;
label_2fc338:
    // 0x2fc338: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2fc338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2fc33c:
    // 0x2fc33c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2fc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2fc340:
    // 0x2fc340: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2fc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2fc344:
    // 0x2fc344: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2fc348:
    if (ctx->pc == 0x2FC348u) {
        ctx->pc = 0x2FC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC344u;
        // 0x2fc348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC34Cu;
        goto label_2fc34c;
    }
    ctx->pc = 0x2FC344u;
    {
        const bool branch_taken_0x2fc344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC344u;
        // 0x2fc348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc344) {
            ctx->pc = 0x2FC358u;
            goto label_2fc358;
        }
    }
    ctx->pc = 0x2FC34Cu;
label_2fc34c:
    // 0x2fc34c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2fc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2fc350:
    // 0x2fc350: 0x2842078b  slti        $v0, $v0, 0x78B
    ctx->pc = 0x2fc350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1931) ? 1 : 0);
label_2fc354:
    // 0x2fc354: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x2fc354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fc358:
    // 0x2fc358: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2fc35c:
    if (ctx->pc == 0x2FC35Cu) {
        ctx->pc = 0x2FC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC358u;
        // 0x2fc35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC360u;
        goto label_2fc360;
    }
    ctx->pc = 0x2FC358u;
    {
        const bool branch_taken_0x2fc358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC358u;
        // 0x2fc35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc358) {
            ctx->pc = 0x2FC374u;
            goto label_2fc374;
        }
    }
    ctx->pc = 0x2FC360u;
label_2fc360:
    // 0x2fc360: 0xc0bc5e2  jal         func_2F1788
label_2fc364:
    if (ctx->pc == 0x2FC364u) {
        ctx->pc = 0x2FC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC360u;
        // 0x2fc364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC368u;
        goto label_2fc368;
    }
    ctx->pc = 0x2FC360u;
    SET_GPR_U32(ctx, 31, 0x2FC368u);
    ctx->pc = 0x2FC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC360u;
    // 0x2fc364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x2FC360u, 0x2FC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC368u;
label_2fc368:
    // 0x2fc368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc36c:
    // 0x2fc36c: 0xc08e3b2  jal         func_238EC8
label_2fc370:
    if (ctx->pc == 0x2FC370u) {
        ctx->pc = 0x2FC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC36Cu;
        // 0x2fc370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC374u;
        goto label_2fc374;
    }
    ctx->pc = 0x2FC36Cu;
    SET_GPR_U32(ctx, 31, 0x2FC374u);
    ctx->pc = 0x2FC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC36Cu;
    // 0x2fc370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x2FC36Cu, 0x2FC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC374u;
label_2fc374:
    // 0x2fc374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc378:
    // 0x2fc378: 0xc08a15a  jal         func_228568
label_2fc37c:
    if (ctx->pc == 0x2FC37Cu) {
        ctx->pc = 0x2FC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC378u;
        // 0x2fc37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC380u;
        goto label_2fc380;
    }
    ctx->pc = 0x2FC378u;
    SET_GPR_U32(ctx, 31, 0x2FC380u);
    ctx->pc = 0x2FC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC378u;
    // 0x2fc37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2FC378u, 0x2FC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC380u;
label_2fc380:
    // 0x2fc380: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2fc380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2fc384:
    // 0x2fc384: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2fc384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2fc388:
    // 0x2fc388: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x2fc388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_2fc38c:
    // 0x2fc38c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2fc38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2fc390:
    // 0x2fc390: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2fc394:
    if (ctx->pc == 0x2FC394u) {
        ctx->pc = 0x2FC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC390u;
        // 0x2fc394: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC398u;
        goto label_2fc398;
    }
    ctx->pc = 0x2FC390u;
    {
        const bool branch_taken_0x2fc390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc390) {
            ctx->pc = 0x2FC394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC390u;
            // 0x2fc394: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC3B0u;
            goto label_2fc3b0;
        }
    }
    ctx->pc = 0x2FC398u;
label_2fc398:
    // 0x2fc398: 0xc06974a  jal         func_1A5D28
label_2fc39c:
    if (ctx->pc == 0x2FC39Cu) {
        ctx->pc = 0x2FC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC398u;
        // 0x2fc39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC3A0u;
        goto label_2fc3a0;
    }
    ctx->pc = 0x2FC398u;
    SET_GPR_U32(ctx, 31, 0x2FC3A0u);
    ctx->pc = 0x2FC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC398u;
    // 0x2fc39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2FC398u, 0x2FC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC3A0u;
label_2fc3a0:
    // 0x2fc3a0: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2fc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2fc3a4:
    // 0x2fc3a4: 0xc06a05e  jal         func_1A8178
label_2fc3a8:
    if (ctx->pc == 0x2FC3A8u) {
        ctx->pc = 0x2FC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3A4u;
        // 0x2fc3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC3ACu;
        goto label_2fc3ac;
    }
    ctx->pc = 0x2FC3A4u;
    SET_GPR_U32(ctx, 31, 0x2FC3ACu);
    ctx->pc = 0x2FC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC3A4u;
    // 0x2fc3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FC3A4u, 0x2FC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC3ACu;
label_2fc3ac:
    // 0x2fc3ac: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2fc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2fc3b0:
    // 0x2fc3b0: 0xc06b85c  jal         func_1AE170
label_2fc3b4:
    if (ctx->pc == 0x2FC3B4u) {
        ctx->pc = 0x2FC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3B0u;
        // 0x2fc3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC3B8u;
        goto label_2fc3b8;
    }
    ctx->pc = 0x2FC3B0u;
    SET_GPR_U32(ctx, 31, 0x2FC3B8u);
    ctx->pc = 0x2FC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC3B0u;
    // 0x2fc3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x2FC3B0u, 0x2FC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC3B8u;
label_2fc3b8:
    // 0x2fc3b8: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2fc3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2fc3bc:
    // 0x2fc3bc: 0xc06bfc8  jal         func_1AFF20
label_2fc3c0:
    if (ctx->pc == 0x2FC3C0u) {
        ctx->pc = 0x2FC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3BCu;
        // 0x2fc3c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC3C4u;
        goto label_2fc3c4;
    }
    ctx->pc = 0x2FC3BCu;
    SET_GPR_U32(ctx, 31, 0x2FC3C4u);
    ctx->pc = 0x2FC3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC3BCu;
    // 0x2fc3c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2FC3BCu, 0x2FC3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC3C4u;
label_2fc3c4:
    // 0x2fc3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc3c8:
    // 0x2fc3c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2fc3cc:
    // 0x2fc3cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fc3ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc3d0:
    // 0x2fc3d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fc3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2fc3d4:
    // 0x2fc3d4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2fc3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fc3d8:
    // 0x2fc3d8: 0x3e00008  jr          $ra
label_2fc3dc:
    if (ctx->pc == 0x2FC3DCu) {
        ctx->pc = 0x2FC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3D8u;
        // 0x2fc3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FC3E0u;
        goto label_fallthrough_0x2fc3d8;
    }
    ctx->pc = 0x2FC3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC3D8u;
        // 0x2fc3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fc3d8:
    ctx->pc = 0x2FC3E0u;
}
