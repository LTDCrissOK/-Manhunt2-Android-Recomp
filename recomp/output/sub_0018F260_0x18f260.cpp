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

// Function: sub_0018F260
// Address: 0x18f260 - 0x18f590
void sub_0018F260_0x18f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F260_0x18f260");
#endif

    switch (ctx->pc) {
        case 0x18f260u: goto label_18f260;
        case 0x18f264u: goto label_18f264;
        case 0x18f268u: goto label_18f268;
        case 0x18f26cu: goto label_18f26c;
        case 0x18f270u: goto label_18f270;
        case 0x18f274u: goto label_18f274;
        case 0x18f278u: goto label_18f278;
        case 0x18f27cu: goto label_18f27c;
        case 0x18f280u: goto label_18f280;
        case 0x18f284u: goto label_18f284;
        case 0x18f288u: goto label_18f288;
        case 0x18f28cu: goto label_18f28c;
        case 0x18f290u: goto label_18f290;
        case 0x18f294u: goto label_18f294;
        case 0x18f298u: goto label_18f298;
        case 0x18f29cu: goto label_18f29c;
        case 0x18f2a0u: goto label_18f2a0;
        case 0x18f2a4u: goto label_18f2a4;
        case 0x18f2a8u: goto label_18f2a8;
        case 0x18f2acu: goto label_18f2ac;
        case 0x18f2b0u: goto label_18f2b0;
        case 0x18f2b4u: goto label_18f2b4;
        case 0x18f2b8u: goto label_18f2b8;
        case 0x18f2bcu: goto label_18f2bc;
        case 0x18f2c0u: goto label_18f2c0;
        case 0x18f2c4u: goto label_18f2c4;
        case 0x18f2c8u: goto label_18f2c8;
        case 0x18f2ccu: goto label_18f2cc;
        case 0x18f2d0u: goto label_18f2d0;
        case 0x18f2d4u: goto label_18f2d4;
        case 0x18f2d8u: goto label_18f2d8;
        case 0x18f2dcu: goto label_18f2dc;
        case 0x18f2e0u: goto label_18f2e0;
        case 0x18f2e4u: goto label_18f2e4;
        case 0x18f2e8u: goto label_18f2e8;
        case 0x18f2ecu: goto label_18f2ec;
        case 0x18f2f0u: goto label_18f2f0;
        case 0x18f2f4u: goto label_18f2f4;
        case 0x18f2f8u: goto label_18f2f8;
        case 0x18f2fcu: goto label_18f2fc;
        case 0x18f300u: goto label_18f300;
        case 0x18f304u: goto label_18f304;
        case 0x18f308u: goto label_18f308;
        case 0x18f30cu: goto label_18f30c;
        case 0x18f310u: goto label_18f310;
        case 0x18f314u: goto label_18f314;
        case 0x18f318u: goto label_18f318;
        case 0x18f31cu: goto label_18f31c;
        case 0x18f320u: goto label_18f320;
        case 0x18f324u: goto label_18f324;
        case 0x18f328u: goto label_18f328;
        case 0x18f32cu: goto label_18f32c;
        case 0x18f330u: goto label_18f330;
        case 0x18f334u: goto label_18f334;
        case 0x18f338u: goto label_18f338;
        case 0x18f33cu: goto label_18f33c;
        case 0x18f340u: goto label_18f340;
        case 0x18f344u: goto label_18f344;
        case 0x18f348u: goto label_18f348;
        case 0x18f34cu: goto label_18f34c;
        case 0x18f350u: goto label_18f350;
        case 0x18f354u: goto label_18f354;
        case 0x18f358u: goto label_18f358;
        case 0x18f35cu: goto label_18f35c;
        case 0x18f360u: goto label_18f360;
        case 0x18f364u: goto label_18f364;
        case 0x18f368u: goto label_18f368;
        case 0x18f36cu: goto label_18f36c;
        case 0x18f370u: goto label_18f370;
        case 0x18f374u: goto label_18f374;
        case 0x18f378u: goto label_18f378;
        case 0x18f37cu: goto label_18f37c;
        case 0x18f380u: goto label_18f380;
        case 0x18f384u: goto label_18f384;
        case 0x18f388u: goto label_18f388;
        case 0x18f38cu: goto label_18f38c;
        case 0x18f390u: goto label_18f390;
        case 0x18f394u: goto label_18f394;
        case 0x18f398u: goto label_18f398;
        case 0x18f39cu: goto label_18f39c;
        case 0x18f3a0u: goto label_18f3a0;
        case 0x18f3a4u: goto label_18f3a4;
        case 0x18f3a8u: goto label_18f3a8;
        case 0x18f3acu: goto label_18f3ac;
        case 0x18f3b0u: goto label_18f3b0;
        case 0x18f3b4u: goto label_18f3b4;
        case 0x18f3b8u: goto label_18f3b8;
        case 0x18f3bcu: goto label_18f3bc;
        case 0x18f3c0u: goto label_18f3c0;
        case 0x18f3c4u: goto label_18f3c4;
        case 0x18f3c8u: goto label_18f3c8;
        case 0x18f3ccu: goto label_18f3cc;
        case 0x18f3d0u: goto label_18f3d0;
        case 0x18f3d4u: goto label_18f3d4;
        case 0x18f3d8u: goto label_18f3d8;
        case 0x18f3dcu: goto label_18f3dc;
        case 0x18f3e0u: goto label_18f3e0;
        case 0x18f3e4u: goto label_18f3e4;
        case 0x18f3e8u: goto label_18f3e8;
        case 0x18f3ecu: goto label_18f3ec;
        case 0x18f3f0u: goto label_18f3f0;
        case 0x18f3f4u: goto label_18f3f4;
        case 0x18f3f8u: goto label_18f3f8;
        case 0x18f3fcu: goto label_18f3fc;
        case 0x18f400u: goto label_18f400;
        case 0x18f404u: goto label_18f404;
        case 0x18f408u: goto label_18f408;
        case 0x18f40cu: goto label_18f40c;
        case 0x18f410u: goto label_18f410;
        case 0x18f414u: goto label_18f414;
        case 0x18f418u: goto label_18f418;
        case 0x18f41cu: goto label_18f41c;
        case 0x18f420u: goto label_18f420;
        case 0x18f424u: goto label_18f424;
        case 0x18f428u: goto label_18f428;
        case 0x18f42cu: goto label_18f42c;
        case 0x18f430u: goto label_18f430;
        case 0x18f434u: goto label_18f434;
        case 0x18f438u: goto label_18f438;
        case 0x18f43cu: goto label_18f43c;
        case 0x18f440u: goto label_18f440;
        case 0x18f444u: goto label_18f444;
        case 0x18f448u: goto label_18f448;
        case 0x18f44cu: goto label_18f44c;
        case 0x18f450u: goto label_18f450;
        case 0x18f454u: goto label_18f454;
        case 0x18f458u: goto label_18f458;
        case 0x18f45cu: goto label_18f45c;
        case 0x18f460u: goto label_18f460;
        case 0x18f464u: goto label_18f464;
        case 0x18f468u: goto label_18f468;
        case 0x18f46cu: goto label_18f46c;
        case 0x18f470u: goto label_18f470;
        case 0x18f474u: goto label_18f474;
        case 0x18f478u: goto label_18f478;
        case 0x18f47cu: goto label_18f47c;
        case 0x18f480u: goto label_18f480;
        case 0x18f484u: goto label_18f484;
        case 0x18f488u: goto label_18f488;
        case 0x18f48cu: goto label_18f48c;
        case 0x18f490u: goto label_18f490;
        case 0x18f494u: goto label_18f494;
        case 0x18f498u: goto label_18f498;
        case 0x18f49cu: goto label_18f49c;
        case 0x18f4a0u: goto label_18f4a0;
        case 0x18f4a4u: goto label_18f4a4;
        case 0x18f4a8u: goto label_18f4a8;
        case 0x18f4acu: goto label_18f4ac;
        case 0x18f4b0u: goto label_18f4b0;
        case 0x18f4b4u: goto label_18f4b4;
        case 0x18f4b8u: goto label_18f4b8;
        case 0x18f4bcu: goto label_18f4bc;
        case 0x18f4c0u: goto label_18f4c0;
        case 0x18f4c4u: goto label_18f4c4;
        case 0x18f4c8u: goto label_18f4c8;
        case 0x18f4ccu: goto label_18f4cc;
        case 0x18f4d0u: goto label_18f4d0;
        case 0x18f4d4u: goto label_18f4d4;
        case 0x18f4d8u: goto label_18f4d8;
        case 0x18f4dcu: goto label_18f4dc;
        case 0x18f4e0u: goto label_18f4e0;
        case 0x18f4e4u: goto label_18f4e4;
        case 0x18f4e8u: goto label_18f4e8;
        case 0x18f4ecu: goto label_18f4ec;
        case 0x18f4f0u: goto label_18f4f0;
        case 0x18f4f4u: goto label_18f4f4;
        case 0x18f4f8u: goto label_18f4f8;
        case 0x18f4fcu: goto label_18f4fc;
        case 0x18f500u: goto label_18f500;
        case 0x18f504u: goto label_18f504;
        case 0x18f508u: goto label_18f508;
        case 0x18f50cu: goto label_18f50c;
        case 0x18f510u: goto label_18f510;
        case 0x18f514u: goto label_18f514;
        case 0x18f518u: goto label_18f518;
        case 0x18f51cu: goto label_18f51c;
        case 0x18f520u: goto label_18f520;
        case 0x18f524u: goto label_18f524;
        case 0x18f528u: goto label_18f528;
        case 0x18f52cu: goto label_18f52c;
        case 0x18f530u: goto label_18f530;
        case 0x18f534u: goto label_18f534;
        case 0x18f538u: goto label_18f538;
        case 0x18f53cu: goto label_18f53c;
        case 0x18f540u: goto label_18f540;
        case 0x18f544u: goto label_18f544;
        case 0x18f548u: goto label_18f548;
        case 0x18f54cu: goto label_18f54c;
        case 0x18f550u: goto label_18f550;
        case 0x18f554u: goto label_18f554;
        case 0x18f558u: goto label_18f558;
        case 0x18f55cu: goto label_18f55c;
        case 0x18f560u: goto label_18f560;
        case 0x18f564u: goto label_18f564;
        case 0x18f568u: goto label_18f568;
        case 0x18f56cu: goto label_18f56c;
        case 0x18f570u: goto label_18f570;
        case 0x18f574u: goto label_18f574;
        case 0x18f578u: goto label_18f578;
        case 0x18f57cu: goto label_18f57c;
        case 0x18f580u: goto label_18f580;
        case 0x18f584u: goto label_18f584;
        case 0x18f588u: goto label_18f588;
        case 0x18f58cu: goto label_18f58c;
        default: break;
    }

    ctx->pc = 0x18f260u;

