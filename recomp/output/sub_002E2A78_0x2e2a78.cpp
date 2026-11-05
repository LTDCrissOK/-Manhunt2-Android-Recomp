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

// Function: sub_002E2A78
// Address: 0x2e2a78 - 0x2e2cc0
void sub_002E2A78_0x2e2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2A78_0x2e2a78");
#endif

    switch (ctx->pc) {
        case 0x2e2b04u: goto label_2e2b04;
        case 0x2e2b0cu: goto label_2e2b0c;
        case 0x2e2b14u: goto label_2e2b14;
        case 0x2e2b1cu: goto label_2e2b1c;
        case 0x2e2b34u: goto label_2e2b34;
        case 0x2e2b3cu: goto label_2e2b3c;
        case 0x2e2b58u: goto label_2e2b58;
        case 0x2e2c6cu: goto label_2e2c6c;
        case 0x2e2c74u: goto label_2e2c74;
        case 0x2e2c7cu: goto label_2e2c7c;
        case 0x2e2ca4u: goto label_2e2ca4;
        default: break;
    }

    ctx->pc = 0x2e2a78u;

    // 0x2e2a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2a7c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2e2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e2a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2a84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e2a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e2a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a8c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2e2a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e2a90: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x2e2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2e2a94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e2a98: 0x26060630  addiu       $a2, $s0, 0x630
    ctx->pc = 0x2e2a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x2e2a9c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2e2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2e2aa0: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2e2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2e2aa4: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x2e2aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2aa8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e2aac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2ab0: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x2e2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2e2ab4: 0x3c013fd3  lui         $at, 0x3FD3
    ctx->pc = 0x2e2ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16339 << 16));
    // 0x2e2ab8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2e2ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2e2abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2ac0: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2e2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2e2ac4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2e2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2e2ac8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2acc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e2accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e2ad0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e2ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2e2ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2ad8: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x2e2ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e2adc: 0xae060080  sw          $a2, 0x80($s0)
    ctx->pc = 0x2e2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 6));
    // 0x2e2ae0: 0xe60200b0  swc1        $f2, 0xB0($s0)
    ctx->pc = 0x2e2ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x2e2ae4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e2ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e2ae8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2e2aec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e2af0: 0xe60200c0  swc1        $f2, 0xC0($s0)
    ctx->pc = 0x2e2af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x2e2af4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2e2af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2e2af8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2e2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2e2afc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2AFCu;
    SET_GPR_U32(ctx, 31, 0x2E2B04u);
    ctx->pc = 0x2E2B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2AFCu;
    // 0x2e2b00: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2AFCu, 0x2E2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B04u;
label_2e2b04:
    // 0x2e2b04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2B04u;
    SET_GPR_U32(ctx, 31, 0x2E2B0Cu);
    ctx->pc = 0x2E2B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B04u;
    // 0x2e2b08: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2B04u, 0x2E2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B0Cu;
label_2e2b0c:
    // 0x2e2b0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E2B14u);
    ctx->pc = 0x2E2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B0Cu;
    // 0x2e2b10: 0x260402a0  addiu       $a0, $s0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2B0Cu, 0x2E2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B14u;
label_2e2b14:
    // 0x2e2b14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2B14u;
    SET_GPR_U32(ctx, 31, 0x2E2B1Cu);
    ctx->pc = 0x2E2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B14u;
    // 0x2e2b18: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2B14u, 0x2E2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B1Cu;
label_2e2b1c:
    // 0x2e2b1c: 0x260202fc  addiu       $v0, $s0, 0x2FC
    ctx->pc = 0x2e2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
    // 0x2e2b20: 0xae0002fc  sw          $zero, 0x2FC($s0)
    ctx->pc = 0x2e2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
    // 0x2e2b24: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x2e2b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2b28: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x2e2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x2e2b2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E2B34u);
    ctx->pc = 0x2E2B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B2Cu;
    // 0x2e2b30: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2B2Cu, 0x2E2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B34u;
label_2e2b34:
    // 0x2e2b34: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2B34u;
    SET_GPR_U32(ctx, 31, 0x2E2B3Cu);
    ctx->pc = 0x2E2B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B34u;
    // 0x2e2b38: 0x26040420  addiu       $a0, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2B34u, 0x2E2B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B3Cu;
