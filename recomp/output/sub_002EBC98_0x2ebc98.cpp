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

// Function: sub_002EBC98
// Address: 0x2ebc98 - 0x2ed480
void sub_002EBC98_0x2ebc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBC98_0x2ebc98");
#endif

    switch (ctx->pc) {
        case 0x2ebd1cu: goto label_2ebd1c;
        case 0x2ebd2cu: goto label_2ebd2c;
        case 0x2ebd68u: goto label_2ebd68;
        case 0x2ebda8u: goto label_2ebda8;
        case 0x2ebe08u: goto label_2ebe08;
        case 0x2ebf70u: goto label_2ebf70;
        case 0x2ebfa0u: goto label_2ebfa0;
        case 0x2ebfacu: goto label_2ebfac;
        case 0x2ebfb8u: goto label_2ebfb8;
        case 0x2ebfc4u: goto label_2ebfc4;
        case 0x2ebff4u: goto label_2ebff4;
        case 0x2ec008u: goto label_2ec008;
        case 0x2ec014u: goto label_2ec014;
        case 0x2ec040u: goto label_2ec040;
        case 0x2ec0a4u: goto label_2ec0a4;
        case 0x2ec0b8u: goto label_2ec0b8;
        case 0x2ec0dcu: goto label_2ec0dc;
        case 0x2ec224u: goto label_2ec224;
        case 0x2ec240u: goto label_2ec240;
        case 0x2ec464u: goto label_2ec464;
        case 0x2ec4a0u: goto label_2ec4a0;
        case 0x2ec52cu: goto label_2ec52c;
        case 0x2ec548u: goto label_2ec548;
        case 0x2ec57cu: goto label_2ec57c;
        case 0x2ec624u: goto label_2ec624;
        case 0x2ec724u: goto label_2ec724;
        case 0x2ec770u: goto label_2ec770;
        case 0x2ec784u: goto label_2ec784;
        case 0x2ec82cu: goto label_2ec82c;
        case 0x2ec874u: goto label_2ec874;
        case 0x2ec978u: goto label_2ec978;
        case 0x2ec9f4u: goto label_2ec9f4;
        case 0x2ecb10u: goto label_2ecb10;
        case 0x2ecc1cu: goto label_2ecc1c;
        case 0x2ecc68u: goto label_2ecc68;
        case 0x2ece7cu: goto label_2ece7c;
        case 0x2ecfe8u: goto label_2ecfe8;
        case 0x2ed070u: goto label_2ed070;
        case 0x2ed0bcu: goto label_2ed0bc;
        case 0x2ed10cu: goto label_2ed10c;
        case 0x2ed11cu: goto label_2ed11c;
        case 0x2ed12cu: goto label_2ed12c;
        case 0x2ed1e8u: goto label_2ed1e8;
        case 0x2ed264u: goto label_2ed264;
        case 0x2ed31cu: goto label_2ed31c;
        case 0x2ed3b0u: goto label_2ed3b0;
        case 0x2ed3d0u: goto label_2ed3d0;
        case 0x2ed3e0u: goto label_2ed3e0;
        case 0x2ed3e8u: goto label_2ed3e8;
        case 0x2ed3f8u: goto label_2ed3f8;
        case 0x2ed408u: goto label_2ed408;
        case 0x2ed418u: goto label_2ed418;
        default: break;
    }

    ctx->pc = 0x2ebc98u;

    // 0x2ebc98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ebc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ebc9c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2ebc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2ebca0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2ebca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2ebca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebca8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2ebca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2ebcac: 0x260304fc  addiu       $v1, $s0, 0x4FC
    ctx->pc = 0x2ebcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1276));
    // 0x2ebcb0: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2ebcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2ebcb4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebcb8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2ebcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2ebcbc: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2ebcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2ebcc0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2ebcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2ebcc4: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2ebcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2ebcc8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2ebcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ebccc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2ebcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2ebcd0: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x2ebcd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2ebcd4: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2ebcd4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2ebcd8: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2ebcd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ebcdc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ebcdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ebce0: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ebce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebce4: 0xe6000514  swc1        $f0, 0x514($s0)
    ctx->pc = 0x2ebce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1300), bits); }
    // 0x2ebce8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ebce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebcec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ebcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ebcf0: 0xe6010518  swc1        $f1, 0x518($s0)
    ctx->pc = 0x2ebcf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1304), bits); }
    // 0x2ebcf4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ebcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ebcf8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ebcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebcfc: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ebcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ebd00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ebd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2ebd04: 0x8c82bd70  lw          $v0, -0x4290($a0)
    ctx->pc = 0x2ebd04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x2ebd08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ebd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ebd0c: 0x544005cc  bnel        $v0, $zero, . + 4 + (0x5CC << 2)
    ctx->pc = 0x2EBD0Cu;
    {
        const bool branch_taken_0x2ebd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebd0c) {
            ctx->pc = 0x2EBD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBD0Cu;
            // 0x2ebd10: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2EBD14u;
    // 0x2ebd14: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2EBD14u;
    SET_GPR_U32(ctx, 31, 0x2EBD1Cu);
    ctx->pc = 0x2EBD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD14u;
    // 0x2ebd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2EBD14u, 0x2EBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD1Cu;
label_2ebd1c:
    // 0x2ebd1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EBD1Cu;
    {
        const bool branch_taken_0x2ebd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD1Cu;
        // 0x2ebd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd1c) {
            ctx->pc = 0x2EBD68u;
            goto label_2ebd68;
        }
    }
    ctx->pc = 0x2EBD24u;
    // 0x2ebd24: 0xc0bb79e  jal         func_2EDE78
    ctx->pc = 0x2EBD24u;
    SET_GPR_U32(ctx, 31, 0x2EBD2Cu);
    ctx->pc = 0x2EBD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD24u;
    // 0x2ebd28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE78u, 0x2EBD24u, 0x2EBD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD2Cu;
label_2ebd2c:
    // 0x2ebd2c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EBD2Cu;
    {
        const bool branch_taken_0x2ebd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD2Cu;
        // 0x2ebd30: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd2c) {
            ctx->pc = 0x2EBD6Cu;
            goto label_2ebd6c;
        }
    }
    ctx->pc = 0x2EBD34u;
    // 0x2ebd34: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2ebd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2ebd38: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2ebd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2ebd3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ebd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2464u));
    // 0x2ebd40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ebd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ebd44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBD44u;
    {
        const bool branch_taken_0x2ebd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD44u;
        // 0x2ebd48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd44) {
            ctx->pc = 0x2EBD58u;
            goto label_2ebd58;
        }
    }
    ctx->pc = 0x2EBD4Cu;
    // 0x2ebd4c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ebd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ebd50: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ebd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ebd54: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2ebd54u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ebd58:
    // 0x2ebd58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBD58u;
    {
        const bool branch_taken_0x2ebd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD58u;
        // 0x2ebd5c: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd58) {
            ctx->pc = 0x2EBD6Cu;
            goto label_2ebd6c;
        }
    }
    ctx->pc = 0x2EBD60u;
    // 0x2ebd60: 0xc0bb53a  jal         func_2ED4E8
    ctx->pc = 0x2EBD60u;
    SET_GPR_U32(ctx, 31, 0x2EBD68u);
    ctx->pc = 0x2EBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD60u;
    // 0x2ebd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED4E8u, 0x2EBD60u, 0x2EBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD68u;
label_2ebd68:
    // 0x2ebd68: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2ebd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2ebd6c:
    // 0x2ebd6c: 0x2463cb28  addiu       $v1, $v1, -0x34D8
    ctx->pc = 0x2ebd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x2ebd70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ebd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ebd74: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBD74u;
    {
        const bool branch_taken_0x2ebd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD74u;
        // 0x2ebd78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd74) {
            ctx->pc = 0x2EBD94u;
            goto label_2ebd94;
        }
    }
    ctx->pc = 0x2EBD7Cu;
    // 0x2ebd7c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2ebd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2ebd80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBD80u;
    {
        const bool branch_taken_0x2ebd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebd80) {
            ctx->pc = 0x2EBD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBD80u;
            // 0x2ebd84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBD98u;
            goto label_2ebd98;
        }
    }
    ctx->pc = 0x2EBD88u;
    // 0x2ebd88: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2ebd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2ebd8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBD8Cu;
    {
        const bool branch_taken_0x2ebd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebd8c) {
            ctx->pc = 0x2EBD98u;
            goto label_2ebd98;
        }
    }
    ctx->pc = 0x2EBD94u;
label_2ebd94:
    // 0x2ebd94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ebd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebd98:
    // 0x2ebd98: 0x548005a9  bnel        $a0, $zero, . + 4 + (0x5A9 << 2)
    ctx->pc = 0x2EBD98u;
    {
        const bool branch_taken_0x2ebd98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebd98) {
            ctx->pc = 0x2EBD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBD98u;
            // 0x2ebd9c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2EBDA0u;
    // 0x2ebda0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2EBDA0u;
    SET_GPR_U32(ctx, 31, 0x2EBDA8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2EBDA0u, 0x2EBDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBDA8u;
label_2ebda8:
    // 0x2ebda8: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x2ebda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2ebdac: 0x546005a4  bnel        $v1, $zero, . + 4 + (0x5A4 << 2)
    ctx->pc = 0x2EBDACu;
    {
        const bool branch_taken_0x2ebdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebdac) {
            ctx->pc = 0x2EBDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBDACu;
            // 0x2ebdb0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2EBDB4u;
    // 0x2ebdb4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ebdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ebdb8: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x2ebdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x2ebdbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBDBCu;
    {
        const bool branch_taken_0x2ebdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDBCu;
        // 0x2ebdc0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdbc) {
            ctx->pc = 0x2EBDD0u;
            goto label_2ebdd0;
        }
    }
    ctx->pc = 0x2EBDC4u;
    // 0x2ebdc4: 0x8c43bd68  lw          $v1, -0x4298($v0)
    ctx->pc = 0x2ebdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950248)));
    // 0x2ebdc8: 0x5060059d  beql        $v1, $zero, . + 4 + (0x59D << 2)
    ctx->pc = 0x2EBDC8u;
    {
        const bool branch_taken_0x2ebdc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebdc8) {
            ctx->pc = 0x2EBDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBDC8u;
            // 0x2ebdcc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2EBDD0u;
label_2ebdd0:
    // 0x2ebdd0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ebdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ebdd4: 0x8c434074  lw          $v1, 0x4074($v0)
    ctx->pc = 0x2ebdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x594074u));
    // 0x2ebdd8: 0x54600599  bnel        $v1, $zero, . + 4 + (0x599 << 2)
    ctx->pc = 0x2EBDD8u;
    {
        const bool branch_taken_0x2ebdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebdd8) {
            ctx->pc = 0x2EBDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBDD8u;
            // 0x2ebddc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2EBDE0u;
    // 0x2ebde0: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x2ebde0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2ebde4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2ebde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2ebde8: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x2ebde8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x2ebdec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ebdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ebdf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ebdf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ebdf4: 0x54400592  bnel        $v0, $zero, . + 4 + (0x592 << 2)
    ctx->pc = 0x2EBDF4u;
    {
        const bool branch_taken_0x2ebdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebdf4) {
            ctx->pc = 0x2EBDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBDF4u;
            // 0x2ebdf8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2EBDFCu;
    // 0x2ebdfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe00: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2EBE00u;
    SET_GPR_U32(ctx, 31, 0x2EBE08u);
    ctx->pc = 0x2EBE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBE00u;
    // 0x2ebe04: 0x8e1700b8  lw          $s7, 0xB8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EBE00u, 0x2EBE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE08u;
label_2ebe08:
    // 0x2ebe08: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2ebe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2ebe0c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2ebe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2ebe10: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2ebe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ebe14: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2ebe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2ebe18: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBE18u;
    {
        const bool branch_taken_0x2ebe18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE18u;
        // 0x2ebe1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe18) {
            ctx->pc = 0x2EBE30u;
            goto label_2ebe30;
        }
    }
    ctx->pc = 0x2EBE20u;
    // 0x2ebe20: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2ebe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2ebe24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ebe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ebe28: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBE28u;
    {
        const bool branch_taken_0x2ebe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ebe28) {
            ctx->pc = 0x2EBE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBE28u;
            // 0x2ebe2c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBE40u;
            goto label_2ebe40;
        }
    }
    ctx->pc = 0x2EBE30u;
label_2ebe30:
    // 0x2ebe30: 0x920210ce  lbu         $v0, 0x10CE($s0)
    ctx->pc = 0x2ebe30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4302)));
    // 0x2ebe34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBE34u;
    {
        const bool branch_taken_0x2ebe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE34u;
        // 0x2ebe38: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe34) {
            ctx->pc = 0x2EBE54u;
            goto label_2ebe54;
        }
    }
    ctx->pc = 0x2EBE3Cu;
    // 0x2ebe3c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ebe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ebe40:
    // 0x2ebe40: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ebe40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebe44: 0xae0004fc  sw          $zero, 0x4FC($s0)
    ctx->pc = 0x2ebe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 0));
    // 0x2ebe48: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2ebe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2ebe4c: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ebe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2ebe50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ebe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2ebe54:
    // 0x2ebe54: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2ebe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945416)));
    // 0x2ebe58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBE58u;
    {
        const bool branch_taken_0x2ebe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE58u;
        // 0x2ebe5c: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe58) {
            ctx->pc = 0x2EBE74u;
            goto label_2ebe74;
        }
    }
    ctx->pc = 0x2EBE60u;
    // 0x2ebe60: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ebe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ebe64: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2ebe64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebe68: 0x8c432460  lw          $v1, 0x2460($v0)
    ctx->pc = 0x2ebe68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2460u));
    // 0x2ebe6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBE6Cu;
    {
        const bool branch_taken_0x2ebe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE6Cu;
        // 0x2ebe70: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe6c) {
            ctx->pc = 0x2EBE78u;
            goto label_2ebe78;
        }
    }
    ctx->pc = 0x2EBE74u;
label_2ebe74:
    // 0x2ebe74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ebe74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebe78:
    // 0x2ebe78: 0x5060009a  beql        $v1, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x2EBE78u;
    {
        const bool branch_taken_0x2ebe78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe78) {
            ctx->pc = 0x2EBE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBE78u;
            // 0x2ebe7c: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC0E4u;
            goto label_2ec0e4;
        }
    }
    ctx->pc = 0x2EBE80u;
    // 0x2ebe80: 0x56400098  bnel        $s2, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x2EBE80u;
    {
        const bool branch_taken_0x2ebe80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe80) {
            ctx->pc = 0x2EBE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBE80u;
            // 0x2ebe84: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC0E4u;
            goto label_2ec0e4;
        }
    }
    ctx->pc = 0x2EBE88u;
    // 0x2ebe88: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2ebe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2ebe8c: 0x8e0505a0  lw          $a1, 0x5A0($s0)
    ctx->pc = 0x2ebe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x2ebe90: 0x24622450  addiu       $v0, $v1, 0x2450
    ctx->pc = 0x2ebe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2ebe94: 0xc4602450  lwc1        $f0, 0x2450($v1)
    ctx->pc = 0x2ebe94u;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebe98: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ebe98u;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ebe9c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2ebe9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ebea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebea4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2ebea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ebea8: 0xe6000504  swc1        $f0, 0x504($s0)
    ctx->pc = 0x2ebea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
    // 0x2ebeac: 0x14a40023  bne         $a1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EBEACu;
    {
        const bool branch_taken_0x2ebeac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEACu;
        // 0x2ebeb0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebeac) {
            ctx->pc = 0x2EBF3Cu;
            goto label_2ebf3c;
        }
    }
    ctx->pc = 0x2EBEB4u;
    // 0x2ebeb4: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x2ebeb4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x2ebeb8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ebeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2ebebc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ebebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ebec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ebec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebec4: 0x0  nop
    ctx->pc = 0x2ebec4u;
    // NOP
    // 0x2ebec8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ebec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebecc: 0x0  nop
    ctx->pc = 0x2ebeccu;
    // NOP
    // 0x2ebed0: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x2EBED0u;
    {
        const bool branch_taken_0x2ebed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ebed0) {
            ctx->pc = 0x2EBED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBED0u;
            // 0x2ebed4: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF44u;
            goto label_2ebf44;
        }
    }
    ctx->pc = 0x2EBED8u;
    // 0x2ebed8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ebed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebedc: 0x0  nop
    ctx->pc = 0x2ebedcu;
    // NOP
    // 0x2ebee0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ebee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebee4: 0x0  nop
    ctx->pc = 0x2ebee4u;
    // NOP
    // 0x2ebee8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBEE8u;
    {
        const bool branch_taken_0x2ebee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEE8u;
        // 0x2ebeec: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebee8) {
            ctx->pc = 0x2EBF0Cu;
            goto label_2ebf0c;
        }
    }
    ctx->pc = 0x2EBEF0u;
    // 0x2ebef0: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x2ebef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ebef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebef8: 0x0  nop
    ctx->pc = 0x2ebef8u;
    // NOP
    // 0x2ebefc: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2EBEFCu;
    {
        const bool branch_taken_0x2ebefc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ebefc) {
            ctx->pc = 0x2EBF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBEFCu;
            // 0x2ebf00: 0xe6010508  swc1        $f1, 0x508($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF40u;
            goto label_2ebf40;
        }
    }
    ctx->pc = 0x2EBF04u;
    // 0x2ebf04: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ebf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebf08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ebf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ebf0c:
    // 0x2ebf0c: 0x0  nop
    ctx->pc = 0x2ebf0cu;
    // NOP
    // 0x2ebf10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ebf10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebf14: 0x0  nop
    ctx->pc = 0x2ebf14u;
    // NOP
    // 0x2ebf18: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBF18u;
    {
        const bool branch_taken_0x2ebf18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF18u;
        // 0x2ebf1c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf18) {
            ctx->pc = 0x2EBF3Cu;
            goto label_2ebf3c;
        }
    }
    ctx->pc = 0x2EBF20u;
    // 0x2ebf20: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x2ebf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebf24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ebf24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebf28: 0x0  nop
    ctx->pc = 0x2ebf28u;
    // NOP
    // 0x2ebf2c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBF2Cu;
    {
        const bool branch_taken_0x2ebf2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ebf2c) {
            ctx->pc = 0x2EBF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBF2Cu;
            // 0x2ebf30: 0xe6020508  swc1        $f2, 0x508($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF40u;
            goto label_2ebf40;
        }
    }
    ctx->pc = 0x2EBF34u;
    // 0x2ebf34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EBF34u;
    {
        const bool branch_taken_0x2ebf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF34u;
        // 0x2ebf38: 0xe6010508  swc1        $f1, 0x508($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf34) {
            ctx->pc = 0x2EBF40u;
            goto label_2ebf40;
        }
    }
    ctx->pc = 0x2EBF3Cu;
