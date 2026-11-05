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

// Function: sub_0029B800
// Address: 0x29b800 - 0x29bb00
void sub_0029B800_0x29b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B800_0x29b800");
#endif

    switch (ctx->pc) {
        case 0x29b830u: goto label_29b830;
        case 0x29b858u: goto label_29b858;
        case 0x29b870u: goto label_29b870;
        case 0x29b884u: goto label_29b884;
        case 0x29b89cu: goto label_29b89c;
        case 0x29b8a8u: goto label_29b8a8;
        case 0x29b8b4u: goto label_29b8b4;
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8ccu: goto label_29b8cc;
        case 0x29b8d4u: goto label_29b8d4;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8f0u: goto label_29b8f0;
        case 0x29b900u: goto label_29b900;
        case 0x29b90cu: goto label_29b90c;
        case 0x29b918u: goto label_29b918;
        case 0x29b924u: goto label_29b924;
        case 0x29b930u: goto label_29b930;
        case 0x29b938u: goto label_29b938;
        case 0x29b940u: goto label_29b940;
        case 0x29b954u: goto label_29b954;
        case 0x29b964u: goto label_29b964;
        case 0x29b970u: goto label_29b970;
        case 0x29b97cu: goto label_29b97c;
        case 0x29b988u: goto label_29b988;
        case 0x29b994u: goto label_29b994;
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9acu: goto label_29b9ac;
        case 0x29b9b4u: goto label_29b9b4;
        case 0x29b9c8u: goto label_29b9c8;
        case 0x29b9d8u: goto label_29b9d8;
        case 0x29b9e4u: goto label_29b9e4;
        case 0x29b9f0u: goto label_29b9f0;
        case 0x29b9fcu: goto label_29b9fc;
        case 0x29ba08u: goto label_29ba08;
        case 0x29ba10u: goto label_29ba10;
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba28u: goto label_29ba28;
        case 0x29ba38u: goto label_29ba38;
        case 0x29ba4cu: goto label_29ba4c;
        case 0x29ba58u: goto label_29ba58;
        case 0x29ba68u: goto label_29ba68;
        case 0x29ba78u: goto label_29ba78;
        case 0x29ba80u: goto label_29ba80;
        case 0x29ba88u: goto label_29ba88;
        case 0x29ba98u: goto label_29ba98;
        case 0x29baa4u: goto label_29baa4;
        case 0x29baccu: goto label_29bacc;
        case 0x29bad4u: goto label_29bad4;
        case 0x29badcu: goto label_29badc;
        default: break;
    }

    ctx->pc = 0x29b800u;

    // 0x29b800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b80c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b818: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x29b818u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29b81c: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x29b81cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x29b820: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x29b820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29b824: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x29b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x29b828: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x29b828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29b82c: 0x0  nop
    ctx->pc = 0x29b82cu;
    // NOP
label_29b830:
    // 0x29b830: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29b830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29b834: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29b838: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x29b838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x29b83c: 0x0  nop
    ctx->pc = 0x29b83cu;
    // NOP
    // 0x29b840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29B840u;
    {
        const bool branch_taken_0x29b840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B840u;
        // 0x29b844: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b840) {
            ctx->pc = 0x29B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b830;
        }
    }
    ctx->pc = 0x29B848u;
    // 0x29b848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b84c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29b84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29b850: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29B850u;
    SET_GPR_U32(ctx, 31, 0x29B858u);
    ctx->pc = 0x29B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B850u;
    // 0x29b854: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29B850u, 0x29B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B858u;
label_29b858:
    // 0x29b858: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x29b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29b85c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x29b85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x29b860: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x29b860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x29b864: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29b864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29b868: 0xc0aa0a0  jal         func_2A8280
    ctx->pc = 0x29B868u;
    SET_GPR_U32(ctx, 31, 0x29B870u);
    ctx->pc = 0x29B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B868u;
    // 0x29b86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8280u, 0x29B868u, 0x29B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B870u;
label_29b870:
    // 0x29b870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b874: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x29b874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x29b878: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29b878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29b87c: 0xc0aa0b2  jal         func_2A82C8
    ctx->pc = 0x29B87Cu;
    SET_GPR_U32(ctx, 31, 0x29B884u);
    ctx->pc = 0x29B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B87Cu;
    // 0x29b880: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C8u, 0x29B87Cu, 0x29B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B884u;
