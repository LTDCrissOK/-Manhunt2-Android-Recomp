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

// Function: sub_0017D280
// Address: 0x17d280 - 0x17d450
void sub_0017D280_0x17d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D280_0x17d280");
#endif

    switch (ctx->pc) {
        case 0x17d2b4u: goto label_17d2b4;
        case 0x17d2ccu: goto label_17d2cc;
        case 0x17d2dcu: goto label_17d2dc;
        case 0x17d2ecu: goto label_17d2ec;
        case 0x17d320u: goto label_17d320;
        case 0x17d358u: goto label_17d358;
        case 0x17d368u: goto label_17d368;
        case 0x17d380u: goto label_17d380;
        case 0x17d398u: goto label_17d398;
        case 0x17d3acu: goto label_17d3ac;
        case 0x17d3b8u: goto label_17d3b8;
        case 0x17d3c8u: goto label_17d3c8;
        case 0x17d3d4u: goto label_17d3d4;
        case 0x17d3e0u: goto label_17d3e0;
        case 0x17d3fcu: goto label_17d3fc;
        case 0x17d40cu: goto label_17d40c;
        case 0x17d41cu: goto label_17d41c;
        default: break;
    }

    ctx->pc = 0x17d280u;

    // 0x17d280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17d288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17d28c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d290: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17d290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d294: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17d298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d29c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17d29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d2a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17d2a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d2ac: 0xc0462ec  jal         func_118BB0
    ctx->pc = 0x17D2ACu;
    SET_GPR_U32(ctx, 31, 0x17D2B4u);
    ctx->pc = 0x17D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2ACu;
    // 0x17d2b0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BB0u, 0x17D2ACu, 0x17D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2B4u;
label_17d2b4:
    // 0x17d2b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17d2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d2bc: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D2BCu;
    {
        const bool branch_taken_0x17d2bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d2bc) {
            ctx->pc = 0x17D2D4u;
            goto label_17d2d4;
        }
    }
    ctx->pc = 0x17D2C4u;
    // 0x17d2c4: 0xc05fada  jal         func_17EB68
    ctx->pc = 0x17D2C4u;
    SET_GPR_U32(ctx, 31, 0x17D2CCu);
    ctx->pc = 0x17D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2C4u;
    // 0x17d2c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EB68u, 0x17D2C4u, 0x17D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2CCu;
label_17d2cc:
    // 0x17d2cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17D2CCu;
    {
        const bool branch_taken_0x17d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d2cc) {
            ctx->pc = 0x17D350u;
            goto label_17d350;
        }
    }
    ctx->pc = 0x17D2D4u;
label_17d2d4:
    // 0x17d2d4: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x17D2D4u;
    SET_GPR_U32(ctx, 31, 0x17D2DCu);
    ctx->pc = 0x17D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2D4u;
    // 0x17d2d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x17D2D4u, 0x17D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2DCu;
label_17d2dc:
    // 0x17d2dc: 0x16800016  bnez        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x17D2DCu;
    {
        const bool branch_taken_0x17d2dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2DCu;
        // 0x17d2e0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2dc) {
            ctx->pc = 0x17D338u;
            goto label_17d338;
        }
    }
    ctx->pc = 0x17D2E4u;
    // 0x17d2e4: 0xc046002  jal         func_118008
    ctx->pc = 0x17D2E4u;
    SET_GPR_U32(ctx, 31, 0x17D2ECu);
    ctx->pc = 0x17D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2E4u;
    // 0x17d2e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x17D2E4u, 0x17D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2ECu;
