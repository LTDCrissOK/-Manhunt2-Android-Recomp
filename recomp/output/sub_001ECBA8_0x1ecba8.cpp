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

// Function: sub_001ECBA8
// Address: 0x1ecba8 - 0x1ecfe8
void sub_001ECBA8_0x1ecba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECBA8_0x1ecba8");
#endif

    switch (ctx->pc) {
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1eccf8u: goto label_1eccf8;
        case 0x1ecd38u: goto label_1ecd38;
        case 0x1ecd58u: goto label_1ecd58;
        case 0x1ecda8u: goto label_1ecda8;
        case 0x1ecdc8u: goto label_1ecdc8;
        case 0x1ecde8u: goto label_1ecde8;
        case 0x1ece10u: goto label_1ece10;
        case 0x1ece98u: goto label_1ece98;
        case 0x1eceb8u: goto label_1eceb8;
        case 0x1ecec4u: goto label_1ecec4;
        case 0x1ecf10u: goto label_1ecf10;
        case 0x1ecf78u: goto label_1ecf78;
        default: break;
    }

    ctx->pc = 0x1ecba8u;

    // 0x1ecba8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1ecba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1ecbac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecbb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecbb4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1ecbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1ecbb8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1ecbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ecbbc: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x1ecbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x1ecbc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbc4: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x1ecbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x1ecbc8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbcc: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x1ecbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x1ecbd0: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x1ecbd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ecbd4: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1ecbd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ecbd8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1ecbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1ecbdc: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1ecbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1ecbe0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ecbe4: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1ecbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1ecbe8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ecbe8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecbec: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1ecbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x1ecbf0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecbf4: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x1ecbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x1ecbf8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1ecbf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecbfc: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x1ecbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x1ecc00: 0x37aa0008  ori         $t2, $sp, 0x8
    ctx->pc = 0x1ecc00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1ecc04: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1ecc04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1ecc08: 0x27a9001c  addiu       $t1, $sp, 0x1C
    ctx->pc = 0x1ecc08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ecc0c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1ecc0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1ecc10: 0x2e0602d  daddu       $t4, $s7, $zero
    ctx->pc = 0x1ecc10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc14: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1ecc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ecc18: 0x37a7000c  ori         $a3, $sp, 0xC
    ctx->pc = 0x1ecc18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x1ecc1c: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1ecc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1ecc20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecc24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ecc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ecc28: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ecc2c: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x1ecc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1ecc30: 0x27ad004c  addiu       $t5, $sp, 0x4C
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1ecc34: 0x0  nop
    ctx->pc = 0x1ecc34u;
    // NOP
label_1ecc38:
    // 0x1ecc38: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ecc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ecc3c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1ecc3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ecc40: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1ecc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1ecc44: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ecc44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ecc48: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1ecc4c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1ecc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1ecc50: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x1ecc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x1ecc54: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x1ecc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1ecc58: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x1ecc5c: 0xa12f0000  sb          $t7, 0x0($t1)
    ctx->pc = 0x1ecc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x1ecc60: 0x258c0024  addiu       $t4, $t4, 0x24
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 36));
    // 0x1ecc64: 0xad4e0000  sw          $t6, 0x0($t2)
    ctx->pc = 0x1ecc64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 14));
    // 0x1ecc68: 0x25290024  addiu       $t1, $t1, 0x24
    ctx->pc = 0x1ecc68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
    // 0x1ecc6c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1ecc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1ecc70: 0x256b0024  addiu       $t3, $t3, 0x24
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 36));
    // 0x1ecc74: 0x16d102a  slt         $v0, $t3, $t5
    ctx->pc = 0x1ecc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1ecc78: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1ECC78u;
    {
        const bool branch_taken_0x1ecc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC78u;
        // 0x1ecc7c: 0x254a0024  addiu       $t2, $t2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc78) {
            ctx->pc = 0x1ECC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecc38;
        }
    }
    ctx->pc = 0x1ECC80u;
    // 0x1ecc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecc88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ecc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ecc8c: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x1ecc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ecc90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ecc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc98: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1ECC98u;
    SET_GPR_U32(ctx, 31, 0x1ECCA0u);
    ctx->pc = 0x1ECC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC98u;
    // 0x1ecc9c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECFE8u, 0x1ECC98u, 0x1ECCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCA0u;