label_29b884:
    // 0x29b884: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x29b884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x29b888: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29b888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29b88c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29b88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29b890: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x29b890u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29b894: 0xc0aa0b6  jal         func_2A82D8
    ctx->pc = 0x29B894u;
    SET_GPR_U32(ctx, 31, 0x29B89Cu);
    ctx->pc = 0x29B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B894u;
    // 0x29b898: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82D8u, 0x29B894u, 0x29B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B89Cu;
label_29b89c:
    // 0x29b89c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b8a0: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x29B8A0u;
    SET_GPR_U32(ctx, 31, 0x29B8A8u);
    ctx->pc = 0x29B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8A0u;
    // 0x29b8a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x29B8A0u, 0x29B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8A8u;
label_29b8a8:
    // 0x29b8a8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b8ac: 0xc0aa0ce  jal         func_2A8338
    ctx->pc = 0x29B8ACu;
    SET_GPR_U32(ctx, 31, 0x29B8B4u);
    ctx->pc = 0x29B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8ACu;
    // 0x29b8b0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8338u, 0x29B8ACu, 0x29B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8B4u;
label_29b8b4:
    // 0x29b8b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b8b8: 0xc0aa0d0  jal         func_2A8340
    ctx->pc = 0x29B8B8u;
    SET_GPR_U32(ctx, 31, 0x29B8C0u);
    ctx->pc = 0x29B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8B8u;
    // 0x29b8bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8340u, 0x29B8B8u, 0x29B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8C0u;
label_29b8c0:
    // 0x29b8c0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29b8c4: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x29B8C4u;
    SET_GPR_U32(ctx, 31, 0x29B8CCu);
    ctx->pc = 0x29B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8C4u;
    // 0x29b8c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x29B8C4u, 0x29B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8CCu;
label_29b8cc:
    // 0x29b8cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29B8CCu;
    SET_GPR_U32(ctx, 31, 0x29B8D4u);
    ctx->pc = 0x29B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8CCu;
    // 0x29b8d0: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29B8CCu, 0x29B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8D4u;
label_29b8d4:
    // 0x29b8d4: 0xc0aa0a0  jal         func_2A8280
    ctx->pc = 0x29B8D4u;
    SET_GPR_U32(ctx, 31, 0x29B8DCu);
    ctx->pc = 0x29B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8D4u;
    // 0x29b8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8280u, 0x29B8D4u, 0x29B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8DCu;
label_29b8dc:
    // 0x29b8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8e0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x29b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x29b8e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29b8e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29b8e8: 0xc0aa0b2  jal         func_2A82C8
    ctx->pc = 0x29B8E8u;
    SET_GPR_U32(ctx, 31, 0x29B8F0u);
    ctx->pc = 0x29B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8E8u;
    // 0x29b8ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C8u, 0x29B8E8u, 0x29B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8F0u;
label_29b8f0:
    // 0x29b8f0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29b8f4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x29b8f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29b8f8: 0xc0aa0b6  jal         func_2A82D8
    ctx->pc = 0x29B8F8u;
    SET_GPR_U32(ctx, 31, 0x29B900u);
    ctx->pc = 0x29B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8F8u;
    // 0x29b8fc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82D8u, 0x29B8F8u, 0x29B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B900u;
label_29b900:
    // 0x29b900: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29b904: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x29B904u;
    SET_GPR_U32(ctx, 31, 0x29B90Cu);
    ctx->pc = 0x29B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B904u;
    // 0x29b908: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x29B904u, 0x29B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B90Cu;
label_29b90c:
    // 0x29b90c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29b910: 0xc0aa0ce  jal         func_2A8338
    ctx->pc = 0x29B910u;
    SET_GPR_U32(ctx, 31, 0x29B918u);
    ctx->pc = 0x29B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B910u;
    // 0x29b914: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8338u, 0x29B910u, 0x29B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B918u;
label_29b918:
    // 0x29b918: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29b91c: 0xc0aa0d0  jal         func_2A8340
    ctx->pc = 0x29B91Cu;
    SET_GPR_U32(ctx, 31, 0x29B924u);
    ctx->pc = 0x29B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B91Cu;
    // 0x29b920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8340u, 0x29B91Cu, 0x29B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B924u;
