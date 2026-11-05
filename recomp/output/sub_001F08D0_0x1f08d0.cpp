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

// Function: sub_001F08D0
// Address: 0x1f08d0 - 0x1f0e20
void sub_001F08D0_0x1f08d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F08D0_0x1f08d0");
#endif

    switch (ctx->pc) {
        case 0x1f0910u: goto label_1f0910;
        case 0x1f093cu: goto label_1f093c;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09b8u: goto label_1f09b8;
        case 0x1f0a30u: goto label_1f0a30;
        case 0x1f0a58u: goto label_1f0a58;
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0c74u: goto label_1f0c74;
        case 0x1f0c80u: goto label_1f0c80;
        case 0x1f0cb8u: goto label_1f0cb8;
        case 0x1f0cccu: goto label_1f0ccc;
        case 0x1f0d84u: goto label_1f0d84;
        case 0x1f0dd0u: goto label_1f0dd0;
        default: break;
    }

    ctx->pc = 0x1f08d0u;

    // 0x1f08d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f08d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f08d4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1f08d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1f08d8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f08d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f08dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f08dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08e0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f08e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f08e4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1f08e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1f08e8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1f08e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1f08ec: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1f08ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1f08f0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1f08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1f08f4: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1f08f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x1f08f8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1f08f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1f08fc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1f08fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1f0900: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1f0900u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f0904: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1f0904u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1f0908: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x1F0908u;
    SET_GPR_U32(ctx, 31, 0x1F0910u);
    ctx->pc = 0x1F090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0908u;
    // 0x1f090c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x1F0908u, 0x1F0910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0910u;
label_1f0910:
    // 0x1f0910: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0914: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0914u;
    {
        const bool branch_taken_0x1f0914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0914u;
        // 0x1f0918: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0914) {
            ctx->pc = 0x1F0948u;
            goto label_1f0948;
        }
    }
    ctx->pc = 0x1F091Cu;
    // 0x1f091c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f0920: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0924: 0x8c52bd6c  lw          $s2, -0x4294($v0)
    ctx->pc = 0x1f0924u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x1f0928: 0x16430007  bne         $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0928u;
    {
        const bool branch_taken_0x1f0928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0928u;
        // 0x1f092c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0928) {
            ctx->pc = 0x1F0948u;
            goto label_1f0948;
        }
    }
    ctx->pc = 0x1F0930u;
    // 0x1f0930: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f0930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f0934: 0xc07fb34  jal         func_1FECD0
    ctx->pc = 0x1F0934u;
    SET_GPR_U32(ctx, 31, 0x1F093Cu);
    ctx->pc = 0x1F0938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0934u;
    // 0x1f0938: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECD0u, 0x1F0934u, 0x1F093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F093Cu;
label_1f093c:
    // 0x1f093c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0940: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F0940u;
    {
        const bool branch_taken_0x1f0940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0940u;
        // 0x1f0944: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0940) {
            ctx->pc = 0x1F09D4u;
            goto label_1f09d4;
        }
    }
    ctx->pc = 0x1F0948u;