label_18f260:
    // 0x18f260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18f264:
    // 0x18f264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18f268:
    // 0x18f268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f26c:
    // 0x18f26c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18f26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18f270:
    // 0x18f270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18f274:
    // 0x18f274: 0xc061a12  jal         func_186848
label_18f278:
    if (ctx->pc == 0x18F278u) {
        ctx->pc = 0x18F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F274u;
        // 0x18f278: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F27Cu;
        goto label_18f27c;
    }
    ctx->pc = 0x18F274u;
    SET_GPR_U32(ctx, 31, 0x18F27Cu);
    ctx->pc = 0x18F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F274u;
    // 0x18f278: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F274u, 0x18F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F27Cu;
label_18f27c:
    // 0x18f27c: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x18f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_18f280:
    // 0x18f280: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_18f284:
    if (ctx->pc == 0x18F284u) {
        ctx->pc = 0x18F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F280u;
        // 0x18f284: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F288u;
        goto label_18f288;
    }
    ctx->pc = 0x18F280u;
    {
        const bool branch_taken_0x18f280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F280u;
        // 0x18f284: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f280) {
            ctx->pc = 0x18F390u;
            goto label_18f390;
        }
    }
    ctx->pc = 0x18F288u;
label_18f288:
    // 0x18f288: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18f28c:
    // 0x18f28c: 0x50430041  beql        $v0, $v1, . + 4 + (0x41 << 2)