label_2e2b3c:
    // 0x2e2b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2b44: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2b48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b50: 0x2602046c  addiu       $v0, $s0, 0x46C
    ctx->pc = 0x2e2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1132));
    // 0x2e2b54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2e2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e2b58:
    // 0x2e2b58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e2b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e2b5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2b60: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e2b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e2b64: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2e2b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e2b68: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2e2b6c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2e2b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2e2b70: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2e2b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2e2b74: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2e2b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2e2b78: 0x1464fff7  bne         $v1, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E2B78u;
    {
        const bool branch_taken_0x2e2b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B78u;
        // 0x2e2b7c: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b78) {
            ctx->pc = 0x2E2B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2b58;
        }
    }
    ctx->pc = 0x2E2B80u;
    // 0x2e2b80: 0x3c014079  lui         $at, 0x4079
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16505 << 16));
    // 0x2e2b84: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e2b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2b88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2b8c: 0x26020550  addiu       $v0, $s0, 0x550
    ctx->pc = 0x2e2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x2e2b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2b94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e2b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e2b98: 0x26030560  addiu       $v1, $s0, 0x560
    ctx->pc = 0x2e2b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x2e2b9c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x2e2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x2e2ba0: 0x26050570  addiu       $a1, $s0, 0x570
    ctx->pc = 0x2e2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
    // 0x2e2ba4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2e2ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e2ba8: 0x26060580  addiu       $a2, $s0, 0x580
    ctx->pc = 0x2e2ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2e2bac: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2e2bacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e2bb0: 0x26070590  addiu       $a3, $s0, 0x590
    ctx->pc = 0x2e2bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2e2bb4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e2bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2e2bb8: 0x260805a0  addiu       $t0, $s0, 0x5A0
    ctx->pc = 0x2e2bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x2e2bbc: 0x3c01c079  lui         $at, 0xC079
    ctx->pc = 0x2e2bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49273 << 16));
    // 0x2e2bc0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e2bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2bc8: 0x260205b0  addiu       $v0, $s0, 0x5B0
    ctx->pc = 0x2e2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x2e2bcc: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x2e2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x2e2bd0: 0x260905c0  addiu       $t1, $s0, 0x5C0
    ctx->pc = 0x2e2bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x2e2bd4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e2bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e2bd8: 0x260a05d0  addiu       $t2, $s0, 0x5D0
    ctx->pc = 0x2e2bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x2e2bdc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2e2bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2e2be0: 0x260405e0  addiu       $a0, $s0, 0x5E0
    ctx->pc = 0x2e2be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    // 0x2e2be4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2be8: 0xae000570  sw          $zero, 0x570($s0)
    ctx->pc = 0x2e2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
    // 0x2e2bec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2e2becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2e2bf0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e2bf4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2e2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2e2bf8: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x2e2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x2e2bfc: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2e2bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2e2c00: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x2e2c00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2e2c04: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2e2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2e2c08: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x2e2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x2e2c0c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2e2c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2e2c10: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2e2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2e2c14: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e2c18: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x2e2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x2e2c1c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x2e2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x2e2c20: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2e2c20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2e2c24: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2e2c24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x2e2c28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e2c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2e2c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2c30: 0xae0005b0  sw          $zero, 0x5B0($s0)
    ctx->pc = 0x2e2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 0));
    // 0x2e2c34: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e2c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e2c38: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2e2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2e2c3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e2c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e2c40: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x2e2c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x2e2c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2c48: 0xae0005c0  sw          $zero, 0x5C0($s0)
    ctx->pc = 0x2e2c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 0));
    // 0x2e2c4c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2e2c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2e2c50: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x2e2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x2e2c54: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2e2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2e2c58: 0xae0005d0  sw          $zero, 0x5D0($s0)
    ctx->pc = 0x2e2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1488), GPR_U32(ctx, 0));
    // 0x2e2c5c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2e2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2e2c60: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x2e2c60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x2e2c64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2C64u;
    SET_GPR_U32(ctx, 31, 0x2E2C6Cu);
    ctx->pc = 0x2E2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C64u;
    // 0x2e2c68: 0xad400008  sw          $zero, 0x8($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2C64u, 0x2E2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C6Cu;
label_2e2c6c:
    // 0x2e2c6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E2C74u);
    ctx->pc = 0x2E2C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C6Cu;
    // 0x2e2c70: 0x260405f0  addiu       $a0, $s0, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2C6Cu, 0x2E2C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C74u;
label_2e2c74:
    // 0x2e2c74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E2C74u;
    SET_GPR_U32(ctx, 31, 0x2E2C7Cu);
    ctx->pc = 0x2E2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C74u;
    // 0x2e2c78: 0x26040600  addiu       $a0, $s0, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E2C74u, 0x2E2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C7Cu;
label_2e2c7c:
    // 0x2e2c7c: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x2e2c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
    // 0x2e2c80: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x2e2c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x2e2c84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2c90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2c94: 0xe6140610  swc1        $f20, 0x610($s0)
    ctx->pc = 0x2e2c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x2e2c98: 0xe6010614  swc1        $f1, 0x614($s0)
    ctx->pc = 0x2e2c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1556), bits); }
    // 0x2e2c9c: 0xc0b8b30  jal         func_2E2CC0
    ctx->pc = 0x2E2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2E2CA4u);
    ctx->pc = 0x2E2CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C9Cu;
    // 0x2e2ca0: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2CC0u, 0x2E2C9Cu, 0x2E2CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CA4u;
label_2e2ca4:
    // 0x2e2ca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e2ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2cb0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CB4u;
        // 0x2e2cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2CBCu;
    // 0x2e2cbc: 0x0  nop
    ctx->pc = 0x2e2cbcu;
    // NOP
    ctx->pc = 0x2e2cc0u;
}
