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

// Function: sub_001C4278
// Address: 0x1c4278 - 0x1c4550
void sub_001C4278_0x1c4278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4278_0x1c4278");
#endif

    switch (ctx->pc) {
        case 0x1c42b0u: goto label_1c42b0;
        case 0x1c42b8u: goto label_1c42b8;
        case 0x1c42f0u: goto label_1c42f0;
        case 0x1c4324u: goto label_1c4324;
        case 0x1c4348u: goto label_1c4348;
        case 0x1c4368u: goto label_1c4368;
        case 0x1c4370u: goto label_1c4370;
        case 0x1c437cu: goto label_1c437c;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c43d0u: goto label_1c43d0;
        case 0x1c4408u: goto label_1c4408;
        case 0x1c44b8u: goto label_1c44b8;
        case 0x1c44f0u: goto label_1c44f0;
        case 0x1c4508u: goto label_1c4508;
        default: break;
    }

    ctx->pc = 0x1c4278u;

    // 0x1c4278: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c4278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c427c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c4280: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c4280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c4284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4288: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c428c: 0x26300478  addiu       $s0, $s1, 0x478
    ctx->pc = 0x1c428cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1144));
    // 0x1c4290: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c4294: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x1c4294u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x1c4298: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c4298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c429c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c42a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C42A0u;
    {
        const bool branch_taken_0x1c42a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42A0u;
        // 0x1c42a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42a0) {
            ctx->pc = 0x1C42C8u;
            goto label_1c42c8;
        }
    }
    ctx->pc = 0x1C42A8u;
    // 0x1c42a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c42a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c42ac: 0x0  nop
    ctx->pc = 0x1c42acu;
    // NOP
label_1c42b0:
    // 0x1c42b0: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C42B0u;
    SET_GPR_U32(ctx, 31, 0x1C42B8u);
    ctx->pc = 0x1C42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42B0u;
    // 0x1c42b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C42B0u, 0x1C42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42B8u;
label_1c42b8:
    // 0x1c42b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c42bc: 0x0  nop
    ctx->pc = 0x1c42bcu;
    // NOP
    // 0x1c42c0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C42C0u;
    {
        const bool branch_taken_0x1c42c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c42c0) {
            ctx->pc = 0x1C42C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C42C0u;
            // 0x1c42c4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C42B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c42b0;
        }
    }
    ctx->pc = 0x1C42C8u;
label_1c42c8:
    // 0x1c42c8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c42cc: 0x26230488  addiu       $v1, $s1, 0x488
    ctx->pc = 0x1c42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1160));
    // 0x1c42d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c42d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c42d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c42dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c42e0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1c42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1c42e4: 0x26320478  addiu       $s2, $s1, 0x478
    ctx->pc = 0x1c42e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1144));
    // 0x1c42e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C42E8u;
    {
        const bool branch_taken_0x1c42e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42E8u;
        // 0x1c42ec: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42e8) {
            ctx->pc = 0x1C42F4u;
            goto label_1c42f4;
        }
    }
    ctx->pc = 0x1C42F0u;
label_1c42f0:
    // 0x1c42f0: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1c42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_1c42f4:
    // 0x1c42f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c42f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C42F8u;
    {
        const bool branch_taken_0x1c42f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42F8u;
        // 0x1c42fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42f8) {
            ctx->pc = 0x1C4304u;
            goto label_1c4304;
        }
    }
    ctx->pc = 0x1C4300u;
    // 0x1c4300: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4304:
    // 0x1c4304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4304u;
    {
        const bool branch_taken_0x1c4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4304u;
        // 0x1c4308: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4304) {
            ctx->pc = 0x1C4314u;
            goto label_1c4314;
        }
    }
    ctx->pc = 0x1C430Cu;
    // 0x1c430c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4310: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c4310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1c4314:
    // 0x1c4314: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C4314u;
    {
        const bool branch_taken_0x1c4314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4314) {
            ctx->pc = 0x1C4318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4314u;
            // 0x1c4318: 0x8c621000  lw          $v0, 0x1000($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C42F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c42f0;
        }
    }
    ctx->pc = 0x1C431Cu;
    // 0x1c431c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C431Cu;
    SET_GPR_U32(ctx, 31, 0x1C4324u);
    ctx->pc = 0x1C4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C431Cu;
    // 0x1c4320: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C431Cu, 0x1C4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4324u;