label_29b924:
    // 0x29b924: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29b928: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x29B928u;
    SET_GPR_U32(ctx, 31, 0x29B930u);
    ctx->pc = 0x29B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B928u;
    // 0x29b92c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x29B928u, 0x29B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B930u;
label_29b930:
    // 0x29b930: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29B930u;
    SET_GPR_U32(ctx, 31, 0x29B938u);
    ctx->pc = 0x29B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B930u;
    // 0x29b934: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29B930u, 0x29B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B938u;
label_29b938:
    // 0x29b938: 0xc0aa0a0  jal         func_2A8280
    ctx->pc = 0x29B938u;
    SET_GPR_U32(ctx, 31, 0x29B940u);
    ctx->pc = 0x29B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B938u;
    // 0x29b93c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8280u, 0x29B938u, 0x29B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B940u;
label_29b940:
    // 0x29b940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b944: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x29b944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x29b948: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29b948u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29b94c: 0xc0aa0b2  jal         func_2A82C8
    ctx->pc = 0x29B94Cu;
    SET_GPR_U32(ctx, 31, 0x29B954u);
    ctx->pc = 0x29B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B94Cu;
    // 0x29b950: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C8u, 0x29B94Cu, 0x29B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B954u;
label_29b954:
    // 0x29b954: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b958: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29b958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29b95c: 0xc0aa0b6  jal         func_2A82D8
    ctx->pc = 0x29B95Cu;
    SET_GPR_U32(ctx, 31, 0x29B964u);
    ctx->pc = 0x29B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B95Cu;
    // 0x29b960: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82D8u, 0x29B95Cu, 0x29B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B964u;
label_29b964:
    // 0x29b964: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b968: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x29B968u;
    SET_GPR_U32(ctx, 31, 0x29B970u);
    ctx->pc = 0x29B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B968u;
    // 0x29b96c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x29B968u, 0x29B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B970u;
label_29b970:
    // 0x29b970: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b974: 0xc0aa0ce  jal         func_2A8338
    ctx->pc = 0x29B974u;
    SET_GPR_U32(ctx, 31, 0x29B97Cu);
    ctx->pc = 0x29B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B974u;
    // 0x29b978: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8338u, 0x29B974u, 0x29B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B97Cu;
label_29b97c:
    // 0x29b97c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b980: 0xc0aa0d0  jal         func_2A8340
    ctx->pc = 0x29B980u;
    SET_GPR_U32(ctx, 31, 0x29B988u);
    ctx->pc = 0x29B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B980u;
    // 0x29b984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8340u, 0x29B980u, 0x29B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B988u;
label_29b988:
    // 0x29b988: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29b988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b98c: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x29B98Cu;
    SET_GPR_U32(ctx, 31, 0x29B994u);
    ctx->pc = 0x29B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B98Cu;
    // 0x29b990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x29B98Cu, 0x29B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B994u;
label_29b994:
    // 0x29b994: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b998: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b99c: 0xc0aa0d4  jal         func_2A8350
    ctx->pc = 0x29B99Cu;
    SET_GPR_U32(ctx, 31, 0x29B9A4u);
    ctx->pc = 0x29B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B99Cu;
    // 0x29b9a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8350u, 0x29B99Cu, 0x29B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9A4u;
label_29b9a4:
    // 0x29b9a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29B9A4u;
    SET_GPR_U32(ctx, 31, 0x29B9ACu);
    ctx->pc = 0x29B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9A4u;
    // 0x29b9a8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29B9A4u, 0x29B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9ACu;
label_29b9ac:
    // 0x29b9ac: 0xc0aa0a0  jal         func_2A8280
    ctx->pc = 0x29B9ACu;
    SET_GPR_U32(ctx, 31, 0x29B9B4u);
    ctx->pc = 0x29B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9ACu;
    // 0x29b9b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8280u, 0x29B9ACu, 0x29B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9B4u;
label_29b9b4:
    // 0x29b9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9b8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x29b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x29b9bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29b9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29b9c0: 0xc0aa0b2  jal         func_2A82C8
    ctx->pc = 0x29B9C0u;
    SET_GPR_U32(ctx, 31, 0x29B9C8u);
    ctx->pc = 0x29B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9C0u;
    // 0x29b9c4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82C8u, 0x29B9C0u, 0x29B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9C8u;
