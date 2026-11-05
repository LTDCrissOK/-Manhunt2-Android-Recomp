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

// Function: sub_001ECFE8
// Address: 0x1ecfe8 - 0x1ed210
void sub_001ECFE8_0x1ecfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECFE8_0x1ecfe8");
#endif

    switch (ctx->pc) {
        case 0x1ed140u: goto label_1ed140;
        case 0x1ed1bcu: goto label_1ed1bc;
        case 0x1ed1dcu: goto label_1ed1dc;
        default: break;
    }

    ctx->pc = 0x1ecfe8u;

    // 0x1ecfe8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ecfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ecfec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ecfecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecff0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ecff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ecff4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1ecff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1ecff8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ecff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecffc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ecffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1ed000: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1ed000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed004: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1ed004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1ed008: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ed008u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed00c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ed00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ed010: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1ed010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1ed014: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1ed014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1ed018: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1ed018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1ed01c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ed01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ed020: 0x91310008  lbu         $s1, 0x8($t1)
    ctx->pc = 0x1ed020u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ed024: 0x91300009  lbu         $s0, 0x9($t1)
    ctx->pc = 0x1ed024u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
    // 0x1ed028: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ed02c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED02Cu;
    {
        const bool branch_taken_0x1ed02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED02Cu;
        // 0x1ed030: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed02c) {
            ctx->pc = 0x1ED040u;
            goto label_1ed040;
        }
    }
    ctx->pc = 0x1ED034u;
    // 0x1ed034: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x1ed034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1ed038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED038u;
    {
        const bool branch_taken_0x1ed038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED038u;
        // 0x1ed03c: 0x504021  addu        $t0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed038) {
            ctx->pc = 0x1ED048u;
            goto label_1ed048;
        }
    }
    ctx->pc = 0x1ED040u;
label_1ed040:
    // 0x1ed040: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x1ed040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1ed044: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x1ed044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ed048:
    // 0x1ed048: 0x91240009  lbu         $a0, 0x9($t1)
    ctx->pc = 0x1ed048u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
    // 0x1ed04c: 0x25220020  addiu       $v0, $t1, 0x20
    ctx->pc = 0x1ed04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1ed050: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x1ed050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed054: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ed054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ed058: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x1ed058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed05c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ed05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed060: 0xc5220020  lwc1        $f2, 0x20($t1)
    ctx->pc = 0x1ed060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed064: 0x211382b  sltu        $a3, $s0, $s1
    ctx->pc = 0x1ed064u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ed068: 0x8d330000  lw          $s3, 0x0($t1)
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ed06c: 0x8d320004  lw          $s2, 0x4($t1)
    ctx->pc = 0x1ed06cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1ed070: 0x91250008  lbu         $a1, 0x8($t1)
    ctx->pc = 0x1ed070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ed074: 0xa3a40009  sb          $a0, 0x9($sp)
    ctx->pc = 0x1ed074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed078: 0xa3a50008  sb          $a1, 0x8($sp)
    ctx->pc = 0x1ed078u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ed07c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1ed07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ed080: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ed080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ed084: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1ed084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ed088: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1ed088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1ed08c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1ed08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x1ed090: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ed090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed094: 0xc5220030  lwc1        $f2, 0x30($t1)
    ctx->pc = 0x1ed094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed098: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x1ed098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1ed09c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1ed09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1ed0a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ed0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed0a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ed0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1ed0a8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1ed0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed0ac: 0xa2a60000  sb          $a2, 0x0($s5)
    ctx->pc = 0x1ed0acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ed0b0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed0b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ed0b4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1ed0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ed0b8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED0B8u;
    {
        const bool branch_taken_0x1ed0b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0B8u;
        // 0x1ed0bc: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0b8) {
            ctx->pc = 0x1ED0E0u;
            goto label_1ed0e0;
        }
    }
    ctx->pc = 0x1ED0C0u;
    // 0x1ed0c0: 0x91250008  lbu         $a1, 0x8($t1)
    ctx->pc = 0x1ed0c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ed0c4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1ed0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1ed0c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1ed0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ed0cc: 0x91240009  lbu         $a0, 0x9($t1)
    ctx->pc = 0x1ed0ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
    // 0x1ed0d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ed0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ed0d4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1ed0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1ed0d8: 0xa3a40008  sb          $a0, 0x8($sp)
    ctx->pc = 0x1ed0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed0dc: 0xa3a50009  sb          $a1, 0x9($sp)
    ctx->pc = 0x1ed0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 5));
label_1ed0e0:
    // 0x1ed0e0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1ed0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1ed0e4: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x1ed0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x1ed0e8: 0x1102000f  beq         $t0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED0E8u;
    {
        const bool branch_taken_0x1ed0e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0E8u;
        // 0x1ed0ec: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0e8) {
            ctx->pc = 0x1ED128u;
            goto label_1ed128;
        }
    }
    ctx->pc = 0x1ED0F0u;
    // 0x1ed0f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED0F0u;
    {
        const bool branch_taken_0x1ed0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0F0u;
        // 0x1ed0f4: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0f0) {
            ctx->pc = 0x1ED110u;
            goto label_1ed110;
        }
    }
    ctx->pc = 0x1ED0F8u;
    // 0x1ed0f8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1ed0fc: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x1ed0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x1ed100: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED100u;
    {
        const bool branch_taken_0x1ed100 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED100u;
        // 0x1ed104: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed100) {
            ctx->pc = 0x1ED128u;
            goto label_1ed128;
        }
    }
    ctx->pc = 0x1ED108u;
    // 0x1ed108: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED108u;
    {
        const bool branch_taken_0x1ed108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed108) {
            ctx->pc = 0x1ED14Cu;
            goto label_1ed14c;
        }
    }
    ctx->pc = 0x1ED110u;