label_2ebf3c:
    // 0x2ebf3c: 0xe6020508  swc1        $f2, 0x508($s0)
    ctx->pc = 0x2ebf3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
label_2ebf40:
    // 0x2ebf40: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ebf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ebf44:
    // 0x2ebf44: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ebf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ebf48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ebf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ebf4c: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EBF4Cu;
    {
        const bool branch_taken_0x2ebf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF4Cu;
        // 0x2ebf50: 0x260204fc  addiu       $v0, $s0, 0x4FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf4c) {
            ctx->pc = 0x2EBFCCu;
            goto label_2ebfcc;
        }
    }
    ctx->pc = 0x2EBF54u;
    // 0x2ebf54: 0xc6000504  lwc1        $f0, 0x504($s0)
    ctx->pc = 0x2ebf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebf58: 0xc6010508  lwc1        $f1, 0x508($s0)
    ctx->pc = 0x2ebf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf60: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ebf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ebf64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ebf64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf68: 0xc08f684  jal         func_23DA10
    ctx->pc = 0x2EBF68u;
    SET_GPR_U32(ctx, 31, 0x2EBF70u);
    ctx->pc = 0x2EBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF68u;
    // 0x2ebf6c: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA10u, 0x2EBF68u, 0x2EBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF70u;
label_2ebf70:
    // 0x2ebf70: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2EBF70u;
    {
        const bool branch_taken_0x2ebf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF70u;
        // 0x2ebf74: 0x26222450  addiu       $v0, $s1, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf70) {
            ctx->pc = 0x2EC040u;
            goto label_2ec040;
        }
    }
    ctx->pc = 0x2EBF78u;
    // 0x2ebf78: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x2ebf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
    // 0x2ebf7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ebf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebf80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ebf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebf84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ebf84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebf88: 0x0  nop
    ctx->pc = 0x2ebf88u;
    // NOP
    // 0x2ebf8c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2EBF8Cu;
    {
        const bool branch_taken_0x2ebf8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF8Cu;
        // 0x2ebf90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf8c) {
            ctx->pc = 0x2EC040u;
            goto label_2ec040;
        }
    }
    ctx->pc = 0x2EBF94u;
    // 0x2ebf94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf98: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x2EBF98u;
    SET_GPR_U32(ctx, 31, 0x2EBFA0u);
    ctx->pc = 0x2EBF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF98u;
    // 0x2ebf9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x2EBF98u, 0x2EBFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFA0u;
label_2ebfa0:
    // 0x2ebfa0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2ebfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ebfa4: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x2EBFA4u;
    SET_GPR_U32(ctx, 31, 0x2EBFACu);
    ctx->pc = 0x2EBFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFA4u;
    // 0x2ebfa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2EBFA4u, 0x2EBFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFACu;
label_2ebfac:
    // 0x2ebfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfb0: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x2EBFB0u;
    SET_GPR_U32(ctx, 31, 0x2EBFB8u);
    ctx->pc = 0x2EBFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFB0u;
    // 0x2ebfb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x2EBFB0u, 0x2EBFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFB8u;
label_2ebfb8:
    // 0x2ebfb8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2ebfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ebfbc: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x2EBFBCu;
    SET_GPR_U32(ctx, 31, 0x2EBFC4u);
    ctx->pc = 0x2EBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFBCu;
    // 0x2ebfc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2EBFBCu, 0x2EBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFC4u;
label_2ebfc4:
    // 0x2ebfc4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2EBFC4u;
    {
        const bool branch_taken_0x2ebfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFC4u;
        // 0x2ebfc8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfc4) {
            ctx->pc = 0x2EC044u;
            goto label_2ec044;
        }
    }
    ctx->pc = 0x2EBFCCu;
label_2ebfcc:
    // 0x2ebfcc: 0x26222450  addiu       $v0, $s1, 0x2450
    ctx->pc = 0x2ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9296));
    // 0x2ebfd0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2ebfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2ebfd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ebfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ebfd8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ebfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebfdc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ebfdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ebfe0: 0x0  nop
    ctx->pc = 0x2ebfe0u;
    // NOP
    // 0x2ebfe4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2EBFE4u;
    {
        const bool branch_taken_0x2ebfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFE4u;
        // 0x2ebfe8: 0xc6202450  lwc1        $f0, 0x2450($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfe4) {
            ctx->pc = 0x2EC01Cu;
            goto label_2ec01c;
        }
    }
    ctx->pc = 0x2EBFECu;
    // 0x2ebfec: 0xc08f684  jal         func_23DA10
    ctx->pc = 0x2EBFECu;
    SET_GPR_U32(ctx, 31, 0x2EBFF4u);
    ctx->pc = 0x2EBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFECu;
    // 0x2ebff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA10u, 0x2EBFECu, 0x2EBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFF4u;
label_2ebff4:
    // 0x2ebff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBFF4u;
    {
        const bool branch_taken_0x2ebff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFF4u;
        // 0x2ebff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebff4) {
            ctx->pc = 0x2EC008u;
            goto label_2ec008;
        }
    }
    ctx->pc = 0x2EBFFCu;
    // 0x2ebffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec000: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x2EC000u;
    SET_GPR_U32(ctx, 31, 0x2EC008u);
    ctx->pc = 0x2EC004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC000u;
    // 0x2ec004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x2EC000u, 0x2EC008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC008u;
label_2ec008:
    // 0x2ec008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec00c: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x2EC00Cu;
    SET_GPR_U32(ctx, 31, 0x2EC014u);
    ctx->pc = 0x2EC010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC00Cu;
    // 0x2ec010: 0x261604fc  addiu       $s6, $s0, 0x4FC (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2EC00Cu, 0x2EC014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC014u;
label_2ec014:
    // 0x2ec014: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EC014u;
    {
        const bool branch_taken_0x2ec014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC014u;
        // 0x2ec018: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec014) {
            ctx->pc = 0x2EC044u;
            goto label_2ec044;
        }
    }
    ctx->pc = 0x2EC01Cu;
label_2ec01c:
    // 0x2ec01c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ec01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ec020: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec028: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ec028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec02c: 0x0  nop
    ctx->pc = 0x2ec02cu;
    // NOP
    // 0x2ec030: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC030u;
    {
        const bool branch_taken_0x2ec030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC030u;
        // 0x2ec034: 0x261604fc  addiu       $s6, $s0, 0x4FC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec030) {
            ctx->pc = 0x2EC040u;
            goto label_2ec040;
        }
    }
    ctx->pc = 0x2EC038u;
    // 0x2ec038: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x2EC038u;
    SET_GPR_U32(ctx, 31, 0x2EC040u);
    ctx->pc = 0x2EC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC038u;
    // 0x2ec03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2EC038u, 0x2EC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC040u;
label_2ec040:
    // 0x2ec040: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ec044:
    // 0x2ec044: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ec044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ec048: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC048u;
    {
        const bool branch_taken_0x2ec048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec048) {
            ctx->pc = 0x2EC04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC048u;
            // 0x2ec04c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC088u;
            goto label_2ec088;
        }
    }
    ctx->pc = 0x2EC050u;
    // 0x2ec050: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2ec050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec054: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x2ec054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec058: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec05c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ec05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ec060: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ec060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ec064: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2ec064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec068: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ec068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec06c: 0xe60204fc  swc1        $f2, 0x4FC($s0)
    ctx->pc = 0x2ec06cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ec070: 0x0  nop
    ctx->pc = 0x2ec070u;
    // NOP
    // 0x2ec074: 0x0  nop
    ctx->pc = 0x2ec074u;
    // NOP
    // 0x2ec078: 0x46010044  c1          0x10044
    ctx->pc = 0x2ec078u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ec07c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ec07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ec080: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2ec080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2ec084: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2ec084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2ec088:
    // 0x2ec088: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ec088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ec08c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC08Cu;
    {
        const bool branch_taken_0x2ec08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC08Cu;
        // 0x2ec090: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec08c) {
            ctx->pc = 0x2EC0ACu;
            goto label_2ec0ac;
        }
    }
    ctx->pc = 0x2EC094u;
    // 0x2ec094: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC094u;
    {
        const bool branch_taken_0x2ec094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec094) {
            ctx->pc = 0x2EC098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC094u;
            // 0x2ec098: 0xae0004fc  sw          $zero, 0x4FC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC0B0u;
            goto label_2ec0b0;
        }
    }
    ctx->pc = 0x2EC09Cu;
    // 0x2ec09c: 0xc092432  jal         func_2490C8
    ctx->pc = 0x2EC09Cu;
    SET_GPR_U32(ctx, 31, 0x2EC0A4u);
    ctx->pc = 0x2EC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC09Cu;
    // 0x2ec0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x2EC09Cu, 0x2EC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0A4u;
label_2ec0a4:
    // 0x2ec0a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC0A4u;
    {
        const bool branch_taken_0x2ec0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0a4) {
            ctx->pc = 0x2EC0B0u;
            goto label_2ec0b0;
        }
    }
    ctx->pc = 0x2EC0ACu;
label_2ec0ac:
    // 0x2ec0ac: 0xae0004fc  sw          $zero, 0x4FC($s0)
    ctx->pc = 0x2ec0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 0));
label_2ec0b0:
    // 0x2ec0b0: 0xc08f684  jal         func_23DA10
    ctx->pc = 0x2EC0B0u;
    SET_GPR_U32(ctx, 31, 0x2EC0B8u);
    ctx->pc = 0x2EC0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0B0u;
    // 0x2ec0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA10u, 0x2EC0B0u, 0x2EC0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0B8u;
label_2ec0b8:
    // 0x2ec0b8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EC0B8u;
    {
        const bool branch_taken_0x2ec0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0b8) {
            ctx->pc = 0x2EC0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC0B8u;
            // 0x2ec0bc: 0xae0011d8  sw          $zero, 0x11D8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC128u;
            goto label_2ec128;
        }
    }
    ctx->pc = 0x2EC0C0u;
    // 0x2ec0c0: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2ec0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2ec0c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ec0c8: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC0C8u;
    {
        const bool branch_taken_0x2ec0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec0c8) {
            ctx->pc = 0x2EC0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC0C8u;
            // 0x2ec0cc: 0xae0011d8  sw          $zero, 0x11D8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC128u;
            goto label_2ec128;
        }
    }
    ctx->pc = 0x2EC0D0u;
    // 0x2ec0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0d4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2EC0D4u;
    SET_GPR_U32(ctx, 31, 0x2EC0DCu);
    ctx->pc = 0x2EC0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0D4u;
    // 0x2ec0d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2EC0D4u, 0x2EC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0DCu;
label_2ec0dc:
    // 0x2ec0dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EC0DCu;
    {
        const bool branch_taken_0x2ec0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0DCu;
        // 0x2ec0e0: 0xae0011d8  sw          $zero, 0x11D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0dc) {
            ctx->pc = 0x2EC128u;
            goto label_2ec128;
        }
    }
    ctx->pc = 0x2EC0E4u;
label_2ec0e4:
    // 0x2ec0e4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC0E4u;
    {
        const bool branch_taken_0x2ec0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0e4) {
            ctx->pc = 0x2EC0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC0E4u;
            // 0x2ec0e8: 0xae000504  sw          $zero, 0x504($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC10Cu;
            goto label_2ec10c;
        }
    }
    ctx->pc = 0x2EC0ECu;
    // 0x2ec0ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ec0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ec0f0: 0x26020504  addiu       $v0, $s0, 0x504
    ctx->pc = 0x2ec0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1284));
    // 0x2ec0f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ec0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ec0f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ec0f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0fc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec100: 0xe6000504  swc1        $f0, 0x504($s0)
    ctx->pc = 0x2ec100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
    // 0x2ec104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC104u;
    {
        const bool branch_taken_0x2ec104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC104u;
        // 0x2ec108: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec104) {
            ctx->pc = 0x2EC110u;
            goto label_2ec110;
        }
    }
    ctx->pc = 0x2EC10Cu;
label_2ec10c:
    // 0x2ec10c: 0x26030504  addiu       $v1, $s0, 0x504
    ctx->pc = 0x2ec10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1284));
label_2ec110:
    // 0x2ec110: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x2ec110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec114: 0x260204fc  addiu       $v0, $s0, 0x4FC
    ctx->pc = 0x2ec114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1276));
    // 0x2ec118: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ec118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec11c: 0xe60104fc  swc1        $f1, 0x4FC($s0)
    ctx->pc = 0x2ec11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ec120: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ec120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec124: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ec124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2ec128:
    // 0x2ec128: 0xc60304fc  lwc1        $f3, 0x4FC($s0)
    ctx->pc = 0x2ec128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec12c: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2ec12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec130: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2ec130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2ec134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec138: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ec138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec13c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec140: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ec140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec144: 0x0  nop
    ctx->pc = 0x2ec144u;
    // NOP
    // 0x2ec148: 0x0  nop
    ctx->pc = 0x2ec148u;
    // NOP
    // 0x2ec14c: 0x46010044  c1          0x10044
    ctx->pc = 0x2ec14cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ec150: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ec150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec154: 0x0  nop
    ctx->pc = 0x2ec154u;
    // NOP
    // 0x2ec158: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2EC158u;
    {
        const bool branch_taken_0x2ec158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec158) {
            ctx->pc = 0x2EC15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC158u;
            // 0x2ec15c: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC184u;
            goto label_2ec184;
        }
    }
    ctx->pc = 0x2EC160u;
    // 0x2ec160: 0x0  nop
    ctx->pc = 0x2ec160u;
    // NOP
    // 0x2ec164: 0x0  nop
    ctx->pc = 0x2ec164u;
    // NOP
    // 0x2ec168: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2ec168u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2ec16c: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x2ec16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ec170: 0xe60104fc  swc1        $f1, 0x4FC($s0)
    ctx->pc = 0x2ec170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ec174: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2ec174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec178: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ec178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ec17c: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x2ec17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2ec180: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x2ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2ec184:
    // 0x2ec184: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EC184u;
    {
        const bool branch_taken_0x2ec184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec184) {
            ctx->pc = 0x2EC188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC184u;
            // 0x2ec188: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC20Cu;
            goto label_2ec20c;
        }
    }
    ctx->pc = 0x2EC18Cu;
    // 0x2ec18c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ec18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ec190: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ec190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ec194: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EC194u;
    {
        const bool branch_taken_0x2ec194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec194) {
            ctx->pc = 0x2EC198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC194u;
            // 0x2ec198: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC20Cu;
            goto label_2ec20c;
        }
    }
    ctx->pc = 0x2EC19Cu;
    // 0x2ec19c: 0xc60204fc  lwc1        $f2, 0x4FC($s0)
    ctx->pc = 0x2ec19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec1a0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ec1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ec1a4: 0x0  nop
    ctx->pc = 0x2ec1a4u;
    // NOP
    // 0x2ec1a8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2ec1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec1ac: 0x0  nop
    ctx->pc = 0x2ec1acu;
    // NOP
    // 0x2ec1b0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC1B0u;
    {
        const bool branch_taken_0x2ec1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec1b0) {
            ctx->pc = 0x2EC1D8u;
            goto label_2ec1d8;
        }
    }
    ctx->pc = 0x2EC1B8u;
    // 0x2ec1b8: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2ec1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec1bc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ec1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ec1c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec1c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec1c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec1cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ec1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ec1d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EC1D0u;
    {
        const bool branch_taken_0x2ec1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1D0u;
        // 0x2ec1d4: 0x46030029  min.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1d0) {
            ctx->pc = 0x2EC204u;
            goto label_2ec204;
        }
    }
    ctx->pc = 0x2EC1D8u;
label_2ec1d8:
    // 0x2ec1d8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2ec1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec1dc: 0x0  nop
    ctx->pc = 0x2ec1dcu;
    // NOP
    // 0x2ec1e0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x2EC1E0u;
    {
        const bool branch_taken_0x2ec1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec1e0) {
            ctx->pc = 0x2EC1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC1E0u;
            // 0x2ec1e4: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC20Cu;
            goto label_2ec20c;
        }
    }
    ctx->pc = 0x2EC1E8u;
    // 0x2ec1e8: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2ec1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec1ec: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ec1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ec1f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec1f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec1f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec1fc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2ec1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ec200: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x2ec200u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
label_2ec204:
    // 0x2ec204: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ec204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ec208: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ec20c:
    // 0x2ec20c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ec20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ec210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec214: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC214u;
    {
        const bool branch_taken_0x2ec214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC214u;
        // 0x2ec218: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec214) {
            ctx->pc = 0x2EC254u;
            goto label_2ec254;
        }
    }
    ctx->pc = 0x2EC21Cu;
    // 0x2ec21c: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2EC21Cu;
    SET_GPR_U32(ctx, 31, 0x2EC224u);
    ctx->pc = 0x2EC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC21Cu;
    // 0x2ec220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EC21Cu, 0x2EC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC224u;
