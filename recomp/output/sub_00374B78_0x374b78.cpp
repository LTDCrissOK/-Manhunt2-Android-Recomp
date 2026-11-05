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

// Function: sub_00374B78
// Address: 0x374b78 - 0x375290
void sub_00374B78_0x374b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374B78_0x374b78");
#endif

    switch (ctx->pc) {
        case 0x374d60u: goto label_374d60;
        case 0x374df0u: goto label_374df0;
        case 0x374e78u: goto label_374e78;
        case 0x374ea0u: goto label_374ea0;
        case 0x374fa4u: goto label_374fa4;
        case 0x374ff8u: goto label_374ff8;
        case 0x375260u: goto label_375260;
        default: break;
    }

    ctx->pc = 0x374b78u;

    // 0x374b78: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x374b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x374b7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x374b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374b80: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x374b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x374b84: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x374b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
    // 0x374b88: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x374b88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x374b8c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x374b8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b90: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x374b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x374b94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x374b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b98: 0x1e1e3c  dsll32      $v1, $fp, 24
    ctx->pc = 0x374b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 24));
    // 0x374b9c: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x374b9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x374ba0: 0x3c05807f  lui         $a1, 0x807F
    ctx->pc = 0x374ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32895 << 16));
    // 0x374ba4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x374ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x374ba8: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x374ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x374bac: 0x34a501ff  ori         $a1, $a1, 0x1FF
    ctx->pc = 0x374bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)511);
    // 0x374bb0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x374bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x374bb4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x374bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x374bb8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x374bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374bc0: 0x1856024  and         $t4, $t4, $a1
    ctx->pc = 0x374bc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 5));
    // 0x374bc4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x374bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x374bc8: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x374bc8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x374bcc: 0x3c05807f  lui         $a1, 0x807F
    ctx->pc = 0x374bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32895 << 16));
    // 0x374bd0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x374bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x374bd4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x374bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x374bd8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x374bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x374bdc: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x374bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
    // 0x374be0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x374be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x374be4: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x374be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x374be8: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x374be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x374bec: 0x1856024  and         $t4, $t4, $a1
    ctx->pc = 0x374becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 5));
    // 0x374bf0: 0xafab0060  sw          $t3, 0x60($sp)
    ctx->pc = 0x374bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 11));
    // 0x374bf4: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x374bf4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x374bf8: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x374bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x374bfc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x374bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x374c00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x374c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x374c04: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x374c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x374c08: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x374c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x374c0c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x374c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x374c10: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x374c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x374c14: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x374c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x374c18: 0x1856024  and         $t4, $t4, $a1
    ctx->pc = 0x374c18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 5));
    // 0x374c1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x374c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x374c20: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x374c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x374c24: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x374c24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x374c28: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x374c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x374c2c: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x374c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x374c30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x374c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374c34: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x374c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x374c38: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x374c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x374c3c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x374c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x374c40: 0x2511026  xor         $v0, $s2, $s1
    ctx->pc = 0x374c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
    // 0x374c44: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x374c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x374c48: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x374c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x374c4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x374c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x374c50: 0x1866024  and         $t4, $t4, $a2
    ctx->pc = 0x374c50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 6));
    // 0x374c54: 0xafa90058  sw          $t1, 0x58($sp)
    ctx->pc = 0x374c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x374c58: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x374c58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x374c5c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x374c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x374c60: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x374c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x374c64: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x374c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c68: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x374c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x374c6c: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x374c6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x374c70: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x374c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x374c74: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x374c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x374c78: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x374c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x374c7c: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x374C7Cu;
    {
        const bool branch_taken_0x374c7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x374C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374C7Cu;
        // 0x374c80: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374c7c) {
            ctx->pc = 0x374CA4u;
            goto label_374ca4;
        }
    }
    ctx->pc = 0x374C84u;
    // 0x374c84: 0xc103c  dsll32      $v0, $t4, 0
    ctx->pc = 0x374c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
    // 0x374c88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x374c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x374c8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x374c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x374c90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x374c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x374c94: 0x1866024  and         $t4, $t4, $a2
    ctx->pc = 0x374c94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 6));
    // 0x374c98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x374c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x374c9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x374c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x374ca0: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x374ca0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_374ca4:
    // 0x374ca4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x374ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374ca8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374cac: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x374cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x374cb0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x374cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x374cb4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x374cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x374cb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x374cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374cbc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x374cbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x374cc0: 0x11830168  beq         $t4, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x374CC0u;
    {
        const bool branch_taken_0x374cc0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        ctx->pc = 0x374CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CC0u;
        // 0x374cc4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cc0) {
            ctx->pc = 0x375264u;
            goto label_375264;
        }
    }
    ctx->pc = 0x374CC8u;
    // 0x374cc8: 0xfc8c0000  sd          $t4, 0x0($a0)
    ctx->pc = 0x374cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
    // 0x374ccc: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x374cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374cd0: 0x10c00164  beqz        $a2, . + 4 + (0x164 << 2)
    ctx->pc = 0x374CD0u;
    {
        const bool branch_taken_0x374cd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CD0u;
        // 0x374cd4: 0x2fc2002d  sltiu       $v0, $fp, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cd0) {
            ctx->pc = 0x375264u;
            goto label_375264;
        }
    }
    ctx->pc = 0x374CD8u;
    // 0x374cd8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x374CD8u;
    {
        const bool branch_taken_0x374cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CD8u;
        // 0x374cdc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cd8) {
            ctx->pc = 0x374D30u;
            goto label_374d30;
        }
    }
    ctx->pc = 0x374CE0u;
    // 0x374ce0: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x374ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x374ce4: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x374ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x374ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x374ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374cec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x374cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374cf0: 0x800008  jr          $a0
    ctx->pc = 0x374CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x374CF8u: goto label_374cf8;
            case 0x374D04u: goto label_374d04;
            case 0x374D10u: goto label_374d10;
            case 0x374D1Cu: goto label_374d1c;
            case 0x374D28u: goto label_374d28;
            case 0x374D30u: goto label_374d30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374CF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x374CF8u;