label_1ecca0:
    // 0x1ecca0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1ECCA0u;
    {
        const bool branch_taken_0x1ecca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCA0u;
        // 0x1ecca4: 0x93a20050  lbu         $v0, 0x50($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecca0) {
            ctx->pc = 0x1ECD98u;
            goto label_1ecd98;
        }
    }
    ctx->pc = 0x1ECCA8u;
    // 0x1ecca8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eccac: 0x44000bf  bltz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x1ECCACu;
    {
        const bool branch_taken_0x1eccac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCACu;
        // 0x1eccb0: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccac) {
            ctx->pc = 0x1ECFACu;
            goto label_1ecfac;
        }
    }
    ctx->pc = 0x1ECCB4u;
    // 0x1eccb4: 0x92a20008  lbu         $v0, 0x8($s5)
    ctx->pc = 0x1eccb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1eccb8: 0x92a30009  lbu         $v1, 0x9($s5)
    ctx->pc = 0x1eccb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
    // 0x1eccbc: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x1eccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    // 0x1eccc0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1eccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1eccc4: 0x24110024  addiu       $s1, $zero, 0x24
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1eccc8: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1eccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1ecccc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eccd0: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x1eccd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eccd4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1eccd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eccd8: 0x87a3002c  lh          $v1, 0x2C($sp)
    ctx->pc = 0x1eccd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1eccdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ecce0: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x1ecce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x1ecce4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ecce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ecce8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1ecce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eccec: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x1eccecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eccf0:
    // 0x1eccf0: 0xc0c3566  jal         func_30D598
    ctx->pc = 0x1ECCF0u;
    SET_GPR_U32(ctx, 31, 0x1ECCF8u);
    ctx->pc = 0x1ECCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECCF0u;
    // 0x1eccf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D598u, 0x1ECCF0u, 0x1ECCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCF8u;
label_1eccf8:
    // 0x1eccf8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1eccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eccfc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ecd00: 0x2485da30  addiu       $a1, $a0, -0x25D0
    ctx->pc = 0x1ecd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957616));
    // 0x1ecd04: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x1ecd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ecd08: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x1ecd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1ecd0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ecd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ecd10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ecd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ecd14: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ecd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecd18: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1ecd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ecd1c: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x1ecd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1ecd20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ecd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ecd24: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ecd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecd28: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x1ecd28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ecd2c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1ecd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ecd30: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1ECD30u;
    SET_GPR_U32(ctx, 31, 0x1ECD38u);
    ctx->pc = 0x1ECD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD30u;
    // 0x1ecd34: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1ECD30u, 0x1ECD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD38u;
label_1ecd38:
    // 0x1ecd38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECD38u;
    {
        const bool branch_taken_0x1ecd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD38u;
        // 0x1ecd3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd38) {
            ctx->pc = 0x1ECD50u;
            goto label_1ecd50;
        }
    }
    ctx->pc = 0x1ECD40u;
    // 0x1ecd40: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ecd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecd44: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1ecd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ecd48: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1ecd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ecd4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ecd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ecd50:
    // 0x1ecd50: 0xc0c3516  jal         func_30D458
    ctx->pc = 0x1ECD50u;
    SET_GPR_U32(ctx, 31, 0x1ECD58u);
    ctx->pc = 0x1ECD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD50u;
    // 0x1ecd54: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D458u, 0x1ECD50u, 0x1ECD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD58u;