label_1f0948:
    // 0x1f0948: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1f0948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f094c: 0x8ce31358  lw          $v1, 0x1358($a3)
    ctx->pc = 0x1f094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4952)));
    // 0x1f0950: 0x10600123  beqz        $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x1F0950u;
    {
        const bool branch_taken_0x1f0950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0950u;
        // 0x1f0954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0950) {
            ctx->pc = 0x1F0DE0u;
            goto label_1f0de0;
        }
    }
    ctx->pc = 0x1F0958u;
    // 0x1f0958: 0x90e213ca  lbu         $v0, 0x13CA($a3)
    ctx->pc = 0x1f0958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5066)));
    // 0x1f095c: 0x90e313cb  lbu         $v1, 0x13CB($a3)
    ctx->pc = 0x1f095cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5067)));
    // 0x1f0960: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1f0960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0964: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1f0964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1f0968: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1f0968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1f096c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1f0970: 0x82282a  slt         $a1, $a0, $v0
    ctx->pc = 0x1f0970u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f0974: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1f0974u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f0978: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1f0978u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1f097c: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x1f097cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f0980: 0xa0e213ca  sb          $v0, 0x13CA($a3)
    ctx->pc = 0x1f0980u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5066), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0984: 0xa0e313cb  sb          $v1, 0x13CB($a3)
    ctx->pc = 0x1f0984u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5067), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0988: 0xdce213c8  ld          $v0, 0x13C8($a3)
    ctx->pc = 0x1f0988u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 5064)));
    // 0x1f098c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1f098cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1f0990: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1F0990u;
    {
        const bool branch_taken_0x1f0990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0990u;
        // 0x1f0994: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0990) {
            ctx->pc = 0x1F0C94u;
            goto label_1f0c94;
        }
    }
    ctx->pc = 0x1F0998u;
    // 0x1f0998: 0x3402935c  ori         $v0, $zero, 0x935C
    ctx->pc = 0x1f0998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37724);
    // 0x1f099c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1f099cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f09a0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1f09a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f09a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f09a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f09a8:
    // 0x1f09a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f09a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f09ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f09acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f09b0: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F09B0u;
    SET_GPR_U32(ctx, 31, 0x1F09B8u);
    ctx->pc = 0x1F09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09B0u;
    // 0x1f09b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F09B0u, 0x1F09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09B8u;
label_1f09b8:
    // 0x1f09b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1f09b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1f09bc: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F09BCu;
    {
        const bool branch_taken_0x1f09bc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1F09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09BCu;
        // 0x1f09c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09bc) {
            ctx->pc = 0x1F09A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f09a8;
        }
    }
    ctx->pc = 0x1F09C4u;
    // 0x1f09c4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f09c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f09c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f09cc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1F09CCu;
    {
        const bool branch_taken_0x1f09cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09CCu;
        // 0x1f09d0: 0xac401358  sw          $zero, 0x1358($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09cc) {
            ctx->pc = 0x1F0C90u;
            goto label_1f0c90;
        }
    }
    ctx->pc = 0x1F09D4u;
label_1f09d4:
    // 0x1f09d4: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1f09d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f09d8: 0x8e1315e8  lw          $s3, 0x15E8($s0)
    ctx->pc = 0x1f09d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5608)));
    // 0x1f09dc: 0x56600101  bnel        $s3, $zero, . + 4 + (0x101 << 2)
    ctx->pc = 0x1F09DCu;
    {
        const bool branch_taken_0x1f09dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09dc) {
            ctx->pc = 0x1F09E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09DCu;
            // 0x1f09e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0DE4u;
            goto label_1f0de4;
        }
    }
    ctx->pc = 0x1F09E4u;
    // 0x1f09e4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f09e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1f09e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f09e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f09ec: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f09ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f09f0: 0xc6151530  lwc1        $f21, 0x1530($s0)
    ctx->pc = 0x1f09f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f09f4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f09f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f09f8: 0xc600152c  lwc1        $f0, 0x152C($s0)
    ctx->pc = 0x1f09f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f09fc: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f09fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f0a00: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x1f0a00u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1f0a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0a08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f0a0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f0a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f0a10: 0xa23200fc  sb          $s2, 0xFC($s1)
    ctx->pc = 0x1f0a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 18));
    // 0x1f0a14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0a18: 0x24c6ecd0  addiu       $a2, $a2, -0x1330
    ctx->pc = 0x1f0a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962384));
    // 0x1f0a1c: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x1f0a1cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1f0a20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f0a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a28: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F0A28u;
    SET_GPR_U32(ctx, 31, 0x1F0A30u);
    ctx->pc = 0x1F0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A28u;
    // 0x1f0a2c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F0A28u, 0x1F0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A30u;