label_374cf8:
    // 0x374cf8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x374cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x374cfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x374CFCu;
    {
        const bool branch_taken_0x374cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CFCu;
        // 0x374d00: 0xafa70078  sw          $a3, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374cfc) {
            ctx->pc = 0x374D30u;
            goto label_374d30;
        }
    }
    ctx->pc = 0x374D04u;
label_374d04:
    // 0x374d04: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x374d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x374d08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x374D08u;
    {
        const bool branch_taken_0x374d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D08u;
        // 0x374d0c: 0xafa80078  sw          $t0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d08) {
            ctx->pc = 0x374D30u;
            goto label_374d30;
        }
    }
    ctx->pc = 0x374D10u;
label_374d10:
    // 0x374d10: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x374d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x374d14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x374D14u;
    {
        const bool branch_taken_0x374d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D14u;
        // 0x374d18: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d14) {
            ctx->pc = 0x374D30u;
            goto label_374d30;
        }
    }
    ctx->pc = 0x374D1Cu;
label_374d1c:
    // 0x374d1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x374d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374d20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x374D20u;
    {
        const bool branch_taken_0x374d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D20u;
        // 0x374d24: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d20) {
            ctx->pc = 0x374D30u;
            goto label_374d30;
        }
    }
    ctx->pc = 0x374D28u;
label_374d28:
    // 0x374d28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x374d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374d2c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x374d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_374d30:
    // 0x374d30: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x374d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x374d34: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x374d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x374d38: 0x8c43f910  lw          $v1, -0x6F0($v0)
    ctx->pc = 0x374d38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF910u));
    // 0x374d3c: 0x581c0  sll         $s0, $a1, 7
    ctx->pc = 0x374d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x374d40: 0x2445f910  addiu       $a1, $v0, -0x6F0
    ctx->pc = 0x374d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    // 0x374d44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x374d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x374d48: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x374d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x374d4c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x374d4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x374d50: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374D50u;
    {
        const bool branch_taken_0x374d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x374D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374D50u;
        // 0x374d54: 0x3c06005c  lui         $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374d50) {
            ctx->pc = 0x374D64u;
            goto label_374d64;
        }
    }
    ctx->pc = 0x374D58u;
    // 0x374d58: 0xc0dc442  jal         func_371108
    ctx->pc = 0x374D58u;
    SET_GPR_U32(ctx, 31, 0x374D60u);
    ctx->pc = 0x374D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374D58u;
    // 0x374d5c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x374D58u, 0x374D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374D60u;
