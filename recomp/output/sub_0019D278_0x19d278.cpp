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

// Function: sub_0019D278
// Address: 0x19d278 - 0x19d3f8
void sub_0019D278_0x19d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D278_0x19d278");
#endif

    switch (ctx->pc) {
        case 0x19d278u: goto label_19d278;
        case 0x19d27cu: goto label_19d27c;
        case 0x19d280u: goto label_19d280;
        case 0x19d284u: goto label_19d284;
        case 0x19d288u: goto label_19d288;
        case 0x19d28cu: goto label_19d28c;
        case 0x19d290u: goto label_19d290;
        case 0x19d294u: goto label_19d294;
        case 0x19d298u: goto label_19d298;
        case 0x19d29cu: goto label_19d29c;
        case 0x19d2a0u: goto label_19d2a0;
        case 0x19d2a4u: goto label_19d2a4;
        case 0x19d2a8u: goto label_19d2a8;
        case 0x19d2acu: goto label_19d2ac;
        case 0x19d2b0u: goto label_19d2b0;
        case 0x19d2b4u: goto label_19d2b4;
        case 0x19d2b8u: goto label_19d2b8;
        case 0x19d2bcu: goto label_19d2bc;
        case 0x19d2c0u: goto label_19d2c0;
        case 0x19d2c4u: goto label_19d2c4;
        case 0x19d2c8u: goto label_19d2c8;
        case 0x19d2ccu: goto label_19d2cc;
        case 0x19d2d0u: goto label_19d2d0;
        case 0x19d2d4u: goto label_19d2d4;
        case 0x19d2d8u: goto label_19d2d8;
        case 0x19d2dcu: goto label_19d2dc;
        case 0x19d2e0u: goto label_19d2e0;
        case 0x19d2e4u: goto label_19d2e4;
        case 0x19d2e8u: goto label_19d2e8;
        case 0x19d2ecu: goto label_19d2ec;
        case 0x19d2f0u: goto label_19d2f0;
        case 0x19d2f4u: goto label_19d2f4;
        case 0x19d2f8u: goto label_19d2f8;
        case 0x19d2fcu: goto label_19d2fc;
        case 0x19d300u: goto label_19d300;
        case 0x19d304u: goto label_19d304;
        case 0x19d308u: goto label_19d308;
        case 0x19d30cu: goto label_19d30c;
        case 0x19d310u: goto label_19d310;
        case 0x19d314u: goto label_19d314;
        case 0x19d318u: goto label_19d318;
        case 0x19d31cu: goto label_19d31c;
        case 0x19d320u: goto label_19d320;
        case 0x19d324u: goto label_19d324;
        case 0x19d328u: goto label_19d328;
        case 0x19d32cu: goto label_19d32c;
        case 0x19d330u: goto label_19d330;
        case 0x19d334u: goto label_19d334;
        case 0x19d338u: goto label_19d338;
        case 0x19d33cu: goto label_19d33c;
        case 0x19d340u: goto label_19d340;
        case 0x19d344u: goto label_19d344;
        case 0x19d348u: goto label_19d348;
        case 0x19d34cu: goto label_19d34c;
        case 0x19d350u: goto label_19d350;
        case 0x19d354u: goto label_19d354;
        case 0x19d358u: goto label_19d358;
        case 0x19d35cu: goto label_19d35c;
        case 0x19d360u: goto label_19d360;
        case 0x19d364u: goto label_19d364;
        case 0x19d368u: goto label_19d368;
        case 0x19d36cu: goto label_19d36c;
        case 0x19d370u: goto label_19d370;
        case 0x19d374u: goto label_19d374;
        case 0x19d378u: goto label_19d378;
        case 0x19d37cu: goto label_19d37c;
        case 0x19d380u: goto label_19d380;
        case 0x19d384u: goto label_19d384;
        case 0x19d388u: goto label_19d388;
        case 0x19d38cu: goto label_19d38c;
        case 0x19d390u: goto label_19d390;
        case 0x19d394u: goto label_19d394;
        case 0x19d398u: goto label_19d398;
        case 0x19d39cu: goto label_19d39c;
        case 0x19d3a0u: goto label_19d3a0;
        case 0x19d3a4u: goto label_19d3a4;
        case 0x19d3a8u: goto label_19d3a8;
        case 0x19d3acu: goto label_19d3ac;
        case 0x19d3b0u: goto label_19d3b0;
        case 0x19d3b4u: goto label_19d3b4;
        case 0x19d3b8u: goto label_19d3b8;
        case 0x19d3bcu: goto label_19d3bc;
        case 0x19d3c0u: goto label_19d3c0;
        case 0x19d3c4u: goto label_19d3c4;
        case 0x19d3c8u: goto label_19d3c8;
        case 0x19d3ccu: goto label_19d3cc;
        case 0x19d3d0u: goto label_19d3d0;
        case 0x19d3d4u: goto label_19d3d4;
        case 0x19d3d8u: goto label_19d3d8;
        case 0x19d3dcu: goto label_19d3dc;
        case 0x19d3e0u: goto label_19d3e0;
        case 0x19d3e4u: goto label_19d3e4;
        case 0x19d3e8u: goto label_19d3e8;
        case 0x19d3ecu: goto label_19d3ec;
        case 0x19d3f0u: goto label_19d3f0;
        case 0x19d3f4u: goto label_19d3f4;
        default: break;
    }

    ctx->pc = 0x19d278u;