label_1f0a30:
    // 0x1f0a30: 0x3c013f5d  lui         $at, 0x3F5D
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16221 << 16));
    // 0x1f0a34: 0x3421bb77  ori         $at, $at, 0xBB77
    ctx->pc = 0x1f0a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47991);
    // 0x1f0a38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f0a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f0a3c: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1f0a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0a40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0a44: 0x0  nop
    ctx->pc = 0x1f0a44u;
    // NOP
    // 0x1f0a48: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f0a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f0a4c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1f0a4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1f0a50: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F0A50u;
    SET_GPR_U32(ctx, 31, 0x1F0A58u);
    ctx->pc = 0x1F0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A50u;
    // 0x1f0a54: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F0A50u, 0x1F0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A58u;
label_1f0a58:
    // 0x1f0a58: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x1f0a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0a5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0a60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f0a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f0a64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f0a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0a68: 0x0  nop
    ctx->pc = 0x1f0a68u;
    // NOP
    // 0x1f0a6c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f0a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f0a70: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1f0a70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0a74: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1f0a74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1f0a78: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F0A78u;
    SET_GPR_U32(ctx, 31, 0x1F0A80u);
    ctx->pc = 0x1F0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A78u;
    // 0x1f0a7c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F0A78u, 0x1F0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A80u;
label_1f0a80:
    // 0x1f0a80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0a80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0a84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f0a84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f0a88: 0x920513ca  lbu         $a1, 0x13CA($s0)
    ctx->pc = 0x1f0a88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5066)));
    // 0x1f0a8c: 0x93a40030  lbu         $a0, 0x30($sp)
    ctx->pc = 0x1f0a8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0a90: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1f0a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f0a94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0A94u;
    {
        const bool branch_taken_0x1f0a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A94u;
        // 0x1f0a98: 0xa3a30031  sb          $v1, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a94) {
            ctx->pc = 0x1F0AB0u;
            goto label_1f0ab0;
        }
    }
    ctx->pc = 0x1F0A9Cu;
    // 0x1f0a9c: 0x920213ca  lbu         $v0, 0x13CA($s0)
    ctx->pc = 0x1f0a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5066)));
    // 0x1f0aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0aa4: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1f0aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f0aa8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0AA8u;
    {
        const bool branch_taken_0x1f0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AA8u;
        // 0x1f0aac: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0aa8) {
            ctx->pc = 0x1F0ACCu;
            goto label_1f0acc;
        }
    }
    ctx->pc = 0x1F0AB0u;