label_2ec224:
    // 0x2ec224: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC224u;
    {
        const bool branch_taken_0x2ec224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC224u;
        // 0x2ec228: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec224) {
            ctx->pc = 0x2EC254u;
            goto label_2ec254;
        }
    }
    ctx->pc = 0x2EC22Cu;
    // 0x2ec22c: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2ec22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
    // 0x2ec230: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC230u;
    {
        const bool branch_taken_0x2ec230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC230u;
        // 0x2ec234: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec230) {
            ctx->pc = 0x2EC254u;
            goto label_2ec254;
        }
    }
    ctx->pc = 0x2EC238u;
    // 0x2ec238: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EC238u;
    SET_GPR_U32(ctx, 31, 0x2EC240u);
    ctx->pc = 0x2EC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC238u;
    // 0x2ec23c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EC238u, 0x2EC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC240u;
label_2ec240:
    // 0x2ec240: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC240u;
    {
        const bool branch_taken_0x2ec240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec240) {
            ctx->pc = 0x2EC244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC240u;
            // 0x2ec244: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC254u;
            goto label_2ec254;
        }
    }
    ctx->pc = 0x2EC248u;
    // 0x2ec248: 0x8e02121c  lw          $v0, 0x121C($s0)
    ctx->pc = 0x2ec248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2ec24c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC24Cu;
    {
        const bool branch_taken_0x2ec24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec24c) {
            ctx->pc = 0x2EC250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC24Cu;
            // 0x2ec250: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC254u;
            goto label_2ec254;
        }
    }
    ctx->pc = 0x2EC254u;
label_2ec254:
    // 0x2ec254: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC254u;
    {
        const bool branch_taken_0x2ec254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC254u;
        // 0x2ec258: 0x8fc2aa88  lw          $v0, -0x5578($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec254) {
            ctx->pc = 0x2EC26Cu;
            goto label_2ec26c;
        }
    }
    ctx->pc = 0x2EC25Cu;
    // 0x2ec25c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC25Cu;
    {
        const bool branch_taken_0x2ec25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC25Cu;
        // 0x2ec260: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec25c) {
            ctx->pc = 0x2EC284u;
            goto label_2ec284;
        }
    }
    ctx->pc = 0x2EC264u;
    // 0x2ec264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC264u;
    {
        const bool branch_taken_0x2ec264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC264u;
        // 0x2ec268: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec264) {
            ctx->pc = 0x2EC278u;
            goto label_2ec278;
        }
    }
    ctx->pc = 0x2EC26Cu;
label_2ec26c:
    // 0x2ec26c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC26Cu;
    {
        const bool branch_taken_0x2ec26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC26Cu;
        // 0x2ec270: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec26c) {
            ctx->pc = 0x2EC284u;
            goto label_2ec284;
        }
    }
    ctx->pc = 0x2EC274u;
    // 0x2ec274: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2ec274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2ec278:
    // 0x2ec278: 0x8c432460  lw          $v1, 0x2460($v0)
    ctx->pc = 0x2ec278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9312)));
    // 0x2ec27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC27Cu;
    {
        const bool branch_taken_0x2ec27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC27Cu;
        // 0x2ec280: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec27c) {
            ctx->pc = 0x2EC288u;
            goto label_2ec288;
        }
    }
    ctx->pc = 0x2EC284u;
label_2ec284:
    // 0x2ec284: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ec284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec288:
    // 0x2ec288: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ec288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec28c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EC28Cu;
    {
        const bool branch_taken_0x2ec28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC28Cu;
        // 0x2ec290: 0x8fc2aa88  lw          $v0, -0x5578($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec28c) {
            ctx->pc = 0x2EC360u;
            goto label_2ec360;
        }
    }
    ctx->pc = 0x2EC294u;
    // 0x2ec294: 0x16400032  bnez        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2EC294u;
    {
        const bool branch_taken_0x2ec294 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec294) {
            ctx->pc = 0x2EC360u;
            goto label_2ec360;
        }
    }
    ctx->pc = 0x2EC29Cu;
    // 0x2ec29c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC29Cu;
    {
        const bool branch_taken_0x2ec29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC29Cu;
        // 0x2ec2a0: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec29c) {
            ctx->pc = 0x2EC2B4u;
            goto label_2ec2b4;
        }
    }
    ctx->pc = 0x2EC2A4u;
    // 0x2ec2a4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ec2a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec2ac: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EC2ACu;
    {
        const bool branch_taken_0x2ec2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2ACu;
        // 0x2ec2b0: 0x8fc2aa88  lw          $v0, -0x5578($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2ac) {
            ctx->pc = 0x2EC360u;
            goto label_2ec360;
        }
    }
    ctx->pc = 0x2EC2B4u;
label_2ec2b4:
    // 0x2ec2b4: 0x920211c1  lbu         $v0, 0x11C1($s0)
    ctx->pc = 0x2ec2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4545)));
    // 0x2ec2b8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2ec2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2ec2bc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC2BCu;
    {
        const bool branch_taken_0x2ec2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec2bc) {
            ctx->pc = 0x2EC2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC2BCu;
            // 0x2ec2c0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC2E4u;
            goto label_2ec2e4;
        }
    }
    ctx->pc = 0x2EC2C4u;
    // 0x2ec2c4: 0xc60112ac  lwc1        $f1, 0x12AC($s0)
    ctx->pc = 0x2ec2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec2c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2cc: 0x0  nop
    ctx->pc = 0x2ec2ccu;
    // NOP
    // 0x2ec2d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ec2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec2d4: 0x0  nop
    ctx->pc = 0x2ec2d4u;
    // NOP
    // 0x2ec2d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC2D8u;
    {
        const bool branch_taken_0x2ec2d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec2d8) {
            ctx->pc = 0x2EC2FCu;
            goto label_2ec2fc;
        }
    }
    ctx->pc = 0x2EC2E0u;
    // 0x2ec2e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ec2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2ec2e4:
    // 0x2ec2e4: 0x2602050c  addiu       $v0, $s0, 0x50C
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
    // 0x2ec2e8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ec2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ec2ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ec2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec2f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EC2F4u;
    {
        const bool branch_taken_0x2ec2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2F4u;
        // 0x2ec2f8: 0xe600050c  swc1        $f0, 0x50C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2f4) {
            ctx->pc = 0x2EC328u;
            goto label_2ec328;
        }
    }
    ctx->pc = 0x2EC2FCu;
label_2ec2fc:
    // 0x2ec2fc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2FCu;
    {
        const bool branch_taken_0x2ec2fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2FCu;
        // 0x2ec300: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2fc) {
            ctx->pc = 0x2EC30Cu;
            goto label_2ec30c;
        }
    }
    ctx->pc = 0x2EC304u;
    // 0x2ec304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC304u;
    {
        const bool branch_taken_0x2ec304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC304u;
        // 0x2ec308: 0x24432450  addiu       $v1, $v0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec304) {
            ctx->pc = 0x2EC314u;
            goto label_2ec314;
        }
    }
    ctx->pc = 0x2EC30Cu;
label_2ec30c:
    // 0x2ec30c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ec30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ec310: 0x24432458  addiu       $v1, $v0, 0x2458
    ctx->pc = 0x2ec310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
label_2ec314:
    // 0x2ec314: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ec314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec318: 0x2602050c  addiu       $v0, $s0, 0x50C
    ctx->pc = 0x2ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
    // 0x2ec31c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ec31cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec320: 0xe601050c  swc1        $f1, 0x50C($s0)
    ctx->pc = 0x2ec320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1292), bits); }
    // 0x2ec324: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2ec324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ec328:
    // 0x2ec328: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ec328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ec32c: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x2ec32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec330: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2ec330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2ec334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ec334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec338: 0x0  nop
    ctx->pc = 0x2ec338u;
    // NOP
    // 0x2ec33c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ec33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec340: 0x0  nop
    ctx->pc = 0x2ec340u;
    // NOP
    // 0x2ec344: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC344u;
    {
        const bool branch_taken_0x2ec344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC344u;
        // 0x2ec348: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec344) {
            ctx->pc = 0x2EC358u;
            goto label_2ec358;
        }
    }
    ctx->pc = 0x2EC34Cu;
    // 0x2ec34c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ec34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec350: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ec350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec354: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x2ec354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
label_2ec358:
    // 0x2ec358: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2EC358u;
    {
        const bool branch_taken_0x2ec358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC358u;
        // 0x2ec35c: 0xae0011d8  sw          $zero, 0x11D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec358) {
            ctx->pc = 0x2EC458u;
            goto label_2ec458;
        }
    }
    ctx->pc = 0x2EC360u;
label_2ec360:
    // 0x2ec360: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC360u;
    {
        const bool branch_taken_0x2ec360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC360u;
        // 0x2ec364: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec360) {
            ctx->pc = 0x2EC374u;
            goto label_2ec374;
        }
    }
    ctx->pc = 0x2EC368u;
    // 0x2ec368: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ec368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ec36c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC36Cu;
    {
        const bool branch_taken_0x2ec36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC36Cu;
        // 0x2ec370: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec36c) {
            ctx->pc = 0x2EC388u;
            goto label_2ec388;
        }
    }
    ctx->pc = 0x2EC374u;
label_2ec374:
    // 0x2ec374: 0x24432470  addiu       $v1, $v0, 0x2470
    ctx->pc = 0x2ec374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2ec378: 0xc4402470  lwc1        $f0, 0x2470($v0)
    ctx->pc = 0x2ec378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec37c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ec37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec380: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec384: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ec388:
    // 0x2ec388: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ec388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec38c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ec38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec390: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ec390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ec394: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec398: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ec398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec39c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ec39cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec3a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ec3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec3a4: 0x0  nop
    ctx->pc = 0x2ec3a4u;
    // NOP
    // 0x2ec3a8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2EC3A8u;
    {
        const bool branch_taken_0x2ec3a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3A8u;
        // 0x2ec3ac: 0x8fc2aa88  lw          $v0, -0x5578($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3a8) {
            ctx->pc = 0x2EC428u;
            goto label_2ec428;
        }
    }
    ctx->pc = 0x2EC3B0u;
    // 0x2ec3b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC3B0u;
    {
        const bool branch_taken_0x2ec3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3B0u;
        // 0x2ec3b4: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3b0) {
            ctx->pc = 0x2EC3C4u;
            goto label_2ec3c4;
        }
    }
    ctx->pc = 0x2EC3B8u;
    // 0x2ec3b8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2ec3b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ec3bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC3BCu;
    {
        const bool branch_taken_0x2ec3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3BCu;
        // 0x2ec3c0: 0xe7a20020  swc1        $f2, 0x20($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3bc) {
            ctx->pc = 0x2EC3D8u;
            goto label_2ec3d8;
        }
    }
    ctx->pc = 0x2EC3C4u;
label_2ec3c4:
    // 0x2ec3c4: 0x24432470  addiu       $v1, $v0, 0x2470
    ctx->pc = 0x2ec3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2ec3c8: 0xc4402470  lwc1        $f0, 0x2470($v0)
    ctx->pc = 0x2ec3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec3cc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ec3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec3d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2ec3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ec3d4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2ec3d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2ec3d8:
    // 0x2ec3d8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2ec3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec3dc: 0x2603050c  addiu       $v1, $s0, 0x50C
    ctx->pc = 0x2ec3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
    // 0x2ec3e0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ec3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec3e4: 0xe601050c  swc1        $f1, 0x50C($s0)
    ctx->pc = 0x2ec3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1292), bits); }
    // 0x2ec3e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ec3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2ec3ec: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ec3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ec3f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ec3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ec3f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC3F4u;
    {
        const bool branch_taken_0x2ec3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3F4u;
        // 0x2ec3f8: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3f4) {
            ctx->pc = 0x2EC41Cu;
            goto label_2ec41c;
        }
    }
    ctx->pc = 0x2EC3FCu;
    // 0x2ec3fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ec3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ec400: 0xc601050c  lwc1        $f1, 0x50C($s0)
    ctx->pc = 0x2ec400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec404: 0xc442babc  lwc1        $f2, -0x4544($v0)
    ctx->pc = 0x2ec404u;
    { uint32_t bits = FAST_READ32(0x3FBABCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec408: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ec408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ec40c: 0xe601050c  swc1        $f1, 0x50C($s0)
    ctx->pc = 0x2ec40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1292), bits); }
    // 0x2ec410: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2ec410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec414: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ec414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ec418: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x2ec418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_2ec41c:
    // 0x2ec41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec420: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EC420u;
    {
        const bool branch_taken_0x2ec420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC420u;
        // 0x2ec424: 0xae0211d8  sw          $v0, 0x11D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec420) {
            ctx->pc = 0x2EC458u;
            goto label_2ec458;
        }
    }
    ctx->pc = 0x2EC428u;
label_2ec428:
    // 0x2ec428: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ec42c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ec42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec430: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2ec430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2ec434: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2ec434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ec438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec43c: 0x2604050c  addiu       $a0, $s0, 0x50C
    ctx->pc = 0x2ec43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
    // 0x2ec440: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2ec444: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ec444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec448: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2ec448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ec44c: 0xe602050c  swc1        $f2, 0x50C($s0)
    ctx->pc = 0x2ec44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1292), bits); }
    // 0x2ec450: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2ec450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ec454: 0xe60212a8  swc1        $f2, 0x12A8($s0)
    ctx->pc = 0x2ec454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
label_2ec458:
    // 0x2ec458: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ec458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ec45c: 0xc0bb520  jal         func_2ED480
    ctx->pc = 0x2EC45Cu;
    SET_GPR_U32(ctx, 31, 0x2EC464u);
    ctx->pc = 0x2EC460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC45Cu;
    // 0x2ec460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED480u, 0x2EC45Cu, 0x2EC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC464u;
label_2ec464:
    // 0x2ec464: 0xc60112ac  lwc1        $f1, 0x12AC($s0)
    ctx->pc = 0x2ec464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec468: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2ec468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec46c: 0x0  nop
    ctx->pc = 0x2ec46cu;
    // NOP
    // 0x2ec470: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC470u;
    {
        const bool branch_taken_0x2ec470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC470u;
        // 0x2ec474: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec470) {
            ctx->pc = 0x2EC484u;
            goto label_2ec484;
        }
    }
    ctx->pc = 0x2EC478u;
    // 0x2ec478: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ec478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec47c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ec47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ec480: 0xe60012ac  swc1        $f0, 0x12AC($s0)
    ctx->pc = 0x2ec480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4780), bits); }
label_2ec484:
    // 0x2ec484: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec488: 0x2602051c  addiu       $v0, $s0, 0x51C
    ctx->pc = 0x2ec488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
    // 0x2ec48c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2ec48cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ec490: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ec490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec494: 0xe614051c  swc1        $f20, 0x51C($s0)
    ctx->pc = 0x2ec494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ec498: 0xc0a2bd2  jal         func_28AF48
    ctx->pc = 0x2EC498u;
    SET_GPR_U32(ctx, 31, 0x2EC4A0u);
    ctx->pc = 0x2EC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC498u;
    // 0x2ec49c: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF48u, 0x2EC498u, 0x2EC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4A0u;
label_2ec4a0:
    // 0x2ec4a0: 0x544000a5  bnel        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2EC4A0u;
    {
        const bool branch_taken_0x2ec4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4a0) {
            ctx->pc = 0x2EC4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC4A0u;
            // 0x2ec4a4: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC738u;
            goto label_2ec738;
        }
    }
    ctx->pc = 0x2EC4A8u;
    // 0x2ec4a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec4a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec4ac: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2ec4acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ec4b0: 0xc602050c  lwc1        $f2, 0x50C($s0)
    ctx->pc = 0x2ec4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec4b4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2ec4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec4b8: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x2ec4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ec4bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec4c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ec4c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec4c4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2ec4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec4c8: 0x0  nop
    ctx->pc = 0x2ec4c8u;
    // NOP
    // 0x2ec4cc: 0x45000091  bc1f        . + 4 + (0x91 << 2)
    ctx->pc = 0x2EC4CCu;
    {
        const bool branch_taken_0x2ec4cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4CCu;
        // 0x2ec4d0: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4cc) {
            ctx->pc = 0x2EC714u;
            goto label_2ec714;
        }
    }
    ctx->pc = 0x2EC4D4u;
    // 0x2ec4d4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2ec4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec4d8: 0x8e0411c0  lw          $a0, 0x11C0($s0)
    ctx->pc = 0x2ec4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ec4dc: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2ec4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec4e0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2ec4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ec4e4: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2EC4E4u;
    {
        const bool branch_taken_0x2ec4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4E4u;
        // 0x2ec4e8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4e4) {
            ctx->pc = 0x2EC5E0u;
            goto label_2ec5e0;
        }
    }
    ctx->pc = 0x2EC4ECu;
    // 0x2ec4ec: 0x92021171  lbu         $v0, 0x1171($s0)
    ctx->pc = 0x2ec4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4465)));
    // 0x2ec4f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC4F0u;
    {
        const bool branch_taken_0x2ec4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4f0) {
            ctx->pc = 0x2EC540u;
            goto label_2ec540;
        }
    }
    ctx->pc = 0x2EC4F8u;
    // 0x2ec4f8: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ec4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ec4fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC4FCu;
    {
        const bool branch_taken_0x2ec4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4FCu;
        // 0x2ec500: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4fc) {
            ctx->pc = 0x2EC518u;
            goto label_2ec518;
        }
    }
    ctx->pc = 0x2EC504u;
    // 0x2ec504: 0xc440bac0  lwc1        $f0, -0x4540($v0)
    ctx->pc = 0x2ec504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec508: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec508u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec50c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ec50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ec510: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ec514: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ec518:
    // 0x2ec518: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2ec518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec520: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2ec520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ec524: 0xc0c1108  jal         func_304420
    ctx->pc = 0x2EC524u;
    SET_GPR_U32(ctx, 31, 0x2EC52Cu);
    ctx->pc = 0x2EC528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC524u;
    // 0x2ec528: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x304420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304420u, 0x2EC524u, 0x2EC52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC52Cu;