label_374d60:
    // 0x374d60: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x374d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_374d64:
    // 0x374d64: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x374d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x374d68: 0x8cc4f910  lw          $a0, -0x6F0($a2)
    ctx->pc = 0x374d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294965520)));
    // 0x374d6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374d70: 0x11403c  dsll32      $t0, $s1, 0
    ctx->pc = 0x374d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 0));
    // 0x374d74: 0x244260a0  addiu       $v0, $v0, 0x60A0
    ctx->pc = 0x374d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24736));
    // 0x374d78: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x374d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x374d7c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x374d7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x374d80: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x374d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374d84: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x374d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x374d88: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x374d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x374d8c: 0xacc3f910  sw          $v1, -0x6F0($a2)
    ctx->pc = 0x374d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294965520), GPR_U32(ctx, 3));
    // 0x374d90: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x374d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x374d94: 0xffa500c8  sd          $a1, 0xC8($sp)
    ctx->pc = 0x374d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 5));
    // 0x374d98: 0x1e403c  dsll32      $t0, $fp, 0
    ctx->pc = 0x374d98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) << (32 + 0));
    // 0x374d9c: 0xafb30080  sw          $s3, 0x80($sp)
    ctx->pc = 0x374d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 19));
    // 0x374da0: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x374da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374da4: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x374da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374da8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x374da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374dac: 0x24c60034  addiu       $a2, $a2, 0x34
    ctx->pc = 0x374dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
    // 0x374db0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x374db0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x374db4: 0x24e70036  addiu       $a3, $a3, 0x36
    ctx->pc = 0x374db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 54));
    // 0x374db8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x374db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x374dbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x374dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x374dc0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x374dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x374dc4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x374dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x374dc8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x374dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x374dcc: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x374dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x374dd0: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x374dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x374dd4: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x374dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x374dd8: 0x10a00068  beqz        $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x374DD8u;
    {
        const bool branch_taken_0x374dd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x374DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374DD8u;
        // 0x374ddc: 0xafa30094  sw          $v1, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374dd8) {
            ctx->pc = 0x374F7Cu;
            goto label_374f7c;
        }
    }
    ctx->pc = 0x374DE0u;
    // 0x374de0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x374de0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374de4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x374de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374de8: 0xafb700d8  sw          $s7, 0xD8($sp)
    ctx->pc = 0x374de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 23));
    // 0x374dec: 0x0  nop
    ctx->pc = 0x374decu;
    // NOP
label_374df0:
    // 0x374df0: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x374df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x374df4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x374df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x374df8: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x374df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x374dfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e00: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x374e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x374e04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x374e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e08: 0x8fa80180  lw          $t0, 0x180($sp)
    ctx->pc = 0x374e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x374e0c: 0x2a8c2  srl         $s5, $v0, 3
    ctx->pc = 0x374e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x374e10: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x374e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x374e14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x374E14u;
    {
        const bool branch_taken_0x374e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E14u;
        // 0x374e18: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e14) {
            ctx->pc = 0x374E80u;
            goto label_374e80;
        }
    }
    ctx->pc = 0x374E1Cu;
    // 0x374e1c: 0x2616ffff  addiu       $s6, $s0, -0x1
    ctx->pc = 0x374e1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x374e20: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x374e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x374e24: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374E24u;
    {
        const bool branch_taken_0x374e24 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x374E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E24u;
        // 0x374e28: 0x2634ffff  addiu       $s4, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e24) {
            ctx->pc = 0x374E38u;
            goto label_374e38;
        }
    }
    ctx->pc = 0x374E2Cu;
    // 0x374e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x374e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x374e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x374e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_374e38:
    // 0x374e38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x374e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x374e3c: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374E3Cu;
    {
        const bool branch_taken_0x374e3c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x374E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E3Cu;
        // 0x374e40: 0x2a020007  slti        $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e3c) {
            ctx->pc = 0x374E50u;
            goto label_374e50;
        }
    }
    ctx->pc = 0x374E44u;
    // 0x374e44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374e48: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x374e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x374e4c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x374e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_374e50:
    // 0x374e50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374E50u;
    {
        const bool branch_taken_0x374e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E50u;
        // 0x374e54: 0x2602fffa  addiu       $v0, $s0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e50) {
            ctx->pc = 0x374E60u;
            goto label_374e60;
        }
    }
    ctx->pc = 0x374E58u;
    // 0x374e58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374E58u;
    {
        const bool branch_taken_0x374e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E58u;
        // 0x374e5c: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e58) {
            ctx->pc = 0x374E64u;
            goto label_374e64;
        }
    }
    ctx->pc = 0x374E60u;
