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

// Function: sub_001FCCD8
// Address: 0x1fccd8 - 0x1fd000
void sub_001FCCD8_0x1fccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCCD8_0x1fccd8");
#endif

    switch (ctx->pc) {
        case 0x1fcd58u: goto label_1fcd58;
        case 0x1fcd90u: goto label_1fcd90;
        case 0x1fcda0u: goto label_1fcda0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fce30u: goto label_1fce30;
        case 0x1fce4cu: goto label_1fce4c;
        case 0x1fce68u: goto label_1fce68;
        case 0x1fcfa8u: goto label_1fcfa8;
        default: break;
    }

    ctx->pc = 0x1fccd8u;

    // 0x1fccd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fccdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fcce0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fcce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fcce4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fcce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fcce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fccf0: 0x8c44bd6c  lw          $a0, -0x4294($v0)
    ctx->pc = 0x1fccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x1fccf4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fccf8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fccfc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1fccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1fcd00: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1fcd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1fcd04: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1fcd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1fcd08: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1fcd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1fcd0c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1fcd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1fcd10: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1fcd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1fcd14: 0x148300ad  bne         $a0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x1FCD14u;
    {
        const bool branch_taken_0x1fcd14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD14u;
        // 0x1fcd18: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd14) {
            ctx->pc = 0x1FCFCCu;
            goto label_1fcfcc;
        }
    }
    ctx->pc = 0x1FCD1Cu;
    // 0x1fcd1c: 0x34029388  ori         $v0, $zero, 0x9388
    ctx->pc = 0x1fcd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37768);
    // 0x1fcd20: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1fcd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fcd24: 0x202b021  addu        $s6, $s0, $v0
    ctx->pc = 0x1fcd24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fcd28: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fcd2c: 0x34039570  ori         $v1, $zero, 0x9570
    ctx->pc = 0x1fcd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38256);
    // 0x1fcd30: 0x34029378  ori         $v0, $zero, 0x9378
    ctx->pc = 0x1fcd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37752);
    // 0x1fcd34: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1fcd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1fcd38: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fcd3c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fcd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fcd40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fcd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fcd44: 0x203a021  addu        $s4, $s0, $v1
    ctx->pc = 0x1fcd44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fcd48: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fcd48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fcd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd50: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x1fcd50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd54: 0x0  nop
    ctx->pc = 0x1fcd54u;
    // NOP
label_1fcd58:
    // 0x1fcd58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1fcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fcd5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCD5Cu;
    {
        const bool branch_taken_0x1fcd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd5c) {
            ctx->pc = 0x1FCD80u;
            goto label_1fcd80;
        }
    }
    ctx->pc = 0x1FCD64u;
    // 0x1fcd64: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fcd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fcd68: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fcd6c: 0x8c431380  lw          $v1, 0x1380($v0)
    ctx->pc = 0x1fcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4992)));
    // 0x1fcd70: 0x5060008f  beql        $v1, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x1FCD70u;
    {
        const bool branch_taken_0x1fcd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd70) {
            ctx->pc = 0x1FCD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCD70u;
            // 0x1fcd74: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFB0u;
            goto label_1fcfb0;
        }
    }
    ctx->pc = 0x1FCD78u;
    // 0x1fcd78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCD78u;
    {
        const bool branch_taken_0x1fcd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD78u;
        // 0x1fcd7c: 0x8ea50010  lw          $a1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd78) {
            ctx->pc = 0x1FCD98u;
            goto label_1fcd98;
        }
    }
    ctx->pc = 0x1FCD80u;
label_1fcd80:
    // 0x1fcd80: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1fcd80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1fcd84: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fcd88: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1FCD88u;
    SET_GPR_U32(ctx, 31, 0x1FCD90u);
    ctx->pc = 0x1FCD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD88u;
    // 0x1fcd8c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1FCD88u, 0x1FCD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD90u;