label_17d2ec:
    // 0x17d2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d2f4: 0x12a20002  beq         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D2F4u;
    {
        const bool branch_taken_0x17d2f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2F4u;
        // 0x17d2f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2f4) {
            ctx->pc = 0x17D300u;
            goto label_17d300;
        }
    }
    ctx->pc = 0x17D2FCu;
    // 0x17d2fc: 0x15182a  slt         $v1, $zero, $s5
    ctx->pc = 0x17d2fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_17d300:
    // 0x17d300: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x17D300u;
    {
        const bool branch_taken_0x17d300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d300) {
            ctx->pc = 0x17D304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D300u;
            // 0x17d304: 0xae630040  sw          $v1, 0x40($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D338u;
            goto label_17d338;
        }
    }
    ctx->pc = 0x17D308u;
    // 0x17d308: 0x2c830001  sltiu       $v1, $a0, 0x1
    ctx->pc = 0x17d308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17d30c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x17D30Cu;
    {
        const bool branch_taken_0x17d30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d30c) {
            ctx->pc = 0x17D310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D30Cu;
            // 0x17d310: 0xae630040  sw          $v1, 0x40($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D338u;
            goto label_17d338;
        }
    }
    ctx->pc = 0x17D314u;
    // 0x17d314: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17d314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17d318: 0xc04193c  jal         func_1064F0
    ctx->pc = 0x17D318u;
    SET_GPR_U32(ctx, 31, 0x17D320u);
    ctx->pc = 0x17D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D318u;
    // 0x17d31c: 0xc45489d0  lwc1        $f20, -0x7630($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1064F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064F0u, 0x17D318u, 0x17D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D320u;
label_17d320:
    // 0x17d320: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17d320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d324: 0x0  nop
    ctx->pc = 0x17d324u;
    // NOP
    // 0x17d328: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17D328u;
    {
        const bool branch_taken_0x17d328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D328u;
        // 0x17d32c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d328) {
            ctx->pc = 0x17D334u;
            goto label_17d334;
        }
    }
    ctx->pc = 0x17D330u;
    // 0x17d330: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17d330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d334:
    // 0x17d334: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x17d334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
label_17d338:
    // 0x17d338: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d33c: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D33Cu;
    {
        const bool branch_taken_0x17d33c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D33Cu;
        // 0x17d340: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d33c) {
            ctx->pc = 0x17D374u;
            goto label_17d374;
        }
    }
    ctx->pc = 0x17D344u;
    // 0x17d344: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x17d348: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D348u;
    {
        const bool branch_taken_0x17d348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D348u;
        // 0x17d34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d348) {
            ctx->pc = 0x17D370u;
            goto label_17d370;
        }
    }
    ctx->pc = 0x17D350u;
label_17d350:
    // 0x17d350: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x17D350u;
    SET_GPR_U32(ctx, 31, 0x17D358u);
    ctx->pc = 0x17D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D350u;
    // 0x17d354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x17D350u, 0x17D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D358u;
label_17d358:
    // 0x17d358: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17d35c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d360: 0xc042136  jal         func_1084D8
    ctx->pc = 0x17D360u;
    SET_GPR_U32(ctx, 31, 0x17D368u);
    ctx->pc = 0x17D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D360u;
    // 0x17d364: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x17D360u, 0x17D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D368u;
label_17d368:
    // 0x17d368: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x17D368u;
    {
        const bool branch_taken_0x17d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D368u;
        // 0x17d36c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d368) {
            ctx->pc = 0x17D420u;
            goto label_17d420;
        }
    }
    ctx->pc = 0x17D370u;
label_17d370:
    // 0x17d370: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x17d370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_17d374:
    // 0x17d374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d378: 0xc05f914  jal         func_17E450
    ctx->pc = 0x17D378u;
    SET_GPR_U32(ctx, 31, 0x17D380u);
    ctx->pc = 0x17D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D378u;
    // 0x17d37c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E450u, 0x17D378u, 0x17D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D380u;