label_374e60:
    // 0x374e60: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x374e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_374e64:
    // 0x374e64: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x374e64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374e68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x374e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e6c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x374e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e70: 0xc0df46e  jal         func_37D1B8
    ctx->pc = 0x374E70u;
    SET_GPR_U32(ctx, 31, 0x374E78u);
    ctx->pc = 0x374E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E70u;
    // 0x374e74: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1B8u, 0x374E70u, 0x374E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374E78u;
label_374e78:
    // 0x374e78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x374E78u;
    {
        const bool branch_taken_0x374e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374E78u;
        // 0x374e7c: 0x8fa30180  lw          $v1, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374e78) {
            ctx->pc = 0x374EACu;
            goto label_374eac;
        }
    }
    ctx->pc = 0x374E80u;
label_374e80:
    // 0x374e80: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x374e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x374e84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x374e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e88: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x374e88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374e8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e90: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x374e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e94: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x374e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374e98: 0xc0df46e  jal         func_37D1B8
    ctx->pc = 0x374E98u;
    SET_GPR_U32(ctx, 31, 0x374EA0u);
    ctx->pc = 0x374E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374E98u;
    // 0x374e9c: 0x2616ffff  addiu       $s6, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1B8u, 0x374E98u, 0x374EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374EA0u;
label_374ea0:
    // 0x374ea0: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x374ea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x374ea4: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x374ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x374ea8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x374ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_374eac:
    // 0x374eac: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x374eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x374eb0: 0x1211001a  beq         $s0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x374EB0u;
    {
        const bool branch_taken_0x374eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x374EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374EB0u;
        // 0x374eb4: 0xafa30180  sw          $v1, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374eb0) {
            ctx->pc = 0x374F1Cu;
            goto label_374f1c;
        }
    }
    ctx->pc = 0x374EB8u;
    // 0x374eb8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x374eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x374ebc: 0x57c40008  bnel        $fp, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x374EBCu;
    {
        const bool branch_taken_0x374ebc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        if (branch_taken_0x374ebc) {
            ctx->pc = 0x374EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374EBCu;
            // 0x374ec0: 0x2622fff9  addiu       $v0, $s1, -0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374EE0u;
            goto label_374ee0;
        }
    }
    ctx->pc = 0x374EC4u;
    // 0x374ec4: 0x2622fffa  addiu       $v0, $s1, -0x6
    ctx->pc = 0x374ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x374ec8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x374ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374ecc: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x374eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x374ed0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374ed4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x374ed4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x374ed8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x374ED8u;
    {
        const bool branch_taken_0x374ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374ED8u;
        // 0x374edc: 0x462004  sllv        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ed8) {
            ctx->pc = 0x374EF4u;
            goto label_374ef4;
        }
    }
    ctx->pc = 0x374EE0u;
label_374ee0:
    // 0x374ee0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x374ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374ee4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x374ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x374ee8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x374ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374eec: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x374eecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x374ef0: 0x482004  sllv        $a0, $t0, $v0
    ctx->pc = 0x374ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
label_374ef4:
    // 0x374ef4: 0x2602fff9  addiu       $v0, $s0, -0x7
    ctx->pc = 0x374ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x374ef8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x374ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374efc: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x374efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x374f00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374f04: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x374f04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x374f08: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x374f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x374f0c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x374f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x374f10: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x374f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x374f14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374F14u;
    {
        const bool branch_taken_0x374f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F14u;
        // 0x374f18: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f14) {
            ctx->pc = 0x374F20u;
            goto label_374f20;
        }
    }
    ctx->pc = 0x374F1Cu;
label_374f1c:
    // 0x374f1c: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x374f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