label_1ecd58:
    // 0x1ecd58: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecd5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ecd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd60: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1ecd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd64: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x1ecd64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ecd68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ecd68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd6c: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x1ecd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1ecd70: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ecd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ecd74: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ecd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecd78: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1ecd78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ecd7c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1ecd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ecd80: 0xa05e001c  sb          $fp, 0x1C($v0)
    ctx->pc = 0x1ecd80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 30));
    // 0x1ecd84: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ecd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecd88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecd8c: 0x681ffd8  bgez        $s4, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1ECD8Cu;
    {
        const bool branch_taken_0x1ecd8c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1ECD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD8Cu;
        // 0x1ecd90: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd8c) {
            ctx->pc = 0x1ECCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eccf0;
        }
    }
    ctx->pc = 0x1ECD94u;
    // 0x1ecd94: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x1ecd94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_1ecd98:
    // 0x1ecd98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECD98u;
    {
        const bool branch_taken_0x1ecd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD98u;
        // 0x1ecd9c: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd98) {
            ctx->pc = 0x1ECDB0u;
            goto label_1ecdb0;
        }
    }
    ctx->pc = 0x1ECDA0u;
    // 0x1ecda0: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1ECDA0u;
    SET_GPR_U32(ctx, 31, 0x1ECDA8u);
    ctx->pc = 0x1ECDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDA0u;
    // 0x1ecda4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1ECDA0u, 0x1ECDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDA8u;
label_1ecda8:
    // 0x1ecda8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1ecda8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1ecdac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ecdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1ecdb0:
    // 0x1ecdb0: 0x1840007e  blez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x1ECDB0u;
    {
        const bool branch_taken_0x1ecdb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ECDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDB0u;
        // 0x1ecdb4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdb0) {
            ctx->pc = 0x1ECFACu;
            goto label_1ecfac;
        }
    }
    ctx->pc = 0x1ECDB8u;
    // 0x1ecdb8: 0x26b70020  addiu       $s7, $s5, 0x20
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1ecdbc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecdc0: 0x3c1e004a  lui         $fp, 0x4A
    ctx->pc = 0x1ecdc0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)74 << 16));
    // 0x1ecdc4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1ecdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ecdc8:
    // 0x1ecdc8: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x1ecdc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ecdcc: 0x7d8821  addu        $s1, $v1, $sp
    ctx->pc = 0x1ecdccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ecdd0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1ecdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ecdd4: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECDD4u;
    {
        const bool branch_taken_0x1ecdd4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1ecdd4) {
            ctx->pc = 0x1ECDF0u;
            goto label_1ecdf0;
        }
    }
    ctx->pc = 0x1ECDDCu;
    // 0x1ecddc: 0xc6ac000c  lwc1        $f12, 0xC($s5)
    ctx->pc = 0x1ecddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecde0: 0xc07ba98  jal         func_1EEA60
    ctx->pc = 0x1ECDE0u;
    SET_GPR_U32(ctx, 31, 0x1ECDE8u);
    ctx->pc = 0x1ECDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDE0u;
    // 0x1ecde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA60u, 0x1ECDE0u, 0x1ECDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDE8u;
label_1ecde8:
    // 0x1ecde8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECDE8u;
    {
        const bool branch_taken_0x1ecde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDE8u;
        // 0x1ecdec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecde8) {
            ctx->pc = 0x1ECDF8u;
            goto label_1ecdf8;
        }
    }
    ctx->pc = 0x1ECDF0u;
label_1ecdf0:
    // 0x1ecdf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ecdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecdf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ecdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ecdf8:
    // 0x1ecdf8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ecdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ecdfc: 0x27c49c38  addiu       $a0, $fp, -0x63C8
    ctx->pc = 0x1ecdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941752));
    // 0x1ece00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1ece00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ece04: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ece08: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1ECE08u;
    SET_GPR_U32(ctx, 31, 0x1ECE10u);
    ctx->pc = 0x1ECE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE08u;
    // 0x1ece0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1ECE08u, 0x1ECE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE10u;