label_18f290:
    if (ctx->pc == 0x18F290u) {
        ctx->pc = 0x18F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F28Cu;
        // 0x18f290: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F294u;
        goto label_18f294;
    }
    ctx->pc = 0x18F28Cu;
    {
        const bool branch_taken_0x18f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f28c) {
            ctx->pc = 0x18F290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F28Cu;
            // 0x18f290: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F394u;
            goto label_18f394;
        }
    }
    ctx->pc = 0x18F294u;
label_18f294:
    // 0x18f294: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18f294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_18f298:
    // 0x18f298: 0xc061a12  jal         func_186848
label_18f29c:
    if (ctx->pc == 0x18F29Cu) {
        ctx->pc = 0x18F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F298u;
        // 0x18f29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2A0u;
        goto label_18f2a0;
    }
    ctx->pc = 0x18F298u;
    SET_GPR_U32(ctx, 31, 0x18F2A0u);
    ctx->pc = 0x18F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F298u;
    // 0x18f29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F298u, 0x18F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2A0u;
label_18f2a0:
    // 0x18f2a0: 0x24430170  addiu       $v1, $v0, 0x170
    ctx->pc = 0x18f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_18f2a4:
    // 0x18f2a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18f2a8:
    // 0x18f2a8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x18f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_18f2ac:
    // 0x18f2ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18f2b0:
    if (ctx->pc == 0x18F2B0u) {
        ctx->pc = 0x18F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2ACu;
        // 0x18f2b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2B4u;
        goto label_18f2b4;
    }
    ctx->pc = 0x18F2ACu;
    {
        const bool branch_taken_0x18f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2ACu;
        // 0x18f2b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2ac) {
            ctx->pc = 0x18F2B8u;
            goto label_18f2b8;
        }
    }
    ctx->pc = 0x18F2B4u;
label_18f2b4:
    // 0x18f2b4: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x18f2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18f2b8:
    // 0x18f2b8: 0xc061a12  jal         func_186848
label_18f2bc:
    if (ctx->pc == 0x18F2BCu) {
        ctx->pc = 0x18F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2B8u;
        // 0x18f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2C0u;
        goto label_18f2c0;
    }
    ctx->pc = 0x18F2B8u;
    SET_GPR_U32(ctx, 31, 0x18F2C0u);
    ctx->pc = 0x18F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2B8u;
    // 0x18f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F2B8u, 0x18F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2C0u;
label_18f2c0:
    // 0x18f2c0: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x18f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_18f2c4:
    // 0x18f2c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18f2c8:
    // 0x18f2c8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x18f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_18f2cc:
    // 0x18f2cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18f2d0:
    if (ctx->pc == 0x18F2D0u) {
        ctx->pc = 0x18F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2CCu;
        // 0x18f2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2D4u;
        goto label_18f2d4;
    }
    ctx->pc = 0x18F2CCu;
    {
        const bool branch_taken_0x18f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2CCu;
        // 0x18f2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2cc) {
            ctx->pc = 0x18F2D8u;
            goto label_18f2d8;
        }
    }
    ctx->pc = 0x18F2D4u;