label_19d278:
    // 0x19d278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19d27c:
    // 0x19d27c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d280:
    // 0x19d280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19d284:
    // 0x19d284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19d288:
    // 0x19d288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d28c:
    // 0x19d28c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19d290:
    // 0x19d290: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19d290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19d294:
    // 0x19d294: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19d294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19d298:
    // 0x19d298: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19d298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19d29c:
    // 0x19d29c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19d2a0:
    // 0x19d2a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19d2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d2a4:
    // 0x19d2a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19d2a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_19d2a8:
    // 0x19d2a8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19d2ac:
    // 0x19d2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d2b0:
    // 0x19d2b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d2b4:
    // 0x19d2b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d2b8:
    // 0x19d2b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19d2bc:
    // 0x19d2bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19d2c0:
    // 0x19d2c0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x19d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
label_19d2c4:
    // 0x19d2c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d2c8:
    // 0x19d2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d2cc:
    // 0x19d2cc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x19d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_19d2d0:
    // 0x19d2d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19d2d4:
    // 0x19d2d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19d2d8:
    if (ctx->pc == 0x19D2D8u) {
        ctx->pc = 0x19D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2D4u;
        // 0x19d2d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D2DCu;
        goto label_19d2dc;
    }
    ctx->pc = 0x19D2D4u;
    {
        const bool branch_taken_0x19d2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2D4u;
        // 0x19d2d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2d4) {
            ctx->pc = 0x19D2ECu;
            goto label_19d2ec;
        }
    }
    ctx->pc = 0x19D2DCu;
label_19d2dc:
    // 0x19d2dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d2e0:
    // 0x19d2e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19d2e4:
    // 0x19d2e4: 0x40f809  jalr        $v0
label_19d2e8:
    if (ctx->pc == 0x19D2E8u) {
        ctx->pc = 0x19D2ECu;
        goto label_19d2ec;
    }
    ctx->pc = 0x19D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D2ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D2E4u, 0x19D2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D2ECu;
label_19d2ec:
    // 0x19d2ec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x19d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d2f0:
    // 0x19d2f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19d2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d2f4:
    // 0x19d2f4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x19d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_19d2f8:
    // 0x19d2f8: 0x24c51040  addiu       $a1, $a2, 0x1040
    ctx->pc = 0x19d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4160));
label_19d2fc:
    // 0x19d2fc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19d300:
    // 0x19d300: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19d304:
    if (ctx->pc == 0x19D304u) {
        ctx->pc = 0x19D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D300u;
        // 0x19d304: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D308u;
        goto label_19d308;
    }
    ctx->pc = 0x19D300u;
    {
        const bool branch_taken_0x19d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D300u;
        // 0x19d304: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d300) {
            ctx->pc = 0x19D31Cu;
            goto label_19d31c;
        }
    }
    ctx->pc = 0x19D308u;
label_19d308:
    // 0x19d308: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x19d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19d30c:
    // 0x19d30c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19d310:
    // 0x19d310: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_19d314:
    // 0x19d314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19d318:
    if (ctx->pc == 0x19D318u) {
        ctx->pc = 0x19D31Cu;
        goto label_19d31c;
    }
    ctx->pc = 0x19D314u;
    {
        const bool branch_taken_0x19d314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d314) {
            ctx->pc = 0x19D338u;
            goto label_19d338;
        }
    }
    ctx->pc = 0x19D31Cu;
label_19d31c:
    // 0x19d31c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19d31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d320:
    // 0x19d320: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d324:
    // 0x19d324: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_19d328:
    // 0x19d328: 0x40f809  jalr        $v0
label_19d32c:
    if (ctx->pc == 0x19D32Cu) {
        ctx->pc = 0x19D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D328u;
        // 0x19d32c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D330u;
        goto label_19d330;
    }
    ctx->pc = 0x19D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D330u);
        ctx->pc = 0x19D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D328u;
        // 0x19d32c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D328u, 0x19D330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D330u;
