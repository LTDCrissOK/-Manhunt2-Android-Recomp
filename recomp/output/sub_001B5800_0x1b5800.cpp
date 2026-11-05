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

// Function: sub_001B5800
// Address: 0x1b5800 - 0x1b5da8
void sub_001B5800_0x1b5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5800_0x1b5800");
#endif

    switch (ctx->pc) {
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a98u: goto label_1b5a98;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5cb0u: goto label_1b5cb0;
        case 0x1b5ce8u: goto label_1b5ce8;
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d5cu: goto label_1b5d5c;
        case 0x1b5d68u: goto label_1b5d68;
        case 0x1b5d70u: goto label_1b5d70;
        default: break;
    }

    ctx->pc = 0x1b5800u;

    // 0x1b5800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b580c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5810: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5814: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1b5814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1b5818: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b5818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b581c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b5820: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b5820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b5824: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b5828: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b5828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b582c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b5830: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b5830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5834: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b5834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5838: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1b5838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1b583c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b583cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b5840: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b5840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5844: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1b5844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b5848: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b584c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1b584cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1b5850: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b5854: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b5854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b5858: 0x7e000070  sq          $zero, 0x70($s0)
    ctx->pc = 0x1b5858u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 0));
    // 0x1b585c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1b585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1b5860: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b5864: 0x8c421004  lw          $v0, 0x1004($v0)
    ctx->pc = 0x1b5864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1b5868: 0x50400142  beql        $v0, $zero, . + 4 + (0x142 << 2)
    ctx->pc = 0x1B5868u;
    {
        const bool branch_taken_0x1b5868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5868) {
            ctx->pc = 0x1B586Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5868u;
            // 0x1b586c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D74u;
            goto label_1b5d74;
        }
    }
    ctx->pc = 0x1B5870u;
    // 0x1b5870: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x1b5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b5874: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1b5878: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1b5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1b587c: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B587Cu;
    {
        const bool branch_taken_0x1b587c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b587c) {
            ctx->pc = 0x1B5880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B587Cu;
            // 0x1b5880: 0x8e050084  lw          $a1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B58A4u;
            goto label_1b58a4;
        }
    }
    ctx->pc = 0x1B5884u;
    // 0x1b5884: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B5884u;
    SET_GPR_U32(ctx, 31, 0x1B588Cu);
    ctx->pc = 0x1B5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5884u;
    // 0x1b5888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B5884u, 0x1B588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B588Cu;
label_1b588c:
    // 0x1b588c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5890: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x1b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x1b5894: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1b5894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1b5898: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1b5898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1b589c: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1b589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x1b58a0: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b58a4:
    // 0x1b58a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b58a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b58a8: 0x8ca30ff8  lw          $v1, 0xFF8($a1)
    ctx->pc = 0x1b58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x1b58ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b58acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b58b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b58b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b58b4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B58B4u;
    {
        const bool branch_taken_0x1b58b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58B4u;
        // 0x1b58b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58b4) {
            ctx->pc = 0x1B58CCu;
            goto label_1b58cc;
        }
    }
    ctx->pc = 0x1B58BCu;
    // 0x1b58bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b58c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b58c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b58c4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1b58c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1b58c8: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1b58c8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b58cc:
    // 0x1b58cc: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B58CCu;
    {
        const bool branch_taken_0x1b58cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58CCu;
        // 0x1b58d0: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58cc) {
            ctx->pc = 0x1B594Cu;
            goto label_1b594c;
        }
    }
    ctx->pc = 0x1B58D4u;
    // 0x1b58d4: 0x8ca30338  lw          $v1, 0x338($a1)
    ctx->pc = 0x1b58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 824)));
    // 0x1b58d8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1b58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1b58dc: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B58DCu;
    {
        const bool branch_taken_0x1b58dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58DCu;
        // 0x1b58e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58dc) {
            ctx->pc = 0x1B58F0u;
            goto label_1b58f0;
        }
    }
    ctx->pc = 0x1B58E4u;
    // 0x1b58e4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1b58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1b58e8: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b58e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b58ec: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1b58ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b58f0:
    // 0x1b58f0: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B58F0u;
    {
        const bool branch_taken_0x1b58f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b58f0) {
            ctx->pc = 0x1B58F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B58F0u;
            // 0x1b58f4: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5908u;
            goto label_1b5908;
        }
    }
    ctx->pc = 0x1B58F8u;
    // 0x1b58f8: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B58F8u;
    SET_GPR_U32(ctx, 31, 0x1B5900u);
    ctx->pc = 0x1B58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58F8u;
    // 0x1b58fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B58F8u, 0x1B5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5900u;