label_18f2d4:
    // 0x18f2d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18f2d8:
    // 0x18f2d8: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
label_18f2dc:
    if (ctx->pc == 0x18F2DCu) {
        ctx->pc = 0x18F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2D8u;
        // 0x18f2dc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2E0u;
        goto label_18f2e0;
    }
    ctx->pc = 0x18F2D8u;
    {
        const bool branch_taken_0x18f2d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2D8u;
        // 0x18f2dc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2d8) {
            ctx->pc = 0x18F334u;
            goto label_18f334;
        }
    }
    ctx->pc = 0x18F2E0u;
label_18f2e0:
    // 0x18f2e0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18f2e4:
    // 0x18f2e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18f2e8:
    if (ctx->pc == 0x18F2E8u) {
        ctx->pc = 0x18F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2E4u;
        // 0x18f2e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2ECu;
        goto label_18f2ec;
    }
    ctx->pc = 0x18F2E4u;
    {
        const bool branch_taken_0x18f2e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2E4u;
        // 0x18f2e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2e4) {
            ctx->pc = 0x18F300u;
            goto label_18f300;
        }
    }
    ctx->pc = 0x18F2ECu;
label_18f2ec:
    // 0x18f2ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f2f0:
    // 0x18f2f0: 0x0  nop
    ctx->pc = 0x18f2f0u;
    // NOP
label_18f2f4:
    // 0x18f2f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18f2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18f2f8:
    // 0x18f2f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_18f2fc:
    if (ctx->pc == 0x18F2FCu) {
        ctx->pc = 0x18F300u;
        goto label_18f300;
    }
    ctx->pc = 0x18F2F8u;
    {
        const bool branch_taken_0x18f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2f8) {
            ctx->pc = 0x18F318u;
            goto label_18f318;
        }
    }
    ctx->pc = 0x18F300u;
label_18f300:
    // 0x18f300: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18f304:
    // 0x18f304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18f308:
    // 0x18f308: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f30c:
    // 0x18f30c: 0x0  nop
    ctx->pc = 0x18f30cu;
    // NOP
label_18f310:
    // 0x18f310: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18f310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18f314:
    // 0x18f314: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18f314u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18f318:
    // 0x18f318: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18f31c:
    // 0x18f31c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18f31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18f320:
    // 0x18f320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f324:
    // 0x18f324: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_18f328:
    // 0x18f328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f32c:
    // 0x18f32c: 0x10000016  b           . + 4 + (0x16 << 2)
label_18f330:
    if (ctx->pc == 0x18F330u) {
        ctx->pc = 0x18F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F32Cu;
        // 0x18f330: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F334u;
        goto label_18f334;
    }
    ctx->pc = 0x18F32Cu;
    {
        const bool branch_taken_0x18f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F32Cu;
        // 0x18f330: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f32c) {
            ctx->pc = 0x18F388u;
            goto label_18f388;
        }
    }
    ctx->pc = 0x18F334u;
label_18f334:
    // 0x18f334: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18f338:
    // 0x18f338: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18f33c:
    if (ctx->pc == 0x18F33Cu) {
        ctx->pc = 0x18F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F338u;
        // 0x18f33c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F340u;
        goto label_18f340;
    }
    ctx->pc = 0x18F338u;
    {
        const bool branch_taken_0x18f338 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F338u;
        // 0x18f33c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f338) {
            ctx->pc = 0x18F354u;
            goto label_18f354;
        }
    }
    ctx->pc = 0x18F340u;
label_18f340:
    // 0x18f340: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f344:
    // 0x18f344: 0x0  nop
    ctx->pc = 0x18f344u;
    // NOP
label_18f348:
    // 0x18f348: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18f348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18f34c:
    // 0x18f34c: 0x10000007  b           . + 4 + (0x7 << 2)
label_18f350:
    if (ctx->pc == 0x18F350u) {
        ctx->pc = 0x18F354u;
        goto label_18f354;
    }
    ctx->pc = 0x18F34Cu;
    {
        const bool branch_taken_0x18f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f34c) {
            ctx->pc = 0x18F36Cu;
            goto label_18f36c;
        }
    }
    ctx->pc = 0x18F354u;
label_18f354:
    // 0x18f354: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18f358:
    // 0x18f358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18f35c:
    // 0x18f35c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f360:
    // 0x18f360: 0x0  nop
    ctx->pc = 0x18f360u;
    // NOP