label_19d330:
    // 0x19d330: 0x10000008  b           . + 4 + (0x8 << 2)
label_19d334:
    if (ctx->pc == 0x19D334u) {
        ctx->pc = 0x19D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D330u;
        // 0x19d334: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D338u;
        goto label_19d338;
    }
    ctx->pc = 0x19D330u;
    {
        const bool branch_taken_0x19d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D330u;
        // 0x19d334: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d330) {
            ctx->pc = 0x19D354u;
            goto label_19d354;
        }
    }
    ctx->pc = 0x19D338u;
label_19d338:
    // 0x19d338: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19d338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d33c:
    // 0x19d33c: 0x8cc51004  lw          $a1, 0x1004($a2)
    ctx->pc = 0x19d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
label_19d340:
    // 0x19d340: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d344:
    // 0x19d344: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x19d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_19d348:
    // 0x19d348: 0x40f809  jalr        $v0
label_19d34c:
    if (ctx->pc == 0x19D34Cu) {
        ctx->pc = 0x19D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D348u;
        // 0x19d34c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D350u;
        goto label_19d350;
    }
    ctx->pc = 0x19D348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D350u);
        ctx->pc = 0x19D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D348u;
        // 0x19d34c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D348u, 0x19D350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D350u;
label_19d350:
    // 0x19d350: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d354:
    // 0x19d354: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19d354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_19d358:
    // 0x19d358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19d35c:
    // 0x19d35c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19d35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d360:
    // 0x19d360: 0xe4540090  swc1        $f20, 0x90($v0)
    ctx->pc = 0x19d360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_19d364:
    // 0x19d364: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x19d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d368:
    // 0x19d368: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d36c:
    // 0x19d36c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19d36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_19d370:
    // 0x19d370: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x19d370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_19d374:
    // 0x19d374: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x19d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d378:
    // 0x19d378: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19d37c:
    // 0x19d37c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x19d37cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_19d380:
    // 0x19d380: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x19d380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_19d384:
    // 0x19d384: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x19d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_19d388:
    // 0x19d388: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19d38c:
    if (ctx->pc == 0x19D38Cu) {
        ctx->pc = 0x19D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D388u;
        // 0x19d38c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D390u;
        goto label_19d390;
    }
    ctx->pc = 0x19D388u;
    {
        const bool branch_taken_0x19d388 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D388u;
        // 0x19d38c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d388) {
            ctx->pc = 0x19D3A4u;
            goto label_19d3a4;
        }
    }
    ctx->pc = 0x19D390u;
label_19d390:
    // 0x19d390: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d394:
    // 0x19d394: 0x0  nop
    ctx->pc = 0x19d394u;
    // NOP
label_19d398:
    // 0x19d398: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d39c:
    // 0x19d39c: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d3a0:
    if (ctx->pc == 0x19D3A0u) {
        ctx->pc = 0x19D3A4u;
        goto label_19d3a4;
    }
    ctx->pc = 0x19D39Cu;
    {
        const bool branch_taken_0x19d39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d39c) {
            ctx->pc = 0x19D3BCu;
            goto label_19d3bc;
        }
    }
    ctx->pc = 0x19D3A4u;
label_19d3a4:
    // 0x19d3a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19d3a8:
    // 0x19d3a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19d3ac:
    // 0x19d3ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d3b0:
    // 0x19d3b0: 0x0  nop
    ctx->pc = 0x19d3b0u;
    // NOP
label_19d3b4:
    // 0x19d3b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d3b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d3b8:
    // 0x19d3b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19d3b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19d3bc:
    // 0x19d3bc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19d3c0:
    // 0x19d3c0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d3c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19d3c4:
    // 0x19d3c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d3c8:
    // 0x19d3c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19d3cc:
    // 0x19d3cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d3d0:
    // 0x19d3d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19d3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19d3d4:
    // 0x19d3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19d3d8:
    // 0x19d3d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d3dc:
    // 0x19d3dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19d3e0:
    // 0x19d3e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19d3e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19d3e4:
    // 0x19d3e4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19d3e8:
    // 0x19d3e8: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x19d3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_19d3ec:
    // 0x19d3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d3f0:
    // 0x19d3f0: 0x3e00008  jr          $ra
label_19d3f4:
    if (ctx->pc == 0x19D3F4u) {
        ctx->pc = 0x19D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3F0u;
        // 0x19d3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3F8u;
        goto label_fallthrough_0x19d3f0;
    }
    ctx->pc = 0x19D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3F0u;
        // 0x19d3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d3f0:
    ctx->pc = 0x19D3F8u;
}
