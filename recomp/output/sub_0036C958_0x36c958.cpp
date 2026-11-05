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

// Function: sub_0036C958
// Address: 0x36c958 - 0x36cad8
void sub_0036C958_0x36c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C958_0x36c958");
#endif

    switch (ctx->pc) {
        case 0x36c990u: goto label_36c990;
        case 0x36c9bcu: goto label_36c9bc;
        case 0x36c9d4u: goto label_36c9d4;
        case 0x36c9ecu: goto label_36c9ec;
        case 0x36ca04u: goto label_36ca04;
        case 0x36ca28u: goto label_36ca28;
        case 0x36ca7cu: goto label_36ca7c;
        case 0x36ca84u: goto label_36ca84;
        case 0x36caa0u: goto label_36caa0;
        case 0x36caacu: goto label_36caac;
        case 0x36cac0u: goto label_36cac0;
        default: break;
    }

    ctx->pc = 0x36c958u;

    // 0x36c958: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36c958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36c95c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36c960: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x36c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x36c964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c96c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x36c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x36c970: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x36c970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x36c974: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x36c974u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x36c978: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x36c978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36c97c: 0xa043cbb9  sb          $v1, -0x3447($v0)
    ctx->pc = 0x36c97cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCBB9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FCBB9u, _value); } while (0);
    // 0x36c980: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36C980u;
    {
        const bool branch_taken_0x36c980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C980u;
        // 0x36c984: 0xa090cbba  sb          $s0, -0x3446($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294953914), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c980) {
            ctx->pc = 0x36C998u;
            goto label_36c998;
        }
    }
    ctx->pc = 0x36C988u;
    // 0x36c988: 0xc082ebc  jal         func_20BAF0
    ctx->pc = 0x36C988u;
    SET_GPR_U32(ctx, 31, 0x36C990u);
    ctx->pc = 0x20BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAF0u, 0x36C988u, 0x36C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C990u;
label_36c990:
    // 0x36c990: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36c990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x36c994: 0xac62cbbc  sw          $v0, -0x3444($v1)
    ctx->pc = 0x36c994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCBBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCBBCu, _value); } while (0);
label_36c998:
    // 0x36c998: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x36c998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36c99c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c9a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36c9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36c9a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x36c9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36c9a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36c9a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9ac: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36c9acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36c9b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36c9b4: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x36C9B4u;
    SET_GPR_U32(ctx, 31, 0x36C9BCu);
    ctx->pc = 0x36C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9B4u;
    // 0x36c9b8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x36C9B4u, 0x36C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9BCu;
label_36c9bc:
    // 0x36c9bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c9c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36c9c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x36c9c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x36c9c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36c9c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9cc: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x36C9CCu;
    SET_GPR_U32(ctx, 31, 0x36C9D4u);
    ctx->pc = 0x36C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9CCu;
    // 0x36c9d0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x36C9CCu, 0x36C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9D4u;
label_36c9d4:
    // 0x36c9d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36c9d8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x36c9d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x36c9dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36c9dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9e0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36c9e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9e4: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x36C9E4u;
    SET_GPR_U32(ctx, 31, 0x36C9ECu);
    ctx->pc = 0x36C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9E4u;
    // 0x36c9e8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x36C9E4u, 0x36C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9ECu;
label_36c9ec:
    // 0x36c9ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36c9f0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36c9f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9f4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x36c9f4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36c9f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36c9fc: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x36C9FCu;
    SET_GPR_U32(ctx, 31, 0x36CA04u);
    ctx->pc = 0x36CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9FCu;
    // 0x36ca00: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x36C9FCu, 0x36CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA04u;
label_36ca04:
    // 0x36ca04: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x36ca04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x36ca08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36ca08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ca0c: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x36ca0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x36ca10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36ca10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36ca14: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x36ca14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36ca18: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x36ca18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36ca1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x36ca1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36ca20: 0xc0dcc44  jal         func_373110
    ctx->pc = 0x36CA20u;
    SET_GPR_U32(ctx, 31, 0x36CA28u);
    ctx->pc = 0x36CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA20u;
    // 0x36ca24: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373110u, 0x36CA20u, 0x36CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA28u;
label_36ca28:
    // 0x36ca28: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x36ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x36ca2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x36ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x36ca30: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x36ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x36ca34: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x36ca34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x36ca38: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x36ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x36ca3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36ca40: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x36ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x36ca44: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x36ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36ca48: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x36ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x36ca4c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x36ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36ca50: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x36ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x36ca54: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x36ca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36ca58: 0x244208ff  addiu       $v0, $v0, 0x8FF
    ctx->pc = 0x36ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2303));
    // 0x36ca5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36ca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x36ca60: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x36ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x36ca64: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x36ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x36ca68: 0x24425d4f  addiu       $v0, $v0, 0x5D4F
    ctx->pc = 0x36ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23887));
    // 0x36ca6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36ca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x36ca70: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x36ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x36ca74: 0xc0dce36  jal         func_3738D8
    ctx->pc = 0x36CA74u;
    SET_GPR_U32(ctx, 31, 0x36CA7Cu);
    ctx->pc = 0x36CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA74u;
    // 0x36ca78: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738D8u, 0x36CA74u, 0x36CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA7Cu;
label_36ca7c:
    // 0x36ca7c: 0xc0dd73a  jal         func_375CE8
    ctx->pc = 0x36CA7Cu;
    SET_GPR_U32(ctx, 31, 0x36CA84u);
    ctx->pc = 0x375CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375CE8u, 0x36CA7Cu, 0x36CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA84u;
label_36ca84:
    // 0x36ca84: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x36ca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
    // 0x36ca88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36ca88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ca8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36ca90: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x36ca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
    // 0x36ca94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x36ca94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36ca98: 0xc0dd076  jal         func_3741D8
    ctx->pc = 0x36CA98u;
    SET_GPR_U32(ctx, 31, 0x36CAA0u);
    ctx->pc = 0x36CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA98u;
    // 0x36ca9c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3741D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741D8u, 0x36CA98u, 0x36CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAA0u;
label_36caa0:
    // 0x36caa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36caa4: 0xc0dcc18  jal         func_373060
    ctx->pc = 0x36CAA4u;
    SET_GPR_U32(ctx, 31, 0x36CAACu);
    ctx->pc = 0x36CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAA4u;
    // 0x36caa8: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373060u, 0x36CAA4u, 0x36CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAACu;
label_36caac:
    // 0x36caac: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36caacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36cab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36cab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cab4: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x36cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x36cab8: 0xc0dc1ea  jal         func_3707A8
    ctx->pc = 0x36CAB8u;
    SET_GPR_U32(ctx, 31, 0x36CAC0u);
    ctx->pc = 0x36CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CAB8u;
    // 0x36cabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3707A8u, 0x36CAB8u, 0x36CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAC0u;
label_36cac0:
    // 0x36cac0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x36cac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36cac4: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x36cac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36cac8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x36cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36cacc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x36caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36cad0: 0x3e00008  jr          $ra
    ctx->pc = 0x36CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CAD0u;
        // 0x36cad4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CAD8u;
}