label_2ec52c:
    // 0x2ec52c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2ec52cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ec530: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ec530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ec534: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x2ec534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ec538: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2EC538u;
    {
        const bool branch_taken_0x2ec538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC538u;
        // 0x2ec53c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec538) {
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC540u;
label_2ec540:
    // 0x2ec540: 0xc0b911e  jal         func_2E4478
    ctx->pc = 0x2EC540u;
    SET_GPR_U32(ctx, 31, 0x2EC548u);
    ctx->pc = 0x2E4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4478u, 0x2EC540u, 0x2EC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC548u;
label_2ec548:
    // 0x2ec548: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec54c: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ec54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ec550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC554u;
    {
        const bool branch_taken_0x2ec554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC554u;
        // 0x2ec558: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec554) {
            ctx->pc = 0x2EC56Cu;
            goto label_2ec56c;
        }
    }
    ctx->pc = 0x2EC55Cu;
    // 0x2ec55c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ec560: 0xc440bac0  lwc1        $f0, -0x4540($v0)
    ctx->pc = 0x2ec560u;
    { uint32_t bits = FAST_READ32(0x3FBAC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec564: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec568: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2ec568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ec56c:
    // 0x2ec56c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2ec56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ec570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec574: 0xc0c1108  jal         func_304420
    ctx->pc = 0x2EC574u;
    SET_GPR_U32(ctx, 31, 0x2EC57Cu);
    ctx->pc = 0x2EC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC574u;
    // 0x2ec578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x304420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304420u, 0x2EC574u, 0x2EC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC57Cu;
label_2ec57c:
    // 0x2ec57c: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ec57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ec580: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC580u;
    {
        const bool branch_taken_0x2ec580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC580u;
        // 0x2ec584: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec580) {
            ctx->pc = 0x2EC598u;
            goto label_2ec598;
        }
    }
    ctx->pc = 0x2EC588u;
    // 0x2ec588: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ec588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ec58c: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2ec58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2ec590: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ec590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ec594: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ec594u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ec598:
    // 0x2ec598: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC598u;
    {
        const bool branch_taken_0x2ec598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC598u;
        // 0x2ec59c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec598) {
            ctx->pc = 0x2EC5D8u;
            goto label_2ec5d8;
        }
    }
    ctx->pc = 0x2EC5A0u;
    // 0x2ec5a0: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2ec5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
    // 0x2ec5a4: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EC5A4u;
    {
        const bool branch_taken_0x2ec5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5a4) {
            ctx->pc = 0x2EC5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC5A4u;
            // 0x2ec5a8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC5ACu;
    // 0x2ec5ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5b0: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x2ec5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x2ec5b4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2ec5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2ec5b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec5bc: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2ec5bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ec5c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec5c4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ec5c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ec5c8: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x2ec5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ec5cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec5d0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EC5D0u;
    {
        const bool branch_taken_0x2ec5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5D0u;
        // 0x2ec5d4: 0xe60004fc  swc1        $f0, 0x4FC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5d0) {
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC5D8u;
label_2ec5d8:
    // 0x2ec5d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EC5D8u;
    {
        const bool branch_taken_0x2ec5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5D8u;
        // 0x2ec5dc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5d8) {
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC5E0u;
label_2ec5e0:
    // 0x2ec5e0: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2ec5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2ec5e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EC5E4u;
    {
        const bool branch_taken_0x2ec5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5e4) {
            ctx->pc = 0x2EC5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC5E4u;
            // 0x2ec5e8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC630u;
            goto label_2ec630;
        }
    }
    ctx->pc = 0x2EC5ECu;
    // 0x2ec5ec: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ec5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ec5f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC5F0u;
    {
        const bool branch_taken_0x2ec5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5F0u;
        // 0x2ec5f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5f0) {
            ctx->pc = 0x2EC608u;
            goto label_2ec608;
        }
    }
    ctx->pc = 0x2EC5F8u;
    // 0x2ec5f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ec5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ec5fc: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2ec5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2ec600: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ec600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ec604: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ec604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ec608:
    // 0x2ec608: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC608u;
    {
        const bool branch_taken_0x2ec608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC608u;
        // 0x2ec60c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec608) {
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC610u;
    // 0x2ec610: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2ec610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
    // 0x2ec614: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC614u;
    {
        const bool branch_taken_0x2ec614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec614) {
            ctx->pc = 0x2EC618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC614u;
            // 0x2ec618: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC630u;
            goto label_2ec630;
        }
    }
    ctx->pc = 0x2EC61Cu;
    // 0x2ec61c: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2EC61Cu;
    SET_GPR_U32(ctx, 31, 0x2EC624u);
    ctx->pc = 0x2EC620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC61Cu;
    // 0x2ec620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EC61Cu, 0x2EC624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC624u;
label_2ec624:
    // 0x2ec624: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC624u;
    {
        const bool branch_taken_0x2ec624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec624) {
            ctx->pc = 0x2EC628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC624u;
            // 0x2ec628: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC62Cu;
            goto label_2ec62c;
        }
    }
    ctx->pc = 0x2EC62Cu;
label_2ec62c:
    // 0x2ec62c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ec630:
    // 0x2ec630: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ec630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ec634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec638: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EC638u;
    {
        const bool branch_taken_0x2ec638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC638u;
        // 0x2ec63c: 0x2604052c  addiu       $a0, $s0, 0x52C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec638) {
            ctx->pc = 0x2EC6F0u;
            goto label_2ec6f0;
        }
    }
    ctx->pc = 0x2EC640u;
    // 0x2ec640: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ec640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ec644: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC644u;
    {
        const bool branch_taken_0x2ec644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC644u;
        // 0x2ec648: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec644) {
            ctx->pc = 0x2EC65Cu;
            goto label_2ec65c;
        }
    }
    ctx->pc = 0x2EC64Cu;
    // 0x2ec64c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ec64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ec650: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2ec650u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2ec654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ec654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ec658: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ec658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ec65c:
    // 0x2ec65c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EC65Cu;
    {
        const bool branch_taken_0x2ec65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC65Cu;
        // 0x2ec660: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec65c) {
            ctx->pc = 0x2EC6F0u;
            goto label_2ec6f0;
        }
    }
    ctx->pc = 0x2EC664u;
    // 0x2ec664: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2ec664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ec668: 0xc605052c  lwc1        $f5, 0x52C($s0)
    ctx->pc = 0x2ec668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ec66c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2ec66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2ec670: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2ec670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ec674: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x2ec674u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2ec678: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2ec678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2ec67c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2ec67cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2ec680: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2ec680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2ec684: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ec684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ec688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ec688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec68c: 0x0  nop
    ctx->pc = 0x2ec68cu;
    // NOP
    // 0x2ec690: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2EC690u;
    {
        const bool branch_taken_0x2ec690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC690u;
        // 0x2ec694: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec690) {
            ctx->pc = 0x2EC6F4u;
            goto label_2ec6f4;
        }
    }
    ctx->pc = 0x2EC698u;
    // 0x2ec698: 0x46043841  sub.s       $f1, $f7, $f4
    ctx->pc = 0x2ec698u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x2ec69c: 0x46053081  sub.s       $f2, $f6, $f5
    ctx->pc = 0x2ec69cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2ec6a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ec6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ec6a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ec6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ec6a8: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x2ec6a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ec6ac: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2ec6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ec6b0: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2ec6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ec6b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ec6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ec6b8: 0x0  nop
    ctx->pc = 0x2ec6b8u;
    // NOP
    // 0x2ec6bc: 0x0  nop
    ctx->pc = 0x2ec6bcu;
    // NOP
    // 0x2ec6c0: 0x46000004  c1          0x4
    ctx->pc = 0x2ec6c0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ec6c4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2ec6c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec6c8: 0x0  nop
    ctx->pc = 0x2ec6c8u;
    // NOP
    // 0x2ec6cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC6CCu;
    {
        const bool branch_taken_0x2ec6cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6CCu;
        // 0x2ec6d0: 0xe7a20030  swc1        $f2, 0x30($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6cc) {
            ctx->pc = 0x2EC6E4u;
            goto label_2ec6e4;
        }
    }
    ctx->pc = 0x2EC6D4u;
    // 0x2ec6d4: 0xe605051c  swc1        $f5, 0x51C($s0)
    ctx->pc = 0x2ec6d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ec6d8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2ec6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC6DCu;
    {
        const bool branch_taken_0x2ec6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6DCu;
        // 0x2ec6e0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6dc) {
            ctx->pc = 0x2EC700u;
            goto label_2ec700;
        }
    }
    ctx->pc = 0x2EC6E4u;
label_2ec6e4:
    // 0x2ec6e4: 0xe606051c  swc1        $f6, 0x51C($s0)
    ctx->pc = 0x2ec6e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ec6e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC6E8u;
    {
        const bool branch_taken_0x2ec6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6E8u;
        // 0x2ec6ec: 0xe6470004  swc1        $f7, 0x4($s2) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6e8) {
            ctx->pc = 0x2EC700u;
            goto label_2ec700;
        }
    }
    ctx->pc = 0x2EC6F0u;
label_2ec6f0:
    // 0x2ec6f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ec6f4:
    // 0x2ec6f4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec6f8: 0xe600051c  swc1        $f0, 0x51C($s0)
    ctx->pc = 0x2ec6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ec6fc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2ec6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2ec700:
    // 0x2ec700: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec704: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec708: 0xe600052c  swc1        $f0, 0x52C($s0)
    ctx->pc = 0x2ec708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1324), bits); }
    // 0x2ec70c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC70Cu;
    {
        const bool branch_taken_0x2ec70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC70Cu;
        // 0x2ec710: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec70c) {
            ctx->pc = 0x2EC734u;
            goto label_2ec734;
        }
    }
    ctx->pc = 0x2EC714u;
label_2ec714:
    // 0x2ec714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ec718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ec71c: 0xc0c1108  jal         func_304420
    ctx->pc = 0x2EC71Cu;
    SET_GPR_U32(ctx, 31, 0x2EC724u);
    ctx->pc = 0x2EC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC71Cu;
    // 0x2ec720: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x304420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304420u, 0x2EC71Cu, 0x2EC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC724u;
label_2ec724:
    // 0x2ec724: 0xe6140530  swc1        $f20, 0x530($s0)
    ctx->pc = 0x2ec724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1328), bits); }
    // 0x2ec728: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ec728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ec72c: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x2ec72cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ec730: 0xe614052c  swc1        $f20, 0x52C($s0)
    ctx->pc = 0x2ec730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1324), bits); }
label_2ec734:
    // 0x2ec734: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ec738:
    // 0x2ec738: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2ec738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2ec73c: 0x5040026f  beql        $v0, $zero, . + 4 + (0x26F << 2)
    ctx->pc = 0x2EC73Cu;
    {
        const bool branch_taken_0x2ec73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec73c) {
            ctx->pc = 0x2EC740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC73Cu;
            // 0x2ec740: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0FCu;
            goto label_2ed0fc;
        }
    }
    ctx->pc = 0x2EC744u;
    // 0x2ec744: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x2ec744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2ec748: 0x1440026c  bnez        $v0, . + 4 + (0x26C << 2)
    ctx->pc = 0x2EC748u;
    {
        const bool branch_taken_0x2ec748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC748u;
        // 0x2ec74c: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec748) {
            ctx->pc = 0x2ED0FCu;
            goto label_2ed0fc;
        }
    }
    ctx->pc = 0x2EC750u;
    // 0x2ec750: 0x544002be  bnel        $v0, $zero, . + 4 + (0x2BE << 2)
    ctx->pc = 0x2EC750u;
    {
        const bool branch_taken_0x2ec750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec750) {
            ctx->pc = 0x2EC754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC750u;
            // 0x2ec754: 0xc600051c  lwc1        $f0, 0x51C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED24Cu;
            goto label_2ed24c;
        }
    }
    ctx->pc = 0x2EC758u;
    // 0x2ec758: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ec758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ec75c: 0x9062b837  lbu         $v0, -0x47C9($v1)
    ctx->pc = 0x2ec75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB837u));
    // 0x2ec760: 0x54400266  bnel        $v0, $zero, . + 4 + (0x266 << 2)
    ctx->pc = 0x2EC760u;
    {
        const bool branch_taken_0x2ec760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec760) {
            ctx->pc = 0x2EC764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC760u;
            // 0x2ec764: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0FCu;
            goto label_2ed0fc;
        }
    }
    ctx->pc = 0x2EC768u;
    // 0x2ec768: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2EC768u;
    SET_GPR_U32(ctx, 31, 0x2EC770u);
    ctx->pc = 0x2EC76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC768u;
    // 0x2ec76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EC768u, 0x2EC770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC770u;
label_2ec770:
    // 0x2ec770: 0x54400262  bnel        $v0, $zero, . + 4 + (0x262 << 2)
    ctx->pc = 0x2EC770u;
    {
        const bool branch_taken_0x2ec770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec770) {
            ctx->pc = 0x2EC774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC770u;
            // 0x2ec774: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0FCu;
            goto label_2ed0fc;
        }
    }
    ctx->pc = 0x2EC778u;
    // 0x2ec778: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2ec778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ec77c: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EC77Cu;
    SET_GPR_U32(ctx, 31, 0x2EC784u);
    ctx->pc = 0x2EC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC77Cu;
    // 0x2ec780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EC77Cu, 0x2EC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC784u;
label_2ec784:
    // 0x2ec784: 0x5440025d  bnel        $v0, $zero, . + 4 + (0x25D << 2)
    ctx->pc = 0x2EC784u;
    {
        const bool branch_taken_0x2ec784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec784) {
            ctx->pc = 0x2EC788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC784u;
            // 0x2ec788: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0FCu;
            goto label_2ed0fc;
        }
    }
    ctx->pc = 0x2EC78Cu;
    // 0x2ec78c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ec78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ec790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec794: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2ec794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec798: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC798u;
    {
        const bool branch_taken_0x2ec798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC798u;
        // 0x2ec79c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec798) {
            ctx->pc = 0x2EC7A8u;
            goto label_2ec7a8;
        }
    }
    ctx->pc = 0x2EC7A0u;
    // 0x2ec7a0: 0x8e021208  lw          $v0, 0x1208($s0)
    ctx->pc = 0x2ec7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4616)));
    // 0x2ec7a4: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2ec7a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ec7a8:
    // 0x2ec7a8: 0x1480023a  bnez        $a0, . + 4 + (0x23A << 2)
    ctx->pc = 0x2EC7A8u;
    {
        const bool branch_taken_0x2ec7a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7A8u;
        // 0x2ec7ac: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7a8) {
            ctx->pc = 0x2ED094u;
            goto label_2ed094;
        }
    }
    ctx->pc = 0x2EC7B0u;
    // 0x2ec7b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC7B0u;
    {
        const bool branch_taken_0x2ec7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7B0u;
        // 0x2ec7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7b0) {
            ctx->pc = 0x2EC7C4u;
            goto label_2ec7c4;
        }
    }
    ctx->pc = 0x2EC7B8u;
    // 0x2ec7b8: 0x8e021208  lw          $v0, 0x1208($s0)
    ctx->pc = 0x2ec7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4616)));
    // 0x2ec7bc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2ec7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2ec7c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ec7c4:
    // 0x2ec7c4: 0x14400233  bnez        $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x2EC7C4u;
    {
        const bool branch_taken_0x2ec7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7C4u;
        // 0x2ec7c8: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7c4) {
            ctx->pc = 0x2ED094u;
            goto label_2ed094;
        }
    }
    ctx->pc = 0x2EC7CCu;
    // 0x2ec7cc: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ec7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ec7d0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2ec7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ec7d4: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2ec7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x2ec7d8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ec7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ec7dc: 0x5440022d  bnel        $v0, $zero, . + 4 + (0x22D << 2)
    ctx->pc = 0x2EC7DCu;
    {
        const bool branch_taken_0x2ec7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec7dc) {
            ctx->pc = 0x2EC7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC7DCu;
            // 0x2ec7e0: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED094u;
            goto label_2ed094;
        }
    }
    ctx->pc = 0x2EC7E4u;
    // 0x2ec7e4: 0xc60c04fc  lwc1        $f12, 0x4FC($s0)
    ctx->pc = 0x2ec7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec7e8: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2ec7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec7ec: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x2ec7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2ec7f0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ec7f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ec7f4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2ec7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ec7f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ec7f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec7fc: 0x46156032  c.eq.s      $f12, $f21
    ctx->pc = 0x2ec7fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec800: 0x0  nop
    ctx->pc = 0x2ec800u;
    // NOP
    // 0x2ec804: 0x0  nop
    ctx->pc = 0x2ec804u;
    // NOP
    // 0x2ec808: 0x460105c4  c1          0x105C4
    ctx->pc = 0x2ec808u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ec80c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC80Cu;
    {
        const bool branch_taken_0x2ec80c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC80Cu;
        // 0x2ec810: 0xc60d0500  lwc1        $f13, 0x500($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec80c) {
            ctx->pc = 0x2EC824u;
            goto label_2ec824;
        }
    }
    ctx->pc = 0x2EC814u;
    // 0x2ec814: 0x46156832  c.eq.s      $f13, $f21
    ctx->pc = 0x2ec814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec818: 0x0  nop
    ctx->pc = 0x2ec818u;
    // NOP
    // 0x2ec81c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC81Cu;
    {
        const bool branch_taken_0x2ec81c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC81Cu;
        // 0x2ec820: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec81c) {
            ctx->pc = 0x2EC834u;
            goto label_2ec834;
        }
    }
    ctx->pc = 0x2EC824u;
label_2ec824:
    // 0x2ec824: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2EC824u;
    SET_GPR_U32(ctx, 31, 0x2EC82Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2EC824u, 0x2EC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC82Cu;
label_2ec82c:
    // 0x2ec82c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC82Cu;
    {
        const bool branch_taken_0x2ec82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC82Cu;
        // 0x2ec830: 0xe6001280  swc1        $f0, 0x1280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec82c) {
            ctx->pc = 0x2EC838u;
            goto label_2ec838;
        }
    }
    ctx->pc = 0x2EC834u;
