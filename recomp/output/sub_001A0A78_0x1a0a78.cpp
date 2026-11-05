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

// Function: sub_001A0A78
// Address: 0x1a0a78 - 0x1a0cd0
void sub_001A0A78_0x1a0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0A78_0x1a0a78");
#endif

    switch (ctx->pc) {
        case 0x1a0aa8u: goto label_1a0aa8;
        case 0x1a0ab8u: goto label_1a0ab8;
        case 0x1a0ae0u: goto label_1a0ae0;
        case 0x1a0b68u: goto label_1a0b68;
        case 0x1a0c0cu: goto label_1a0c0c;
        default: break;
    }

    ctx->pc = 0x1a0a78u;

    // 0x1a0a78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0a7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a0a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a0a80: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a0a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a0a84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a0a8c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a0a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a0a90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a0a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a0a94: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a0a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1a0a98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a0a9c: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a0aa0: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1A0AA0u;
    SET_GPR_U32(ctx, 31, 0x1A0AA8u);
    ctx->pc = 0x1A0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AA0u;
    // 0x1a0aa4: 0x8c640ff0  lw          $a0, 0xFF0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1A0AA0u, 0x1A0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AA8u;
label_1a0aa8:
    // 0x1a0aa8: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1A0AA8u;
    {
        const bool branch_taken_0x1a0aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AA8u;
        // 0x1a0aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0aa8) {
            ctx->pc = 0x1A0CACu;
            goto label_1a0cac;
        }
    }
    ctx->pc = 0x1A0AB0u;
    // 0x1a0ab0: 0xc068334  jal         func_1A0CD0
    ctx->pc = 0x1A0AB0u;
    SET_GPR_U32(ctx, 31, 0x1A0AB8u);
    ctx->pc = 0x1A0AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AB0u;
    // 0x1a0ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CD0u, 0x1A0AB0u, 0x1A0AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AB8u;
label_1a0ab8:
    // 0x1a0ab8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a0ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a0abc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a0abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a0ac0: 0x8c62092c  lw          $v0, 0x92C($v1)
    ctx->pc = 0x1a0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F092Cu));
    // 0x1a0ac4: 0x14440057  bne         $v0, $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1A0AC4u;
    {
        const bool branch_taken_0x1a0ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AC4u;
        // 0x1a0ac8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ac4) {
            ctx->pc = 0x1A0C24u;
            goto label_1a0c24;
        }
    }
    ctx->pc = 0x1A0ACCu;
    // 0x1a0acc: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x1a0accu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x1a0ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ad4: 0x8e110928  lw          $s1, 0x928($s0)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3F0928u));
    // 0x1a0ad8: 0xc0683a0  jal         func_1A0E80
    ctx->pc = 0x1A0AD8u;
    SET_GPR_U32(ctx, 31, 0x1A0AE0u);
    ctx->pc = 0x1A0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AD8u;
    // 0x1a0adc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1A0AD8u, 0x1A0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AE0u;
label_1a0ae0:
    // 0x1a0ae0: 0x8e020928  lw          $v0, 0x928($s0)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
    // 0x1a0ae4: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1A0AE4u;
    {
        const bool branch_taken_0x1a0ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AE4u;
        // 0x1a0ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ae4) {
            ctx->pc = 0x1A0CACu;
            goto label_1a0cac;
        }
    }
    ctx->pc = 0x1A0AECu;
    // 0x1a0aec: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0AECu;
    {
        const bool branch_taken_0x1a0aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AECu;
        // 0x1a0af0: 0x8e620928  lw          $v0, 0x928($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0aec) {
            ctx->pc = 0x1A0B6Cu;
            goto label_1a0b6c;
        }
    }
    ctx->pc = 0x1A0AF4u;
    // 0x1a0af4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a0af8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a0afc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a0b00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0B00u;
    {
        const bool branch_taken_0x1a0b00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B00u;
        // 0x1a0b04: 0x24660934  addiu       $a2, $v1, 0x934 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b00) {
            ctx->pc = 0x1A0B1Cu;
            goto label_1a0b1c;
        }
    }
    ctx->pc = 0x1A0B08u;
    // 0x1a0b08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0b0c: 0x0  nop
    ctx->pc = 0x1a0b0cu;
    // NOP
    // 0x1a0b10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0b14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0B14u;
    {
        const bool branch_taken_0x1a0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b14) {
            ctx->pc = 0x1A0B38u;
            goto label_1a0b38;
        }
    }
    ctx->pc = 0x1A0B1Cu;
label_1a0b1c:
    // 0x1a0b1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a0b20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a0b24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0b28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0b2c: 0x0  nop
    ctx->pc = 0x1a0b2cu;
    // NOP
    // 0x1a0b30: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0b34: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a0b34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a0b38:
    // 0x1a0b38: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a0b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a0b3c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a0b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a0b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0b44: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1a0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1a0b48: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a0b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1a0b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0b50: 0x24a5f040  addiu       $a1, $a1, -0xFC0
    ctx->pc = 0x1a0b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963264));
    // 0x1a0b54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a0b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a0b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a0b60: 0xc0683ee  jal         func_1A0FB8
    ctx->pc = 0x1A0B60u;
    SET_GPR_U32(ctx, 31, 0x1A0B68u);
    ctx->pc = 0x1A0B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B60u;
    // 0x1a0b64: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FB8u, 0x1A0B60u, 0x1A0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B68u;
label_1a0b68:
    // 0x1a0b68: 0x8e620928  lw          $v0, 0x928($s3)
    ctx->pc = 0x1a0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2344)));