label_1b5900:
    // 0x1b5900: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1b5900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1b5904: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b5908:
    // 0x1b5908: 0x8c630338  lw          $v1, 0x338($v1)
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x1b590c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1b590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1b5910: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5910u;
    {
        const bool branch_taken_0x1b5910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5910u;
        // 0x1b5914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5910) {
            ctx->pc = 0x1B5924u;
            goto label_1b5924;
        }
    }
    ctx->pc = 0x1B5918u;
    // 0x1b5918: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1b5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1b591c: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b591cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b5920: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1b5920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b5924:
    // 0x1b5924: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5924u;
    {
        const bool branch_taken_0x1b5924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5924) {
            ctx->pc = 0x1B594Cu;
            goto label_1b594c;
        }
    }
    ctx->pc = 0x1B592Cu;
    // 0x1b592c: 0xc06d2ae  jal         func_1B4AB8
    ctx->pc = 0x1B592Cu;
    SET_GPR_U32(ctx, 31, 0x1B5934u);
    ctx->pc = 0x1B5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B592Cu;
    // 0x1b5930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AB8u, 0x1B592Cu, 0x1B5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5934u;
label_1b5934:
    // 0x1b5934: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5938: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5938u;
    {
        const bool branch_taken_0x1b5938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5938) {
            ctx->pc = 0x1B594Cu;
            goto label_1b594c;
        }
    }
    ctx->pc = 0x1B5940u;
    // 0x1b5940: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B5940u;
    SET_GPR_U32(ctx, 31, 0x1B5948u);
    ctx->pc = 0x1B5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5940u;
    // 0x1b5944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B5940u, 0x1B5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5948u;
label_1b5948:
    // 0x1b5948: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1b5948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_1b594c:
    // 0x1b594c: 0xc06d358  jal         func_1B4D60
    ctx->pc = 0x1B594Cu;
    SET_GPR_U32(ctx, 31, 0x1B5954u);
    ctx->pc = 0x1B5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B594Cu;
    // 0x1b5950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D60u, 0x1B594Cu, 0x1B5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5954u;
label_1b5954:
    // 0x1b5954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5954u;
    {
        const bool branch_taken_0x1b5954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5954) {
            ctx->pc = 0x1B596Cu;
            goto label_1b596c;
        }
    }
    ctx->pc = 0x1B595Cu;
    // 0x1b595c: 0xc06d35a  jal         func_1B4D68
    ctx->pc = 0x1B595Cu;
    SET_GPR_U32(ctx, 31, 0x1B5964u);
    ctx->pc = 0x1B5960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B595Cu;
    // 0x1b5960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D68u, 0x1B595Cu, 0x1B5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5964u;
label_1b5964:
    // 0x1b5964: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1B5964u;
    {
        const bool branch_taken_0x1b5964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5964) {
            ctx->pc = 0x1B5D68u;
            goto label_1b5d68;
        }
    }
    ctx->pc = 0x1B596Cu;
label_1b596c:
    // 0x1b596c: 0xc06d17e  jal         func_1B45F8
    ctx->pc = 0x1B596Cu;
    SET_GPR_U32(ctx, 31, 0x1B5974u);
    ctx->pc = 0x1B5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B596Cu;
    // 0x1b5970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45F8u, 0x1B596Cu, 0x1B5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5974u;
label_1b5974:
    // 0x1b5974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5978: 0xc06d2ae  jal         func_1B4AB8
    ctx->pc = 0x1B5978u;
    SET_GPR_U32(ctx, 31, 0x1B5980u);
    ctx->pc = 0x1B597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5978u;
    // 0x1b597c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AB8u, 0x1B5978u, 0x1B5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5980u;