label_18f364:
    // 0x18f364: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18f364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18f368:
    // 0x18f368: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18f368u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18f36c:
    // 0x18f36c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18f36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18f370:
    // 0x18f370: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18f370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18f374:
    // 0x18f374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f378:
    // 0x18f378: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_18f37c:
    // 0x18f37c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18f37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_18f380:
    // 0x18f380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f384:
    // 0x18f384: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18f384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18f388:
    // 0x18f388: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18f38c:
    // 0x18f38c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x18f38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_18f390:
    // 0x18f390: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18f394:
    // 0x18f394: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f398:
    // 0x18f398: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_18f39c:
    if (ctx->pc == 0x18F39Cu) {
        ctx->pc = 0x18F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F398u;
        // 0x18f39c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3A0u;
        goto label_18f3a0;
    }
    ctx->pc = 0x18F398u;
    {
        const bool branch_taken_0x18f398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F398u;
        // 0x18f39c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f398) {
            ctx->pc = 0x18F3E4u;
            goto label_18f3e4;
        }
    }
    ctx->pc = 0x18F3A0u;
label_18f3a0:
    // 0x18f3a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_18f3a4:
    if (ctx->pc == 0x18F3A4u) {
        ctx->pc = 0x18F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3A0u;
        // 0x18f3a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3A8u;
        goto label_18f3a8;
    }
    ctx->pc = 0x18F3A0u;
    {
        const bool branch_taken_0x18f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f3a0) {
            ctx->pc = 0x18F3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F3A0u;
            // 0x18f3a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F3B8u;
            goto label_18f3b8;
        }
    }
    ctx->pc = 0x18F3A8u;
label_18f3a8:
    // 0x18f3a8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_18f3ac:
    if (ctx->pc == 0x18F3ACu) {
        ctx->pc = 0x18F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3A8u;
        // 0x18f3ac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3B0u;
        goto label_18f3b0;
    }
    ctx->pc = 0x18F3A8u;
    {
        const bool branch_taken_0x18f3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f3a8) {
            ctx->pc = 0x18F3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F3A8u;
            // 0x18f3ac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F3D0u;
            goto label_18f3d0;
        }
    }
    ctx->pc = 0x18F3B0u;
label_18f3b0:
    // 0x18f3b0: 0x10000071  b           . + 4 + (0x71 << 2)
label_18f3b4:
    if (ctx->pc == 0x18F3B4u) {
        ctx->pc = 0x18F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3B0u;
        // 0x18f3b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3B8u;
        goto label_18f3b8;
    }
    ctx->pc = 0x18F3B0u;
    {
        const bool branch_taken_0x18f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3B0u;
        // 0x18f3b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3b0) {
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F3B8u;
label_18f3b8:
    // 0x18f3b8: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_18f3bc:
    if (ctx->pc == 0x18F3BCu) {
        ctx->pc = 0x18F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3B8u;
        // 0x18f3bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3C0u;
        goto label_18f3c0;
    }
    ctx->pc = 0x18F3B8u;
    {
        const bool branch_taken_0x18f3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3B8u;
        // 0x18f3bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3b8) {
            ctx->pc = 0x18F504u;
            goto label_18f504;
        }
    }
    ctx->pc = 0x18F3C0u;
label_18f3c0:
    // 0x18f3c0: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
label_18f3c4:
    if (ctx->pc == 0x18F3C4u) {
        ctx->pc = 0x18F3C8u;
        goto label_18f3c8;
    }
    ctx->pc = 0x18F3C0u;
    {
        const bool branch_taken_0x18f3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f3c0) {
            ctx->pc = 0x18F4F4u;
            goto label_18f4f4;
        }
    }
    ctx->pc = 0x18F3C8u;
label_18f3c8:
    // 0x18f3c8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_18f3cc:
    if (ctx->pc == 0x18F3CCu) {
        ctx->pc = 0x18F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C8u;
        // 0x18f3cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3D0u;
        goto label_18f3d0;
    }
    ctx->pc = 0x18F3C8u;
    {
        const bool branch_taken_0x18f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C8u;
        // 0x18f3cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3c8) {
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F3D0u;
label_18f3d0:
    // 0x18f3d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18f3d4:
    // 0x18f3d4: 0x40f809  jalr        $v0
label_18f3d8:
    if (ctx->pc == 0x18F3D8u) {
        ctx->pc = 0x18F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3D4u;
        // 0x18f3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3DCu;
        goto label_18f3dc;
    }
    ctx->pc = 0x18F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F3DCu);
        ctx->pc = 0x18F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3D4u;
        // 0x18f3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F3D4u, 0x18F3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F3DCu;
label_18f3dc:
    // 0x18f3dc: 0x10000066  b           . + 4 + (0x66 << 2)
label_18f3e0:
    if (ctx->pc == 0x18F3E0u) {
        ctx->pc = 0x18F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3DCu;
        // 0x18f3e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3E4u;
        goto label_18f3e4;
    }
    ctx->pc = 0x18F3DCu;
    {
        const bool branch_taken_0x18f3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3DCu;
        // 0x18f3e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3dc) {
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F3E4u;
label_18f3e4:
    // 0x18f3e4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_18f3e8:
    // 0x18f3e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18f3ec:
    if (ctx->pc == 0x18F3ECu) {
        ctx->pc = 0x18F3F0u;
        goto label_18f3f0;
    }
    ctx->pc = 0x18F3E8u;
    {
        const bool branch_taken_0x18f3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f3e8) {
            ctx->pc = 0x18F40Cu;
            goto label_18f40c;
        }
    }
    ctx->pc = 0x18F3F0u;