label_1f0ab0:
    // 0x1f0ab0: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1f0ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f0ab4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0AB4u;
    {
        const bool branch_taken_0x1f0ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AB4u;
        // 0x1f0ab8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ab4) {
            ctx->pc = 0x1F0AD4u;
            goto label_1f0ad4;
        }
    }
    ctx->pc = 0x1F0ABCu;
    // 0x1f0abc: 0x920213ca  lbu         $v0, 0x13CA($s0)
    ctx->pc = 0x1f0abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5066)));
    // 0x1f0ac0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f0ac4: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x1f0ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f0ac8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1f0ac8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f0acc:
    // 0x1f0acc: 0xa20213ca  sb          $v0, 0x13CA($s0)
    ctx->pc = 0x1f0accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5066), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0ad0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f0ad4:
    // 0x1f0ad4: 0x93a40031  lbu         $a0, 0x31($sp)
    ctx->pc = 0x1f0ad4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x1f0ad8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0adc: 0x90a313cb  lbu         $v1, 0x13CB($a1)
    ctx->pc = 0x1f0adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5067)));
    // 0x1f0ae0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1f0ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f0ae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0AE4u;
    {
        const bool branch_taken_0x1f0ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AE4u;
        // 0x1f0ae8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ae4) {
            ctx->pc = 0x1F0AFCu;
            goto label_1f0afc;
        }
    }
    ctx->pc = 0x1F0AECu;
    // 0x1f0aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0af0: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1f0af0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f0af4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0AF4u;
    {
        const bool branch_taken_0x1f0af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF4u;
        // 0x1f0af8: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0af4) {
            ctx->pc = 0x1F0B18u;
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0AFCu;
label_1f0afc:
    // 0x1f0afc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1f0afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f0b00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0B00u;
    {
        const bool branch_taken_0x1f0b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B00u;
        // 0x1f0b04: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b00) {
            ctx->pc = 0x1F0B20u;
            goto label_1f0b20;
        }
    }
    ctx->pc = 0x1F0B08u;
    // 0x1f0b08: 0x90a213cb  lbu         $v0, 0x13CB($a1)
    ctx->pc = 0x1f0b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5067)));
    // 0x1f0b0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f0b10: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x1f0b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f0b14: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1f0b14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f0b18:
    // 0x1f0b18: 0xa0a213cb  sb          $v0, 0x13CB($a1)
    ctx->pc = 0x1f0b18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5067), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0b1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f0b20:
    // 0x1f0b20: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1f0b24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f0b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f0b28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f0b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f0b2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0b34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f0b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f0b38: 0xc4401530  lwc1        $f0, 0x1530($v0)
    ctx->pc = 0x1f0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0b3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f0b40: 0xc441152c  lwc1        $f1, 0x152C($v0)
    ctx->pc = 0x1f0b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0b44: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f0b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b48: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f0b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f0b4c: 0xc4649248  lwc1        $f4, -0x6DB8($v1)
    ctx->pc = 0x1f0b4cu;
    { uint32_t bits = FAST_READ32(0x3F9248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f0b50: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1f0b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1f0b54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f0b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f0b58: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1f0b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f0b5c: 0x3c014567  lui         $at, 0x4567
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17767 << 16));
    // 0x1f0b60: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1f0b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1f0b64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f0b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f0b68: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1f0b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f0b6c: 0x3c014586  lui         $at, 0x4586
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17798 << 16));
    // 0x1f0b70: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x1f0b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
    // 0x1f0b74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f0b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f0b78: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1f0b78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f0b7c: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x1f0b7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0b80: 0x46050102  mul.s       $f4, $f0, $f5
    ctx->pc = 0x1f0b80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1f0b84: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1f0b84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1f0b88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0B88u;
    {
        const bool branch_taken_0x1f0b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B88u;
        // 0x1f0b8c: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b88) {
            ctx->pc = 0x1F0B94u;
            goto label_1f0b94;
        }
    }
    ctx->pc = 0x1F0B90u;
    // 0x1f0b90: 0xe4a29248  swc1        $f2, -0x6DB8($a1)
    ctx->pc = 0x1f0b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294939208), bits); }
label_1f0b94:
    // 0x1f0b94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f0b98: 0xc440924c  lwc1        $f0, -0x6DB4($v0)
    ctx->pc = 0x1f0b98u;
    { uint32_t bits = FAST_READ32(0x3F924Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0b9c: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x1f0b9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0ba0: 0x0  nop
    ctx->pc = 0x1f0ba0u;
    // NOP
    // 0x1f0ba4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0BA4u;
    {
        const bool branch_taken_0x1f0ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BA4u;
        // 0x1f0ba8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ba4) {
            ctx->pc = 0x1F0BB0u;
            goto label_1f0bb0;
        }
    }
    ctx->pc = 0x1F0BACu;
    // 0x1f0bac: 0xe464924c  swc1        $f4, -0x6DB4($v1)
    ctx->pc = 0x1f0bacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294939212), bits); }
label_1f0bb0:
    // 0x1f0bb0: 0xc4a19248  lwc1        $f1, -0x6DB8($a1)
    ctx->pc = 0x1f0bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294939208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0bb4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f0bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0bb8: 0x0  nop
    ctx->pc = 0x1f0bb8u;
    // NOP
    // 0x1f0bbc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0BBCu;
    {
        const bool branch_taken_0x1f0bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0bbc) {
            ctx->pc = 0x1F0BDCu;
            goto label_1f0bdc;
        }
    }
    ctx->pc = 0x1F0BC4u;
    // 0x1f0bc4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bcc: 0x0  nop
    ctx->pc = 0x1f0bccu;
    // NOP
    // 0x1f0bd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0bd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F0BD4u;
    {
        const bool branch_taken_0x1f0bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BD4u;
        // 0x1f0bd8: 0x460010a9  min.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bd4) {
            ctx->pc = 0x1F0C00u;
            goto label_1f0c00;
        }
    }
    ctx->pc = 0x1F0BDCu;