label_1ece10:
    // 0x1ece10: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x1ece10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ece14: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1ece14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ece18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ece18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece1c: 0x0  nop
    ctx->pc = 0x1ece1cu;
    // NOP
    // 0x1ece20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ece20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ece24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ece24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ece28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ece28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ece2c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1ece2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1ece30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ece30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ece34: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ece34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ece38: 0x0  nop
    ctx->pc = 0x1ece38u;
    // NOP
    // 0x1ece3c: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x1ECE3Cu;
    {
        const bool branch_taken_0x1ece3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ECE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE3Cu;
        // 0x1ece40: 0x93a20089  lbu         $v0, 0x89($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 137)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece3c) {
            ctx->pc = 0x1ECF98u;
            goto label_1ecf98;
        }
    }
    ctx->pc = 0x1ECE44u;
    // 0x1ece44: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1ece44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ece48: 0x0  nop
    ctx->pc = 0x1ece48u;
    // NOP
    // 0x1ece4c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1ece4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1ece50: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1ECE50u;
    {
        const bool branch_taken_0x1ece50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ece50) {
            ctx->pc = 0x1ECE7Cu;
            goto label_1ece7c;
        }
    }
    ctx->pc = 0x1ECE58u;
    // 0x1ece58: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x1ece58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ece5c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1ece5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ece60: 0x0  nop
    ctx->pc = 0x1ece60u;
    // NOP
    // 0x1ece64: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECE64u;
    {
        const bool branch_taken_0x1ece64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ece64) {
            ctx->pc = 0x1ECE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECE64u;
            // 0x1ece68: 0xe6020110  swc1        $f2, 0x110($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECE7Cu;
            goto label_1ece7c;
        }
    }
    ctx->pc = 0x1ECE6Cu;
    // 0x1ece6c: 0x0  nop
    ctx->pc = 0x1ece6cu;
    // NOP
    // 0x1ece70: 0x0  nop
    ctx->pc = 0x1ece70u;
    // NOP
    // 0x1ece74: 0x46000004  c1          0x4
    ctx->pc = 0x1ece74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ece78: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1ece78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_1ece7c:
    // 0x1ece7c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ece7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ece80: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1ece80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1ece84: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1ece84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ece88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ece88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ece8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ece90: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1ECE90u;
    SET_GPR_U32(ctx, 31, 0x1ECE98u);
    ctx->pc = 0x1ECE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE90u;
    // 0x1ece94: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1ECE90u, 0x1ECE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE98u;
label_1ece98:
    // 0x1ece98: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1ece98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ece9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ece9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ecea0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1ecea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ecea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ecea8: 0x0  nop
    ctx->pc = 0x1ecea8u;
    // NOP
    // 0x1eceac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1eceacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eceb0: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1ECEB0u;
    SET_GPR_U32(ctx, 31, 0x1ECEB8u);
    ctx->pc = 0x1ECEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECEB0u;
    // 0x1eceb4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1ECEB0u, 0x1ECEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECEB8u;
label_1eceb8:
    // 0x1eceb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecebc: 0xc07ddd4  jal         func_1F7750
    ctx->pc = 0x1ECEBCu;
    SET_GPR_U32(ctx, 31, 0x1ECEC4u);
    ctx->pc = 0x1ECEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECEBCu;
    // 0x1ecec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7750u, 0x1ECEBCu, 0x1ECEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECEC4u;
label_1ecec4:
    // 0x1ecec4: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1ecec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1ecec8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1ecec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ececc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ececcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eced0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eced4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eced4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eced8: 0x0  nop
    ctx->pc = 0x1eced8u;
    // NOP
    // 0x1ecedc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ecee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ecee4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ecee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ecee8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ecee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1eceec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eceecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ecef0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1ECEF0u;
    {
        const bool branch_taken_0x1ecef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEF0u;
        // 0x1ecef4: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecef0) {
            ctx->pc = 0x1ECF98u;
            goto label_1ecf98;
        }
    }
    ctx->pc = 0x1ECEF8u;
    // 0x1ecef8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ecef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf00: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x1ecf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecf04: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1ecf08: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1ECF08u;
    SET_GPR_U32(ctx, 31, 0x1ECF10u);
    ctx->pc = 0x1ECF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF08u;
    // 0x1ecf0c: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1ECF08u, 0x1ECF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF10u;