label_1fcd90:
    // 0x1fcd90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCD90u;
    {
        const bool branch_taken_0x1fcd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD90u;
        // 0x1fcd94: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd90) {
            ctx->pc = 0x1FCDACu;
            goto label_1fcdac;
        }
    }
    ctx->pc = 0x1FCD98u;
label_1fcd98:
    // 0x1fcd98: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1FCD98u;
    SET_GPR_U32(ctx, 31, 0x1FCDA0u);
    ctx->pc = 0x1FCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD98u;
    // 0x1fcd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1FCD98u, 0x1FCDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDA0u;
label_1fcda0:
    // 0x1fcda0: 0x5440008b  bnel        $v0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x1FCDA0u;
    {
        const bool branch_taken_0x1fcda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcda0) {
            ctx->pc = 0x1FCDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCDA0u;
            // 0x1fcda4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFD0u;
            goto label_1fcfd0;
        }
    }
    ctx->pc = 0x1FCDA8u;
    // 0x1fcda8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1fcda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1fcdac:
    // 0x1fcdac: 0x2048821  addu        $s1, $s0, $a0
    ctx->pc = 0x1fcdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fcdb0: 0x8e2215e8  lw          $v0, 0x15E8($s1)
    ctx->pc = 0x1fcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5608)));
    // 0x1fcdb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCDB4u;
    {
        const bool branch_taken_0x1fcdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDB4u;
        // 0x1fcdb8: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdb4) {
            ctx->pc = 0x1FCDE8u;
            goto label_1fcde8;
        }
    }
    ctx->pc = 0x1FCDBCu;
    // 0x1fcdbc: 0xa200010c  sb          $zero, 0x10C($s0)
    ctx->pc = 0x1fcdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcdc0: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x1fcdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x1fcdc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCDC4u;
    {
        const bool branch_taken_0x1fcdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDC4u;
        // 0x1fcdc8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdc4) {
            ctx->pc = 0x1FCDD8u;
            goto label_1fcdd8;
        }
    }
    ctx->pc = 0x1FCDCCu;
    // 0x1fcdcc: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x1fcdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x1fcdd0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1FCDD0u;
    {
        const bool branch_taken_0x1fcdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDD0u;
        // 0x1fcdd4: 0xa2020170  sb          $v0, 0x170($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdd0) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCDD8u;
label_1fcdd8:
    // 0x1fcdd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fcdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcddc: 0xe614016c  swc1        $f20, 0x16C($s0)
    ctx->pc = 0x1fcddcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1fcde0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1FCDE0u;
    {
        const bool branch_taken_0x1fcde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE0u;
        // 0x1fcde4: 0xa2030170  sb          $v1, 0x170($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcde0) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCDE8u;
label_1fcde8:
    // 0x1fcde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdec: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1FCDECu;
    SET_GPR_U32(ctx, 31, 0x1FCDF4u);
    ctx->pc = 0x1FCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDECu;
    // 0x1fcdf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1FCDECu, 0x1FCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDF4u;
label_1fcdf4:
    // 0x1fcdf4: 0x262313b8  addiu       $v1, $s1, 0x13B8
    ctx->pc = 0x1fcdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5048));
    // 0x1fcdf8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1fcdf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1fcdfc: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fce00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fce04: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1fce04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fce08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fce0c: 0x0  nop
    ctx->pc = 0x1fce0cu;
    // NOP
    // 0x1fce10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fce10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fce14: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1fce14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fce18: 0x0  nop
    ctx->pc = 0x1fce18u;
    // NOP
    // 0x1fce1c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1FCE1Cu;
    {
        const bool branch_taken_0x1fce1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE1Cu;
        // 0x1fce20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce1c) {
            ctx->pc = 0x1FCEA4u;
            goto label_1fcea4;
        }
    }
    ctx->pc = 0x1FCE24u;
    // 0x1fce24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1fce24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1fce28: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1FCE28u;
    SET_GPR_U32(ctx, 31, 0x1FCE30u);
    ctx->pc = 0x1FCE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE28u;
    // 0x1fce2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1FCE28u, 0x1FCE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE30u;