label_1f0bdc:
    // 0x1f0bdc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f0bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0be0: 0x0  nop
    ctx->pc = 0x1f0be0u;
    // NOP
    // 0x1f0be4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0BE4u;
    {
        const bool branch_taken_0x1f0be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0be4) {
            ctx->pc = 0x1F0BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BE4u;
            // 0x1f0be8: 0xc461924c  lwc1        $f1, -0x6DB4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C04u;
            goto label_1f0c04;
        }
    }
    ctx->pc = 0x1F0BECu;
    // 0x1f0bec: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0bf4: 0x0  nop
    ctx->pc = 0x1f0bf4u;
    // NOP
    // 0x1f0bf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0bf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0bfc: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x1f0bfcu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
label_1f0c00:
    // 0x1f0c00: 0xc461924c  lwc1        $f1, -0x6DB4($v1)
    ctx->pc = 0x1f0c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0c04:
    // 0x1f0c04: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1f0c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0c08: 0x0  nop
    ctx->pc = 0x1f0c08u;
    // NOP
    // 0x1f0c0c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0C0Cu;
    {
        const bool branch_taken_0x1f0c0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c0c) {
            ctx->pc = 0x1F0C2Cu;
            goto label_1f0c2c;
        }
    }
    ctx->pc = 0x1F0C14u;
    // 0x1f0c14: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c1c: 0x0  nop
    ctx->pc = 0x1f0c1cu;
    // NOP
    // 0x1f0c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0c24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F0C24u;
    {
        const bool branch_taken_0x1f0c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C24u;
        // 0x1f0c28: 0x46001929  min.s       $f4, $f3, $f0 (Delay Slot)
        ctx->f[4] = std::min(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c24) {
            ctx->pc = 0x1F0C50u;
            goto label_1f0c50;
        }
    }
    ctx->pc = 0x1F0C2Cu;
label_1f0c2c:
    // 0x1f0c2c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1f0c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0c30: 0x0  nop
    ctx->pc = 0x1f0c30u;
    // NOP
    // 0x1f0c34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0C34u;
    {
        const bool branch_taken_0x1f0c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c34) {
            ctx->pc = 0x1F0C50u;
            goto label_1f0c50;
        }
    }
    ctx->pc = 0x1F0C3Cu;
    // 0x1f0c3c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0c44: 0x0  nop
    ctx->pc = 0x1f0c44u;
    // NOP
    // 0x1f0c48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0c4c: 0x46001928  max.s       $f4, $f3, $f0
    ctx->pc = 0x1f0c4cu;
    ctx->f[4] = std::max(ctx->f[3], ctx->f[0]);
label_1f0c50:
    // 0x1f0c50: 0x3c01399a  lui         $at, 0x399A
    ctx->pc = 0x1f0c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14746 << 16));
    // 0x1f0c54: 0x342133cd  ori         $at, $at, 0x33CD
    ctx->pc = 0x1f0c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13261);
    // 0x1f0c58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f0c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c60: 0xe464924c  swc1        $f4, -0x6DB4($v1)
    ctx->pc = 0x1f0c60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294939212), bits); }
    // 0x1f0c64: 0x46141302  mul.s       $f12, $f2, $f20
    ctx->pc = 0x1f0c64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1f0c68: 0xe4a29248  swc1        $f2, -0x6DB8($a1)
    ctx->pc = 0x1f0c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294939208), bits); }
    // 0x1f0c6c: 0xc07dd88  jal         func_1F7620
    ctx->pc = 0x1F0C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F0C74u);
    ctx->pc = 0x1F0C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C6Cu;
    // 0x1f0c70: 0x46142502  mul.s       $f20, $f4, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7620u, 0x1F0C6Cu, 0x1F0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C74u;
