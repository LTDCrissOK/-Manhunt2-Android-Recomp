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

// Function: sub_001F4858
// Address: 0x1f4858 - 0x1f49d0
void sub_001F4858_0x1f4858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4858_0x1f4858");
#endif

    switch (ctx->pc) {
        case 0x1f4948u: goto label_1f4948;
        case 0x1f4958u: goto label_1f4958;
        case 0x1f4980u: goto label_1f4980;
        default: break;
    }

    ctx->pc = 0x1f4858u;

    // 0x1f4858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f485c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4864: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f486c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f486cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4874: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f4874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4878: 0xae230104  sw          $v1, 0x104($s1)
    ctx->pc = 0x1f4878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    // 0x1f487c: 0x24a4fffa  addiu       $a0, $a1, -0x6
    ctx->pc = 0x1f487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x1f4880: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x1f4880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4884: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x1f4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x1f4888: 0x2c830088  sltiu       $v1, $a0, 0x88
    ctx->pc = 0x1f4888u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x1f488c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1F488Cu;
    {
        const bool branch_taken_0x1f488c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F488Cu;
        // 0x1f4890: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f488c) {
            ctx->pc = 0x1F4988u;
            goto label_1f4988;
        }
    }
    ctx->pc = 0x1F4894u;
    // 0x1f4894: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4898: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f4898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f489c: 0x2442f030  addiu       $v0, $v0, -0xFD0
    ctx->pc = 0x1f489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x1f48a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f48a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f48a8: 0x800008  jr          $a0
    ctx->pc = 0x1F48A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F48B0u: goto label_1f48b0;
            case 0x1F48BCu: goto label_1f48bc;
            case 0x1F48C4u: goto label_1f48c4;
            case 0x1F48E8u: goto label_1f48e8;
            case 0x1F48FCu: goto label_1f48fc;
            case 0x1F4930u: goto label_1f4930;
            case 0x1F4960u: goto label_1f4960;
            case 0x1F4970u: goto label_1f4970;
            case 0x1F4988u: goto label_1f4988;
            case 0x1F498Cu: goto label_1f498c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F48A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F48B0u;
label_1f48b0:
    // 0x1f48b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f48b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F48B4u;
    {
        const bool branch_taken_0x1f48b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48B4u;
        // 0x1f48b8: 0x2442f010  addiu       $v0, $v0, -0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48b4) {
            ctx->pc = 0x1F48CCu;
            goto label_1f48cc;
        }
    }
    ctx->pc = 0x1F48BCu;
label_1f48bc:
    // 0x1f48bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F48BCu;
    {
        const bool branch_taken_0x1f48bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48BCu;
        // 0x1f48c0: 0x24e2f008  addiu       $v0, $a3, -0xFF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48bc) {
            ctx->pc = 0x1F48CCu;
            goto label_1f48cc;
        }
    }
    ctx->pc = 0x1F48C4u;
label_1f48c4:
    // 0x1f48c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f48c8: 0x2442f020  addiu       $v0, $v0, -0xFE0
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
label_1f48cc:
    // 0x1f48cc: 0x14c0002f  bnez        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F48CCu;
    {
        const bool branch_taken_0x1f48cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48CCu;
        // 0x1f48d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48cc) {
            ctx->pc = 0x1F498Cu;
            goto label_1f498c;
        }
    }
    ctx->pc = 0x1F48D4u;
    // 0x1f48d4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1f48d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1f48d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1f48d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1f48dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f48dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f48e0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F48E0u;
    {
        const bool branch_taken_0x1f48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48E0u;
        // 0x1f48e4: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48e0) {
            ctx->pc = 0x1F498Cu;
            goto label_1f498c;
        }
    }
    ctx->pc = 0x1F48E8u;