label_1fce30:
    // 0x1fce30: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1fce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1fce34: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1fce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fce38: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fce38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fce3c: 0x904513b0  lbu         $a1, 0x13B0($v0)
    ctx->pc = 0x1fce3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x1fce40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce44: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1FCE44u;
    SET_GPR_U32(ctx, 31, 0x1FCE4Cu);
    ctx->pc = 0x1FCE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE44u;
    // 0x1fce48: 0xc60d0110  lwc1        $f13, 0x110($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1FCE44u, 0x1FCE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE4Cu;
label_1fce4c:
    // 0x1fce4c: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x1fce4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fce50: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1fce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1fce54: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x1fce54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x1fce58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FCE58u;
    {
        const bool branch_taken_0x1fce58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE58u;
        // 0x1fce5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce58) {
            ctx->pc = 0x1FCE98u;
            goto label_1fce98;
        }
    }
    ctx->pc = 0x1FCE60u;
    // 0x1fce60: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x1FCE60u;
    SET_GPR_U32(ctx, 31, 0x1FCE68u);
    ctx->pc = 0x1FCE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE60u;
    // 0x1fce64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1FCE60u, 0x1FCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE68u;
label_1fce68:
    // 0x1fce68: 0x9202010c  lbu         $v0, 0x10C($s0)
    ctx->pc = 0x1fce68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1fce6c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1fce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fce70: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1fce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1fce74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fce78: 0x0  nop
    ctx->pc = 0x1fce78u;
    // NOP
    // 0x1fce7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fce7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fce80: 0xa2040170  sb          $a0, 0x170($s0)
    ctx->pc = 0x1fce80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fce84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fce84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fce88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fce88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fce8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fce8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fce90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FCE90u;
    {
        const bool branch_taken_0x1fce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE90u;
        // 0x1fce94: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce90) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCE98u;
label_1fce98:
    // 0x1fce98: 0xe614016c  swc1        $f20, 0x16C($s0)
    ctx->pc = 0x1fce98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1fce9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FCE9Cu;
    {
        const bool branch_taken_0x1fce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE9Cu;
        // 0x1fcea0: 0xa2020170  sb          $v0, 0x170($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce9c) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCEA4u;
label_1fcea4:
    // 0x1fcea4: 0xa200010c  sb          $zero, 0x10C($s0)
    ctx->pc = 0x1fcea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcea8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1fceac: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x1fceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x1fceb0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCEB0u;
    {
        const bool branch_taken_0x1fceb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB0u;
        // 0x1fceb4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb0) {
            ctx->pc = 0x1FCEC4u;
            goto label_1fcec4;
        }
    }
    ctx->pc = 0x1FCEB8u;
    // 0x1fceb8: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x1fceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x1fcebc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCEBCu;
    {
        const bool branch_taken_0x1fcebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEBCu;
        // 0x1fcec0: 0xa2030170  sb          $v1, 0x170($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcebc) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCEC4u;
label_1fcec4:
    // 0x1fcec4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fcec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcec8: 0xe614016c  swc1        $f20, 0x16C($s0)
    ctx->pc = 0x1fcec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1fcecc: 0xa2040170  sb          $a0, 0x170($s0)
    ctx->pc = 0x1fceccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 4));