label_2ec834:
    // 0x2ec834: 0xe6001280  swc1        $f0, 0x1280($s0)
    ctx->pc = 0x2ec834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4736), bits); }
label_2ec838:
    // 0x2ec838: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ec838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ec83c: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x2ec83cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x2ec840: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2EC840u;
    {
        const bool branch_taken_0x2ec840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC840u;
        // 0x2ec844: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec840) {
            ctx->pc = 0x2ECA48u;
            goto label_2eca48;
        }
    }
    ctx->pc = 0x2EC848u;
    // 0x2ec848: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2ec848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ec84c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ec84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ec850: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2ec850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2ec854: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ec854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec858: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC858u;
    {
        const bool branch_taken_0x2ec858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC858u;
        // 0x2ec85c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec858) {
            ctx->pc = 0x2EC894u;
            goto label_2ec894;
        }
    }
    ctx->pc = 0x2EC860u;
    // 0x2ec860: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2ec860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ec864: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC864u;
    {
        const bool branch_taken_0x2ec864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec864) {
            ctx->pc = 0x2EC868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC864u;
            // 0x2ec868: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC898u;
            goto label_2ec898;
        }
    }
    ctx->pc = 0x2EC86Cu;
    // 0x2ec86c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2EC86Cu;
    SET_GPR_U32(ctx, 31, 0x2EC874u);
    ctx->pc = 0x2EC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC86Cu;
    // 0x2ec870: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2EC86Cu, 0x2EC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC874u;
label_2ec874:
    // 0x2ec874: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC874u;
    {
        const bool branch_taken_0x2ec874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec874) {
            ctx->pc = 0x2EC878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC874u;
            // 0x2ec878: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC898u;
            goto label_2ec898;
        }
    }
    ctx->pc = 0x2EC87Cu;
    // 0x2ec87c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ec87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ec880: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2ec880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2ec884: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC884u;
    {
        const bool branch_taken_0x2ec884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC884u;
        // 0x2ec888: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec884) {
            ctx->pc = 0x2EC894u;
            goto label_2ec894;
        }
    }
    ctx->pc = 0x2EC88Cu;
    // 0x2ec88c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC88Cu;
    {
        const bool branch_taken_0x2ec88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec88c) {
            ctx->pc = 0x2EC898u;
            goto label_2ec898;
        }
    }
    ctx->pc = 0x2EC894u;
label_2ec894:
    // 0x2ec894: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ec894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec898:
    // 0x2ec898: 0x5660000d  bnel        $s3, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EC898u;
    {
        const bool branch_taken_0x2ec898 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec898) {
            ctx->pc = 0x2EC89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC898u;
            // 0x2ec89c: 0xc6031284  lwc1        $f3, 0x1284($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC8D0u;
            goto label_2ec8d0;
        }
    }
    ctx->pc = 0x2EC8A0u;
    // 0x2ec8a0: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2ec8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec8a4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2ec8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2ec8a8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2ec8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2ec8ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec8b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ec8b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ec8b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ec8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec8b8: 0x0  nop
    ctx->pc = 0x2ec8b8u;
    // NOP
    // 0x2ec8bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC8BCu;
    {
        const bool branch_taken_0x2ec8bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec8bc) {
            ctx->pc = 0x2EC8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC8BCu;
            // 0x2ec8c0: 0xc6031284  lwc1        $f3, 0x1284($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC8D0u;
            goto label_2ec8d0;
        }
    }
    ctx->pc = 0x2EC8C4u;
    // 0x2ec8c4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2ec8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ec8c8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2EC8C8u;
    {
        const bool branch_taken_0x2ec8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C8u;
        // 0x2ec8cc: 0xc60004fc  lwc1        $f0, 0x4FC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8c8) {
            ctx->pc = 0x2ECA4Cu;
            goto label_2eca4c;
        }
    }
    ctx->pc = 0x2EC8D0u;
label_2ec8d0:
    // 0x2ec8d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ec8d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec8d4: 0x0  nop
    ctx->pc = 0x2ec8d4u;
    // NOP
    // 0x2ec8d8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2ec8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec8dc: 0x0  nop
    ctx->pc = 0x2ec8dcu;
    // NOP
    // 0x2ec8e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC8E0u;
    {
        const bool branch_taken_0x2ec8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8E0u;
        // 0x2ec8e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8e0) {
            ctx->pc = 0x2EC900u;
            goto label_2ec900;
        }
    }
    ctx->pc = 0x2EC8E8u;
    // 0x2ec8e8: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2ec8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec8ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ec8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec8f0: 0x0  nop
    ctx->pc = 0x2ec8f0u;
    // NOP
    // 0x2ec8f4: 0x45030053  bc1tl       . + 4 + (0x53 << 2)
    ctx->pc = 0x2EC8F4u;
    {
        const bool branch_taken_0x2ec8f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec8f4) {
            ctx->pc = 0x2EC8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC8F4u;
            // 0x2ec8f8: 0x4600b807  neg.s       $f0, $f23 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA44u;
            goto label_2eca44;
        }
    }
    ctx->pc = 0x2EC8FCu;
    // 0x2ec8fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ec8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ec900:
    // 0x2ec900: 0xc6011280  lwc1        $f1, 0x1280($s0)
    ctx->pc = 0x2ec900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec904: 0xc440bab8  lwc1        $f0, -0x4548($v0)
    ctx->pc = 0x2ec904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec908: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2ec908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2ec90c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ec90cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ec910: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ec910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec914: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ec914u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ec918: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ec918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ec91c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ec91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec920: 0x0  nop
    ctx->pc = 0x2ec920u;
    // NOP
    // 0x2ec924: 0x45020049  bc1fl       . + 4 + (0x49 << 2)
    ctx->pc = 0x2EC924u;
    {
        const bool branch_taken_0x2ec924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec924) {
            ctx->pc = 0x2EC928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC924u;
            // 0x2ec928: 0xc60004fc  lwc1        $f0, 0x4FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA4Cu;
            goto label_2eca4c;
        }
    }
    ctx->pc = 0x2EC92Cu;
    // 0x2ec92c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2ec92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2ec930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ec930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec934: 0x0  nop
    ctx->pc = 0x2ec934u;
    // NOP
    // 0x2ec938: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2ec938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec93c: 0x0  nop
    ctx->pc = 0x2ec93cu;
    // NOP
    // 0x2ec940: 0x45030040  bc1tl       . + 4 + (0x40 << 2)
    ctx->pc = 0x2EC940u;
    {
        const bool branch_taken_0x2ec940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec940) {
            ctx->pc = 0x2EC944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC940u;
            // 0x2ec944: 0x4600b807  neg.s       $f0, $f23 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA44u;
            goto label_2eca44;
        }
    }
    ctx->pc = 0x2EC948u;
    // 0x2ec948: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2ec948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ec94c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ec94cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec950: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ec950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ec954: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2ec954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2ec958: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ec958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec95c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC95Cu;
    {
        const bool branch_taken_0x2ec95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC95Cu;
        // 0x2ec960: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec95c) {
            ctx->pc = 0x2EC998u;
            goto label_2ec998;
        }
    }
    ctx->pc = 0x2EC964u;
    // 0x2ec964: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2ec964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ec968: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC968u;
    {
        const bool branch_taken_0x2ec968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec968) {
            ctx->pc = 0x2EC96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC968u;
            // 0x2ec96c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC99Cu;
            goto label_2ec99c;
        }
    }
    ctx->pc = 0x2EC970u;
    // 0x2ec970: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2EC970u;
    SET_GPR_U32(ctx, 31, 0x2EC978u);
    ctx->pc = 0x2EC974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC970u;
    // 0x2ec974: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2EC970u, 0x2EC978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC978u;
label_2ec978:
    // 0x2ec978: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC978u;
    {
        const bool branch_taken_0x2ec978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec978) {
            ctx->pc = 0x2EC97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC978u;
            // 0x2ec97c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC99Cu;
            goto label_2ec99c;
        }
    }
    ctx->pc = 0x2EC980u;
    // 0x2ec980: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ec980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ec984: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2ec984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2ec988: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC988u;
    {
        const bool branch_taken_0x2ec988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC988u;
        // 0x2ec98c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec988) {
            ctx->pc = 0x2EC998u;
            goto label_2ec998;
        }
    }
    ctx->pc = 0x2EC990u;
    // 0x2ec990: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC990u;
    {
        const bool branch_taken_0x2ec990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec990) {
            ctx->pc = 0x2EC99Cu;
            goto label_2ec99c;
        }
    }
    ctx->pc = 0x2EC998u;
label_2ec998:
    // 0x2ec998: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ec998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec99c:
    // 0x2ec99c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC99Cu;
    {
        const bool branch_taken_0x2ec99c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec99c) {
            ctx->pc = 0x2EC9BCu;
            goto label_2ec9bc;
        }
    }
    ctx->pc = 0x2EC9A4u;
    // 0x2ec9a4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2ec9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ec9a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec9ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ec9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ec9b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ec9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec9b4: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2ec9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x2ec9b8: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x2ec9b8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ec9bc:
    // 0x2ec9bc: 0x56800023  bnel        $s4, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EC9BCu;
    {
        const bool branch_taken_0x2ec9bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9bc) {
            ctx->pc = 0x2EC9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9BCu;
            // 0x2ec9c0: 0xc60004fc  lwc1        $f0, 0x4FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA4Cu;
            goto label_2eca4c;
        }
    }
    ctx->pc = 0x2EC9C4u;
    // 0x2ec9c4: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2ec9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ec9c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ec9c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9cc: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ec9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ec9d0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2ec9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2ec9d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ec9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ec9d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC9D8u;
    {
        const bool branch_taken_0x2ec9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D8u;
        // 0x2ec9dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9d8) {
            ctx->pc = 0x2ECA14u;
            goto label_2eca14;
        }
    }
    ctx->pc = 0x2EC9E0u;
    // 0x2ec9e0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2ec9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ec9e4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC9E4u;
    {
        const bool branch_taken_0x2ec9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec9e4) {
            ctx->pc = 0x2EC9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9E4u;
            // 0x2ec9e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA18u;
            goto label_2eca18;
        }
    }
    ctx->pc = 0x2EC9ECu;
    // 0x2ec9ec: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2EC9ECu;
    SET_GPR_U32(ctx, 31, 0x2EC9F4u);
    ctx->pc = 0x2EC9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9ECu;
    // 0x2ec9f0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2EC9ECu, 0x2EC9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9F4u;
label_2ec9f4:
    // 0x2ec9f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC9F4u;
    {
        const bool branch_taken_0x2ec9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9f4) {
            ctx->pc = 0x2EC9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9F4u;
            // 0x2ec9f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA18u;
            goto label_2eca18;
        }
    }
    ctx->pc = 0x2EC9FCu;
    // 0x2ec9fc: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ec9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2eca00: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2eca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eca04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECA04u;
    {
        const bool branch_taken_0x2eca04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ECA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA04u;
        // 0x2eca08: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca04) {
            ctx->pc = 0x2ECA14u;
            goto label_2eca14;
        }
    }
    ctx->pc = 0x2ECA0Cu;
    // 0x2eca0c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECA0Cu;
    {
        const bool branch_taken_0x2eca0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eca0c) {
            ctx->pc = 0x2ECA18u;
            goto label_2eca18;
        }
    }
    ctx->pc = 0x2ECA14u;
label_2eca14:
    // 0x2eca14: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eca14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eca18:
    // 0x2eca18: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECA18u;
    {
        const bool branch_taken_0x2eca18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca18) {
            ctx->pc = 0x2ECA38u;
            goto label_2eca38;
        }
    }
    ctx->pc = 0x2ECA20u;
    // 0x2eca20: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2eca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2eca24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eca28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2eca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eca2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2eca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eca30: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x2eca30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x2eca34: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x2eca34u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2eca38:
    // 0x2eca38: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECA38u;
    {
        const bool branch_taken_0x2eca38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca38) {
            ctx->pc = 0x2ECA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECA38u;
            // 0x2eca3c: 0xc60004fc  lwc1        $f0, 0x4FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECA4Cu;
            goto label_2eca4c;
        }
    }
    ctx->pc = 0x2ECA40u;
    // 0x2eca40: 0x4600b807  neg.s       $f0, $f23
    ctx->pc = 0x2eca40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[23]);
label_2eca44:
    // 0x2eca44: 0x4600bd82  mul.s       $f22, $f23, $f0
    ctx->pc = 0x2eca44u;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2eca48:
    // 0x2eca48: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2eca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eca4c:
    // 0x2eca4c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2eca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eca50: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2eca50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2eca54: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2eca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2eca58: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2eca58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2eca5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2eca5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eca60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2eca60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2eca64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eca64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eca68: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2eca68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eca6c: 0x0  nop
    ctx->pc = 0x2eca6cu;
    // NOP
    // 0x2eca70: 0x450200f5  bc1fl       . + 4 + (0xF5 << 2)
    ctx->pc = 0x2ECA70u;
    {
        const bool branch_taken_0x2eca70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eca70) {
            ctx->pc = 0x2ECA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECA70u;
            // 0x2eca74: 0xae001280  sw          $zero, 0x1280($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4736), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE48u;
            goto label_2ece48;
        }
    }
    ctx->pc = 0x2ECA78u;
    // 0x2eca78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eca78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca7c: 0x0  nop
    ctx->pc = 0x2eca7cu;
    // NOP
    // 0x2eca80: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2eca80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eca84: 0x0  nop
    ctx->pc = 0x2eca84u;
    // NOP
    // 0x2eca88: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECA88u;
    {
        const bool branch_taken_0x2eca88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA88u;
        // 0x2eca8c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca88) {
            ctx->pc = 0x2ECA9Cu;
            goto label_2eca9c;
        }
    }
    ctx->pc = 0x2ECA90u;
    // 0x2eca90: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x2eca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950244)));
    // 0x2eca94: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECA94u;
    {
        const bool branch_taken_0x2eca94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca94) {
            ctx->pc = 0x2ECA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECA94u;
            // 0x2eca98: 0xc60004fc  lwc1        $f0, 0x4FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECAD4u;
            goto label_2ecad4;
        }
    }
    ctx->pc = 0x2ECA9Cu;
label_2eca9c:
    // 0x2eca9c: 0x8fc2aa88  lw          $v0, -0x5578($fp)
    ctx->pc = 0x2eca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945416)));
    // 0x2ecaa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECAA0u;
    {
        const bool branch_taken_0x2ecaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAA0u;
        // 0x2ecaa4: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaa0) {
            ctx->pc = 0x2ECAB8u;
            goto label_2ecab8;
        }
    }
    ctx->pc = 0x2ECAA8u;
    // 0x2ecaa8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2ecaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2ecaac: 0x8c432460  lw          $v1, 0x2460($v0)
    ctx->pc = 0x2ecaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9312)));
    // 0x2ecab0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECAB0u;
    {
        const bool branch_taken_0x2ecab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAB0u;
        // 0x2ecab4: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecab0) {
            ctx->pc = 0x2ECABCu;
            goto label_2ecabc;
        }
    }
    ctx->pc = 0x2ECAB8u;
label_2ecab8:
    // 0x2ecab8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ecab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecabc:
    // 0x2ecabc: 0x54600044  bnel        $v1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2ECABCu;
    {
        const bool branch_taken_0x2ecabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecabc) {
            ctx->pc = 0x2ECAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECABCu;
            // 0x2ecac0: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBD0u;
            goto label_2ecbd0;
        }
    }
    ctx->pc = 0x2ECAC4u;
    // 0x2ecac4: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x2ecac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x2ecac8: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2ECAC8u;
    {
        const bool branch_taken_0x2ecac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecac8) {
            ctx->pc = 0x2ECACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECAC8u;
            // 0x2ecacc: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBD0u;
            goto label_2ecbd0;
        }
    }
    ctx->pc = 0x2ECAD0u;
    // 0x2ecad0: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ecad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ecad4:
    // 0x2ecad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ecad8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ecad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ecadc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ecadcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ecae0: 0x0  nop
    ctx->pc = 0x2ecae0u;
    // NOP
    // 0x2ecae4: 0x0  nop
    ctx->pc = 0x2ecae4u;
    // NOP
    // 0x2ecae8: 0x46170343  div.s       $f13, $f0, $f23
    ctx->pc = 0x2ecae8u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x2ecaec: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x2ecaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecaf0: 0x0  nop
    ctx->pc = 0x2ecaf0u;
    // NOP
    // 0x2ecaf4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ECAF4u;
    {
        const bool branch_taken_0x2ecaf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecaf4) {
            ctx->pc = 0x2ECAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECAF4u;
            // 0x2ecaf8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECAFCu;
            goto label_2ecafc;
        }
    }
    ctx->pc = 0x2ECAFCu;
