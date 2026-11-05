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

// Function: sub_002F7330
// Address: 0x2f7330 - 0x2f7518
void sub_002F7330_0x2f7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7330_0x2f7330");
#endif

    switch (ctx->pc) {
        case 0x2f7394u: goto label_2f7394;
        case 0x2f73c8u: goto label_2f73c8;
        default: break;
    }

    ctx->pc = 0x2f7330u;

    // 0x2f7330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7334: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7338: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f7338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f733c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7340: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x2f7340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2f7344: 0x317f8  dsll        $v0, $v1, 31
    ctx->pc = 0x2f7344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 31);
    // 0x2f7348: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2f7348u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x2f734c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f7350: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f7350u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f7354: 0x5440006b  bnel        $v0, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x2F7354u;
    {
        const bool branch_taken_0x2f7354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7354) {
            ctx->pc = 0x2F7358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7354u;
            // 0x2f7358: 0xae001004  sw          $zero, 0x1004($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7504u;
            goto label_2f7504;
        }
    }
    ctx->pc = 0x2F735Cu;
    // 0x2f735c: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x2f735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
    // 0x2f7360: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2f7360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x2f7364: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f7364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f7368: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f7368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f736c: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x2F736Cu;
    {
        const bool branch_taken_0x2f736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f736c) {
            ctx->pc = 0x2F7370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F736Cu;
            // 0x2f7370: 0xae001004  sw          $zero, 0x1004($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7504u;
            goto label_2f7504;
        }
    }
    ctx->pc = 0x2F7374u;
    // 0x2f7374: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f7374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f7378: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x2f7378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x2f737c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F737Cu;
    {
        const bool branch_taken_0x2f737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f737c) {
            ctx->pc = 0x2F738Cu;
            goto label_2f738c;
        }
    }
    ctx->pc = 0x2F7384u;
    // 0x2f7384: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2F7384u;
    {
        const bool branch_taken_0x2f7384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7384u;
        // 0x2f7388: 0xae001004  sw          $zero, 0x1004($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7384) {
            ctx->pc = 0x2F7504u;
            goto label_2f7504;
        }
    }
    ctx->pc = 0x2F738Cu;
label_2f738c:
    // 0x2f738c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F738Cu;
    SET_GPR_U32(ctx, 31, 0x2F7394u);
    ctx->pc = 0x2F7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F738Cu;
    // 0x2f7390: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F738Cu, 0x2F7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7394u;
