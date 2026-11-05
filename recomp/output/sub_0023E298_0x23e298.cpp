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

// Function: sub_0023E298
// Address: 0x23e298 - 0x23e558
void sub_0023E298_0x23e298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E298_0x23e298");
#endif

    switch (ctx->pc) {
        case 0x23e334u: goto label_23e334;
        case 0x23e33cu: goto label_23e33c;
        case 0x23e350u: goto label_23e350;
        case 0x23e37cu: goto label_23e37c;
        case 0x23e390u: goto label_23e390;
        case 0x23e39cu: goto label_23e39c;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e3c8u: goto label_23e3c8;
        case 0x23e3d8u: goto label_23e3d8;
        case 0x23e3e8u: goto label_23e3e8;
        case 0x23e3fcu: goto label_23e3fc;
        case 0x23e40cu: goto label_23e40c;
        case 0x23e41cu: goto label_23e41c;
        case 0x23e42cu: goto label_23e42c;
        case 0x23e438u: goto label_23e438;
        case 0x23e444u: goto label_23e444;
        case 0x23e534u: goto label_23e534;
        default: break;
    }

    ctx->pc = 0x23e298u;

    // 0x23e298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e29c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x23e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x23e2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e2a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23e2a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23e2b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23e2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23e2b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23e2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23e2c0: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x23e2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x23e2c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e2c8: 0xa202047d  sb          $v0, 0x47D($s0)
    ctx->pc = 0x23e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1149), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e2cc: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x23e2d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E2D0u;
    {
        const bool branch_taken_0x23e2d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2D0u;
        // 0x23e2d4: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2d0) {
            ctx->pc = 0x23E2ECu;
            goto label_23e2ec;
        }
    }
    ctx->pc = 0x23E2D8u;
    // 0x23e2d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23e2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e2dc: 0x0  nop
    ctx->pc = 0x23e2dcu;
    // NOP
    // 0x23e2e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23e2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e2e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23E2E4u;
    {
        const bool branch_taken_0x23e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e2e4) {
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E2ECu;
label_23e2ec:
    // 0x23e2ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23e2f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e2f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23e2f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23e2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e2fc: 0x0  nop
    ctx->pc = 0x23e2fcu;
    // NOP
    // 0x23e300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23e300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e304: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23e304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23e308:
    // 0x23e308: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x23e30c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23e30cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x23e310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e314: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x23e318: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23e318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23e31c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23e320: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x23e320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x23e324: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E324u;
    {
        const bool branch_taken_0x23e324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E324u;
        // 0x23e328: 0xe6000480  swc1        $f0, 0x480($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e324) {
            ctx->pc = 0x23E344u;
            goto label_23e344;
        }
    }
    ctx->pc = 0x23E32Cu;
    // 0x23e32c: 0xc0a0870  jal         func_2821C0
    ctx->pc = 0x23E32Cu;
    SET_GPR_U32(ctx, 31, 0x23E334u);
    ctx->pc = 0x23E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E32Cu;
    // 0x23e330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2821C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2821C0u, 0x23E32Cu, 0x23E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E334u;
label_23e334:
    // 0x23e334: 0xc0c0954  jal         func_302550
    ctx->pc = 0x23E334u;
    SET_GPR_U32(ctx, 31, 0x23E33Cu);
    ctx->pc = 0x23E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E334u;
    // 0x23e338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302550u, 0x23E334u, 0x23E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E33Cu;
label_23e33c:
    // 0x23e33c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x23E33Cu;
    {
        const bool branch_taken_0x23e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E33Cu;
        // 0x23e340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e33c) {
            ctx->pc = 0x23E538u;
            goto label_23e538;
        }
    }
    ctx->pc = 0x23E344u;
label_23e344:
    // 0x23e344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e348: 0xc08dc16  jal         func_237058
    ctx->pc = 0x23E348u;
    SET_GPR_U32(ctx, 31, 0x23E350u);
    ctx->pc = 0x23E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E348u;
    // 0x23e34c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x23E348u, 0x23E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E350u;
label_23e350:
    // 0x23e350: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x23e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23e354: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23e358: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x23E358u;
    {
        const bool branch_taken_0x23e358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E358u;
        // 0x23e35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e358) {
            ctx->pc = 0x23E538u;
            goto label_23e538;
        }
    }
    ctx->pc = 0x23E360u;
    // 0x23e360: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x23e360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x23e364: 0x9203047c  lbu         $v1, 0x47C($s0)
    ctx->pc = 0x23e364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x23e368: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23e368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23e36c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x23E36Cu;
    {
        const bool branch_taken_0x23e36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E36Cu;
        // 0x23e370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e36c) {
            ctx->pc = 0x23E538u;
            goto label_23e538;
        }
    }
    ctx->pc = 0x23E374u;
    // 0x23e374: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x23E374u;
    SET_GPR_U32(ctx, 31, 0x23E37Cu);
    ctx->pc = 0x23E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E374u;
    // 0x23e378: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x23E374u, 0x23E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E37Cu;