label_18f3f0:
    // 0x18f3f0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18f3f4:
    // 0x18f3f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f3f8:
    // 0x18f3f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18f3fc:
    // 0x18f3fc: 0x40f809  jalr        $v0
label_18f400:
    if (ctx->pc == 0x18F400u) {
        ctx->pc = 0x18F404u;
        goto label_18f404;
    }
    ctx->pc = 0x18F3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F3FCu, 0x18F404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F404u;
label_18f404:
    // 0x18f404: 0x1000000c  b           . + 4 + (0xC << 2)
label_18f408:
    if (ctx->pc == 0x18F408u) {
        ctx->pc = 0x18F40Cu;
        goto label_18f40c;
    }
    ctx->pc = 0x18F404u;
    {
        const bool branch_taken_0x18f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f404) {
            ctx->pc = 0x18F438u;
            goto label_18f438;
        }
    }
    ctx->pc = 0x18F40Cu;
label_18f40c:
    // 0x18f40c: 0xc061a2a  jal         func_1868A8
label_18f410:
    if (ctx->pc == 0x18F410u) {
        ctx->pc = 0x18F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F40Cu;
        // 0x18f410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F414u;
        goto label_18f414;
    }
    ctx->pc = 0x18F40Cu;
    SET_GPR_U32(ctx, 31, 0x18F414u);
    ctx->pc = 0x18F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F40Cu;
    // 0x18f410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18F40Cu, 0x18F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F414u;
label_18f414:
    // 0x18f414: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18f414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18f418:
    // 0x18f418: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18f418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18f41c:
    // 0x18f41c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_18f420:
    if (ctx->pc == 0x18F420u) {
        ctx->pc = 0x18F424u;
        goto label_18f424;
    }
    ctx->pc = 0x18F41Cu;
    {
        const bool branch_taken_0x18f41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f41c) {
            ctx->pc = 0x18F438u;
            goto label_18f438;
        }
    }
    ctx->pc = 0x18F424u;
label_18f424:
    // 0x18f424: 0xc061a2a  jal         func_1868A8
label_18f428:
    if (ctx->pc == 0x18F428u) {
        ctx->pc = 0x18F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F424u;
        // 0x18f428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F42Cu;
        goto label_18f42c;
    }
    ctx->pc = 0x18F424u;
    SET_GPR_U32(ctx, 31, 0x18F42Cu);
    ctx->pc = 0x18F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F424u;
    // 0x18f428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18F424u, 0x18F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F42Cu;
label_18f42c:
    // 0x18f42c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f430:
    // 0x18f430: 0xc071154  jal         func_1C4550
label_18f434:
    if (ctx->pc == 0x18F434u) {
        ctx->pc = 0x18F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F430u;
        // 0x18f434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F438u;
        goto label_18f438;
    }
    ctx->pc = 0x18F430u;
    SET_GPR_U32(ctx, 31, 0x18F438u);
    ctx->pc = 0x18F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F430u;
    // 0x18f434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x18F430u, 0x18F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F438u;
label_18f438:
    // 0x18f438: 0xc061a12  jal         func_186848
label_18f43c:
    if (ctx->pc == 0x18F43Cu) {
        ctx->pc = 0x18F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F438u;
        // 0x18f43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F440u;
        goto label_18f440;
    }
    ctx->pc = 0x18F438u;
    SET_GPR_U32(ctx, 31, 0x18F440u);
    ctx->pc = 0x18F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F438u;
    // 0x18f43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F438u, 0x18F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F440u;
label_18f440:
    // 0x18f440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f444:
    // 0x18f444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f448:
    // 0x18f448: 0xc0702b8  jal         func_1C0AE0
label_18f44c:
    if (ctx->pc == 0x18F44Cu) {
        ctx->pc = 0x18F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F448u;
        // 0x18f44c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F450u;
        goto label_18f450;
    }
    ctx->pc = 0x18F448u;
    SET_GPR_U32(ctx, 31, 0x18F450u);
    ctx->pc = 0x18F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F448u;
    // 0x18f44c: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AE0u, 0x18F448u, 0x18F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F450u;
label_18f450:
    // 0x18f450: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18f450u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18f454:
    // 0x18f454: 0xc061a1e  jal         func_186878
label_18f458:
    if (ctx->pc == 0x18F458u) {
        ctx->pc = 0x18F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F454u;
        // 0x18f458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F45Cu;
        goto label_18f45c;
    }
    ctx->pc = 0x18F454u;
    SET_GPR_U32(ctx, 31, 0x18F45Cu);
    ctx->pc = 0x18F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F454u;
    // 0x18f458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18F454u, 0x18F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F45Cu;
label_18f45c:
    // 0x18f45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f460:
    // 0x18f460: 0xc061a2e  jal         func_1868B8
label_18f464:
    if (ctx->pc == 0x18F464u) {
        ctx->pc = 0x18F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F460u;
        // 0x18f464: 0xe454014c  swc1        $f20, 0x14C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F468u;
        goto label_18f468;
    }
    ctx->pc = 0x18F460u;
    SET_GPR_U32(ctx, 31, 0x18F468u);
    ctx->pc = 0x18F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F460u;
    // 0x18f464: 0xe454014c  swc1        $f20, 0x14C($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18F460u, 0x18F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F468u;