label_2f7394:
    // 0x2f7394: 0x8e040ffc  lw          $a0, 0xFFC($s0)
    ctx->pc = 0x2f7394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
    // 0x2f7398: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2f7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2f739c: 0xc4461b80  lwc1        $f6, 0x1B80($v0)
    ctx->pc = 0x2f739cu;
    { uint32_t bits = FAST_READ32(0x471B80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2f73a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f73a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f73a4: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x2f73a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2f73a8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2f73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2f73ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f73acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f73b0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2f73b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2f73b4: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F73B4u;
    {
        const bool branch_taken_0x2f73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F73B4u;
        // 0x2f73b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f73b4) {
            ctx->pc = 0x2F7500u;
            goto label_2f7500;
        }
    }
    ctx->pc = 0x2F73BCu;
    // 0x2f73bc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2f73bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f73c0: 0x8e030ffc  lw          $v1, 0xFFC($s0)
    ctx->pc = 0x2f73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
    // 0x2f73c4: 0x0  nop
    ctx->pc = 0x2f73c4u;
    // NOP
label_2f73c8:
    // 0x2f73c8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2f73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f73cc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2f73d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f73d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2f73d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f73d8: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x2f73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x2f73dc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2f73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f73e0: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F73E0u;
    {
        const bool branch_taken_0x2f73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f73e0) {
            ctx->pc = 0x2F73E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F73E0u;
            // 0x2f73e4: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F73E8u;
    // 0x2f73e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2f73e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2f73ec: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F73ECu;
    {
        const bool branch_taken_0x2f73ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f73ec) {
            ctx->pc = 0x2F73F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F73ECu;
            // 0x2f73f0: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F73F4u;
    // 0x2f73f4: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x2f73f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f73f8: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2f73f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f73fc: 0x0  nop
    ctx->pc = 0x2f73fcu;
    // NOP
    // 0x2f7400: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x2F7400u;
    {
        const bool branch_taken_0x2f7400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7400) {
            ctx->pc = 0x2F7404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7400u;
            // 0x2f7404: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F7408u;
    // 0x2f7408: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f7408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2f740c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F740Cu;
    {
        const bool branch_taken_0x2f740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F740Cu;
        // 0x2f7410: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f740c) {
            ctx->pc = 0x2F7420u;
            goto label_2f7420;
        }
    }
    ctx->pc = 0x2F7414u;
    // 0x2f7414: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f7414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f7418: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7418u;
    {
        const bool branch_taken_0x2f7418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7418) {
            ctx->pc = 0x2F7424u;
            goto label_2f7424;
        }
    }
    ctx->pc = 0x2F7420u;
label_2f7420:
    // 0x2f7420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7424:
    // 0x2f7424: 0x5080002e  beql        $a0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F7424u;
    {
        const bool branch_taken_0x2f7424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7424) {
            ctx->pc = 0x2F7428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7424u;
            // 0x2f7428: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F742Cu;
    // 0x2f742c: 0x8cc2036c  lw          $v0, 0x36C($a2)
    ctx->pc = 0x2f742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 876)));
    // 0x2f7430: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f7430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2f7434: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F7434u;
    {
        const bool branch_taken_0x2f7434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7434) {
            ctx->pc = 0x2F7438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7434u;
            // 0x2f7438: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F743Cu;
    // 0x2f743c: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x2f743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x2f7440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f7440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f7444: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F7444u;
    {
        const bool branch_taken_0x2f7444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7444) {
            ctx->pc = 0x2F7448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7444u;
            // 0x2f7448: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F744Cu;
    // 0x2f744c: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x2f744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x2f7450: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2f7450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f7454: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7458: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f7458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f745c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2f7460: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f7464: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f7464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7468: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f7468u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f746c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f746cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f7470: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f7470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f7474: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f7478: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f7478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f747c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f7480: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f7480u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f7484: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f7484u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f7488: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f7488u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f748c: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x2f748cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7490: 0x0  nop
    ctx->pc = 0x2f7490u;
    // NOP
    // 0x2f7494: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2F7494u;
    {
        const bool branch_taken_0x2f7494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7494) {
            ctx->pc = 0x2F7498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7494u;
            // 0x2f7498: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F749Cu;
    // 0x2f749c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f74a0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2f74a4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f74a8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2f74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f74ac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f74acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f74b0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2f74b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f74b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f74b8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f74b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2f74bc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2f74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f74c0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2f74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f74c4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2f74c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f74c8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2f74c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f74cc: 0x0  nop
    ctx->pc = 0x2f74ccu;
    // NOP
    // 0x2f74d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F74D0u;
    {
        const bool branch_taken_0x2f74d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74D0u;
        // 0x2f74d4: 0x8e020ffc  lw          $v0, 0xFFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74d0) {
            ctx->pc = 0x2F74E0u;
            goto label_2f74e0;
        }
    }
    ctx->pc = 0x2F74D8u;
    // 0x2f74d8: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x2f74d8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
    // 0x2f74dc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2f74dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f74e0:
    // 0x2f74e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f74e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f74e4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2f74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2f74e8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2f74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2f74ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f74f0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2f74f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2f74f4: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x2f74f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f74f8: 0x5460ffb3  bnel        $v1, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x2F74F8u;
    {
        const bool branch_taken_0x2f74f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f74f8) {
            ctx->pc = 0x2F74FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F74F8u;
            // 0x2f74fc: 0x8e030ffc  lw          $v1, 0xFFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F73C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f73c8;
        }
    }
    ctx->pc = 0x2F7500u;
label_2f7500:
    // 0x2f7500: 0xae081004  sw          $t0, 0x1004($s0)
    ctx->pc = 0x2f7500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4100), GPR_U32(ctx, 8));
label_2f7504:
    // 0x2f7504: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7508: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f7508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f750c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F750Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F750Cu;
        // 0x2f7510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F750Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7514u;
    // 0x2f7514: 0x0  nop
    ctx->pc = 0x2f7514u;
    // NOP
    ctx->pc = 0x2f7518u;
}