label_1b5980:
    // 0x1b5980: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b5984: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5988: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1b5988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b598c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1b598cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1b5990: 0x8ce80ff4  lw          $t0, 0xFF4($a3)
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4084)));
    // 0x1b5994: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x1b5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x1b5998: 0x8ce50fe8  lw          $a1, 0xFE8($a3)
    ctx->pc = 0x1b5998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4072)));
    // 0x1b599c: 0x8d020044  lw          $v0, 0x44($t0)
    ctx->pc = 0x1b599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x1b59a0: 0x8ca304b0  lw          $v1, 0x4B0($a1)
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1200)));
    // 0x1b59a4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1b59a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b59a8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1b59a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x1b59ac: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1B59ACu;
    {
        const bool branch_taken_0x1b59ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59ACu;
        // 0x1b59b0: 0x44b821  addu        $s7, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59ac) {
            ctx->pc = 0x1B5A80u;
            goto label_1b5a80;
        }
    }
    ctx->pc = 0x1B59B4u;
    // 0x1b59b4: 0x8ce20ff8  lw          $v0, 0xFF8($a3)
    ctx->pc = 0x1b59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4088)));
    // 0x1b59b8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b59b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b59bc: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x1b59c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b59c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b59c4: 0x5064002f  beql        $v1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B59C4u;
    {
        const bool branch_taken_0x1b59c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b59c4) {
            ctx->pc = 0x1B59C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59C4u;
            // 0x1b59c8: 0xae110128  sw          $s1, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B59CCu;
    // 0x1b59cc: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x1b59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1b59d0: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B59D0u;
    {
        const bool branch_taken_0x1b59d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59D0u;
        // 0x1b59d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59d0) {
            ctx->pc = 0x1B59E4u;
            goto label_1b59e4;
        }
    }
    ctx->pc = 0x1B59D8u;
    // 0x1b59d8: 0x5620002a  bnel        $s1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B59D8u;
    {
        const bool branch_taken_0x1b59d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b59d8) {
            ctx->pc = 0x1B59DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59D8u;
            // 0x1b59dc: 0xae110128  sw          $s1, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B59E0u;
    // 0x1b59e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b59e4:
    // 0x1b59e4: 0x52420027  beql        $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B59E4u;
    {
        const bool branch_taken_0x1b59e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b59e4) {
            ctx->pc = 0x1B59E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B59E4u;
            // 0x1b59e8: 0xae110128  sw          $s1, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B59ECu;
    // 0x1b59ec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B59ECu;
    {
        const bool branch_taken_0x1b59ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b59ec) {
            ctx->pc = 0x1B59FCu;
            goto label_1b59fc;
        }
    }
    ctx->pc = 0x1B59F4u;
    // 0x1b59f4: 0x1623001d  bne         $s1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B59F4u;
    {
        const bool branch_taken_0x1b59f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59F4u;
        // 0x1b59f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59f4) {
            ctx->pc = 0x1B5A6Cu;
            goto label_1b5a6c;
        }
    }
    ctx->pc = 0x1B59FCu;
label_1b59fc:
    // 0x1b59fc: 0xc0602c4  jal         func_180B10
    ctx->pc = 0x1B59FCu;
    SET_GPR_U32(ctx, 31, 0x1B5A04u);
    ctx->pc = 0x1B5A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59FCu;
    // 0x1b5a00: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B10u, 0x1B59FCu, 0x1B5A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A04u;
label_1b5a04:
    // 0x1b5a04: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b5a08: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b5a0c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5A0Cu;
    {
        const bool branch_taken_0x1b5a0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A0Cu;
        // 0x1b5a10: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a0c) {
            ctx->pc = 0x1B5A28u;
            goto label_1b5a28;
        }
    }
    ctx->pc = 0x1B5A14u;
    // 0x1b5a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5a18: 0x0  nop
    ctx->pc = 0x1b5a18u;
    // NOP
    // 0x1b5a1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5a20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5A20u;
    {
        const bool branch_taken_0x1b5a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a20) {
            ctx->pc = 0x1B5A44u;
            goto label_1b5a44;
        }
    }
    ctx->pc = 0x1B5A28u;