label_18f468:
    // 0x18f468: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18f46c:
    // 0x18f46c: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18f470:
    // 0x18f470: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18f470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18f474:
    // 0x18f474: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18f478:
    // 0x18f478: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
label_18f47c:
    if (ctx->pc == 0x18F47Cu) {
        ctx->pc = 0x18F480u;
        goto label_18f480;
    }
    ctx->pc = 0x18F478u;
    {
        const bool branch_taken_0x18f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18f478) {
            ctx->pc = 0x18F4A4u;
            goto label_18f4a4;
        }
    }
    ctx->pc = 0x18F480u;
label_18f480:
    // 0x18f480: 0xc061a12  jal         func_186848
label_18f484:
    if (ctx->pc == 0x18F484u) {
        ctx->pc = 0x18F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F480u;
        // 0x18f484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F488u;
        goto label_18f488;
    }
    ctx->pc = 0x18F480u;
    SET_GPR_U32(ctx, 31, 0x18F488u);
    ctx->pc = 0x18F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F480u;
    // 0x18f484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F480u, 0x18F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F488u;
label_18f488:
    // 0x18f488: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18f48c:
    // 0x18f48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f490:
    // 0x18f490: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18f494:
    // 0x18f494: 0x40f809  jalr        $v0
label_18f498:
    if (ctx->pc == 0x18F498u) {
        ctx->pc = 0x18F49Cu;
        goto label_18f49c;
    }
    ctx->pc = 0x18F494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F49Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F494u, 0x18F49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F49Cu;
label_18f49c:
    // 0x18f49c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_18f4a0:
    if (ctx->pc == 0x18F4A0u) {
        ctx->pc = 0x18F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F49Cu;
        // 0x18f4a0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4A4u;
        goto label_18f4a4;
    }
    ctx->pc = 0x18F49Cu;
    {
        const bool branch_taken_0x18f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f49c) {
            ctx->pc = 0x18F4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F49Cu;
            // 0x18f4a0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F4E0u;
            goto label_18f4e0;
        }
    }
    ctx->pc = 0x18F4A4u;
label_18f4a4:
    // 0x18f4a4: 0xc061a2a  jal         func_1868A8
label_18f4a8:
    if (ctx->pc == 0x18F4A8u) {
        ctx->pc = 0x18F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4A4u;
        // 0x18f4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4ACu;
        goto label_18f4ac;
    }
    ctx->pc = 0x18F4A4u;
    SET_GPR_U32(ctx, 31, 0x18F4ACu);
    ctx->pc = 0x18F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4A4u;
    // 0x18f4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18F4A4u, 0x18F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4ACu;
label_18f4ac:
    // 0x18f4ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f4b0:
    // 0x18f4b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18f4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18f4b4:
    // 0x18f4b4: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x18f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18f4b8:
    // 0x18f4b8: 0xc0952e8  jal         func_254BA0
label_18f4bc:
    if (ctx->pc == 0x18F4BCu) {
        ctx->pc = 0x18F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4B8u;
        // 0x18f4bc: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4C0u;
        goto label_18f4c0;
    }
    ctx->pc = 0x18F4B8u;
    SET_GPR_U32(ctx, 31, 0x18F4C0u);
    ctx->pc = 0x18F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4B8u;
    // 0x18f4bc: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18F4B8u, 0x18F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4C0u;
label_18f4c0:
    // 0x18f4c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18f4c4:
    // 0x18f4c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f4c8:
    // 0x18f4c8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x18f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_18f4cc:
    // 0x18f4cc: 0x40f809  jalr        $v0
label_18f4d0:
    if (ctx->pc == 0x18F4D0u) {
        ctx->pc = 0x18F4D4u;
        goto label_18f4d4;
    }
    ctx->pc = 0x18F4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F4D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F4CCu, 0x18F4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F4D4u;
label_18f4d4:
    // 0x18f4d4: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_18f4d8:
    if (ctx->pc == 0x18F4D8u) {
        ctx->pc = 0x18F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4D4u;
        // 0x18f4d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4DCu;
        goto label_18f4dc;
    }
    ctx->pc = 0x18F4D4u;
    {
        const bool branch_taken_0x18f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f4d4) {
            ctx->pc = 0x18F4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F4D4u;
            // 0x18f4d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F4DCu;
label_18f4dc:
    // 0x18f4dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18f4e0:
    // 0x18f4e0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18f4e4:
    // 0x18f4e4: 0x40f809  jalr        $v0
label_18f4e8:
    if (ctx->pc == 0x18F4E8u) {
        ctx->pc = 0x18F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4E4u;
        // 0x18f4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4ECu;
        goto label_18f4ec;
    }
    ctx->pc = 0x18F4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F4ECu);
        ctx->pc = 0x18F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4E4u;
        // 0x18f4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F4E4u, 0x18F4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F4ECu;