label_29b9c8:
    // 0x29b9c8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29b9cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x29b9ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29b9d0: 0xc0aa0b6  jal         func_2A82D8
    ctx->pc = 0x29B9D0u;
    SET_GPR_U32(ctx, 31, 0x29B9D8u);
    ctx->pc = 0x29B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9D0u;
    // 0x29b9d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82D8u, 0x29B9D0u, 0x29B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9D8u;
label_29b9d8:
    // 0x29b9d8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29b9dc: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x29B9DCu;
    SET_GPR_U32(ctx, 31, 0x29B9E4u);
    ctx->pc = 0x29B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9DCu;
    // 0x29b9e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x29B9DCu, 0x29B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9E4u;
label_29b9e4:
    // 0x29b9e4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29b9e8: 0xc0aa0ce  jal         func_2A8338
    ctx->pc = 0x29B9E8u;
    SET_GPR_U32(ctx, 31, 0x29B9F0u);
    ctx->pc = 0x29B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9E8u;
    // 0x29b9ec: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8338u, 0x29B9E8u, 0x29B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9F0u;
label_29b9f0:
    // 0x29b9f0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29b9f4: 0xc0aa0d0  jal         func_2A8340
    ctx->pc = 0x29B9F4u;
    SET_GPR_U32(ctx, 31, 0x29B9FCu);
    ctx->pc = 0x29B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9F4u;
    // 0x29b9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8340u, 0x29B9F4u, 0x29B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9FCu;
label_29b9fc:
    // 0x29b9fc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29ba00: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x29BA00u;
    SET_GPR_U32(ctx, 31, 0x29BA08u);
    ctx->pc = 0x29BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA00u;
    // 0x29ba04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x29BA00u, 0x29BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA08u;
label_29ba08:
    // 0x29ba08: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29BA08u;
    SET_GPR_U32(ctx, 31, 0x29BA10u);
    ctx->pc = 0x29BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA08u;
    // 0x29ba0c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29BA08u, 0x29BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA10u;
label_29ba10:
    // 0x29ba10: 0xc0a9e4c  jal         func_2A7930
    ctx->pc = 0x29BA10u;
    SET_GPR_U32(ctx, 31, 0x29BA18u);
    ctx->pc = 0x29BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA10u;
    // 0x29ba14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7930u, 0x29BA10u, 0x29BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA18u;
label_29ba18:
    // 0x29ba18: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x29ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29ba1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba20: 0xc0a9e5a  jal         func_2A7968
    ctx->pc = 0x29BA20u;
    SET_GPR_U32(ctx, 31, 0x29BA28u);
    ctx->pc = 0x29BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA20u;
    // 0x29ba24: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7968u, 0x29BA20u, 0x29BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA28u;
label_29ba28:
    // 0x29ba28: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29ba2c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x29ba2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29ba30: 0xc0a9e5e  jal         func_2A7978
    ctx->pc = 0x29BA30u;
    SET_GPR_U32(ctx, 31, 0x29BA38u);
    ctx->pc = 0x29BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA30u;
    // 0x29ba34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7978u, 0x29BA30u, 0x29BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA38u;
label_29ba38:
    // 0x29ba38: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x29ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x29ba3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29ba3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29ba40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29ba40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ba44: 0xc0a9e62  jal         func_2A7988
    ctx->pc = 0x29BA44u;
    SET_GPR_U32(ctx, 31, 0x29BA4Cu);
    ctx->pc = 0x29BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA44u;
    // 0x29ba48: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7988u, 0x29BA44u, 0x29BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA4Cu;
label_29ba4c:
    // 0x29ba4c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x29ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29ba50: 0xc0a9e66  jal         func_2A7998
    ctx->pc = 0x29BA50u;
    SET_GPR_U32(ctx, 31, 0x29BA58u);
    ctx->pc = 0x29BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA50u;
    // 0x29ba54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7998u, 0x29BA50u, 0x29BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA58u;
label_29ba58:
    // 0x29ba58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x29ba58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x29ba5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29ba5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ba60: 0xc0a9e64  jal         func_2A7990
    ctx->pc = 0x29BA60u;
    SET_GPR_U32(ctx, 31, 0x29BA68u);
    ctx->pc = 0x29BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA60u;
    // 0x29ba64: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7990u, 0x29BA60u, 0x29BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA68u;