label_23e37c:
    // 0x23e37c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E37Cu;
    {
        const bool branch_taken_0x23e37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E37Cu;
        // 0x23e380: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e37c) {
            ctx->pc = 0x23E3A4u;
            goto label_23e3a4;
        }
    }
    ctx->pc = 0x23E384u;
    // 0x23e384: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e388: 0xc069b5e  jal         func_1A6D78
    ctx->pc = 0x23E388u;
    SET_GPR_U32(ctx, 31, 0x23E390u);
    ctx->pc = 0x23E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E388u;
    // 0x23e38c: 0x240505ab  addiu       $a1, $zero, 0x5AB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1451));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6D78u, 0x23E388u, 0x23E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E390u;
label_23e390:
    // 0x23e390: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e394: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x23E394u;
    SET_GPR_U32(ctx, 31, 0x23E39Cu);
    ctx->pc = 0x23E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E394u;
    // 0x23e398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23E394u, 0x23E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E39Cu;
label_23e39c:
    // 0x23e39c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x23E39Cu;
    {
        const bool branch_taken_0x23e39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E39Cu;
        // 0x23e3a0: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e39c) {
            ctx->pc = 0x23E448u;
            goto label_23e448;
        }
    }
    ctx->pc = 0x23E3A4u;
label_23e3a4:
    // 0x23e3a4: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23E3A4u;
    {
        const bool branch_taken_0x23e3a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3A4u;
        // 0x23e3a8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3a4) {
            ctx->pc = 0x23E3F0u;
            goto label_23e3f0;
        }
    }
    ctx->pc = 0x23E3ACu;
    // 0x23e3ac: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x23e3b0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E3B0u;
    SET_GPR_U32(ctx, 31, 0x23E3B8u);
    ctx->pc = 0x23E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3B0u;
    // 0x23e3b4: 0x24060565  addiu       $a2, $zero, 0x565 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1381));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E3B0u, 0x23E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3B8u;
label_23e3b8:
    // 0x23e3b8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e3bc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x23e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23e3c0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E3C0u;
    SET_GPR_U32(ctx, 31, 0x23E3C8u);
    ctx->pc = 0x23E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3C0u;
    // 0x23e3c4: 0x24060592  addiu       $a2, $zero, 0x592 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1426));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E3C0u, 0x23E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3C8u;
label_23e3c8:
    // 0x23e3c8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e3cc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x23e3d0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E3D0u;
    SET_GPR_U32(ctx, 31, 0x23E3D8u);
    ctx->pc = 0x23E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3D0u;
    // 0x23e3d4: 0x240605a3  addiu       $a2, $zero, 0x5A3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1443));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E3D0u, 0x23E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3D8u;
label_23e3d8:
    // 0x23e3d8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e3dc: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23e3e0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E3E0u;
    SET_GPR_U32(ctx, 31, 0x23E3E8u);
    ctx->pc = 0x23E3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3E0u;
    // 0x23e3e4: 0x24060683  addiu       $a2, $zero, 0x683 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1667));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E3E0u, 0x23E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3E8u;
label_23e3e8:
    // 0x23e3e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23E3E8u;
    {
        const bool branch_taken_0x23e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3E8u;
        // 0x23e3ec: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3e8) {
            ctx->pc = 0x23E430u;
            goto label_23e430;
        }
    }
    ctx->pc = 0x23E3F0u;
label_23e3f0:
    // 0x23e3f0: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x23e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x23e3f4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E3F4u;
    SET_GPR_U32(ctx, 31, 0x23E3FCu);
    ctx->pc = 0x23E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3F4u;
    // 0x23e3f8: 0x24060564  addiu       $a2, $zero, 0x564 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E3F4u, 0x23E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3FCu;
label_23e3fc:
    // 0x23e3fc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e400: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23e404: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E404u;
    SET_GPR_U32(ctx, 31, 0x23E40Cu);
    ctx->pc = 0x23E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E404u;
    // 0x23e408: 0x24060591  addiu       $a2, $zero, 0x591 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1425));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E404u, 0x23E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E40Cu;
label_23e40c:
    // 0x23e40c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e410: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x23e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x23e414: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E414u;
    SET_GPR_U32(ctx, 31, 0x23E41Cu);
    ctx->pc = 0x23E418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E414u;
    // 0x23e418: 0x240605a3  addiu       $a2, $zero, 0x5A3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1443));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E414u, 0x23E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E41Cu;
label_23e41c:
    // 0x23e41c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e420: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x23e420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23e424: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23E424u;
    SET_GPR_U32(ctx, 31, 0x23E42Cu);
    ctx->pc = 0x23E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E424u;
    // 0x23e428: 0x24060683  addiu       $a2, $zero, 0x683 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1667));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23E424u, 0x23E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E42Cu;