label_18f4ec:
    // 0x18f4ec: 0x10000022  b           . + 4 + (0x22 << 2)
label_18f4f0:
    if (ctx->pc == 0x18F4F0u) {
        ctx->pc = 0x18F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ECu;
        // 0x18f4f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4F4u;
        goto label_18f4f4;
    }
    ctx->pc = 0x18F4ECu;
    {
        const bool branch_taken_0x18f4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ECu;
        // 0x18f4f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4ec) {
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F4F4u;
label_18f4f4:
    // 0x18f4f4: 0xc063b84  jal         func_18EE10
label_18f4f8:
    if (ctx->pc == 0x18F4F8u) {
        ctx->pc = 0x18F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4F4u;
        // 0x18f4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4FCu;
        goto label_18f4fc;
    }
    ctx->pc = 0x18F4F4u;
    SET_GPR_U32(ctx, 31, 0x18F4FCu);
    ctx->pc = 0x18F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4F4u;
    // 0x18f4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE10u, 0x18F4F4u, 0x18F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4FCu;
label_18f4fc:
    // 0x18f4fc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_18f500:
    if (ctx->pc == 0x18F500u) {
        ctx->pc = 0x18F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4FCu;
        // 0x18f500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F504u;
        goto label_18f504;
    }
    ctx->pc = 0x18F4FCu;
    {
        const bool branch_taken_0x18f4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4FCu;
        // 0x18f500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4fc) {
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F504u;
label_18f504:
    // 0x18f504: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18f508:
    // 0x18f508: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18f50c:
    // 0x18f50c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18f510:
    if (ctx->pc == 0x18F510u) {
        ctx->pc = 0x18F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F50Cu;
        // 0x18f510: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F514u;
        goto label_18f514;
    }
    ctx->pc = 0x18F50Cu;
    {
        const bool branch_taken_0x18f50c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F50Cu;
        // 0x18f510: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f50c) {
            ctx->pc = 0x18F528u;
            goto label_18f528;
        }
    }
    ctx->pc = 0x18F514u;
label_18f514:
    // 0x18f514: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f518:
    // 0x18f518: 0x0  nop
    ctx->pc = 0x18f518u;
    // NOP
label_18f51c:
    // 0x18f51c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18f51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18f520:
    // 0x18f520: 0x10000007  b           . + 4 + (0x7 << 2)
label_18f524:
    if (ctx->pc == 0x18F524u) {
        ctx->pc = 0x18F528u;
        goto label_18f528;
    }
    ctx->pc = 0x18F520u;
    {
        const bool branch_taken_0x18f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f520) {
            ctx->pc = 0x18F540u;
            goto label_18f540;
        }
    }
    ctx->pc = 0x18F528u;
label_18f528:
    // 0x18f528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18f52c:
    // 0x18f52c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18f530:
    // 0x18f530: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f534:
    // 0x18f534: 0x0  nop
    ctx->pc = 0x18f534u;
    // NOP
label_18f538:
    // 0x18f538: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18f538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18f53c:
    // 0x18f53c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18f53cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18f540:
    // 0x18f540: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18f540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18f544:
    // 0x18f544: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18f544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18f548:
    // 0x18f548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f54c:
    // 0x18f54c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f550:
    // 0x18f550: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18f550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18f554:
    // 0x18f554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f558:
    // 0x18f558: 0x0  nop
    ctx->pc = 0x18f558u;
    // NOP
label_18f55c:
    // 0x18f55c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_18f560:
    if (ctx->pc == 0x18F560u) {
        ctx->pc = 0x18F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F55Cu;
        // 0x18f560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F564u;
        goto label_18f564;
    }
    ctx->pc = 0x18F55Cu;
    {
        const bool branch_taken_0x18f55c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f55c) {
            ctx->pc = 0x18F560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F55Cu;
            // 0x18f560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F578u;
            goto label_18f578;
        }
    }
    ctx->pc = 0x18F564u;
label_18f564:
    // 0x18f564: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18f568:
    // 0x18f568: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18f56c:
    // 0x18f56c: 0x40f809  jalr        $v0
label_18f570:
    if (ctx->pc == 0x18F570u) {
        ctx->pc = 0x18F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F56Cu;
        // 0x18f570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F574u;
        goto label_18f574;
    }
    ctx->pc = 0x18F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F574u);
        ctx->pc = 0x18F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F56Cu;
        // 0x18f570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F56Cu, 0x18F574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F574u;
label_18f574:
    // 0x18f574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f578:
    // 0x18f578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18f57c:
    // 0x18f57c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18f580:
    // 0x18f580: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f584:
    // 0x18f584: 0x3e00008  jr          $ra
label_18f588:
    if (ctx->pc == 0x18F588u) {
        ctx->pc = 0x18F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F584u;
        // 0x18f588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F58Cu;
        goto label_18f58c;
    }
    ctx->pc = 0x18F584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F584u;
        // 0x18f588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F58Cu;
label_18f58c:
    // 0x18f58c: 0x0  nop
    ctx->pc = 0x18f58cu;
    // NOP
    ctx->pc = 0x18f590u;
}