label_1a0b6c:
    // 0x1a0b6c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A0B6Cu;
    {
        const bool branch_taken_0x1a0b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B6Cu;
        // 0x1a0b70: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b6c) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0B74u;
    // 0x1a0b74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1a0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1a0b78: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a0b7c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1a0b80: 0x24650934  addiu       $a1, $v1, 0x934
    ctx->pc = 0x1a0b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2356));
    // 0x1a0b84: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0B84u;
    {
        const bool branch_taken_0x1a0b84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B84u;
        // 0x1a0b88: 0xac800924  sw          $zero, 0x924($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b84) {
            ctx->pc = 0x1A0BA0u;
            goto label_1a0ba0;
        }
    }
    ctx->pc = 0x1A0B8Cu;
    // 0x1a0b8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0b90: 0x0  nop
    ctx->pc = 0x1a0b90u;
    // NOP
    // 0x1a0b94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0B98u;
    {
        const bool branch_taken_0x1a0b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b98) {
            ctx->pc = 0x1A0BBCu;
            goto label_1a0bbc;
        }
    }
    ctx->pc = 0x1A0BA0u;
label_1a0ba0:
    // 0x1a0ba0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a0ba4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a0ba8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0bac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0bb0: 0x0  nop
    ctx->pc = 0x1a0bb0u;
    // NOP
    // 0x1a0bb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0bb8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a0bb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a0bbc:
    // 0x1a0bbc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a0bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a0bc0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a0bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a0bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0bc8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1a0bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0bcc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a0bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0bd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0bd4: 0x0  nop
    ctx->pc = 0x1a0bd4u;
    // NOP
    // 0x1a0bd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0BD8u;
    {
        const bool branch_taken_0x1a0bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD8u;
        // 0x1a0bdc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bd8) {
            ctx->pc = 0x1A0BE8u;
            goto label_1a0be8;
        }
    }
    ctx->pc = 0x1A0BE0u;
    // 0x1a0be0: 0xae80092c  sw          $zero, 0x92C($s4)
    ctx->pc = 0x1a0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2348), GPR_U32(ctx, 0));
    // 0x1a0be4: 0xac400930  sw          $zero, 0x930($v0)
    ctx->pc = 0x1a0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2352), GPR_U32(ctx, 0));
label_1a0be8:
    // 0x1a0be8: 0x8e620928  lw          $v0, 0x928($s3)
    ctx->pc = 0x1a0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2344)));
    // 0x1a0bec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A0BECu;
    {
        const bool branch_taken_0x1a0bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BECu;
        // 0x1a0bf0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bec) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0BF4u;
    // 0x1a0bf4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a0bf8: 0x8c500920  lw          $s0, 0x920($v0)
    ctx->pc = 0x1a0bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2336)));
    // 0x1a0bfc: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1a0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a0c00: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x1a0c04: 0xc0619f6  jal         func_1867D8
    ctx->pc = 0x1A0C04u;
    SET_GPR_U32(ctx, 31, 0x1A0C0Cu);
    ctx->pc = 0x1A0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C04u;
    // 0x1a0c08: 0x8c640ff4  lw          $a0, 0xFF4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1867D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867D8u, 0x1A0C04u, 0x1A0C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C0Cu;
label_1a0c0c:
    // 0x1a0c0c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1a0c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a0c10: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A0C10u;
    {
        const bool branch_taken_0x1a0c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C10u;
        // 0x1a0c14: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c10) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0C18u;
    // 0x1a0c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c1c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A0C1Cu;
    {
        const bool branch_taken_0x1a0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C1Cu;
        // 0x1a0c20: 0xac620930  sw          $v0, 0x930($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c1c) {
            ctx->pc = 0x1A0CACu;
            goto label_1a0cac;
        }
    }
    ctx->pc = 0x1A0C24u;
label_1a0c24:
    // 0x1a0c24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a0c28: 0x8c430930  lw          $v1, 0x930($v0)
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0930u));
    // 0x1a0c2c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A0C2Cu;
    {
        const bool branch_taken_0x1a0c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C2Cu;
        // 0x1a0c30: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c2c) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0C34u;
    // 0x1a0c34: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1a0c38: 0x2442f040  addiu       $v0, $v0, -0xFC0
    ctx->pc = 0x1a0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963264));
    // 0x1a0c3c: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x1a0c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x1a0c40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a0c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0c44: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a0c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0c48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a0c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0c4c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1a0c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0c50: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0c54: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a0c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0c58: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0c5c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1a0c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a0c60: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a0c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a0c64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a0c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a0c68: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a0c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a0c6c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1a0c6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a0c70: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a0c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0c74: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1a0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0c78: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1a0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a0c7c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1a0c7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1a0c80: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1a0c80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1a0c84: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1a0c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1a0c88: 0x46010044  c1          0x10044
    ctx->pc = 0x1a0c88u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a0c8c: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1a0c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x1a0c90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0c94: 0x0  nop
    ctx->pc = 0x1a0c94u;
    // NOP
    // 0x1a0c98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0c9c: 0x0  nop
    ctx->pc = 0x1a0c9cu;
    // NOP
    // 0x1a0ca0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0CA0u;
    {
        const bool branch_taken_0x1a0ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA0u;
        // 0x1a0ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ca0) {
            ctx->pc = 0x1A0CACu;
            goto label_1a0cac;
        }
    }
    ctx->pc = 0x1A0CA8u;
label_1a0ca8:
    // 0x1a0ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0cac:
    // 0x1a0cac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a0cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0cb0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a0cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cb4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0cb8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a0cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0cbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a0cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0cc0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a0cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CC4u;
        // 0x1a0cc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0CCCu;
    // 0x1a0ccc: 0x0  nop
    ctx->pc = 0x1a0cccu;
    // NOP
    ctx->pc = 0x1a0cd0u;
}