label_1f0c74:
    // 0x1f0c74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f0c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f0c78: 0xc07dd88  jal         func_1F7620
    ctx->pc = 0x1F0C78u;
    SET_GPR_U32(ctx, 31, 0x1F0C80u);
    ctx->pc = 0x1F0C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C78u;
    // 0x1f0c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7620u, 0x1F0C78u, 0x1F0C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C80u;
label_1f0c80:
    // 0x1f0c80: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0c88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0c8c: 0xac431358  sw          $v1, 0x1358($v0)
    ctx->pc = 0x1f0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4952), GPR_U32(ctx, 3));
label_1f0c90:
    // 0x1f0c90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f0c94:
    // 0x1f0c94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f0c98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f0c9c: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0ca0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f0ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ca4: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f0ca8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1f0ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0cac: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1f0cacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0cb0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f0cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0cb4: 0x0  nop
    ctx->pc = 0x1f0cb4u;
    // NOP
label_1f0cb8:
    // 0x1f0cb8: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x1f0cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1f0cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cc0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1f0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1f0cc4: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1F0CC4u;
    SET_GPR_U32(ctx, 31, 0x1F0CCCu);
    ctx->pc = 0x1F0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CC4u;
    // 0x1f0cc8: 0x8c45135c  lw          $a1, 0x135C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1F0CC4u, 0x1F0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CCCu;
label_1f0ccc:
    // 0x1f0ccc: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F0CCCu;
    {
        const bool branch_taken_0x1f0ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ccc) {
            ctx->pc = 0x1F0CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0CCCu;
            // 0x1f0cd0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0DD4u;
            goto label_1f0dd4;
        }
    }
    ctx->pc = 0x1F0CD4u;
    // 0x1f0cd4: 0x8e431344  lw          $v1, 0x1344($s2)
    ctx->pc = 0x1f0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4932)));
    // 0x1f0cd8: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1f0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1f0cdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0ce0: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x1f0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x1f0ce4: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x1f0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    // 0x1f0ce8: 0xa62400f4  sh          $a0, 0xF4($s1)
    ctx->pc = 0x1f0ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f0cec: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x1f0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x1f0cf0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1f0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1f0cf4: 0xc64013d4  lwc1        $f0, 0x13D4($s2)
    ctx->pc = 0x1f0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0cf8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1f0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1f0cfc: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x1f0cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x1f0d00: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1f0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1f0d04: 0x924213ca  lbu         $v0, 0x13CA($s2)
    ctx->pc = 0x1f0d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5066)));
    // 0x1f0d08: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1f0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1f0d0c: 0xa222010c  sb          $v0, 0x10C($s1)
    ctx->pc = 0x1f0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0d10: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1f0d10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f0d14: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1f0d14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0d18: 0x93a30029  lbu         $v1, 0x29($sp)
    ctx->pc = 0x1f0d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f0d1c: 0x3410935c  ori         $s0, $zero, 0x935C
    ctx->pc = 0x1f0d1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37724);
    // 0x1f0d20: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f0d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f0d24: 0x2402010e  addiu       $v0, $zero, 0x10E
    ctx->pc = 0x1f0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x1f0d28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0d28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d2c: 0x0  nop
    ctx->pc = 0x1f0d2cu;
    // NOP
    // 0x1f0d30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0d34: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1f0d38: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x1f0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x1f0d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d40: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x1f0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x1f0d44: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x1f0d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1f0d48: 0xae360100  sw          $s6, 0x100($s1)
    ctx->pc = 0x1f0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 22));
    // 0x1f0d4c: 0xa2200154  sb          $zero, 0x154($s1)
    ctx->pc = 0x1f0d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 340), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0d50: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x1f0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x1f0d54: 0xa2200148  sb          $zero, 0x148($s1)
    ctx->pc = 0x1f0d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0d58: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x1f0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
    // 0x1f0d5c: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x1f0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x1f0d60: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x1f0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
    // 0x1f0d64: 0xae300144  sw          $s0, 0x144($s1)
    ctx->pc = 0x1f0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
    // 0x1f0d68: 0xae360140  sw          $s6, 0x140($s1)
    ctx->pc = 0x1f0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 22));
    // 0x1f0d6c: 0xae360114  sw          $s6, 0x114($s1)
    ctx->pc = 0x1f0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 22));
    // 0x1f0d70: 0x924213ca  lbu         $v0, 0x13CA($s2)
    ctx->pc = 0x1f0d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5066)));
    // 0x1f0d74: 0xe634016c  swc1        $f20, 0x16C($s1)
    ctx->pc = 0x1f0d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1f0d78: 0xa2370170  sb          $s7, 0x170($s1)
    ctx->pc = 0x1f0d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 23));
    // 0x1f0d7c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F0D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D84u);
    ctx->pc = 0x1F0D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D7Cu;
    // 0x1f0d80: 0xa222011c  sb          $v0, 0x11C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F0D7Cu, 0x1F0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D84u;