label_1fced0:
    // 0x1fced0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fced4: 0x26e50010  addiu       $a1, $s7, 0x10
    ctx->pc = 0x1fced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1fced8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x1fced8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fcedc: 0x8ce31344  lw          $v1, 0x1344($a3)
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4932)));
    // 0x1fcee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcee4: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x1fcee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcee8: 0xf32021  addu        $a0, $a3, $s3
    ctx->pc = 0x1fcee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1fceec: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1fceecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1fcef0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fcef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcef4: 0xa60500f4  sh          $a1, 0xF4($s0)
    ctx->pc = 0x1fcef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fcef8: 0x8c8213a8  lw          $v0, 0x13A8($a0)
    ctx->pc = 0x1fcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5032)));
    // 0x1fcefc: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1fcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1fcf00: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1fcf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1fcf04: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1fcf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1fcf08: 0x8cc215c0  lw          $v0, 0x15C0($a2)
    ctx->pc = 0x1fcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5568)));
    // 0x1fcf0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCF0Cu;
    {
        const bool branch_taken_0x1fcf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf0c) {
            ctx->pc = 0x1FCF28u;
            goto label_1fcf28;
        }
    }
    ctx->pc = 0x1FCF14u;
    // 0x1fcf14: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1fcf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fcf18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcf1c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1fcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1fcf20: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fcf20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcf24: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1fcf24u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1fcf28:
    // 0x1fcf28: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1fcf28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fcf2c: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1fcf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fcf30: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1fcf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1fcf34: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x1fcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1fcf38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fcf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcf40: 0x904313b0  lbu         $v1, 0x13B0($v0)
    ctx->pc = 0x1fcf40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x1fcf44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf48: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x1fcf48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fcf4c: 0xc48013b8  lwc1        $f0, 0x13B8($a0)
    ctx->pc = 0x1fcf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcf50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fcf50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fcf54: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1fcf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1fcf58: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1fcf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1fcf5c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1fcf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1fcf60: 0xa2000154  sb          $zero, 0x154($s0)
    ctx->pc = 0x1fcf60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 340), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcf64: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1fcf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1fcf68: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1fcf68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcf6c: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1fcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1fcf70: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1fcf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1fcf74: 0xae060140  sw          $a2, 0x140($s0)
    ctx->pc = 0x1fcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 6));
    // 0x1fcf78: 0xae160144  sw          $s6, 0x144($s0)
    ctx->pc = 0x1fcf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 22));
    // 0x1fcf7c: 0x8ca21380  lw          $v0, 0x1380($a1)
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4992)));
    // 0x1fcf80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCF80u;
    {
        const bool branch_taken_0x1fcf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF80u;
        // 0x1fcf84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf80) {
            ctx->pc = 0x1FCF94u;
            goto label_1fcf94;
        }
    }
    ctx->pc = 0x1FCF88u;
    // 0x1fcf88: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1fcf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1fcf8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCF8Cu;
    {
        const bool branch_taken_0x1fcf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF8Cu;
        // 0x1fcf90: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf8c) {
            ctx->pc = 0x1FCF9Cu;
            goto label_1fcf9c;
        }
    }
    ctx->pc = 0x1FCF94u;
label_1fcf94:
    // 0x1fcf94: 0xae060114  sw          $a2, 0x114($s0)
    ctx->pc = 0x1fcf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 6));
    // 0x1fcf98: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1fcf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_1fcf9c:
    // 0x1fcf9c: 0xa2170169  sb          $s7, 0x169($s0)
    ctx->pc = 0x1fcf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 361), (uint8_t)GPR_U32(ctx, 23));
    // 0x1fcfa0: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FCFA0u;
    SET_GPR_U32(ctx, 31, 0x1FCFA8u);
    ctx->pc = 0x1FCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFA0u;
    // 0x1fcfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FCFA0u, 0x1FCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFA8u;
label_1fcfa8:
    // 0x1fcfa8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1fcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1fcfac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fcfacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1fcfb0:
    // 0x1fcfb0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1fcfb4: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1fcfb8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1fcfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1fcfbc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1fcfbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1fcfc0: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x1fcfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fcfc4: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x1FCFC4u;
    {
        const bool branch_taken_0x1fcfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC4u;
        // 0x1fcfc8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc4) {
            ctx->pc = 0x1FCD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcd58;
        }
    }
    ctx->pc = 0x1FCFCCu;
label_1fcfcc:
    // 0x1fcfcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fcfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fcfd0:
    // 0x1fcfd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fcfd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcfd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fcfd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcfd8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fcfd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fcfdc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1fcfdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcfe0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fcfe4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1fcfe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcfe8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcfec: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1fcfecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fcff0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1fcff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcff4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1fcff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fcff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF8u;
        // 0x1fcffc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD000u;
}