label_1b5a28:
    // 0x1b5a28: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b5a2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5a30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5a38: 0x0  nop
    ctx->pc = 0x1b5a38u;
    // NOP
    // 0x1b5a3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5a40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b5a40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b5a44:
    // 0x1b5a44: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5a48: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5a50: 0x0  nop
    ctx->pc = 0x1b5a50u;
    // NOP
    // 0x1b5a54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b5a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5a58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b5a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5a5c: 0x0  nop
    ctx->pc = 0x1b5a5cu;
    // NOP
    // 0x1b5a60: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5A60u;
    {
        const bool branch_taken_0x1b5a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5a60) {
            ctx->pc = 0x1B5A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A60u;
            // 0x1b5a64: 0xae110128  sw          $s1, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B5A68u;
    // 0x1b5a68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5a6c:
    // 0x1b5a6c: 0x162200be  bne         $s1, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1B5A6Cu;
    {
        const bool branch_taken_0x1b5a6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A6Cu;
        // 0x1b5a70: 0x2642fffb  addiu       $v0, $s2, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a6c) {
            ctx->pc = 0x1B5D68u;
            goto label_1b5d68;
        }
    }
    ctx->pc = 0x1B5A74u;
    // 0x1b5a74: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b5a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b5a78: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1B5A78u;
    {
        const bool branch_taken_0x1b5a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a78) {
            ctx->pc = 0x1B5D68u;
            goto label_1b5d68;
        }
    }
    ctx->pc = 0x1B5A80u;
label_1b5a80:
    // 0x1b5a80: 0xae110128  sw          $s1, 0x128($s0)
    ctx->pc = 0x1b5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 17));
label_1b5a84:
    // 0x1b5a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a88: 0xae120120  sw          $s2, 0x120($s0)
    ctx->pc = 0x1b5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 18));
    // 0x1b5a8c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5a90: 0xc06dcc6  jal         func_1B7318
    ctx->pc = 0x1B5A90u;
    SET_GPR_U32(ctx, 31, 0x1B5A98u);
    ctx->pc = 0x1B5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A90u;
    // 0x1b5a94: 0xae120124  sw          $s2, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7318u, 0x1B5A90u, 0x1B5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A98u;
label_1b5a98:
    // 0x1b5a98: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b5a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5aa0: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1b5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1b5aa4: 0x8c6204b0  lw          $v0, 0x4B0($v1)
    ctx->pc = 0x1b5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x1b5aa8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1b5aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1b5aac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B5AACu;
    {
        const bool branch_taken_0x1b5aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AACu;
        // 0x1b5ab0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5aac) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5AB4u;
    // 0x1b5ab4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5ab8: 0x1242001d  beq         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B5AB8u;
    {
        const bool branch_taken_0x1b5ab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AB8u;
        // 0x1b5abc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ab8) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5AC0u;
    // 0x1b5ac0: 0x1242001b  beq         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B5AC0u;
    {
        const bool branch_taken_0x1b5ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AC0u;
        // 0x1b5ac4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ac0) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5AC8u;
    // 0x1b5ac8: 0x5242001a  beql        $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5AC8u;
    {
        const bool branch_taken_0x1b5ac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5ac8) {
            ctx->pc = 0x1B5ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AC8u;
            // 0x1b5acc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B34u;
            goto label_1b5b34;
        }
    }
    ctx->pc = 0x1B5AD0u;
    // 0x1b5ad0: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B5AD0u;
    {
        const bool branch_taken_0x1b5ad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD0u;
        // 0x1b5ad4: 0x8ca22b00  lw          $v0, 0x2B00($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ad0) {
            ctx->pc = 0x1B5B34u;
            goto label_1b5b34;
        }
    }
    ctx->pc = 0x1B5AD8u;
    // 0x1b5ad8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5AD8u;
    {
        const bool branch_taken_0x1b5ad8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD8u;
        // 0x1b5adc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ad8) {
            ctx->pc = 0x1B5AF4u;
            goto label_1b5af4;
        }
    }
    ctx->pc = 0x1B5AE0u;
    // 0x1b5ae0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5ae4: 0x0  nop
    ctx->pc = 0x1b5ae4u;
    // NOP
    // 0x1b5ae8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5aec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5AECu;
    {
        const bool branch_taken_0x1b5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5aec) {
            ctx->pc = 0x1B5B0Cu;
            goto label_1b5b0c;
        }
    }
    ctx->pc = 0x1B5AF4u;
