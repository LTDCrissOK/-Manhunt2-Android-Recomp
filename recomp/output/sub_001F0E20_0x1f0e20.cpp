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

// Function: sub_001F0E20
// Address: 0x1f0e20 - 0x1f0fb0
void sub_001F0E20_0x1f0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0E20_0x1f0e20");
#endif

    switch (ctx->pc) {
        case 0x1f0e6cu: goto label_1f0e6c;
        case 0x1f0ec0u: goto label_1f0ec0;
        case 0x1f0f9cu: goto label_1f0f9c;
        default: break;
    }

    ctx->pc = 0x1f0e20u;

    // 0x1f0e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f0e24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0e28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f0e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f0e2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e34: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f0e38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f0e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f0e3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f0e40: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f0e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f0e44: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f0e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f0e48: 0x8c451344  lw          $a1, 0x1344($v0)
    ctx->pc = 0x1f0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
    // 0x1f0e4c: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f0e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f0e50: 0xa20300fc  sb          $v1, 0xFC($s0)
    ctx->pc = 0x1f0e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0e54: 0x24c6ecd8  addiu       $a2, $a2, -0x1328
    ctx->pc = 0x1f0e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962392));
    // 0x1f0e58: 0xae0500f0  sw          $a1, 0xF0($s0)
    ctx->pc = 0x1f0e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 5));
    // 0x1f0e5c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f0e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0e64: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F0E64u;
    SET_GPR_U32(ctx, 31, 0x1F0E6Cu);
    ctx->pc = 0x1F0E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E64u;
    // 0x1f0e68: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F0E64u, 0x1F0E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E6Cu;
label_1f0e6c:
    // 0x1f0e6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0e70: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f0e74: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x1f0e74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f0e78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1f0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1f0e7c: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1f0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1f0e80: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x1f0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x1f0e84: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1f0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1f0e88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f0e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e90: 0x8c83bd6c  lw          $v1, -0x4294($a0)
    ctx->pc = 0x1f0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x1f0e94: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0E94u;
    {
        const bool branch_taken_0x1f0e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E94u;
        // 0x1f0e98: 0x24465870  addiu       $a2, $v0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e94) {
            ctx->pc = 0x1F0EACu;
            goto label_1f0eac;
        }
    }
    ctx->pc = 0x1F0E9Cu;
    // 0x1f0e9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0E9Cu;
    {
        const bool branch_taken_0x1f0e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E9Cu;
        // 0x1f0ea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e9c) {
            ctx->pc = 0x1F0EACu;
            goto label_1f0eac;
        }
    }
    ctx->pc = 0x1F0EA4u;
    // 0x1f0ea4: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0EA4u;
    {
        const bool branch_taken_0x1f0ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EA4u;
        // 0x1f0ea8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ea4) {
            ctx->pc = 0x1F0EFCu;
            goto label_1f0efc;
        }
    }
    ctx->pc = 0x1F0EACu;
label_1f0eac:
    // 0x1f0eac: 0x90c20620  lbu         $v0, 0x620($a2)
    ctx->pc = 0x1f0eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1568)));
    // 0x1f0eb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0EB0u;
    {
        const bool branch_taken_0x1f0eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EB0u;
        // 0x1f0eb4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0eb0) {
            ctx->pc = 0x1F0EF8u;
            goto label_1f0ef8;
        }
    }
    ctx->pc = 0x1F0EB8u;
    // 0x1f0eb8: 0xc07f53a  jal         func_1FD4E8
    ctx->pc = 0x1F0EB8u;
    SET_GPR_U32(ctx, 31, 0x1F0EC0u);
    ctx->pc = 0x1F0EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EB8u;
    // 0x1f0ebc: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4E8u, 0x1F0EB8u, 0x1F0EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EC0u;
label_1f0ec0:
    // 0x1f0ec0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F0EC0u;
    {
        const bool branch_taken_0x1f0ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EC0u;
        // 0x1f0ec4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ec0) {
            ctx->pc = 0x1F0EFCu;
            goto label_1f0efc;
        }
    }
    ctx->pc = 0x1F0EC8u;
    // 0x1f0ec8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1f0ecc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1f0eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0ed0: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1f0ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0ed4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f0ed8: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1f0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1f0edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ee0: 0xac64139c  sw          $a0, 0x139C($v1)
    ctx->pc = 0x1f0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5020), GPR_U32(ctx, 4));
    // 0x1f0ee4: 0x8e22bd6c  lw          $v0, -0x4294($s1)
    ctx->pc = 0x1f0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950252)));
    // 0x1f0ee8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0EE8u;
    {
        const bool branch_taken_0x1f0ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ee8) {
            ctx->pc = 0x1F0EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0EE8u;
            // 0x1f0eec: 0xac6413a0  sw          $a0, 0x13A0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 5024), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0F0Cu;
            goto label_1f0f0c;
        }
    }
    ctx->pc = 0x1F0EF0u;
    // 0x1f0ef0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0EF0u;
    {
        const bool branch_taken_0x1f0ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EF0u;
        // 0x1f0ef4: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ef0) {
            ctx->pc = 0x1F0F10u;
            goto label_1f0f10;
        }
    }
    ctx->pc = 0x1F0EF8u;
label_1f0ef8:
    // 0x1f0ef8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f0efc:
    // 0x1f0efc: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1f0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1f0f00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f0f04: 0xa200010c  sb          $zero, 0x10C($s0)
    ctx->pc = 0x1f0f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0f08: 0xac40139c  sw          $zero, 0x139C($v0)
    ctx->pc = 0x1f0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5020), GPR_U32(ctx, 0));
label_1f0f0c:
    // 0x1f0f0c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_1f0f10:
    // 0x1f0f10: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0f14: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1f0f18: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f0f1c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1f0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1f0f20: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1f0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1f0f24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f0f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0f28: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0f2c: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f0f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f0f30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0f34: 0x9206010c  lbu         $a2, 0x10C($s0)
    ctx->pc = 0x1f0f34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f0f38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f40: 0x0  nop
    ctx->pc = 0x1f0f40u;
    // NOP
    // 0x1f0f44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0f48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f0f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f0f4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0f50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0f54: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1f0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1f0f58: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1f0f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1f0f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f60: 0xa2000154  sb          $zero, 0x154($s0)
    ctx->pc = 0x1f0f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 340), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0f64: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f0f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f0f68: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f0f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0f6c: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f0f70: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1f0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1f0f74: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f0f78: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x1f0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x1f0f7c: 0xa2000169  sb          $zero, 0x169($s0)
    ctx->pc = 0x1f0f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 361), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0f80: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1f0f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f0f84: 0xae050100  sw          $a1, 0x100($s0)
    ctx->pc = 0x1f0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 5));
    // 0x1f0f88: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x1f0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x1f0f8c: 0xa206011c  sb          $a2, 0x11C($s0)
    ctx->pc = 0x1f0f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f0f90: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1f0f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f0f94: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F0F94u;
    SET_GPR_U32(ctx, 31, 0x1F0F9Cu);
    ctx->pc = 0x1F0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F94u;
    // 0x1f0f98: 0xa2020170  sb          $v0, 0x170($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F0F94u, 0x1F0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F9Cu;
label_1f0f9c:
    // 0x1f0f9c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0fa0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f0fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f0fa4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f0fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FA8u;
        // 0x1f0fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FB0u;
}