label_2ecafc:
    // 0x2ecafc: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x2ecafcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2ecb00: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2ecb00u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2ecb04: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2ecb04u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ecb08: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2ECB08u;
    SET_GPR_U32(ctx, 31, 0x2ECB10u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2ECB08u, 0x2ECB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB10u;
label_2ecb10:
    // 0x2ecb10: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2ecb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2ecb14: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2ecb14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2ecb18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecb1c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ecb20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ecb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ecb24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ecb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ecb28: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2ecb28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ecb2c: 0xe6021280  swc1        $f2, 0x1280($s0)
    ctx->pc = 0x2ecb2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4736), bits); }
    // 0x2ecb30: 0xc6e31548  lwc1        $f3, 0x1548($s7)
    ctx->pc = 0x2ecb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 5448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ecb34: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2ecb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecb38: 0x0  nop
    ctx->pc = 0x2ecb38u;
    // NOP
    // 0x2ecb3c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2ECB3Cu;
    {
        const bool branch_taken_0x2ecb3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecb3c) {
            ctx->pc = 0x2ECB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECB3Cu;
            // 0x2ecb40: 0xc6000500  lwc1        $f0, 0x500($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECB7Cu;
            goto label_2ecb7c;
        }
    }
    ctx->pc = 0x2ECB44u;
    // 0x2ecb44: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x2ecb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecb48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecb48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb4c: 0x0  nop
    ctx->pc = 0x2ecb4cu;
    // NOP
    // 0x2ecb50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ecb50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecb54: 0x0  nop
    ctx->pc = 0x2ecb54u;
    // NOP
    // 0x2ecb58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECB58u;
    {
        const bool branch_taken_0x2ecb58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB58u;
        // 0x2ecb5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb58) {
            ctx->pc = 0x2ECB68u;
            goto label_2ecb68;
        }
    }
    ctx->pc = 0x2ECB60u;
    // 0x2ecb60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ecb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ecb64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ecb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ecb68:
    // 0x2ecb68: 0x0  nop
    ctx->pc = 0x2ecb68u;
    // NOP
    // 0x2ecb6c: 0x0  nop
    ctx->pc = 0x2ecb6cu;
    // NOP
    // 0x2ecb70: 0x46031003  div.s       $f0, $f2, $f3
    ctx->pc = 0x2ecb70u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x2ecb74: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2ECB74u;
    {
        const bool branch_taken_0x2ecb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB74u;
        // 0x2ecb78: 0x460c0542  mul.s       $f21, $f0, $f12 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb74) {
            ctx->pc = 0x2ECE48u;
            goto label_2ece48;
        }
    }
    ctx->pc = 0x2ECB7Cu;
label_2ecb7c:
    // 0x2ecb7c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ecb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2ecb80: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ecb80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2ecb84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecb88: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ecb88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ecb8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ecb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecb90: 0x0  nop
    ctx->pc = 0x2ecb90u;
    // NOP
    // 0x2ecb94: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECB94u;
    {
        const bool branch_taken_0x2ecb94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecb94) {
            ctx->pc = 0x2ECB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECB94u;
            // 0x2ecb98: 0xc60104fc  lwc1        $f1, 0x4FC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECBA4u;
            goto label_2ecba4;
        }
    }
    ctx->pc = 0x2ECB9Cu;
    // 0x2ecb9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECB9Cu;
    {
        const bool branch_taken_0x2ecb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB9Cu;
        // 0x2ecba0: 0xc61504fc  lwc1        $f21, 0x4FC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb9c) {
            ctx->pc = 0x2ECBC4u;
            goto label_2ecbc4;
        }
    }
    ctx->pc = 0x2ECBA4u;
label_2ecba4:
    // 0x2ecba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecba8: 0x0  nop
    ctx->pc = 0x2ecba8u;
    // NOP
    // 0x2ecbac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ecbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecbb0: 0x0  nop
    ctx->pc = 0x2ecbb0u;
    // NOP
    // 0x2ecbb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECBB4u;
    {
        const bool branch_taken_0x2ecbb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBB4u;
        // 0x2ecbb8: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbb4) {
            ctx->pc = 0x2ECBC4u;
            goto label_2ecbc4;
        }
    }
    ctx->pc = 0x2ECBBCu;
    // 0x2ecbbc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ecbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ecbc0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ecbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2ecbc4:
    // 0x2ecbc4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2ecbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ecbc8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2ECBC8u;
    {
        const bool branch_taken_0x2ecbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBC8u;
        // 0x2ecbcc: 0xac400194  sw          $zero, 0x194($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbc8) {
            ctx->pc = 0x2ECE48u;
            goto label_2ece48;
        }
    }
    ctx->pc = 0x2ECBD0u;
label_2ecbd0:
    // 0x2ecbd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ecbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecbd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecbd8: 0xc44c0060  lwc1        $f12, 0x60($v0)
    ctx->pc = 0x2ecbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ecbdc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ecbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ecbe0: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2ecbe0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ecbe4: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x2ecbe4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecbe8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ecbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecbec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2ecbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ecbf0: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x2ecbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ecbf4: 0xe7ad0008  swc1        $f13, 0x8($sp)
    ctx->pc = 0x2ecbf4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ecbf8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2ecbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecbfc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECBFCu;
    {
        const bool branch_taken_0x2ecbfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBFCu;
        // 0x2ecc00: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbfc) {
            ctx->pc = 0x2ECC14u;
            goto label_2ecc14;
        }
    }
    ctx->pc = 0x2ECC04u;
    // 0x2ecc04: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x2ecc04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecc08: 0x0  nop
    ctx->pc = 0x2ecc08u;
    // NOP
    // 0x2ecc0c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECC0Cu;
    {
        const bool branch_taken_0x2ecc0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC0Cu;
        // 0x2ecc10: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc0c) {
            ctx->pc = 0x2ECC20u;
            goto label_2ecc20;
        }
    }
    ctx->pc = 0x2ECC14u;
label_2ecc14:
    // 0x2ecc14: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2ECC14u;
    SET_GPR_U32(ctx, 31, 0x2ECC1Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2ECC14u, 0x2ECC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC1Cu;
label_2ecc1c:
    // 0x2ecc1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ecc1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ecc20:
    // 0x2ecc20: 0x8e0311d0  lw          $v1, 0x11D0($s0)
    ctx->pc = 0x2ecc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4560)));
    // 0x2ecc24: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2ecc28: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ecc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ecc2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2ecc2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecc30: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2ecc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ecc34: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2ecc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ecc38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecc38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecc3c: 0x0  nop
    ctx->pc = 0x2ecc3cu;
    // NOP
    // 0x2ecc40: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2ecc40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecc44: 0x0  nop
    ctx->pc = 0x2ecc44u;
    // NOP
    // 0x2ecc48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECC48u;
    {
        const bool branch_taken_0x2ecc48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC48u;
        // 0x2ecc4c: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc48) {
            ctx->pc = 0x2ECC60u;
            goto label_2ecc60;
        }
    }
    ctx->pc = 0x2ECC50u;
    // 0x2ecc50: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2ecc50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecc54: 0x0  nop
    ctx->pc = 0x2ecc54u;
    // NOP
    // 0x2ecc58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECC58u;
    {
        const bool branch_taken_0x2ecc58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC58u;
        // 0x2ecc5c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc58) {
            ctx->pc = 0x2ECC6Cu;
            goto label_2ecc6c;
        }
    }
    ctx->pc = 0x2ECC60u;
label_2ecc60:
    // 0x2ecc60: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2ECC60u;
    SET_GPR_U32(ctx, 31, 0x2ECC68u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2ECC60u, 0x2ECC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC68u;
label_2ecc68:
    // 0x2ecc68: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2ecc68u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_2ecc6c:
    // 0x2ecc6c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ecc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ecc70: 0xc6001174  lwc1        $f0, 0x1174($s0)
    ctx->pc = 0x2ecc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecc74: 0xc4415cd0  lwc1        $f1, 0x5CD0($v0)
    ctx->pc = 0x2ecc74u;
    { uint32_t bits = FAST_READ32(0x595CD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecc78: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2ecc7c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2ecc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2ecc80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ecc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ecc84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ecc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ecc88: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2ecc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2ecc8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ecc8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ecc90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ecc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ecc94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ecc94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ecc98: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ecc98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ecc9c: 0x46041840  add.s       $f1, $f3, $f4
    ctx->pc = 0x2ecc9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2ecca0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2ecca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecca4: 0x0  nop
    ctx->pc = 0x2ecca4u;
    // NOP
    // 0x2ecca8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECCA8u;
    {
        const bool branch_taken_0x2ecca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecca8) {
            ctx->pc = 0x2ECCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECCA8u;
            // 0x2eccac: 0x46041801  sub.s       $f0, $f3, $f4 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCC4u;
            goto label_2eccc4;
        }
    }
    ctx->pc = 0x2ECCB0u;
    // 0x2eccb0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2eccb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2eccb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2eccb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2eccb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eccb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eccbc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ECCBCu;
    {
        const bool branch_taken_0x2eccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCBCu;
        // 0x2eccc0: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccbc) {
            ctx->pc = 0x2ECCE8u;
            goto label_2ecce8;
        }
    }
    ctx->pc = 0x2ECCC4u;
label_2eccc4:
    // 0x2eccc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2eccc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eccc8: 0x0  nop
    ctx->pc = 0x2eccc8u;
    // NOP
    // 0x2ecccc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECCCCu;
    {
        const bool branch_taken_0x2ecccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCCCu;
        // 0x2eccd0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecccc) {
            ctx->pc = 0x2ECCECu;
            goto label_2eccec;
        }
    }
    ctx->pc = 0x2ECCD4u;
    // 0x2eccd4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2eccd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2eccd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2eccdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eccdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecce0: 0x0  nop
    ctx->pc = 0x2ecce0u;
    // NOP
    // 0x2ecce4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2ecce4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2ecce8:
    // 0x2ecce8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ecce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2eccec:
    // 0x2eccec: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x2eccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950244)));
    // 0x2eccf0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2ECCF0u;
    {
        const bool branch_taken_0x2eccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECCF0u;
        // 0x2eccf4: 0x461418c1  sub.s       $f3, $f3, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccf0) {
            ctx->pc = 0x2ECD64u;
            goto label_2ecd64;
        }
    }
    ctx->pc = 0x2ECCF8u;
    // 0x2eccf8: 0xc6011280  lwc1        $f1, 0x1280($s0)
    ctx->pc = 0x2eccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eccfc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2eccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2ecd00: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ecd00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ecd04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ecd04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ecd08: 0x0  nop
    ctx->pc = 0x2ecd08u;
    // NOP
    // 0x2ecd0c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2ecd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ecd10: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2ecd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecd14: 0x0  nop
    ctx->pc = 0x2ecd14u;
    // NOP
    // 0x2ecd18: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD18u;
    {
        const bool branch_taken_0x2ecd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecd18) {
            ctx->pc = 0x2ECD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD18u;
            // 0x2ecd1c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD34u;
            goto label_2ecd34;
        }
    }
    ctx->pc = 0x2ECD20u;
    // 0x2ecd20: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2ecd24: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ecd24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ecd28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecd28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ECD2Cu;
    {
        const bool branch_taken_0x2ecd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD2Cu;
        // 0x2ecd30: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd2c) {
            ctx->pc = 0x2ECD58u;
            goto label_2ecd58;
        }
    }
    ctx->pc = 0x2ECD34u;
label_2ecd34:
    // 0x2ecd34: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2ecd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecd38: 0x0  nop
    ctx->pc = 0x2ecd38u;
    // NOP
    // 0x2ecd3c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECD3Cu;
    {
        const bool branch_taken_0x2ecd3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecd3c) {
            ctx->pc = 0x2ECD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD3Cu;
            // 0x2ecd40: 0xc6001280  lwc1        $f0, 0x1280($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD5Cu;
            goto label_2ecd5c;
        }
    }
    ctx->pc = 0x2ECD44u;
    // 0x2ecd44: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ecd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2ecd48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ecd48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ecd4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd50: 0x0  nop
    ctx->pc = 0x2ecd50u;
    // NOP
    // 0x2ecd54: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ecd54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2ecd58:
    // 0x2ecd58: 0xc6001280  lwc1        $f0, 0x1280($s0)
    ctx->pc = 0x2ecd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ecd5c:
    // 0x2ecd5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2ECD5Cu;
    {
        const bool branch_taken_0x2ecd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD5Cu;
        // 0x2ecd60: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd5c) {
            ctx->pc = 0x2ECDD0u;
            goto label_2ecdd0;
        }
    }
    ctx->pc = 0x2ECD64u;
label_2ecd64:
    // 0x2ecd64: 0xc6001280  lwc1        $f0, 0x1280($s0)
    ctx->pc = 0x2ecd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecd68: 0x3c01407b  lui         $at, 0x407B
    ctx->pc = 0x2ecd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16507 << 16));
    // 0x2ecd6c: 0x342153d2  ori         $at, $at, 0x53D2
    ctx->pc = 0x2ecd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21458);
    // 0x2ecd70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecd74: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x2ecd74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ecd78: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2ecd78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecd7c: 0x0  nop
    ctx->pc = 0x2ecd7cu;
    // NOP
    // 0x2ecd80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD80u;
    {
        const bool branch_taken_0x2ecd80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD80u;
        // 0x2ecd84: 0xe6021280  swc1        $f2, 0x1280($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd80) {
            ctx->pc = 0x2ECD9Cu;
            goto label_2ecd9c;
        }
    }
    ctx->pc = 0x2ECD88u;
    // 0x2ecd88: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ecd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2ecd8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ecd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ecd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2ECD94u;
    {
        const bool branch_taken_0x2ecd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD94u;
        // 0x2ecd98: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd94) {
            ctx->pc = 0x2ECDD0u;
            goto label_2ecdd0;
        }
    }
    ctx->pc = 0x2ECD9Cu;
label_2ecd9c:
    // 0x2ecd9c: 0x3c01c07b  lui         $at, 0xC07B
    ctx->pc = 0x2ecd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49275 << 16));
    // 0x2ecda0: 0x342153d2  ori         $at, $at, 0x53D2
    ctx->pc = 0x2ecda0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21458);
    // 0x2ecda4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecda8: 0x0  nop
    ctx->pc = 0x2ecda8u;
    // NOP
    // 0x2ecdac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ecdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecdb0: 0x0  nop
    ctx->pc = 0x2ecdb0u;
    // NOP
    // 0x2ecdb4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECDB4u;
    {
        const bool branch_taken_0x2ecdb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecdb4) {
            ctx->pc = 0x2ECDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECDB4u;
            // 0x2ecdb8: 0xc6001280  lwc1        $f0, 0x1280($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECDD8u;
            goto label_2ecdd8;
        }
    }
    ctx->pc = 0x2ECDBCu;
    // 0x2ecdbc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ecdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2ecdc0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ecdc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ecdc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ecdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecdc8: 0x0  nop
    ctx->pc = 0x2ecdc8u;
    // NOP
    // 0x2ecdcc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ecdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2ecdd0:
    // 0x2ecdd0: 0xe6001280  swc1        $f0, 0x1280($s0)
    ctx->pc = 0x2ecdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4736), bits); }
    // 0x2ecdd4: 0xc6001280  lwc1        $f0, 0x1280($s0)
    ctx->pc = 0x2ecdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ecdd8:
    // 0x2ecdd8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2ecdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2ecddc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2ecddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2ecde0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecde4: 0x0  nop
    ctx->pc = 0x2ecde4u;
    // NOP
    // 0x2ecde8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2ecde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ecdec: 0xe6011280  swc1        $f1, 0x1280($s0)
    ctx->pc = 0x2ecdecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4736), bits); }
    // 0x2ecdf0: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x2ecdf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x2ecdf4: 0xc6e21548  lwc1        $f2, 0x1548($s7)
    ctx->pc = 0x2ecdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 5448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecdf8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ecdf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecdfc: 0x0  nop
    ctx->pc = 0x2ecdfcu;
    // NOP
    // 0x2ece00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECE00u;
    {
        const bool branch_taken_0x2ece00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ece00) {
            ctx->pc = 0x2ECE1Cu;
            goto label_2ece1c;
        }
    }
    ctx->pc = 0x2ECE08u;
    // 0x2ece08: 0x0  nop
    ctx->pc = 0x2ece08u;
    // NOP
    // 0x2ece0c: 0x0  nop
    ctx->pc = 0x2ece0cu;
    // NOP
    // 0x2ece10: 0x46020d43  div.s       $f21, $f1, $f2
    ctx->pc = 0x2ece10u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2ece14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2ECE14u;
    {
        const bool branch_taken_0x2ece14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE14u;
        // 0x2ece18: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece14) {
            ctx->pc = 0x2ECE4Cu;
            goto label_2ece4c;
        }
    }
    ctx->pc = 0x2ECE1Cu;
label_2ece1c:
    // 0x2ece1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ece1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ece20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ece20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ece24: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ece24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ece28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ece28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ece2c: 0x0  nop
    ctx->pc = 0x2ece2cu;
    // NOP
    // 0x2ece30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECE30u;
    {
        const bool branch_taken_0x2ece30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE30u;
        // 0x2ece34: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece30) {
            ctx->pc = 0x2ECE4Cu;
            goto label_2ece4c;
        }
    }
    ctx->pc = 0x2ECE38u;
    // 0x2ece38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ece38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ece3c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ece3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ece40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECE40u;
    {
        const bool branch_taken_0x2ece40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE40u;
        // 0x2ece44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece40) {
            ctx->pc = 0x2ECE50u;
            goto label_2ece50;
        }
    }
    ctx->pc = 0x2ECE48u;
label_2ece48:
    // 0x2ece48: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2ece48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2ece4c:
    // 0x2ece4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ece4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ece50:
    // 0x2ece50: 0xc6f4154c  lwc1        $f20, 0x154C($s7)
    ctx->pc = 0x2ece50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 5452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ece54: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ece54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ece58: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2ece58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2ece5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ece5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ece60: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2ECE60u;
    {
        const bool branch_taken_0x2ece60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE60u;
        // 0x2ece64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece60) {
            ctx->pc = 0x2ECE9Cu;
            goto label_2ece9c;
        }
    }
    ctx->pc = 0x2ECE68u;
    // 0x2ece68: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2ece68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ece6c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECE6Cu;
    {
        const bool branch_taken_0x2ece6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ece6c) {
            ctx->pc = 0x2ECE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECE6Cu;
            // 0x2ece70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE74u;
    // 0x2ece74: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2ECE74u;
    SET_GPR_U32(ctx, 31, 0x2ECE7Cu);
    ctx->pc = 0x2ECE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE74u;
    // 0x2ece78: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2ECE74u, 0x2ECE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE7Cu;
label_2ece7c:
    // 0x2ece7c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECE7Cu;
    {
        const bool branch_taken_0x2ece7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ece7c) {
            ctx->pc = 0x2ECE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECE7Cu;
            // 0x2ece80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE84u;
    // 0x2ece84: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ece84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ece88: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2ece88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2ece8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECE8Cu;
    {
        const bool branch_taken_0x2ece8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ECE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE8Cu;
        // 0x2ece90: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece8c) {
            ctx->pc = 0x2ECE9Cu;
            goto label_2ece9c;
        }
    }
    ctx->pc = 0x2ECE94u;
    // 0x2ece94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECE94u;
    {
        const bool branch_taken_0x2ece94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ece94) {
            ctx->pc = 0x2ECEA0u;
            goto label_2ecea0;
        }
    }
    ctx->pc = 0x2ECE9Cu;