label_1b5af4:
    // 0x1b5af4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5af8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5afc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5b00: 0x0  nop
    ctx->pc = 0x1b5b00u;
    // NOP
    // 0x1b5b04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5b08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b5b08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b5b0c:
    // 0x1b5b0c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5b10: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5b18: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1b5b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5b1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b5b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5b24: 0x0  nop
    ctx->pc = 0x1b5b24u;
    // NOP
    // 0x1b5b28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5B28u;
    {
        const bool branch_taken_0x1b5b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B28u;
        // 0x1b5b2c: 0x8ca22b00  lw          $v0, 0x2B00($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b28) {
            ctx->pc = 0x1B5B38u;
            goto label_1b5b38;
        }
    }
    ctx->pc = 0x1B5B30u;
label_1b5b30:
    // 0x1b5b30: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b5b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b34:
    // 0x1b5b34: 0x8ca22b00  lw          $v0, 0x2B00($a1)
    ctx->pc = 0x1b5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
label_1b5b38:
    // 0x1b5b38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B38u;
    {
        const bool branch_taken_0x1b5b38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B38u;
        // 0x1b5b3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b38) {
            ctx->pc = 0x1B5B54u;
            goto label_1b5b54;
        }
    }
    ctx->pc = 0x1B5B40u;
    // 0x1b5b40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5b44: 0x0  nop
    ctx->pc = 0x1b5b44u;
    // NOP
    // 0x1b5b48: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5b4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5B4Cu;
    {
        const bool branch_taken_0x1b5b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b4c) {
            ctx->pc = 0x1B5B70u;
            goto label_1b5b70;
        }
    }
    ctx->pc = 0x1B5B54u;
label_1b5b54:
    // 0x1b5b54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b5b58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5b5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5b60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5b64: 0x0  nop
    ctx->pc = 0x1b5b64u;
    // NOP
    // 0x1b5b68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5b6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b5b6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b5b70:
    // 0x1b5b70: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5b74: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5b7c: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1b5b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5b80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b5b84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5b88: 0x0  nop
    ctx->pc = 0x1b5b88u;
    // NOP
    // 0x1b5b8c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5B8Cu;
    {
        const bool branch_taken_0x1b5b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5b8c) {
            ctx->pc = 0x1B5B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5B8Cu;
            // 0x1b5b90: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BA0u;
            goto label_1b5ba0;
        }
    }
    ctx->pc = 0x1B5B94u;
    // 0x1b5b94: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5B94u;
    {
        const bool branch_taken_0x1b5b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B94u;
        // 0x1b5b98: 0x8ca22b00  lw          $v0, 0x2B00($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b94) {
            ctx->pc = 0x1B5BA4u;
            goto label_1b5ba4;
        }
    }
    ctx->pc = 0x1B5B9Cu;
    // 0x1b5b9c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1b5b9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5ba0:
    // 0x1b5ba0: 0x8ca22b00  lw          $v0, 0x2B00($a1)
    ctx->pc = 0x1b5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
label_1b5ba4:
    // 0x1b5ba4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5BA4u;
    {
        const bool branch_taken_0x1b5ba4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BA4u;
        // 0x1b5ba8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ba4) {
            ctx->pc = 0x1B5BC0u;
            goto label_1b5bc0;
        }
    }
    ctx->pc = 0x1B5BACu;
    // 0x1b5bac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5bb0: 0x0  nop
    ctx->pc = 0x1b5bb0u;
    // NOP
    // 0x1b5bb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5bb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5BB8u;
    {
        const bool branch_taken_0x1b5bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5bb8) {
            ctx->pc = 0x1B5BDCu;
            goto label_1b5bdc;
        }
    }
    ctx->pc = 0x1B5BC0u;