label_1f0d84:
    // 0x1f0d84: 0xa63500f4  sh          $s5, 0xF4($s1)
    ctx->pc = 0x1f0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 21));
    // 0x1f0d88: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f0d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d90: 0xc64013d8  lwc1        $f0, 0x13D8($s2)
    ctx->pc = 0x1f0d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d94: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f0d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f0d98: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x1f0d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x1f0d9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f0d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0da0: 0x0  nop
    ctx->pc = 0x1f0da0u;
    // NOP
    // 0x1f0da4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f0da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0da8: 0x924213cb  lbu         $v0, 0x13CB($s2)
    ctx->pc = 0x1f0da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5067)));
    // 0x1f0dac: 0xae230150  sw          $v1, 0x150($s1)
    ctx->pc = 0x1f0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 3));
    // 0x1f0db0: 0xe6210120  swc1        $f1, 0x120($s1)
    ctx->pc = 0x1f0db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x1f0db4: 0xa222010c  sb          $v0, 0x10C($s1)
    ctx->pc = 0x1f0db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0db8: 0xae300144  sw          $s0, 0x144($s1)
    ctx->pc = 0x1f0db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
    // 0x1f0dbc: 0x924213cb  lbu         $v0, 0x13CB($s2)
    ctx->pc = 0x1f0dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5067)));
    // 0x1f0dc0: 0xe634016c  swc1        $f20, 0x16C($s1)
    ctx->pc = 0x1f0dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1f0dc4: 0xa2370170  sb          $s7, 0x170($s1)
    ctx->pc = 0x1f0dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 23));
    // 0x1f0dc8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F0DC8u;
    SET_GPR_U32(ctx, 31, 0x1F0DD0u);
    ctx->pc = 0x1F0DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DC8u;
    // 0x1f0dcc: 0xa222011c  sb          $v0, 0x11C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F0DC8u, 0x1F0DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DD0u;
label_1f0dd0:
    // 0x1f0dd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f0dd4:
    // 0x1f0dd4: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1f0dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f0dd8: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1F0DD8u;
    {
        const bool branch_taken_0x1f0dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DD8u;
        // 0x1f0ddc: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0dd8) {
            ctx->pc = 0x1F0CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0cb8;
        }
    }
    ctx->pc = 0x1F0DE0u;
label_1f0de0:
    // 0x1f0de0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f0de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0de4:
    // 0x1f0de4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1f0de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f0de8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0dec: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1f0decu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f0df0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1f0df0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0df4: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1f0df4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f0df8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1f0df8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0dfc: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1f0dfcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f0e00: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1f0e00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0e04: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1f0e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e08: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1f0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0e0c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1f0e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0e10: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1f0e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0e14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E14u;
        // 0x1f0e18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E1Cu;
    // 0x1f0e1c: 0x0  nop
    ctx->pc = 0x1f0e1cu;
    // NOP
    ctx->pc = 0x1f0e20u;
}