label_2ece9c:
    // 0x2ece9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ece9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ecea0:
    // 0x2ecea0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECEA0u;
    {
        const bool branch_taken_0x2ecea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecea0) {
            ctx->pc = 0x2ECEC4u;
            goto label_2ecec4;
        }
    }
    ctx->pc = 0x2ECEA8u;
    // 0x2ecea8: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2ecea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2eceac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eceacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eceb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eceb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eceb8: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x2eceb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2ecebc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ECEBCu;
    {
        const bool branch_taken_0x2ecebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecebc) {
            ctx->pc = 0x2ECEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECEBCu;
            // 0x2ecec0: 0x2854003d  slti        $s4, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECEC4u;
            goto label_2ecec4;
        }
    }
    ctx->pc = 0x2ECEC4u;
label_2ecec4:
    // 0x2ecec4: 0x52800016  beql        $s4, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ECEC4u;
    {
        const bool branch_taken_0x2ecec4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecec4) {
            ctx->pc = 0x2ECEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECEC4u;
            // 0x2ecec8: 0xae001270  sw          $zero, 0x1270($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4720), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF20u;
            goto label_2ecf20;
        }
    }
    ctx->pc = 0x2ECECCu;
    // 0x2ececc: 0xc6011270  lwc1        $f1, 0x1270($s0)
    ctx->pc = 0x2ececcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eced0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2eced4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eced4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eced8: 0x0  nop
    ctx->pc = 0x2eced8u;
    // NOP
    // 0x2ecedc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ecedcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecee0: 0x0  nop
    ctx->pc = 0x2ecee0u;
    // NOP
    // 0x2ecee4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECEE4u;
    {
        const bool branch_taken_0x2ecee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEE4u;
        // 0x2ecee8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecee4) {
            ctx->pc = 0x2ECEFCu;
            goto label_2ecefc;
        }
    }
    ctx->pc = 0x2ECEECu;
    // 0x2eceec: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2eceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ecef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ecef4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ECEF4u;
    {
        const bool branch_taken_0x2ecef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEF4u;
        // 0x2ecef8: 0xe6001270  swc1        $f0, 0x1270($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecef4) {
            ctx->pc = 0x2ECF20u;
            goto label_2ecf20;
        }
    }
    ctx->pc = 0x2ECEFCu;
label_2ecefc:
    // 0x2ecefc: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x2ecefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecf00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecf04: 0x0  nop
    ctx->pc = 0x2ecf04u;
    // NOP
    // 0x2ecf08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ecf08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecf0c: 0x0  nop
    ctx->pc = 0x2ecf0cu;
    // NOP
    // 0x2ecf10: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF10u;
    {
        const bool branch_taken_0x2ecf10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecf10) {
            ctx->pc = 0x2ECF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF10u;
            // 0x2ecf14: 0xc6f41550  lwc1        $f20, 0x1550($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 5456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF20u;
            goto label_2ecf20;
        }
    }
    ctx->pc = 0x2ECF18u;
    // 0x2ecf18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECF18u;
    {
        const bool branch_taken_0x2ecf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF18u;
        // 0x2ecf1c: 0xc6001280  lwc1        $f0, 0x1280($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf18) {
            ctx->pc = 0x2ECF24u;
            goto label_2ecf24;
        }
    }
    ctx->pc = 0x2ECF20u;
label_2ecf20:
    // 0x2ecf20: 0xc6001280  lwc1        $f0, 0x1280($s0)
    ctx->pc = 0x2ecf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ecf24:
    // 0x2ecf24: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2ecf24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecf28: 0x0  nop
    ctx->pc = 0x2ecf28u;
    // NOP
    // 0x2ecf2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECF2Cu;
    {
        const bool branch_taken_0x2ecf2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF2Cu;
        // 0x2ecf30: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf2c) {
            ctx->pc = 0x2ECF48u;
            goto label_2ecf48;
        }
    }
    ctx->pc = 0x2ECF34u;
    // 0x2ecf34: 0x8c62bd64  lw          $v0, -0x429C($v1)
    ctx->pc = 0x2ecf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950244)));
    // 0x2ecf38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECF38u;
    {
        const bool branch_taken_0x2ecf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf38) {
            ctx->pc = 0x2ECF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF38u;
            // 0x2ecf3c: 0xc6001284  lwc1        $f0, 0x1284($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF4Cu;
            goto label_2ecf4c;
        }
    }
    ctx->pc = 0x2ECF40u;
    // 0x2ecf40: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2ECF40u;
    {
        const bool branch_taken_0x2ecf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF40u;
        // 0x2ecf44: 0xc6161284  lwc1        $f22, 0x1284($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf40) {
            ctx->pc = 0x2ECFBCu;
            goto label_2ecfbc;
        }
    }
    ctx->pc = 0x2ECF48u;
label_2ecf48:
    // 0x2ecf48: 0xc6001284  lwc1        $f0, 0x1284($s0)
    ctx->pc = 0x2ecf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ecf4c:
    // 0x2ecf4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ecf4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ecf50: 0x0  nop
    ctx->pc = 0x2ecf50u;
    // NOP
    // 0x2ecf54: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2ecf54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecf58: 0x0  nop
    ctx->pc = 0x2ecf58u;
    // NOP
    // 0x2ecf5c: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2ECF5Cu;
    {
        const bool branch_taken_0x2ecf5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecf5c) {
            ctx->pc = 0x2ECF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECF5Cu;
            // 0x2ecf60: 0xe6161284  swc1        $f22, 0x1284($s0) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4740), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECFBCu;
            goto label_2ecfbc;
        }
    }
    ctx->pc = 0x2ECF64u;
    // 0x2ecf64: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ecf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecf68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ecf6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ecf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ecf70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF70u;
    {
        const bool branch_taken_0x2ecf70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecf70) {
            ctx->pc = 0x2ECF80u;
            goto label_2ecf80;
        }
    }
    ctx->pc = 0x2ECF78u;
    // 0x2ecf78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ecf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ecf7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ecf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ecf80:
    // 0x2ecf80: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x2ecf80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecf84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ecf88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecf8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF8Cu;
    {
        const bool branch_taken_0x2ecf8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecf8c) {
            ctx->pc = 0x2ECF9Cu;
            goto label_2ecf9c;
        }
    }
    ctx->pc = 0x2ECF94u;
    // 0x2ecf94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ecf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ecf98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ecf9c:
    // 0x2ecf9c: 0x0  nop
    ctx->pc = 0x2ecf9cu;
    // NOP
    // 0x2ecfa0: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x2ecfa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecfa4: 0x0  nop
    ctx->pc = 0x2ecfa4u;
    // NOP
    // 0x2ecfa8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECFA8u;
    {
        const bool branch_taken_0x2ecfa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecfa8) {
            ctx->pc = 0x2ECFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFA8u;
            // 0x2ecfac: 0xe6161284  swc1        $f22, 0x1284($s0) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4740), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECFBCu;
            goto label_2ecfbc;
        }
    }
    ctx->pc = 0x2ECFB0u;
    // 0x2ecfb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ecfb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ecfb4: 0x46001586  mov.s       $f22, $f2
    ctx->pc = 0x2ecfb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
    // 0x2ecfb8: 0xe6001284  swc1        $f0, 0x1284($s0)
    ctx->pc = 0x2ecfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4740), bits); }
label_2ecfbc:
    // 0x2ecfbc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ecfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ecfc0: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x2ecfc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ecfc4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ecfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ecfc8: 0xe61404fc  swc1        $f20, 0x4FC($s0)
    ctx->pc = 0x2ecfc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ecfcc: 0xe6d60004  swc1        $f22, 0x4($s6)
    ctx->pc = 0x2ecfccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2ecfd0: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ecfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ecfd4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2ecfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2ecfd8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ECFD8u;
    {
        const bool branch_taken_0x2ecfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecfd8) {
            ctx->pc = 0x2ECFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFD8u;
            // 0x2ecfdc: 0xc600050c  lwc1        $f0, 0x50C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED004u;
            goto label_2ed004;
        }
    }
    ctx->pc = 0x2ECFE0u;
    // 0x2ecfe0: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2ECFE0u;
    SET_GPR_U32(ctx, 31, 0x2ECFE8u);
    ctx->pc = 0x2ECFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFE0u;
    // 0x2ecfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2ECFE0u, 0x2ECFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFE8u;
label_2ecfe8:
    // 0x2ecfe8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECFE8u;
    {
        const bool branch_taken_0x2ecfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecfe8) {
            ctx->pc = 0x2ECFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFE8u;
            // 0x2ecfec: 0xc600050c  lwc1        $f0, 0x50C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED004u;
            goto label_2ed004;
        }
    }
    ctx->pc = 0x2ECFF0u;
    // 0x2ecff0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ecff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ecff4: 0x9062b837  lbu         $v0, -0x47C9($v1)
    ctx->pc = 0x2ecff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB837u));
    // 0x2ecff8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2ECFF8u;
    {
        const bool branch_taken_0x2ecff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecff8) {
            ctx->pc = 0x2ECFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFF8u;
            // 0x2ecffc: 0xe615051c  swc1        $f21, 0x51C($s0) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED030u;
            goto label_2ed030;
        }
    }
    ctx->pc = 0x2ED000u;
    // 0x2ed000: 0xc600050c  lwc1        $f0, 0x50C($s0)
    ctx->pc = 0x2ed000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed004:
    // 0x2ed004: 0x4600a885  abs.s       $f2, $f21
    ctx->pc = 0x2ed004u;
    ctx->f[2] = FPU_ABS_S(ctx->f[21]);
    // 0x2ed008: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2ed008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2ed00c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2ed00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2ed010: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ed010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed014: 0xe600051c  swc1        $f0, 0x51C($s0)
    ctx->pc = 0x2ed014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ed018: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2ed018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed01c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2ed01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed020: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED020u;
    {
        const bool branch_taken_0x2ed020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ED024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED020u;
        // 0x2ed024: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed020) {
            ctx->pc = 0x2ED03Cu;
            goto label_2ed03c;
        }
    }
    ctx->pc = 0x2ED028u;
    // 0x2ed028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED028u;
    {
        const bool branch_taken_0x2ed028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED028u;
        // 0x2ed02c: 0xe615051c  swc1        $f21, 0x51C($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed028) {
            ctx->pc = 0x2ED03Cu;
            goto label_2ed03c;
        }
    }
    ctx->pc = 0x2ED030u;
label_2ed030:
    // 0x2ed030: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x2ed030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ed034: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x2ed034u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ed038: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2ed038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ed03c:
    // 0x2ed03c: 0xc600051c  lwc1        $f0, 0x51C($s0)
    ctx->pc = 0x2ed03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed040: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2ed040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed044: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ed044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ed048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed04c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ed04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ed050: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ed050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ed054: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ed054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ed058: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ed058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed05c: 0x0  nop
    ctx->pc = 0x2ed05cu;
    // NOP
    // 0x2ed060: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x2ED060u;
    {
        const bool branch_taken_0x2ed060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed060) {
            ctx->pc = 0x2ED064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED060u;
            // 0x2ed064: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0FCu;
            goto label_2ed0fc;
        }
    }
    ctx->pc = 0x2ED068u;
    // 0x2ed068: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x2ED068u;
    SET_GPR_U32(ctx, 31, 0x2ED070u);
    ctx->pc = 0x2ED06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED068u;
    // 0x2ed06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2ED068u, 0x2ED070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED070u;
label_2ed070:
    // 0x2ed070: 0xc601051c  lwc1        $f1, 0x51C($s0)
    ctx->pc = 0x2ed070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed074: 0x0  nop
    ctx->pc = 0x2ed074u;
    // NOP
    // 0x2ed078: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ed078u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ed07c: 0xe601051c  swc1        $f1, 0x51C($s0)
    ctx->pc = 0x2ed07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ed080: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2ed080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed084: 0x0  nop
    ctx->pc = 0x2ed084u;
    // NOP
    // 0x2ed088: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2ed088u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2ed08c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2ED08Cu;
    {
        const bool branch_taken_0x2ed08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED08Cu;
        // 0x2ed090: 0xe6420004  swc1        $f2, 0x4($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed08c) {
            ctx->pc = 0x2ED0F8u;
            goto label_2ed0f8;
        }
    }
    ctx->pc = 0x2ED094u;
label_2ed094:
    // 0x2ed094: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED094u;
    {
        const bool branch_taken_0x2ed094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed094) {
            ctx->pc = 0x2ED098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED094u;
            // 0x2ed098: 0xc600050c  lwc1        $f0, 0x50C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0D8u;
            goto label_2ed0d8;
        }
    }
    ctx->pc = 0x2ED09Cu;
    // 0x2ed09c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ed09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ed0a0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2ed0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ed0a4: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2ed0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x2ed0a8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ed0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ed0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED0ACu;
    {
        const bool branch_taken_0x2ed0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0ACu;
        // 0x2ed0b0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0ac) {
            ctx->pc = 0x2ED0C8u;
            goto label_2ed0c8;
        }
    }
    ctx->pc = 0x2ED0B4u;
    // 0x2ed0b4: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2ED0B4u;
    SET_GPR_U32(ctx, 31, 0x2ED0BCu);
    ctx->pc = 0x2ED0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED0B4u;
    // 0x2ed0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2ED0B4u, 0x2ED0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0BCu;
label_2ed0bc:
    // 0x2ed0bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED0BCu;
    {
        const bool branch_taken_0x2ed0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0bc) {
            ctx->pc = 0x2ED0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED0BCu;
            // 0x2ed0c0: 0xc600050c  lwc1        $f0, 0x50C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0D8u;
            goto label_2ed0d8;
        }
    }
    ctx->pc = 0x2ED0C4u;
    // 0x2ed0c4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2ed0c8:
    // 0x2ed0c8: 0x9062b837  lbu         $v0, -0x47C9($v1)
    ctx->pc = 0x2ed0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948919)));
    // 0x2ed0cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED0CCu;
    {
        const bool branch_taken_0x2ed0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0cc) {
            ctx->pc = 0x2ED0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED0CCu;
            // 0x2ed0d0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED0E8u;
            goto label_2ed0e8;
        }
    }
    ctx->pc = 0x2ED0D4u;
    // 0x2ed0d4: 0xc600050c  lwc1        $f0, 0x50C($s0)
    ctx->pc = 0x2ed0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed0d8:
    // 0x2ed0d8: 0xe600051c  swc1        $f0, 0x51C($s0)
    ctx->pc = 0x2ed0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ed0dc: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2ed0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed0e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED0E0u;
    {
        const bool branch_taken_0x2ed0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0E0u;
        // 0x2ed0e4: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0e0) {
            ctx->pc = 0x2ED0F8u;
            goto label_2ed0f8;
        }
    }
    ctx->pc = 0x2ED0E8u;
label_2ed0e8:
    // 0x2ed0e8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ed0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ed0ec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ed0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed0f0: 0xe600051c  swc1        $f0, 0x51C($s0)
    ctx->pc = 0x2ed0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1308), bits); }
    // 0x2ed0f4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2ed0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2ed0f8:
    // 0x2ed0f8: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ed0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
label_2ed0fc:
    // 0x2ed0fc: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x2ED0FCu;
    {
        const bool branch_taken_0x2ed0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed0fc) {
            ctx->pc = 0x2ED100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED0FCu;
            // 0x2ed100: 0xc600051c  lwc1        $f0, 0x51C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED24Cu;
            goto label_2ed24c;
        }
    }
    ctx->pc = 0x2ED104u;
    // 0x2ed104: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2ED104u;
    SET_GPR_U32(ctx, 31, 0x2ED10Cu);
    ctx->pc = 0x2ED108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED104u;
    // 0x2ed108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2ED104u, 0x2ED10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED10Cu;
label_2ed10c:
    // 0x2ed10c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED10Cu;
    {
        const bool branch_taken_0x2ed10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed10c) {
            ctx->pc = 0x2ED110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED10Cu;
            // 0x2ed110: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED138u;
            goto label_2ed138;
        }
    }
    ctx->pc = 0x2ED114u;
    // 0x2ed114: 0xc0b911e  jal         func_2E4478
    ctx->pc = 0x2ED114u;
    SET_GPR_U32(ctx, 31, 0x2ED11Cu);
    ctx->pc = 0x2E4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4478u, 0x2ED114u, 0x2ED11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED11Cu;
label_2ed11c:
    // 0x2ed11c: 0xc601051c  lwc1        $f1, 0x51C($s0)
    ctx->pc = 0x2ed11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed120: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ed120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ed124: 0xc0b911e  jal         func_2E4478
    ctx->pc = 0x2ED124u;
    SET_GPR_U32(ctx, 31, 0x2ED12Cu);
    ctx->pc = 0x2ED128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED124u;
    // 0x2ed128: 0xe6010524  swc1        $f1, 0x524($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4478u, 0x2ED124u, 0x2ED12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED12Cu;