label_1ecf10:
    // 0x1ecf10: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x1ecf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x1ecf14: 0x96429218  lhu         $v0, -0x6DE8($s2)
    ctx->pc = 0x1ecf14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939160)));
    // 0x1ecf18: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x1ecf18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ecf1c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1ecf1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ecf20: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1ecf20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ecf24: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1ecf24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ecf28: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1ecf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ecf2c: 0x9225001c  lbu         $a1, 0x1C($s1)
    ctx->pc = 0x1ecf2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ecf30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ecf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecf34: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1ecf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1ecf38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ecf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf40: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ecf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ecf44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf48: 0xa213011c  sb          $s3, 0x11C($s0)
    ctx->pc = 0x1ecf48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 19));
    // 0x1ecf4c: 0xe6140120  swc1        $f20, 0x120($s0)
    ctx->pc = 0x1ecf4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1ecf50: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1ecf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1ecf54: 0xae160114  sw          $s6, 0x114($s0)
    ctx->pc = 0x1ecf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 22));
    // 0x1ecf58: 0xae160124  sw          $s6, 0x124($s0)
    ctx->pc = 0x1ecf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 22));
    // 0x1ecf5c: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1ecf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ecf60: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x1ecf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x1ecf64: 0xae050140  sw          $a1, 0x140($s0)
    ctx->pc = 0x1ecf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 5));
    // 0x1ecf68: 0xe6010118  swc1        $f1, 0x118($s0)
    ctx->pc = 0x1ecf68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1ecf6c: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1ecf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1ecf70: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1ECF70u;
    SET_GPR_U32(ctx, 31, 0x1ECF78u);
    ctx->pc = 0x1ECF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF70u;
    // 0x1ecf74: 0xa2060170  sb          $a2, 0x170($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1ECF70u, 0x1ECF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF78u;
label_1ecf78:
    // 0x1ecf78: 0x96429218  lhu         $v0, -0x6DE8($s2)
    ctx->pc = 0x1ecf78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294939160)));
    // 0x1ecf7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ecf80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1ecf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ecf84: 0x2c630100  sltiu       $v1, $v1, 0x100
    ctx->pc = 0x1ecf84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ecf88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECF88u;
    {
        const bool branch_taken_0x1ecf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF88u;
        // 0x1ecf8c: 0xa6429218  sh          $v0, -0x6DE8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4294939160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf88) {
            ctx->pc = 0x1ECF98u;
            goto label_1ecf98;
        }
    }
    ctx->pc = 0x1ECF90u;
    // 0x1ecf90: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ecf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ecf94: 0xa6429218  sh          $v0, -0x6DE8($s2)
    ctx->pc = 0x1ecf94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294939160), (uint16_t)GPR_U32(ctx, 2));
label_1ecf98:
    // 0x1ecf98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ecf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecf9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ecfa0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1ecfa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ecfa4: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1ECFA4u;
    {
        const bool branch_taken_0x1ecfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFA4u;
        // 0x1ecfa8: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfa4) {
            ctx->pc = 0x1ECDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecdc8;
        }
    }
    ctx->pc = 0x1ECFACu;
label_1ecfac:
    // 0x1ecfac: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1ecfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ecfb0: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1ecfb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ecfb4: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1ecfb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ecfb8: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1ecfb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1ecfbc: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1ecfbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ecfc0: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x1ecfc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ecfc4: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x1ecfc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ecfc8: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x1ecfc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ecfcc: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x1ecfccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ecfd0: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x1ecfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1ecfd4: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1ecfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ecfd8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1ecfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ecfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFDCu;
        // 0x1ecfe0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECFE4u;
    // 0x1ecfe4: 0x0  nop
    ctx->pc = 0x1ecfe4u;
    // NOP
    ctx->pc = 0x1ecfe8u;
}