label_1c4324:
    // 0x1c4324: 0xae60f190  sw          $zero, -0xE70($s3)
    ctx->pc = 0x1c4324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294963600), GPR_U32(ctx, 0));
    // 0x1c4328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c432c: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x1c432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x1c4330: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1c4330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c4334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4334u;
    {
        const bool branch_taken_0x1c4334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4334u;
        // 0x1c4338: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4334) {
            ctx->pc = 0x1C4360u;
            goto label_1c4360;
        }
    }
    ctx->pc = 0x1C433Cu;
    // 0x1c433c: 0x2663f190  addiu       $v1, $s3, -0xE70
    ctx->pc = 0x1c433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963600));
    // 0x1c4340: 0xc440c728  lwc1        $f0, -0x38D8($v0)
    ctx->pc = 0x1c4340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4344: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1c4344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1c4348:
    // 0x1c4348: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c4348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c434c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c4350: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x1c4354: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1c4354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c4358: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4358u;
    {
        const bool branch_taken_0x1c4358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4358u;
        // 0x1c435c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4358) {
            ctx->pc = 0x1C4348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4348;
        }
    }
    ctx->pc = 0x1C4360u;
label_1c4360:
    // 0x1c4360: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4360u;
    SET_GPR_U32(ctx, 31, 0x1C4368u);
    ctx->pc = 0x1C4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4360u;
    // 0x1c4364: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4360u, 0x1C4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4368u;
label_1c4368:
    // 0x1c4368: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4368u;
    SET_GPR_U32(ctx, 31, 0x1C4370u);
    ctx->pc = 0x1C436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4368u;
    // 0x1c436c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4368u, 0x1C4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4370u;
label_1c4370:
    // 0x1c4370: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x1c4374: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C4374u;
    SET_GPR_U32(ctx, 31, 0x1C437Cu);
    ctx->pc = 0x1C4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4374u;
    // 0x1c4378: 0x8c440fe8  lw          $a0, 0xFE8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C4374u, 0x1C437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C437Cu;
label_1c437c:
    // 0x1c437c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C437Cu;
    {
        const bool branch_taken_0x1c437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c437c) {
            ctx->pc = 0x1C4380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C437Cu;
            // 0x1c4380: 0x8e230450  lw          $v1, 0x450($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4398u;
            goto label_1c4398;
        }
    }
    ctx->pc = 0x1C4384u;
    // 0x1c4384: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x1c4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x1c4388: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C4388u;
    SET_GPR_U32(ctx, 31, 0x1C4390u);
    ctx->pc = 0x1C438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4388u;
    // 0x1c438c: 0x8c440fe8  lw          $a0, 0xFE8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C4388u, 0x1C4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4390u;
label_1c4390:
    // 0x1c4390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4390u;
    {
        const bool branch_taken_0x1c4390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4390) {
            ctx->pc = 0x1C43A0u;
            goto label_1c43a0;
        }
    }
    ctx->pc = 0x1C4398u;
label_1c4398:
    // 0x1c4398: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1c4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1c439c: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1c43a0:
    // 0x1c43a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c43a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c43a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c43a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c43ac: 0x3c0c0049  lui         $t4, 0x49
    ctx->pc = 0x1c43acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)73 << 16));
    // 0x1c43b0: 0x258df190  addiu       $t5, $t4, -0xE70
    ctx->pc = 0x1c43b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294963600));
    // 0x1c43b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c43b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c43bc: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x1c43bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43c0: 0x27af0020  addiu       $t7, $sp, 0x20
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c43c4: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x1c43c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c43c8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C43C8u;
    {
        const bool branch_taken_0x1c43c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43C8u;
        // 0x1c43cc: 0x26290450  addiu       $t1, $s1, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43c8) {
            ctx->pc = 0x1C4468u;
            goto label_1c4468;
        }
    }
    ctx->pc = 0x1C43D0u;