label_1ed110:
    // 0x1ed110: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x1ed110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x1ed114: 0x11020004  beq         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED114u;
    {
        const bool branch_taken_0x1ed114 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ED118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED114u;
        // 0x1ed118: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed114) {
            ctx->pc = 0x1ED128u;
            goto label_1ed128;
        }
    }
    ctx->pc = 0x1ED11Cu;
    // 0x1ed11c: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x1ed11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x1ed120: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED120u;
    {
        const bool branch_taken_0x1ed120 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED120u;
        // 0x1ed124: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed120) {
            ctx->pc = 0x1ED14Cu;
            goto label_1ed14c;
        }
    }
    ctx->pc = 0x1ED128u;
label_1ed128:
    // 0x1ed128: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ed128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed12c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed130: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ed130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed134: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ed134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed138: 0xc07b742  jal         func_1EDD08
    ctx->pc = 0x1ED138u;
    SET_GPR_U32(ctx, 31, 0x1ED140u);
    ctx->pc = 0x1ED13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED138u;
    // 0x1ed13c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDD08u, 0x1ED138u, 0x1ED140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED140u;
label_1ed140:
    // 0x1ed140: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1ED140u;
    {
        const bool branch_taken_0x1ed140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED140u;
        // 0x1ed144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed140) {
            ctx->pc = 0x1ED1E0u;
            goto label_1ed1e0;
        }
    }
    ctx->pc = 0x1ED148u;
    // 0x1ed148: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ed148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ed14c:
    // 0x1ed14c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED14Cu;
    {
        const bool branch_taken_0x1ed14c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed14c) {
            ctx->pc = 0x1ED170u;
            goto label_1ed170;
        }
    }
    ctx->pc = 0x1ED154u;
    // 0x1ed154: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x1ed158: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ed158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ed15c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ed15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ed160: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED160u;
    {
        const bool branch_taken_0x1ed160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED160u;
        // 0x1ed164: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed160) {
            ctx->pc = 0x1ED1A8u;
            goto label_1ed1a8;
        }
    }
    ctx->pc = 0x1ED168u;
    // 0x1ed168: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED168u;
    {
        const bool branch_taken_0x1ed168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED168u;
        // 0x1ed16c: 0x8e620234  lw          $v0, 0x234($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed168) {
            ctx->pc = 0x1ED190u;
            goto label_1ed190;
        }
    }
    ctx->pc = 0x1ED170u;
label_1ed170:
    // 0x1ed170: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED170u;
    {
        const bool branch_taken_0x1ed170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED170u;
        // 0x1ed174: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed170) {
            ctx->pc = 0x1ED1A8u;
            goto label_1ed1a8;
        }
    }
    ctx->pc = 0x1ED178u;
    // 0x1ed178: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1ed17c: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ed17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ed180: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ed180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ed184: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED184u;
    {
        const bool branch_taken_0x1ed184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED184u;
        // 0x1ed188: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed184) {
            ctx->pc = 0x1ED1ACu;
            goto label_1ed1ac;
        }
    }
    ctx->pc = 0x1ED18Cu;
    // 0x1ed18c: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_1ed190:
    // 0x1ed190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED190u;
    {
        const bool branch_taken_0x1ed190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED190u;
        // 0x1ed194: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed190) {
            ctx->pc = 0x1ED1A8u;
            goto label_1ed1a8;
        }
    }
    ctx->pc = 0x1ED198u;
    // 0x1ed198: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1ed198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ed19c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ED1A0u;
    {
        const bool branch_taken_0x1ed1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1A0u;
        // 0x1ed1a4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1a0) {
            ctx->pc = 0x1ED1E0u;
            goto label_1ed1e0;
        }
    }
    ctx->pc = 0x1ED1A8u;
label_1ed1a8:
    // 0x1ed1a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ed1ac:
    // 0x1ed1ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ed1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ed1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1b4: 0xc07b986  jal         func_1EE618
    ctx->pc = 0x1ED1B4u;
    SET_GPR_U32(ctx, 31, 0x1ED1BCu);
    ctx->pc = 0x1ED1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED1B4u;
    // 0x1ed1b8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE618u, 0x1ED1B4u, 0x1ED1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1BCu;
label_1ed1bc:
    // 0x1ed1bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED1BCu;
    {
        const bool branch_taken_0x1ed1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1BCu;
        // 0x1ed1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1bc) {
            ctx->pc = 0x1ED1E0u;
            goto label_1ed1e0;
        }
    }
    ctx->pc = 0x1ED1C4u;
    // 0x1ed1c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ed1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1cc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ed1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1d0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ed1d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1d4: 0xc07b816  jal         func_1EE058
    ctx->pc = 0x1ED1D4u;
    SET_GPR_U32(ctx, 31, 0x1ED1DCu);
    ctx->pc = 0x1ED1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED1D4u;
    // 0x1ed1d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE058u, 0x1ED1D4u, 0x1ED1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED1DCu;
label_1ed1dc:
    // 0x1ed1dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ed1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ed1e0:
    // 0x1ed1e0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ed1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed1e4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1ed1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1e8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1ed1e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed1ec: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1ed1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ed1f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ed1f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed1f4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1ed1f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ed1f8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ed1f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ed1fc: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1ed1fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ed200: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ed200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ed204: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED204u;
        // 0x1ed208: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED20Cu;
    // 0x1ed20c: 0x0  nop
    ctx->pc = 0x1ed20cu;
    // NOP
    ctx->pc = 0x1ed210u;
}