label_2ed12c:
    // 0x2ed12c: 0xc6010520  lwc1        $f1, 0x520($s0)
    ctx->pc = 0x2ed12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed130: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2ED130u;
    {
        const bool branch_taken_0x2ed130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED130u;
        // 0x2ed134: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed130) {
            ctx->pc = 0x2ED254u;
            goto label_2ed254;
        }
    }
    ctx->pc = 0x2ED138u;
label_2ed138:
    // 0x2ed138: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2ed138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ed13c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ed13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ed140: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED140u;
    {
        const bool branch_taken_0x2ed140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED140u;
        // 0x2ed144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed140) {
            ctx->pc = 0x2ED154u;
            goto label_2ed154;
        }
    }
    ctx->pc = 0x2ED148u;
    // 0x2ed148: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ed14c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED14Cu;
    {
        const bool branch_taken_0x2ed14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed14c) {
            ctx->pc = 0x2ED158u;
            goto label_2ed158;
        }
    }
    ctx->pc = 0x2ED154u;
label_2ed154:
    // 0x2ed154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed158:
    // 0x2ed158: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED158u;
    {
        const bool branch_taken_0x2ed158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED158u;
        // 0x2ed15c: 0x26110524  addiu       $s1, $s0, 0x524 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed158) {
            ctx->pc = 0x2ED16Cu;
            goto label_2ed16c;
        }
    }
    ctx->pc = 0x2ED160u;
    // 0x2ed160: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x2ed160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x2ed164: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2ED164u;
    {
        const bool branch_taken_0x2ed164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED164u;
        // 0x2ed168: 0xae000528  sw          $zero, 0x528($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed164) {
            ctx->pc = 0x2ED258u;
            goto label_2ed258;
        }
    }
    ctx->pc = 0x2ED16Cu;
label_2ed16c:
    // 0x2ed16c: 0xc6060524  lwc1        $f6, 0x524($s0)
    ctx->pc = 0x2ed16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ed170: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x2ed170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ed174: 0xc607051c  lwc1        $f7, 0x51C($s0)
    ctx->pc = 0x2ed174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ed178: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2ed178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2ed17c: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2ed17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ed180: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x2ed180u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2ed184: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x2ed184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2ed188: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2ed188u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2ed18c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2ed18cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2ed190: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ed190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ed194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ed194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed198: 0x0  nop
    ctx->pc = 0x2ed198u;
    // NOP
    // 0x2ed19c: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x2ED19Cu;
    {
        const bool branch_taken_0x2ed19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed19c) {
            ctx->pc = 0x2ED1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED19Cu;
            // 0x2ed1a0: 0xe6070524  swc1        $f7, 0x524($s0) (Delay Slot)
            { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED240u;
            goto label_2ed240;
        }
    }
    ctx->pc = 0x2ED1A4u;
    // 0x2ed1a4: 0x46052041  sub.s       $f1, $f4, $f5
    ctx->pc = 0x2ed1a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2ed1a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ed1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ed1ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ed1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ed1b0: 0x46063881  sub.s       $f2, $f7, $f6
    ctx->pc = 0x2ed1b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x2ed1b4: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x2ed1b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ed1b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ed1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ed1bc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2ed1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ed1c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ed1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ed1c4: 0x0  nop
    ctx->pc = 0x2ed1c4u;
    // NOP
    // 0x2ed1c8: 0x0  nop
    ctx->pc = 0x2ed1c8u;
    // NOP
    // 0x2ed1cc: 0x46000004  c1          0x4
    ctx->pc = 0x2ed1ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ed1d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ed1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed1d4: 0x0  nop
    ctx->pc = 0x2ed1d4u;
    // NOP
    // 0x2ed1d8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2ED1D8u;
    {
        const bool branch_taken_0x2ed1d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ED1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1D8u;
        // 0x2ed1dc: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1d8) {
            ctx->pc = 0x2ED23Cu;
            goto label_2ed23c;
        }
    }
    ctx->pc = 0x2ED1E0u;
    // 0x2ed1e0: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x2ED1E0u;
    SET_GPR_U32(ctx, 31, 0x2ED1E8u);
    ctx->pc = 0x2ED1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED1E0u;
    // 0x2ed1e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2ED1E0u, 0x2ED1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED1E8u;
label_2ed1e8:
    // 0x2ed1e8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ed1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed1ec: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ed1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed1f0: 0x0  nop
    ctx->pc = 0x2ed1f0u;
    // NOP
    // 0x2ed1f4: 0x0  nop
    ctx->pc = 0x2ed1f4u;
    // NOP
    // 0x2ed1f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ed1f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ed1fc: 0xc6030524  lwc1        $f3, 0x524($s0)
    ctx->pc = 0x2ed1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed200: 0x0  nop
    ctx->pc = 0x2ed200u;
    // NOP
    // 0x2ed204: 0x0  nop
    ctx->pc = 0x2ed204u;
    // NOP
    // 0x2ed208: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2ed208u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2ed20c: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x2ed20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2ed210: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2ed210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ed214: 0x46141102  mul.s       $f4, $f2, $f20
    ctx->pc = 0x2ed214u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2ed218: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2ed218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ed21c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ed21cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ed220: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ed220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ed224: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2ed224u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ed228: 0xe6030524  swc1        $f3, 0x524($s0)
    ctx->pc = 0x2ed228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
    // 0x2ed22c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2ed22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed230: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2ed230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2ed234: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED234u;
    {
        const bool branch_taken_0x2ed234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED234u;
        // 0x2ed238: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed234) {
            ctx->pc = 0x2ED258u;
            goto label_2ed258;
        }
    }
    ctx->pc = 0x2ED23Cu;
label_2ed23c:
    // 0x2ed23c: 0xe6070524  swc1        $f7, 0x524($s0)
    ctx->pc = 0x2ed23cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
label_2ed240:
    // 0x2ed240: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ed240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED244u;
    {
        const bool branch_taken_0x2ed244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED244u;
        // 0x2ed248: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed244) {
            ctx->pc = 0x2ED258u;
            goto label_2ed258;
        }
    }
    ctx->pc = 0x2ED24Cu;
label_2ed24c:
    // 0x2ed24c: 0xe6000524  swc1        $f0, 0x524($s0)
    ctx->pc = 0x2ed24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1316), bits); }
    // 0x2ed250: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2ed250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ed254:
    // 0x2ed254: 0xe6010528  swc1        $f1, 0x528($s0)
    ctx->pc = 0x2ed254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
label_2ed258:
    // 0x2ed258: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2ed258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed25c: 0xc0ba7d2  jal         func_2E9F48
    ctx->pc = 0x2ED25Cu;
    SET_GPR_U32(ctx, 31, 0x2ED264u);
    ctx->pc = 0x2ED260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED25Cu;
    // 0x2ed260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9F48u, 0x2ED25Cu, 0x2ED264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED264u;
label_2ed264:
    // 0x2ed264: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ed264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ed268: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ed268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2ed26c: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x2ED26Cu;
    {
        const bool branch_taken_0x2ed26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed26c) {
            ctx->pc = 0x2ED270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED26Cu;
            // 0x2ed270: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3A0u;
            goto label_2ed3a0;
        }
    }
    ctx->pc = 0x2ED274u;
    // 0x2ed274: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ed274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed278: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x2ed27c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ed27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ed280: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2ed280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED284u;
    {
        const bool branch_taken_0x2ed284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED284u;
        // 0x2ed288: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed284) {
            ctx->pc = 0x2ED29Cu;
            goto label_2ed29c;
        }
    }
    ctx->pc = 0x2ED28Cu;
    // 0x2ed28c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ed28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ed290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED294u;
    {
        const bool branch_taken_0x2ed294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED294u;
        // 0x2ed298: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed294) {
            ctx->pc = 0x2ED2B8u;
            goto label_2ed2b8;
        }
    }
    ctx->pc = 0x2ED29Cu;
label_2ed29c:
    // 0x2ed29c: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x2ed29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x2ed2a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED2A0u;
    {
        const bool branch_taken_0x2ed2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed2a0) {
            ctx->pc = 0x2ED2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED2A0u;
            // 0x2ed2a4: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED2BCu;
            goto label_2ed2bc;
        }
    }
    ctx->pc = 0x2ED2A8u;
    // 0x2ed2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2b0: 0x0  nop
    ctx->pc = 0x2ed2b0u;
    // NOP
    // 0x2ed2b4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ed2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ed2b8:
    // 0x2ed2b8: 0x8e020578  lw          $v0, 0x578($s0)
    ctx->pc = 0x2ed2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
label_2ed2bc:
    // 0x2ed2bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED2BCu;
    {
        const bool branch_taken_0x2ed2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed2bc) {
            ctx->pc = 0x2ED2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED2BCu;
            // 0x2ed2c0: 0x8e02057c  lw          $v0, 0x57C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED2D4u;
            goto label_2ed2d4;
        }
    }
    ctx->pc = 0x2ED2C4u;
    // 0x2ed2c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed2c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED2CCu;
    {
        const bool branch_taken_0x2ed2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2CCu;
        // 0x2ed2d0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2cc) {
            ctx->pc = 0x2ED2ECu;
            goto label_2ed2ec;
        }
    }
    ctx->pc = 0x2ED2D4u;
label_2ed2d4:
    // 0x2ed2d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED2D4u;
    {
        const bool branch_taken_0x2ed2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2D4u;
        // 0x2ed2d8: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2d4) {
            ctx->pc = 0x2ED2F0u;
            goto label_2ed2f0;
        }
    }
    ctx->pc = 0x2ED2DCu;
    // 0x2ed2dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ed2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ed2e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed2e4: 0x0  nop
    ctx->pc = 0x2ed2e4u;
    // NOP
    // 0x2ed2e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2ed2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ed2ec:
    // 0x2ed2ec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ed2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ed2f0:
    // 0x2ed2f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ed2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed2f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ed2f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ed2f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ed2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ed2fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ed2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ed300: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ed300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed304: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2ed304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed308: 0x0  nop
    ctx->pc = 0x2ed308u;
    // NOP
    // 0x2ed30c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x2ED30Cu;
    {
        const bool branch_taken_0x2ed30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed30c) {
            ctx->pc = 0x2ED310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED30Cu;
            // 0x2ed310: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED390u;
            goto label_2ed390;
        }
    }
    ctx->pc = 0x2ED314u;
    // 0x2ed314: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x2ED314u;
    SET_GPR_U32(ctx, 31, 0x2ED31Cu);
    ctx->pc = 0x2ED318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED314u;
    // 0x2ed318: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2ED314u, 0x2ED31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED31Cu;
label_2ed31c:
    // 0x2ed31c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2ed31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed320: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2ed320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed324: 0x0  nop
    ctx->pc = 0x2ed324u;
    // NOP
    // 0x2ed328: 0x0  nop
    ctx->pc = 0x2ed328u;
    // NOP
    // 0x2ed32c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2ed32cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2ed330: 0xc60112f4  lwc1        $f1, 0x12F4($s0)
    ctx->pc = 0x2ed330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed334: 0x0  nop
    ctx->pc = 0x2ed334u;
    // NOP
    // 0x2ed338: 0x0  nop
    ctx->pc = 0x2ed338u;
    // NOP
    // 0x2ed33c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2ed33cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x2ed340: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2ed340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2ed344: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ed344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ed348: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ed348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ed34c: 0xc60012f8  lwc1        $f0, 0x12F8($s0)
    ctx->pc = 0x2ed34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed350: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2ed350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ed354: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2ed354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ed358: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ed358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ed35c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ed35cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ed360: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2ed360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed364: 0x0  nop
    ctx->pc = 0x2ed364u;
    // NOP
    // 0x2ed368: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED368u;
    {
        const bool branch_taken_0x2ed368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ED36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED368u;
        // 0x2ed36c: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed368) {
            ctx->pc = 0x2ED38Cu;
            goto label_2ed38c;
        }
    }
    ctx->pc = 0x2ED370u;
    // 0x2ed370: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2ed370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ed374: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2ed374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ed378: 0xe61404fc  swc1        $f20, 0x4FC($s0)
    ctx->pc = 0x2ed378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ed37c: 0xe6d40004  swc1        $f20, 0x4($s6)
    ctx->pc = 0x2ed37cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2ed380: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x2ed380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x2ed384: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED384u;
    {
        const bool branch_taken_0x2ed384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED384u;
        // 0x2ed388: 0xae000584  sw          $zero, 0x584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed384) {
            ctx->pc = 0x2ED39Cu;
            goto label_2ed39c;
        }
    }
    ctx->pc = 0x2ED38Cu;
label_2ed38c:
    // 0x2ed38c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ed38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ed390:
    // 0x2ed390: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2ed390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2ed394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ed394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ed398: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ed398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
label_2ed39c:
    // 0x2ed39c: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ed39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
label_2ed3a0:
    // 0x2ed3a0: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2ED3A0u;
    {
        const bool branch_taken_0x2ed3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3a0) {
            ctx->pc = 0x2ED3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3A0u;
            // 0x2ed3a4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2ED3A8u;
    // 0x2ed3a8: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2ED3A8u;
    SET_GPR_U32(ctx, 31, 0x2ED3B0u);
    ctx->pc = 0x2ED3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3A8u;
    // 0x2ed3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2ED3A8u, 0x2ED3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3B0u;
label_2ed3b0:
    // 0x2ed3b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED3B0u;
    {
        const bool branch_taken_0x2ed3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3B0u;
        // 0x2ed3b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3b0) {
            ctx->pc = 0x2ED3F0u;
            goto label_2ed3f0;
        }
    }
    ctx->pc = 0x2ED3B8u;
    // 0x2ed3b8: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ed3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ed3bc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ed3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ed3c0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ED3C0u;
    {
        const bool branch_taken_0x2ed3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3c0) {
            ctx->pc = 0x2ED3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3C0u;
            // 0x2ed3c4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2ED3C8u;
    // 0x2ed3c8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2ED3C8u;
    SET_GPR_U32(ctx, 31, 0x2ED3D0u);
    ctx->pc = 0x2ED3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3C8u;
    // 0x2ed3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2ED3C8u, 0x2ED3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3D0u;
label_2ed3d0:
    // 0x2ed3d0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ED3D0u;
    {
        const bool branch_taken_0x2ed3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3d0) {
            ctx->pc = 0x2ED3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3D0u;
            // 0x2ed3d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2ED3D8u;
    // 0x2ed3d8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2ED3D8u;
    SET_GPR_U32(ctx, 31, 0x2ED3E0u);
    ctx->pc = 0x2ED3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3D8u;
    // 0x2ed3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2ED3D8u, 0x2ED3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3E0u;
label_2ed3e0:
    // 0x2ed3e0: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x2ED3E0u;
    SET_GPR_U32(ctx, 31, 0x2ED3E8u);
    ctx->pc = 0x2ED3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3E0u;
    // 0x2ed3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x2ED3E0u, 0x2ED3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3E8u;
label_2ed3e8:
    // 0x2ed3e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ED3E8u;
    {
        const bool branch_taken_0x2ed3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3E8u;
        // 0x2ed3ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3e8) {
            ctx->pc = 0x2ED43Cu;
            goto label_2ed43c;
        }
    }
    ctx->pc = 0x2ED3F0u;
label_2ed3f0:
    // 0x2ed3f0: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x2ED3F0u;
    SET_GPR_U32(ctx, 31, 0x2ED3F8u);
    ctx->pc = 0x2ED3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3F0u;
    // 0x2ed3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2ED3F0u, 0x2ED3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3F8u;
label_2ed3f8:
    // 0x2ed3f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED3F8u;
    {
        const bool branch_taken_0x2ed3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3f8) {
            ctx->pc = 0x2ED3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3F8u;
            // 0x2ed3fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED420u;
            goto label_2ed420;
        }
    }
    ctx->pc = 0x2ED400u;
    // 0x2ed400: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x2ED400u;
    SET_GPR_U32(ctx, 31, 0x2ED408u);
    ctx->pc = 0x2ED404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED400u;
    // 0x2ed404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2ED400u, 0x2ED408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED408u;
label_2ed408:
    // 0x2ed408: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED408u;
    {
        const bool branch_taken_0x2ed408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed408) {
            ctx->pc = 0x2ED40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED408u;
            // 0x2ed40c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED420u;
            goto label_2ed420;
        }
    }
    ctx->pc = 0x2ED410u;
    // 0x2ed410: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x2ED410u;
    SET_GPR_U32(ctx, 31, 0x2ED418u);
    ctx->pc = 0x2ED414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED410u;
    // 0x2ed414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2ED410u, 0x2ED418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED418u;
label_2ed418:
    // 0x2ed418: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED418u;
    {
        const bool branch_taken_0x2ed418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed418) {
            ctx->pc = 0x2ED41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED418u;
            // 0x2ed41c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED420u;
            goto label_2ed420;
        }
    }
    ctx->pc = 0x2ED420u;
label_2ed420:
    // 0x2ed420: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED420u;
    {
        const bool branch_taken_0x2ed420 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed420) {
            ctx->pc = 0x2ED424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED420u;
            // 0x2ed424: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED440u;
            goto label_2ed440;
        }
    }
    ctx->pc = 0x2ED428u;
    // 0x2ed428: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ed428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ed42c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ed42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ed430: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ed430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed434: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ed434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ed438: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x2ed438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_2ed43c:
    // 0x2ed43c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2ed43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ed440:
    // 0x2ed440: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2ed440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ed444: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2ed444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed448: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2ed448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ed44c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2ed44cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed450: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2ed450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ed454: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2ed454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed458: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2ed458u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ed45c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2ed45cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ed460: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2ed460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ed464: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x2ed464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ed468: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2ed468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ed46c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2ed46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ed470: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2ed470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ed474: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED474u;
        // 0x2ed478: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED47Cu;
    // 0x2ed47c: 0x0  nop
    ctx->pc = 0x2ed47cu;
    // NOP
    ctx->pc = 0x2ed480u;
}