label_1c43d0:
    // 0x1c43d0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1c43d4: 0xd9c10000  lqc2        $vf1, 0x0($t6)
    ctx->pc = 0x1c43d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c43d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c43d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c43dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c43dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c43e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c43e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c43e4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1c43e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c43e8: 0xc5e30004  lwc1        $f3, 0x4($t7)
    ctx->pc = 0x1c43e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c43ec: 0xc5e40008  lwc1        $f4, 0x8($t7)
    ctx->pc = 0x1c43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c43f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c43f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c43f4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c43f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c43f8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c43f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c43fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c43fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4400u;
    {
        const bool branch_taken_0x1c4400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4400u;
        // 0x1c4404: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4400) {
            ctx->pc = 0x1C4418u;
            goto label_1c4418;
        }
    }
    ctx->pc = 0x1C4408u;
label_1c4408:
    // 0x1c4408: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1c4408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1c440c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c440cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4410: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c4410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c4414: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c4414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1c4418:
    // 0x1c4418: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1c4418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c441c: 0x2583f190  addiu       $v1, $t4, -0xE70
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294963600));
    // 0x1c4420: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c4424: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1c4424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4428: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1c4428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c442c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c4430: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x1c4430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1c4434: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4434u;
    {
        const bool branch_taken_0x1c4434 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4434u;
        // 0x1c4438: 0x1222021  addu        $a0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4434) {
            ctx->pc = 0x1C4464u;
            goto label_1c4464;
        }
    }
    ctx->pc = 0x1C443Cu;
    // 0x1c443c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C443Cu;
    {
        const bool branch_taken_0x1c443c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c443c) {
            ctx->pc = 0x1C4440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C443Cu;
            // 0x1c4440: 0x4d1821  addu        $v1, $v0, $t5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4458u;
            goto label_1c4458;
        }
    }
    ctx->pc = 0x1C4444u;
    // 0x1c4444: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c4444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4448: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c444c: 0x0  nop
    ctx->pc = 0x1c444cu;
    // NOP
    // 0x1c4450: 0x4500ffed  bc1f        . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C4450u;
    {
        const bool branch_taken_0x1c4450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4450u;
        // 0x1c4454: 0x4d1821  addu        $v1, $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4450) {
            ctx->pc = 0x1C4408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4408;
        }
    }
    ctx->pc = 0x1C4458u;
label_1c4458:
    // 0x1c4458: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1c4458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1c445c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1c445cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c4460: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x1c4460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
label_1c4464:
    // 0x1c4464: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1c4464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1c4468:
    // 0x1c4468: 0x8f02000c  lw          $v0, 0xC($t8)
    ctx->pc = 0x1c4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x1c446c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C446Cu;
    {
        const bool branch_taken_0x1c446c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C446Cu;
        // 0x1c4470: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c446c) {
            ctx->pc = 0x1C4478u;
            goto label_1c4478;
        }
    }
    ctx->pc = 0x1C4474u;
    // 0x1c4474: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1c4474u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4478:
    // 0x1c4478: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c447c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C447Cu;
    {
        const bool branch_taken_0x1c447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C447Cu;
        // 0x1c4480: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c447c) {
            ctx->pc = 0x1C448Cu;
            goto label_1c448c;
        }
    }
    ctx->pc = 0x1C4484u;
    // 0x1c4484: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4488: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1c448c:
    // 0x1c448c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C448Cu;
    {
        const bool branch_taken_0x1c448c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c448c) {
            ctx->pc = 0x1C4490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C448Cu;
            // 0x1c4490: 0xae240470  sw          $a0, 0x470($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44A4u;
            goto label_1c44a4;
        }
    }
    ctx->pc = 0x1C4494u;
    // 0x1c4494: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x1c4494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x1c4498: 0x5482ffcd  bnel        $a0, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1C4498u;
    {
        const bool branch_taken_0x1c4498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4498) {
            ctx->pc = 0x1C449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4498u;
            // 0x1c449c: 0x8c620fe8  lw          $v0, 0xFE8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C43D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c43d0;
        }
    }
    ctx->pc = 0x1C44A0u;
    // 0x1c44a0: 0xae240470  sw          $a0, 0x470($s1)
    ctx->pc = 0x1c44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1136), GPR_U32(ctx, 4));