label_374f20:
    // 0x374f20: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x374f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x374f24: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x374f24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x374f28: 0x2a030001  slti        $v1, $s0, 0x1
    ctx->pc = 0x374f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x374f2c: 0x2a240001  slti        $a0, $s1, 0x1
    ctx->pc = 0x374f2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x374f30: 0x2c3800a  movz        $s0, $s6, $v1
    ctx->pc = 0x374f30u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
    // 0x374f34: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x374f34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x374f38: 0x2472821  addu        $a1, $s2, $a3
    ctx->pc = 0x374f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x374f3c: 0xa29024  and         $s2, $a1, $v0
    ctx->pc = 0x374f3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x374f40: 0x8fa80074  lw          $t0, 0x74($sp)
    ctx->pc = 0x374f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x374f44: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374f48: 0x284880a  movz        $s1, $s4, $a0
    ctx->pc = 0x374f48u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
    // 0x374f4c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x374f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x374f50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x374f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374f54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x374f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x374f58: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x374f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x374f5c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x374f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x374f60: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x374f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x374f64: 0xafa80074  sw          $t0, 0x74($sp)
    ctx->pc = 0x374f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 8));
    // 0x374f68: 0x26f70080  addiu       $s7, $s7, 0x80
    ctx->pc = 0x374f68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
    // 0x374f6c: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x374f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x374f70: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x374f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x374f74: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x374F74u;
    {
        const bool branch_taken_0x374f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F74u;
        // 0x374f78: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f74) {
            ctx->pc = 0x374DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374df0;
        }
    }
    ctx->pc = 0x374F7Cu;
label_374f7c:
    // 0x374f7c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x374f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x374f80: 0x24b0f910  addiu       $s0, $a1, -0x6F0
    ctx->pc = 0x374f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x374f84: 0x8ca2f910  lw          $v0, -0x6F0($a1)
    ctx->pc = 0x374f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x374f88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x374f88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF914u));
    // 0x374f8c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x374f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x374f90: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x374f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x374f94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374F94u;
    {
        const bool branch_taken_0x374f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374F94u;
        // 0x374f98: 0x3c06005c  lui         $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374f94) {
            ctx->pc = 0x374FA8u;
            goto label_374fa8;
        }
    }
    ctx->pc = 0x374F9Cu;
    // 0x374f9c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x374F9Cu;
    SET_GPR_U32(ctx, 31, 0x374FA4u);
    ctx->pc = 0x374FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F9Cu;
    // 0x374fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x374F9Cu, 0x374FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FA4u;
label_374fa4:
    // 0x374fa4: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x374fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_374fa8:
    // 0x374fa8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x374fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x374fac: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x374facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x374fb0: 0x8cc2f910  lw          $v0, -0x6F0($a2)
    ctx->pc = 0x374fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294965520)));
    // 0x374fb4: 0x3405a200  ori         $a1, $zero, 0xA200
    ctx->pc = 0x374fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41472);
    // 0x374fb8: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x374fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x374fbc: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x374fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x374fc0: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x374fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x374fc4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x374fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x374fc8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x374fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x374fcc: 0xacc2f910  sw          $v0, -0x6F0($a2)
    ctx->pc = 0x374fccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294965520), GPR_U32(ctx, 2));
    // 0x374fd0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x374fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x374fd4: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x374fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x374fd8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x374fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x374fdc: 0xacc2f910  sw          $v0, -0x6F0($a2)
    ctx->pc = 0x374fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294965520), GPR_U32(ctx, 2));
    // 0x374fe0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x374fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x374fe4: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x374fe4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x374fe8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374FE8u;
    {
        const bool branch_taken_0x374fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x374FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FE8u;
        // 0x374fec: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374fe8) {
            ctx->pc = 0x374FFCu;
            goto label_374ffc;
        }
    }
    ctx->pc = 0x374FF0u;
    // 0x374ff0: 0xc0dc442  jal         func_371108
    ctx->pc = 0x374FF0u;
    SET_GPR_U32(ctx, 31, 0x374FF8u);
    ctx->pc = 0x374FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374FF0u;
    // 0x374ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x374FF0u, 0x374FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FF8u;