label_29ba68:
    // 0x29ba68: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x29ba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x29ba6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29ba6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ba70: 0xc0a9e68  jal         func_2A79A0
    ctx->pc = 0x29BA70u;
    SET_GPR_U32(ctx, 31, 0x29BA78u);
    ctx->pc = 0x29BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA70u;
    // 0x29ba74: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A79A0u, 0x29BA70u, 0x29BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA78u;
label_29ba78:
    // 0x29ba78: 0xc0a6ec0  jal         func_29BB00
    ctx->pc = 0x29BA78u;
    SET_GPR_U32(ctx, 31, 0x29BA80u);
    ctx->pc = 0x29BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA78u;
    // 0x29ba7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BB00u, 0x29BA78u, 0x29BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA80u;
label_29ba80:
    // 0x29ba80: 0xc0a1b4e  jal         func_286D38
    ctx->pc = 0x29BA80u;
    SET_GPR_U32(ctx, 31, 0x29BA88u);
    ctx->pc = 0x29BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA80u;
    // 0x29ba84: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D38u, 0x29BA80u, 0x29BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA88u;
label_29ba88:
    // 0x29ba88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba90: 0xc0a7296  jal         func_29CA58
    ctx->pc = 0x29BA90u;
    SET_GPR_U32(ctx, 31, 0x29BA98u);
    ctx->pc = 0x29BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA90u;
    // 0x29ba94: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA58u, 0x29BA90u, 0x29BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA98u;
label_29ba98:
    // 0x29ba98: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x29ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x29ba9c: 0xc0abe3e  jal         func_2AF8F8
    ctx->pc = 0x29BA9Cu;
    SET_GPR_U32(ctx, 31, 0x29BAA4u);
    ctx->pc = 0x29BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA9Cu;
    // 0x29baa0: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x29BA9Cu, 0x29BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BAA4u;
label_29baa4:
    // 0x29baa4: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x29baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x29baa8: 0x26232470  addiu       $v1, $s1, 0x2470
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9328));
    // 0x29baac: 0x2444ac80  addiu       $a0, $v0, -0x5380
    ctx->pc = 0x29baacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x29bab0: 0x8c8258fc  lw          $v0, 0x58FC($a0)
    ctx->pc = 0x29bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52057Cu));
    // 0x29bab4: 0xe6352470  swc1        $f21, 0x2470($s1)
    ctx->pc = 0x29bab4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 9328), bits); }
    // 0x29bab8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x29bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x29babc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29BABCu;
    {
        const bool branch_taken_0x29babc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BABCu;
        // 0x29bac0: 0xe4750004  swc1        $f21, 0x4($v1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29babc) {
            ctx->pc = 0x29BACCu;
            goto label_29bacc;
        }
    }
    ctx->pc = 0x29BAC4u;
    // 0x29bac4: 0xc0ad962  jal         func_2B6588
    ctx->pc = 0x29BAC4u;
    SET_GPR_U32(ctx, 31, 0x29BACCu);
    ctx->pc = 0x29BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BAC4u;
    // 0x29bac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6588u, 0x29BAC4u, 0x29BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BACCu;
label_29bacc:
    // 0x29bacc: 0xc0a7440  jal         func_29D100
    ctx->pc = 0x29BACCu;
    SET_GPR_U32(ctx, 31, 0x29BAD4u);
    ctx->pc = 0x29BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BACCu;
    // 0x29bad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D100u, 0x29BACCu, 0x29BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BAD4u;
label_29bad4:
    // 0x29bad4: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x29BAD4u;
    SET_GPR_U32(ctx, 31, 0x29BADCu);
    ctx->pc = 0x29BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BAD4u;
    // 0x29bad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x29BAD4u, 0x29BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BADCu;
label_29badc:
    // 0x29badc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29badcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29bae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29bae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bae8: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x29bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29baec: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x29baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29baf0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x29baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29baf4: 0x3e00008  jr          $ra
    ctx->pc = 0x29BAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAF4u;
        // 0x29baf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BAFCu;
    // 0x29bafc: 0x0  nop
    ctx->pc = 0x29bafcu;
    // NOP
    ctx->pc = 0x29bb00u;
}