label_23e42c:
    // 0x23e42c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23e430:
    // 0x23e430: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x23E430u;
    SET_GPR_U32(ctx, 31, 0x23E438u);
    ctx->pc = 0x23E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E430u;
    // 0x23e434: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x23E430u, 0x23E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E438u;
label_23e438:
    // 0x23e438: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e43c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x23E43Cu;
    SET_GPR_U32(ctx, 31, 0x23E444u);
    ctx->pc = 0x23E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E43Cu;
    // 0x23e440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23E43Cu, 0x23E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E444u;
label_23e444:
    // 0x23e444: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_23e448:
    // 0x23e448: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23E448u;
    {
        const bool branch_taken_0x23e448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e448) {
            ctx->pc = 0x23E4B4u;
            goto label_23e4b4;
        }
    }
    ctx->pc = 0x23E450u;
    // 0x23e450: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x23e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x23e454: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23e454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x23e458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e45c: 0x0  nop
    ctx->pc = 0x23e45cu;
    // NOP
    // 0x23e460: 0xe600037c  swc1        $f0, 0x37C($s0)
    ctx->pc = 0x23e460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x23e464: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
    // 0x23e468: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E468u;
    {
        const bool branch_taken_0x23e468 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E468u;
        // 0x23e46c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e468) {
            ctx->pc = 0x23E484u;
            goto label_23e484;
        }
    }
    ctx->pc = 0x23E470u;
    // 0x23e470: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23e470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23e474: 0x0  nop
    ctx->pc = 0x23e474u;
    // NOP
    // 0x23e478: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23e478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23e47c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E47Cu;
    {
        const bool branch_taken_0x23e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e47c) {
            ctx->pc = 0x23E49Cu;
            goto label_23e49c;
        }
    }
    ctx->pc = 0x23E484u;
label_23e484:
    // 0x23e484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e488: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23e48c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23e48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23e490: 0x0  nop
    ctx->pc = 0x23e490u;
    // NOP
    // 0x23e494: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23e494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23e498: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x23e498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_23e49c:
    // 0x23e49c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x23e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x23e4a0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23e4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x23e4a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e4a8: 0xc601037c  lwc1        $f1, 0x37C($s0)
    ctx->pc = 0x23e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e4ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23E4ACu;
    {
        const bool branch_taken_0x23e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4ACu;
        // 0x23e4b0: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4ac) {
            ctx->pc = 0x23E51Cu;
            goto label_23e51c;
        }
    }
    ctx->pc = 0x23E4B4u;
label_23e4b4:
    // 0x23e4b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x23e4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x23e4b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e4bc: 0x0  nop
    ctx->pc = 0x23e4bcu;
    // NOP
    // 0x23e4c0: 0xe600037c  swc1        $f0, 0x37C($s0)
    ctx->pc = 0x23e4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x23e4c4: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x23e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
    // 0x23e4c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E4C8u;
    {
        const bool branch_taken_0x23e4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4C8u;
        // 0x23e4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4c8) {
            ctx->pc = 0x23E4E4u;
            goto label_23e4e4;
        }
    }
    ctx->pc = 0x23E4D0u;
    // 0x23e4d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23e4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e4d4: 0x0  nop
    ctx->pc = 0x23e4d4u;
    // NOP
    // 0x23e4d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23e4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e4dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23E4DCu;
    {
        const bool branch_taken_0x23e4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4dc) {
            ctx->pc = 0x23E4FCu;
            goto label_23e4fc;
        }
    }
    ctx->pc = 0x23E4E4u;
label_23e4e4:
    // 0x23e4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e4e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23e4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23e4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e4f0: 0x0  nop
    ctx->pc = 0x23e4f0u;
    // NOP
    // 0x23e4f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23e4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23e4f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23e4f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23e4fc:
    // 0x23e4fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x23e4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x23e500: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x23e500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x23e504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e508: 0xc602037c  lwc1        $f2, 0x37C($s0)
    ctx->pc = 0x23e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23e50c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23e50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23e510: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23e510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23e514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23e514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e518: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x23e518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_23e51c:
    // 0x23e51c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23e51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e520: 0xe6000480  swc1        $f0, 0x480($s0)
    ctx->pc = 0x23e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1152), bits); }
    // 0x23e524: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x23e524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x23e528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e52c: 0xc049560  jal         func_125580
    ctx->pc = 0x23E52Cu;
    SET_GPR_U32(ctx, 31, 0x23E534u);
    ctx->pc = 0x23E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E52Cu;
    // 0x23e530: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125580u, 0x23E52Cu, 0x23E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E534u;
label_23e534:
    // 0x23e534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e538:
    // 0x23e538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e53c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23e53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e540: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23e540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e544: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23e544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e54c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E54Cu;
        // 0x23e550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E554u;
    // 0x23e554: 0x0  nop
    ctx->pc = 0x23e554u;
    // NOP
    ctx->pc = 0x23e558u;
}