label_17d380:
    // 0x17d380: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d384: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17D384u;
    {
        const bool branch_taken_0x17d384 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D384u;
        // 0x17d388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d384) {
            ctx->pc = 0x17D3B0u;
            goto label_17d3b0;
        }
    }
    ctx->pc = 0x17D38Cu;
    // 0x17d38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d390: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x17D390u;
    SET_GPR_U32(ctx, 31, 0x17D398u);
    ctx->pc = 0x17D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D390u;
    // 0x17d394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x17D390u, 0x17D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D398u;
label_17d398:
    // 0x17d398: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17d398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d39c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d3a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3a4: 0xc046190  jal         func_118640
    ctx->pc = 0x17D3A4u;
    SET_GPR_U32(ctx, 31, 0x17D3ACu);
    ctx->pc = 0x17D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3A4u;
    // 0x17d3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x17D3A4u, 0x17D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3ACu;
label_17d3ac:
    // 0x17d3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17d3b0:
    // 0x17d3b0: 0xc05fa00  jal         func_17E800
    ctx->pc = 0x17D3B0u;
    SET_GPR_U32(ctx, 31, 0x17D3B8u);
    ctx->pc = 0x17D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3B0u;
    // 0x17d3b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E800u, 0x17D3B0u, 0x17D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3B8u;
label_17d3b8:
    // 0x17d3b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17D3B8u;
    {
        const bool branch_taken_0x17d3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3b8) {
            ctx->pc = 0x17D404u;
            goto label_17d404;
        }
    }
    ctx->pc = 0x17D3C0u;
    // 0x17d3c0: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x17D3C0u;
    SET_GPR_U32(ctx, 31, 0x17D3C8u);
    ctx->pc = 0x17D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3C0u;
    // 0x17d3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x17D3C0u, 0x17D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3C8u;
label_17d3c8:
    // 0x17d3c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17d3c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3cc: 0xc0460e4  jal         func_118390
    ctx->pc = 0x17D3CCu;
    SET_GPR_U32(ctx, 31, 0x17D3D4u);
    ctx->pc = 0x17D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3CCu;
    // 0x17d3d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x17D3CCu, 0x17D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3D4u;
label_17d3d4:
    // 0x17d3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17d3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3d8: 0xc04623e  jal         func_1188F8
    ctx->pc = 0x17D3D8u;
    SET_GPR_U32(ctx, 31, 0x17D3E0u);
    ctx->pc = 0x17D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3D8u;
    // 0x17d3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1188F8u, 0x17D3D8u, 0x17D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3E0u;
label_17d3e0:
    // 0x17d3e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x17d3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17d3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3f0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x17d3f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3f4: 0xc05f9f8  jal         func_17E7E0
    ctx->pc = 0x17D3F4u;
    SET_GPR_U32(ctx, 31, 0x17D3FCu);
    ctx->pc = 0x17D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3F4u;
    // 0x17d3f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E7E0u, 0x17D3F4u, 0x17D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3FCu;
label_17d3fc:
    // 0x17d3fc: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x17d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x17d400: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x17d400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
label_17d404:
    // 0x17d404: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x17D404u;
    SET_GPR_U32(ctx, 31, 0x17D40Cu);
    ctx->pc = 0x17D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D404u;
    // 0x17d408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x17D404u, 0x17D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D40Cu;
label_17d40c:
    // 0x17d40c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17d410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d414: 0xc042136  jal         func_1084D8
    ctx->pc = 0x17D414u;
    SET_GPR_U32(ctx, 31, 0x17D41Cu);
    ctx->pc = 0x17D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D414u;
    // 0x17d418: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x17D414u, 0x17D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D41Cu;
label_17d41c:
    // 0x17d41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d420:
    // 0x17d420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d42c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17d42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d430: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17d430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d438: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x17d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d43c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D43Cu;
        // 0x17d440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D444u;
    // 0x17d444: 0x0  nop
    ctx->pc = 0x17d444u;
    // NOP
    // 0x17d448: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d44c: 0x0  nop
    ctx->pc = 0x17d44cu;
    // NOP
    ctx->pc = 0x17d450u;
}