label_1b5bc0:
    // 0x1b5bc0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b5bc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5bc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5bcc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5bd0: 0x0  nop
    ctx->pc = 0x1b5bd0u;
    // NOP
    // 0x1b5bd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5bd8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b5bd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b5bdc:
    // 0x1b5bdc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5be0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5be8: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x1b5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5bec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b5bf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5bf4: 0x0  nop
    ctx->pc = 0x1b5bf4u;
    // NOP
    // 0x1b5bf8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5BF8u;
    {
        const bool branch_taken_0x1b5bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5bf8) {
            ctx->pc = 0x1B5BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BF8u;
            // 0x1b5bfc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5C14u;
            goto label_1b5c14;
        }
    }
    ctx->pc = 0x1B5C00u;
    // 0x1b5c00: 0xc06db90  jal         func_1B6E40
    ctx->pc = 0x1B5C00u;
    SET_GPR_U32(ctx, 31, 0x1B5C08u);
    ctx->pc = 0x1B5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C00u;
    // 0x1b5c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E40u, 0x1B5C00u, 0x1B5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C08u;
label_1b5c08:
    // 0x1b5c08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5C08u;
    {
        const bool branch_taken_0x1b5c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c08) {
            ctx->pc = 0x1B5C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5C08u;
            // 0x1b5c0c: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5C18u;
            goto label_1b5c18;
        }
    }
    ctx->pc = 0x1B5C10u;
    // 0x1b5c10: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5c14:
    // 0x1b5c14: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b5c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b5c18:
    // 0x1b5c18: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1b5c1c: 0x8c6204b0  lw          $v0, 0x4B0($v1)
    ctx->pc = 0x1b5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x1b5c20: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1b5c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1b5c24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5C24u;
    {
        const bool branch_taken_0x1b5c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C24u;
        // 0x1b5c28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c24) {
            ctx->pc = 0x1B5C74u;
            goto label_1b5c74;
        }
    }
    ctx->pc = 0x1B5C2Cu;
    // 0x1b5c2c: 0x8c840ff8  lw          $a0, 0xFF8($a0)
    ctx->pc = 0x1b5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b5c30: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1b5c34: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x1b5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x1b5c38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b5c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b5c3c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5C3Cu;
    {
        const bool branch_taken_0x1b5c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C3Cu;
        // 0x1b5c40: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c3c) {
            ctx->pc = 0x1B5C98u;
            goto label_1b5c98;
        }
    }
    ctx->pc = 0x1B5C44u;
    // 0x1b5c44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5c48: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b5c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b5c4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5C4Cu;
    {
        const bool branch_taken_0x1b5c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C4Cu;
        // 0x1b5c50: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c4c) {
            ctx->pc = 0x1B5C9Cu;
            goto label_1b5c9c;
        }
    }
    ctx->pc = 0x1B5C54u;
    // 0x1b5c54: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1b5c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5c58: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1b5c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1b5c5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5c60: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b5c60u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b5c64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5c68: 0x0  nop
    ctx->pc = 0x1b5c68u;
    // NOP
    // 0x1b5c6c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B5C6Cu;
    {
        const bool branch_taken_0x1b5c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C6Cu;
        // 0x1b5c70: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c6c) {
            ctx->pc = 0x1B5CA0u;
            goto label_1b5ca0;
        }
    }
    ctx->pc = 0x1B5C74u;