label_1c44a4:
    // 0x1c44a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C44A4u;
    {
        const bool branch_taken_0x1c44a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44A4u;
        // 0x1c44a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44a4) {
            ctx->pc = 0x1C44D8u;
            goto label_1c44d8;
        }
    }
    ctx->pc = 0x1C44ACu;
    // 0x1c44ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c44acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44b0: 0x26240450  addiu       $a0, $s1, 0x450
    ctx->pc = 0x1c44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    // 0x1c44b4: 0x0  nop
    ctx->pc = 0x1c44b4u;
    // NOP
label_1c44b8:
    // 0x1c44b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c44bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c44bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c44c0: 0x8c431000  lw          $v1, 0x1000($v0)
    ctx->pc = 0x1c44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x1c44c4: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x1c44c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x1c44c8: 0x8e220470  lw          $v0, 0x470($s1)
    ctx->pc = 0x1c44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
    // 0x1c44cc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1c44ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c44d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C44D0u;
    {
        const bool branch_taken_0x1c44d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44D0u;
        // 0x1c44d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44d0) {
            ctx->pc = 0x1C44B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c44b8;
        }
    }
    ctx->pc = 0x1C44D8u;
label_1c44d8:
    // 0x1c44d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c44dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c44e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c44e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44E4u;
    {
        const bool branch_taken_0x1c44e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E4u;
        // 0x1c44e8: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e4) {
            ctx->pc = 0x1C4508u;
            goto label_1c4508;
        }
    }
    ctx->pc = 0x1C44ECu;
    // 0x1c44ec: 0x0  nop
    ctx->pc = 0x1c44ecu;
    // NOP
label_1c44f0:
    // 0x1c44f0: 0x8c621000  lw          $v0, 0x1000($v1)
    ctx->pc = 0x1c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
    // 0x1c44f4: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1c44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1c44f8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C44F8u;
    {
        const bool branch_taken_0x1c44f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c44f8) {
            ctx->pc = 0x1C44FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C44F8u;
            // 0x1c44fc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C450Cu;
            goto label_1c450c;
        }
    }
    ctx->pc = 0x1C4500u;
    // 0x1c4500: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x1C4500u;
    SET_GPR_U32(ctx, 31, 0x1C4508u);
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1C4500u, 0x1C4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4508u;
label_1c4508:
    // 0x1c4508: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c450c:
    // 0x1c450c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4510: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4510u;
    {
        const bool branch_taken_0x1c4510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4510u;
        // 0x1c4514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4510) {
            ctx->pc = 0x1C451Cu;
            goto label_1c451c;
        }
    }
    ctx->pc = 0x1C4518u;
    // 0x1c4518: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c4518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c451c:
    // 0x1c451c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C451Cu;
    {
        const bool branch_taken_0x1c451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C451Cu;
        // 0x1c4520: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c451c) {
            ctx->pc = 0x1C452Cu;
            goto label_1c452c;
        }
    }
    ctx->pc = 0x1C4524u;
    // 0x1c4524: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4528: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c4528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1c452c:
    // 0x1c452c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C452Cu;
    {
        const bool branch_taken_0x1c452c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C452Cu;
        // 0x1c4530: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c452c) {
            ctx->pc = 0x1C44F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c44f0;
        }
    }
    ctx->pc = 0x1C4534u;
    // 0x1c4534: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c4534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4538: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c4538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c453c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c453cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4540: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c4540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c4544: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c4544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4548: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4548u;
        // 0x1c454c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4550u;
}