label_374ff8:
    // 0x374ff8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x374ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_374ffc:
    // 0x374ffc: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x374ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x375000: 0x8ce8f910  lw          $t0, -0x6F0($a3)
    ctx->pc = 0x375000u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5BF910u));
    // 0x375004: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x375004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x375008: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x375008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x37500c: 0x34a58004  ori         $a1, $a1, 0x8004
    ctx->pc = 0x37500cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32772);
    // 0x375010: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x375010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x375014: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x375014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x375018: 0x25020050  addiu       $v0, $t0, 0x50
    ctx->pc = 0x375018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x37501c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x37501cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x375020: 0xace2f910  sw          $v0, -0x6F0($a3)
    ctx->pc = 0x375020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294965520), GPR_U32(ctx, 2));
    // 0x375024: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x375024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x375028: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x375028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37502c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x37502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x375030: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x375030u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x375034: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x375034u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375038: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x375038u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x37503c: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x37503cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x375040: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x375040u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
    // 0x375044: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x375044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x375048: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x375048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37504c: 0xfd060010  sd          $a2, 0x10($t0)
    ctx->pc = 0x37504cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
    // 0x375050: 0xfd040028  sd          $a0, 0x28($t0)
    ctx->pc = 0x375050u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 4));
    // 0x375054: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x375054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x375058: 0x24ca60a0  addiu       $t2, $a2, 0x60A0
    ctx->pc = 0x375058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 24736));
    // 0x37505c: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x37505cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x375060: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x375060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x375064: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x375064u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x375068: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x375068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x37506c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x37506cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x375070: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x375070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375074: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x375074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x375078: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x375078u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x37507c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x37507cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x375080: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x375080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x375084: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x375084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x375088: 0x4d1004  sllv        $v0, $t5, $v0
    ctx->pc = 0x375088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x37508c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x37508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x375090: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x375090u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x375094: 0xcd3004  sllv        $a2, $t5, $a2
    ctx->pc = 0x375094u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x375098: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x375098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x37509c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3750a0: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x3750a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x3750a4: 0x8d2004  sllv        $a0, $t5, $a0
    ctx->pc = 0x3750a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x3750a8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3750a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3750ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3750acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3750b0: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x3750b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x3750b4: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x3750b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x3750b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3750b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3750bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3750bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3750c0: 0x424ba  dsrl        $a0, $a0, 18
    ctx->pc = 0x3750c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 18);
    // 0x3750c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3750c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3750c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3750c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3750cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3750ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3750d0: 0xfd090038  sd          $t1, 0x38($t0)
    ctx->pc = 0x3750d0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 9));
    // 0x3750d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3750d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3750d8: 0xfd020020  sd          $v0, 0x20($t0)
    ctx->pc = 0x3750d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 2));
    // 0x3750dc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x3750dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3750e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3750e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3750e4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3750e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3750e8: 0x63182  srl         $a2, $a2, 6
    ctx->pc = 0x3750e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x3750ec: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x3750ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3750f0: 0x4d1004  sllv        $v0, $t5, $v0
    ctx->pc = 0x3750f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x3750f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3750f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3750f8: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x3750f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x3750fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3750fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375100: 0xed3804  sllv        $a3, $t5, $a3
    ctx->pc = 0x375100u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 7) & 0x1F));
    // 0x375104: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x375104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x375108: 0x6323c  dsll32      $a2, $a2, 8
    ctx->pc = 0x375108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 8));
    // 0x37510c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x37510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x375110: 0x8d2004  sllv        $a0, $t5, $a0
    ctx->pc = 0x375110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x375114: 0x738bc  dsll32      $a3, $a3, 2
    ctx->pc = 0x375114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 2));
    // 0x375118: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x375118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x37511c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x375120: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x375120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x375124: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x375124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
    // 0x375128: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x375128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37512c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x37512cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x375130: 0x424ba  dsrl        $a0, $a0, 18
    ctx->pc = 0x375130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 18);
    // 0x375134: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x375134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x375138: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x375138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37513c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x375140: 0xfd0b0040  sd          $t3, 0x40($t0)
    ctx->pc = 0x375140u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 11));
    // 0x375144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x375144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x375148: 0xfd0c0048  sd          $t4, 0x48($t0)
    ctx->pc = 0x375148u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 72), GPR_U64(ctx, 12));
    // 0x37514c: 0xfd020030  sd          $v0, 0x30($t0)
    ctx->pc = 0x37514cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 2));
    // 0x375150: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x375150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x375154: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x375154u;
    {
        const bool branch_taken_0x375154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x375158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375154u;
        // 0x375158: 0x8d520000  lw          $s2, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375154) {
            ctx->pc = 0x3751B0u;
            goto label_3751b0;
        }
    }
    ctx->pc = 0x37515Cu;
    // 0x37515c: 0xdfa500d0  ld          $a1, 0xD0($sp)
    ctx->pc = 0x37515cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x375160: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x375160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x375164: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x375164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x375168: 0xdfa600c8  ld          $a2, 0xC8($sp)
    ctx->pc = 0x375168u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37516c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x37516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x375170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x375170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x375174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x375178: 0x629ba  dsrl        $a1, $a2, 6
    ctx->pc = 0x375178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> 6);
    // 0x37517c: 0xdfa700c0  ld          $a3, 0xC0($sp)
    ctx->pc = 0x37517cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x375180: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x375180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x375184: 0x8d2004  sllv        $a0, $t5, $a0
    ctx->pc = 0x375184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 4) & 0x1F));
    // 0x375188: 0x121982  srl         $v1, $s2, 6
    ctx->pc = 0x375188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 6));
    // 0x37518c: 0x72b3a  dsrl        $a1, $a3, 12
    ctx->pc = 0x37518cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> 12);
    // 0x375190: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x375190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x375194: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x375194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x375198: 0x424ba  dsrl        $a0, $a0, 18
    ctx->pc = 0x375198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 18);
    // 0x37519c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x37519cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3751a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3751a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3751a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3751a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3751a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3751A8u;
    {
        const bool branch_taken_0x3751a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3751ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751A8u;
        // 0x3751ac: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751a8) {
            ctx->pc = 0x3751F4u;
            goto label_3751f4;
        }
    }
    ctx->pc = 0x3751B0u;