label_1b5c74:
    // 0x1b5c74: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5C74u;
    {
        const bool branch_taken_0x1b5c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C74u;
        // 0x1b5c78: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c74) {
            ctx->pc = 0x1B5C9Cu;
            goto label_1b5c9c;
        }
    }
    ctx->pc = 0x1B5C7Cu;
    // 0x1b5c7c: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5C7Cu;
    {
        const bool branch_taken_0x1b5c7c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c7c) {
            ctx->pc = 0x1B5C9Cu;
            goto label_1b5c9c;
        }
    }
    ctx->pc = 0x1B5C84u;
    // 0x1b5c84: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5C84u;
    {
        const bool branch_taken_0x1b5c84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C84u;
        // 0x1b5c88: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c84) {
            ctx->pc = 0x1B5CA0u;
            goto label_1b5ca0;
        }
    }
    ctx->pc = 0x1B5C8Cu;
    // 0x1b5c8c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1b5c8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5c90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5C90u;
    {
        const bool branch_taken_0x1b5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C90u;
        // 0x1b5c94: 0xae15012c  sw          $s5, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c90) {
            ctx->pc = 0x1B5CB4u;
            goto label_1b5cb4;
        }
    }
    ctx->pc = 0x1B5C98u;
label_1b5c98:
    // 0x1b5c98: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b5c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b5c9c:
    // 0x1b5c9c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b5c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ca0:
    // 0x1b5ca0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1b5ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ca4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b5ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ca8: 0xc0602ca  jal         func_180B28
    ctx->pc = 0x1B5CA8u;
    SET_GPR_U32(ctx, 31, 0x1B5CB0u);
    ctx->pc = 0x1B5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CA8u;
    // 0x1b5cac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B28u, 0x1B5CA8u, 0x1B5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CB0u;
label_1b5cb0:
    // 0x1b5cb0: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x1b5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_1b5cb4:
    // 0x1b5cb4: 0x2642fff9  addiu       $v0, $s2, -0x7
    ctx->pc = 0x1b5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967289));
    // 0x1b5cb8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b5cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b5cbc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5CBCu;
    {
        const bool branch_taken_0x1b5cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cbc) {
            ctx->pc = 0x1B5CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5CBCu;
            // 0x1b5cc0: 0x8e02012c  lw          $v0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CD0u;
            goto label_1b5cd0;
        }
    }
    ctx->pc = 0x1B5CC4u;
    // 0x1b5cc4: 0xae120124  sw          $s2, 0x124($s0)
    ctx->pc = 0x1b5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 18));
    // 0x1b5cc8: 0xae120120  sw          $s2, 0x120($s0)
    ctx->pc = 0x1b5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 18));
    // 0x1b5ccc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1b5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_1b5cd0:
    // 0x1b5cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5cd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b5cd8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5CD8u;
    {
        const bool branch_taken_0x1b5cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CD8u;
        // 0x1b5cdc: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cd8) {
            ctx->pc = 0x1B5D04u;
            goto label_1b5d04;
        }
    }
    ctx->pc = 0x1B5CE0u;
    // 0x1b5ce0: 0xc06d5c6  jal         func_1B5718
    ctx->pc = 0x1B5CE0u;
    SET_GPR_U32(ctx, 31, 0x1B5CE8u);
    ctx->pc = 0x1B5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CE0u;
    // 0x1b5ce4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5718u, 0x1B5CE0u, 0x1B5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CE8u;
label_1b5ce8:
    // 0x1b5ce8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5CE8u;
    {
        const bool branch_taken_0x1b5ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CE8u;
        // 0x1b5cec: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ce8) {
            ctx->pc = 0x1B5D00u;
            goto label_1b5d00;
        }
    }
    ctx->pc = 0x1B5CF0u;
    // 0x1b5cf0: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
    // 0x1b5cf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b5cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b5cf8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5CF8u;
    {
        const bool branch_taken_0x1b5cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cf8) {
            ctx->pc = 0x1B5CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5CF8u;
            // 0x1b5cfc: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D08u;
            goto label_1b5d08;
        }
    }
    ctx->pc = 0x1B5D00u;