label_1f48e8:
    // 0x1f48e8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1f48e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1f48ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f48ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f48f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f48f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f48f4: 0x0  nop
    ctx->pc = 0x1f48f4u;
    // NOP
    // 0x1f48f8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1f48f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1f48fc:
    // 0x1f48fc: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1f48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4908: 0x0  nop
    ctx->pc = 0x1f4908u;
    // NOP
    // 0x1f490c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f490cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4910: 0x0  nop
    ctx->pc = 0x1f4910u;
    // NOP
    // 0x1f4914: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4914u;
    {
        const bool branch_taken_0x1f4914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4914) {
            ctx->pc = 0x1F4930u;
            goto label_1f4930;
        }
    }
    ctx->pc = 0x1F491Cu;
    // 0x1f491c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1f491cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1f4920: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f4920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1f4924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4928: 0x0  nop
    ctx->pc = 0x1f4928u;
    // NOP
    // 0x1f492c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1f492cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1f4930:
    // 0x1f4930: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F4930u;
    {
        const bool branch_taken_0x1f4930 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4930u;
        // 0x1f4934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4930) {
            ctx->pc = 0x1F49BCu;
            goto label_1f49bc;
        }
    }
    ctx->pc = 0x1F4938u;
    // 0x1f4938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f493c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f493cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4940: 0xc07d770  jal         func_1F5DC0
    ctx->pc = 0x1F4940u;
    SET_GPR_U32(ctx, 31, 0x1F4948u);
    ctx->pc = 0x1F4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4940u;
    // 0x1f4944: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5DC0u, 0x1F4940u, 0x1F4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4948u;
label_1f4948:
    // 0x1f4948: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f494c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f494cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f4950: 0xc0803f0  jal         func_200FC0
    ctx->pc = 0x1F4950u;
    SET_GPR_U32(ctx, 31, 0x1F4958u);
    ctx->pc = 0x1F4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4950u;
    // 0x1f4954: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200FC0u, 0x1F4950u, 0x1F4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4958u;
label_1f4958:
    // 0x1f4958: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F4958u;
    {
        const bool branch_taken_0x1f4958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4958u;
        // 0x1f495c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4958) {
            ctx->pc = 0x1F4990u;
            goto label_1f4990;
        }
    }
    ctx->pc = 0x1F4960u;
label_1f4960:
    // 0x1f4960: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4964: 0x2442f020  addiu       $v0, $v0, -0xFE0
    ctx->pc = 0x1f4964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
    // 0x1f4968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4968u;
    {
        const bool branch_taken_0x1f4968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4968u;
        // 0x1f496c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4968) {
            ctx->pc = 0x1F498Cu;
            goto label_1f498c;
        }
    }
    ctx->pc = 0x1F4970u;
label_1f4970:
    // 0x1f4970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4978: 0xc07d770  jal         func_1F5DC0
    ctx->pc = 0x1F4978u;
    SET_GPR_U32(ctx, 31, 0x1F4980u);
    ctx->pc = 0x1F497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4978u;
    // 0x1f497c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5DC0u, 0x1F4978u, 0x1F4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4980u;
label_1f4980:
    // 0x1f4980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4980u;
    {
        const bool branch_taken_0x1f4980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4980u;
        // 0x1f4984: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4980) {
            ctx->pc = 0x1F498Cu;
            goto label_1f498c;
        }
    }
    ctx->pc = 0x1F4988u;
label_1f4988:
    // 0x1f4988: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f4988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f498c:
    // 0x1f498c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1f498cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_1f4990:
    // 0x1f4990: 0x9082928f  lbu         $v0, -0x6D71($a0)
    ctx->pc = 0x1f4990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939279)));
    // 0x1f4994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f4998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f499c: 0x2c630024  sltiu       $v1, $v1, 0x24
    ctx->pc = 0x1f499cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1f49a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F49A0u;
    {
        const bool branch_taken_0x1f49a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49A0u;
        // 0x1f49a4: 0xa082928f  sb          $v0, -0x6D71($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294939279), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49a0) {
            ctx->pc = 0x1F49B0u;
            goto label_1f49b0;
        }
    }
    ctx->pc = 0x1F49A8u;
    // 0x1f49a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f49ac: 0xa082928f  sb          $v0, -0x6D71($a0)
    ctx->pc = 0x1f49acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939279), (uint8_t)GPR_U32(ctx, 2));
label_1f49b0:
    // 0x1f49b0: 0x9083928f  lbu         $v1, -0x6D71($a0)
    ctx->pc = 0x1f49b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939279)));
    // 0x1f49b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49b8: 0xa62300f4  sh          $v1, 0xF4($s1)
    ctx->pc = 0x1f49b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 3));
label_1f49bc:
    // 0x1f49bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f49bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f49c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f49c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f49c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f49c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f49c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F49C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49C8u;
        // 0x1f49cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F49C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F49D0u;
}