label_3751b0:
    // 0x3751b0: 0xdfa400c8  ld          $a0, 0xC8($sp)
    ctx->pc = 0x3751b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3751b4: 0xdfa800d0  ld          $t0, 0xD0($sp)
    ctx->pc = 0x3751b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3751b8: 0x431ba  dsrl        $a2, $a0, 6
    ctx->pc = 0x3751b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) >> 6);
    // 0x3751bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3751bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3751c0: 0x818ba  dsrl        $v1, $t0, 2
    ctx->pc = 0x3751c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 2);
    // 0x3751c4: 0x122182  srl         $a0, $s2, 6
    ctx->pc = 0x3751c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 6));
    // 0x3751c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3751c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3751cc: 0x4d1004  sllv        $v0, $t5, $v0
    ctx->pc = 0x3751ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x3751d0: 0xdfa600c0  ld          $a2, 0xC0($sp)
    ctx->pc = 0x3751d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3751d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3751d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3751d8: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x3751d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x3751dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3751dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3751e0: 0x62b3a  dsrl        $a1, $a2, 12
    ctx->pc = 0x3751e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> 12);
    // 0x3751e4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3751e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3751e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3751e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3751ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3751ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3751f0: 0x645025  or          $t2, $v1, $a0
    ctx->pc = 0x3751f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3751f4:
    // 0x3751f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3751f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3751f8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3751f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3751fc: 0x244480a0  addiu       $a0, $v0, -0x7F60
    ctx->pc = 0x3751fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934688));
    // 0x375200: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x375200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x375204: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x375204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x375208: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x375208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37520c: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x37520cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375210: 0x24c6cd40  addiu       $a2, $a2, -0x32C0
    ctx->pc = 0x375210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954304));
    // 0x375214: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x375214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x375218: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x375218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x37521c: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x37521cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x375220: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x375220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x375224: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x375224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375228: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x375228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x37522c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x37522cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x375230: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x375230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x375234: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x375234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375238: 0x528fc  dsll32      $a1, $a1, 3
    ctx->pc = 0x375238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 3));
    // 0x37523c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x37523cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x375240: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x375240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x375244: 0x8d03cd00  lw          $v1, -0x3300($t0)
    ctx->pc = 0x375244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954240)));
    // 0x375248: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x375248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x37524c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x37524cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x375250: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x375250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x375254: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x375254u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x375258: 0xc0dd5da  jal         func_375768
    ctx->pc = 0x375258u;
    SET_GPR_U32(ctx, 31, 0x375260u);
    ctx->pc = 0x37525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375258u;
    // 0x37525c: 0xad03cd00  sw          $v1, -0x3300($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294954240), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375768u, 0x375258u, 0x375260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375260u;
label_375260:
    // 0x375260: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x375260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_375264:
    // 0x375264: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x375264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x375268: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x375268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x37526c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x37526cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x375270: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x375270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x375274: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x375274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x375278: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x375278u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x37527c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x37527cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x375280: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x375280u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x375284: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x375284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x375288: 0x3e00008  jr          $ra
    ctx->pc = 0x375288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375288u;
        // 0x37528c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375290u;
}