label_1b5d00:
    // 0x1b5d00: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1b5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_1b5d04:
    // 0x1b5d04: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x1b5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_1b5d08:
    // 0x1b5d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5d0c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B5D0Cu;
    {
        const bool branch_taken_0x1b5d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D0Cu;
        // 0x1b5d10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d0c) {
            ctx->pc = 0x1B5D4Cu;
            goto label_1b5d4c;
        }
    }
    ctx->pc = 0x1B5D14u;
    // 0x1b5d14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5D14u;
    {
        const bool branch_taken_0x1b5d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D14u;
        // 0x1b5d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d14) {
            ctx->pc = 0x1B5D2Cu;
            goto label_1b5d2c;
        }
    }
    ctx->pc = 0x1B5D1Cu;
    // 0x1b5d1c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5D1Cu;
    {
        const bool branch_taken_0x1b5d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d1c) {
            ctx->pc = 0x1B5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D1Cu;
            // 0x1b5d20: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D3Cu;
            goto label_1b5d3c;
        }
    }
    ctx->pc = 0x1B5D24u;
    // 0x1b5d24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B5D24u;
    {
        const bool branch_taken_0x1b5d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d24) {
            ctx->pc = 0x1B5D60u;
            goto label_1b5d60;
        }
    }
    ctx->pc = 0x1B5D2Cu;
label_1b5d2c:
    // 0x1b5d2c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5D2Cu;
    {
        const bool branch_taken_0x1b5d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5d2c) {
            ctx->pc = 0x1B5D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D2Cu;
            // 0x1b5d30: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D60u;
            goto label_1b5d60;
        }
    }
    ctx->pc = 0x1B5D34u;
    // 0x1b5d34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B5D34u;
    {
        const bool branch_taken_0x1b5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d34) {
            ctx->pc = 0x1B5D60u;
            goto label_1b5d60;
        }
    }
    ctx->pc = 0x1B5D3Cu;
label_1b5d3c:
    // 0x1b5d3c: 0xc0602ae  jal         func_180AB8
    ctx->pc = 0x1B5D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D44u);
    ctx->pc = 0x1B5D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D3Cu;
    // 0x1b5d40: 0x8c440ff4  lw          $a0, 0xFF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180AB8u, 0x1B5D3Cu, 0x1B5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D44u;
label_1b5d44:
    // 0x1b5d44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5D44u;
    {
        const bool branch_taken_0x1b5d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d44) {
            ctx->pc = 0x1B5D60u;
            goto label_1b5d60;
        }
    }
    ctx->pc = 0x1B5D4Cu;
label_1b5d4c:
    // 0x1b5d4c: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5D4Cu;
    {
        const bool branch_taken_0x1b5d4c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d4c) {
            ctx->pc = 0x1B5D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D4Cu;
            // 0x1b5d50: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D60u;
            goto label_1b5d60;
        }
    }
    ctx->pc = 0x1B5D54u;
    // 0x1b5d54: 0xc0603d2  jal         func_180F48
    ctx->pc = 0x1B5D54u;
    SET_GPR_U32(ctx, 31, 0x1B5D5Cu);
    ctx->pc = 0x1B5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D54u;
    // 0x1b5d58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F48u, 0x1B5D54u, 0x1B5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D5Cu;
label_1b5d5c:
    // 0x1b5d5c: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1b5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1b5d60:
    // 0x1b5d60: 0xc06d35a  jal         func_1B4D68
    ctx->pc = 0x1B5D60u;
    SET_GPR_U32(ctx, 31, 0x1B5D68u);
    ctx->pc = 0x1B5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D60u;
    // 0x1b5d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D68u, 0x1B5D60u, 0x1B5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D68u;
label_1b5d68:
    // 0x1b5d68: 0xc06d51c  jal         func_1B5470
    ctx->pc = 0x1B5D68u;
    SET_GPR_U32(ctx, 31, 0x1B5D70u);
    ctx->pc = 0x1B5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D68u;
    // 0x1b5d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5470u, 0x1B5D68u, 0x1B5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D70u;
label_1b5d70:
    // 0x1b5d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5d74:
    // 0x1b5d74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5d78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5d7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b5d7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5d80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b5d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5d84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b5d84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5d88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b5d88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5d8c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b5d8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5d90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D94u;
        // 0x1b5d98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5D9Cu;
    // 0x1b5d9c: 0x0  nop
    ctx->pc = 0x1b5d9cu;
    // NOP
    // 0x1b5da0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b5da4: 0x0  nop
    ctx->pc = 0x1b5da4u;
    // NOP
    ctx->pc = 0x1b5da8u;
}
