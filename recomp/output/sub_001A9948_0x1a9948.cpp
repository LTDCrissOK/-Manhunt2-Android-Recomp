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

// Function: sub_001A9948
// Address: 0x1a9948 - 0x1a9cb8
void sub_001A9948_0x1a9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9948_0x1a9948");
#endif

    switch (ctx->pc) {
        case 0x1a9a14u: goto label_1a9a14;
        case 0x1a9a88u: goto label_1a9a88;
        case 0x1a9bd4u: goto label_1a9bd4;
        case 0x1a9c04u: goto label_1a9c04;
        default: break;
    }

    ctx->pc = 0x1a9948u;

    // 0x1a9948: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a9948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a994c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9950: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a9954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9958: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a995c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a995cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9960: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a9960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a9964: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1a9964u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a996c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a996cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9974: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a9978: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a9978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a997c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a9980: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a9980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a9984: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x1a9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a9988: 0x8e230190  lw          $v1, 0x190($s1)
    ctx->pc = 0x1a9988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x1a998c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a9990: 0x8e280148  lw          $t0, 0x148($s1)
    ctx->pc = 0x1a9990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1a9994: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9998: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9998u;
    {
        const bool branch_taken_0x1a9998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9998u;
        // 0x1a999c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9998) {
            ctx->pc = 0x1A99A8u;
            goto label_1a99a8;
        }
    }
    ctx->pc = 0x1A99A0u;
    // 0x1a99a0: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A99A0u;
    {
        const bool branch_taken_0x1a99a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a99a0) {
            ctx->pc = 0x1A99A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A99A0u;
            // 0x1a99a4: 0xc621018c  lwc1        $f1, 0x18C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A99B8u;
            goto label_1a99b8;
        }
    }
    ctx->pc = 0x1A99A8u;
label_1a99a8:
    // 0x1a99a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a99a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a99ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a99acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a99b0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1A99B0u;
    {
        const bool branch_taken_0x1a99b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99B0u;
        // 0x1a99b4: 0xe620018c  swc1        $f0, 0x18C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99b0) {
            ctx->pc = 0x1A9B50u;
            goto label_1a9b50;
        }
    }
    ctx->pc = 0x1A99B8u;
label_1a99b8:
    // 0x1a99b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a99bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a99bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a99c0: 0x0  nop
    ctx->pc = 0x1a99c0u;
    // NOP
    // 0x1a99c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a99c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a99c8: 0x0  nop
    ctx->pc = 0x1a99c8u;
    // NOP
    // 0x1a99cc: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x1A99CCu;
    {
        const bool branch_taken_0x1a99cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99CCu;
        // 0x1a99d0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99cc) {
            ctx->pc = 0x1A9B50u;
            goto label_1a9b50;
        }
    }
    ctx->pc = 0x1A99D4u;
    // 0x1a99d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a99d8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1a99d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a99dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a99dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99e0: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a99e4: 0x24a3fffa  addiu       $v1, $a1, -0x6
    ctx->pc = 0x1a99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x1a99e8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1a99e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a99ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a99ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a99f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a99f8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A99F8u;
    {
        const bool branch_taken_0x1a99f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99F8u;
        // 0x1a99fc: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99f8) {
            ctx->pc = 0x1A9A34u;
            goto label_1a9a34;
        }
    }
    ctx->pc = 0x1A9A00u;
    // 0x1a9a00: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a9a04: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9A04u;
    {
        const bool branch_taken_0x1a9a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9a04) {
            ctx->pc = 0x1A9A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A04u;
            // 0x1a9a08: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9A38u;
            goto label_1a9a38;
        }
    }
    ctx->pc = 0x1A9A0Cu;
    // 0x1a9a0c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1A9A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A9A14u);
    ctx->pc = 0x1A9A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A0Cu;
    // 0x1a9a10: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1A9A0Cu, 0x1A9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A14u;
label_1a9a14:
    // 0x1a9a14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9A14u;
    {
        const bool branch_taken_0x1a9a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a14) {
            ctx->pc = 0x1A9A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A14u;
            // 0x1a9a18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9A38u;
            goto label_1a9a38;
        }
    }
    ctx->pc = 0x1A9A1Cu;
    // 0x1a9a1c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a9a20: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a9a24: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9A24u;
    {
        const bool branch_taken_0x1a9a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A24u;
        // 0x1a9a28: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a24) {
            ctx->pc = 0x1A9A34u;
            goto label_1a9a34;
        }
    }
    ctx->pc = 0x1A9A2Cu;
    // 0x1a9a2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9A2Cu;
    {
        const bool branch_taken_0x1a9a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9a2c) {
            ctx->pc = 0x1A9A38u;
            goto label_1a9a38;
        }
    }
    ctx->pc = 0x1A9A34u;
label_1a9a34:
    // 0x1a9a34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a9a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9a38:
    // 0x1a9a38: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9A38u;
    {
        const bool branch_taken_0x1a9a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a38) {
            ctx->pc = 0x1A9A58u;
            goto label_1a9a58;
        }
    }
    ctx->pc = 0x1A9A40u;
    // 0x1a9a40: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1a9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a9a44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9a48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9a4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9a50: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x1a9a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x1a9a54: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x1a9a54u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a9a58:
    // 0x1a9a58: 0x1640002c  bnez        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A9A58u;
    {
        const bool branch_taken_0x1a9a58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A58u;
        // 0x1a9a5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a58) {
            ctx->pc = 0x1A9B0Cu;
            goto label_1a9b0c;
        }
    }
    ctx->pc = 0x1A9A60u;
    // 0x1a9a60: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a9a64: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1a9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1a9a68: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a9a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9a6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A9A6Cu;
    {
        const bool branch_taken_0x1a9a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A6Cu;
        // 0x1a9a70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a6c) {
            ctx->pc = 0x1A9AA8u;
            goto label_1a9aa8;
        }
    }
    ctx->pc = 0x1A9A74u;
    // 0x1a9a74: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a9a78: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9A78u;
    {
        const bool branch_taken_0x1a9a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9a78) {
            ctx->pc = 0x1A9A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A78u;
            // 0x1a9a7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9AACu;
            goto label_1a9aac;
        }
    }
    ctx->pc = 0x1A9A80u;
    // 0x1a9a80: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1A9A80u;
    SET_GPR_U32(ctx, 31, 0x1A9A88u);
    ctx->pc = 0x1A9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A80u;
    // 0x1a9a84: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1A9A80u, 0x1A9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A88u;
label_1a9a88:
    // 0x1a9a88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9A88u;
    {
        const bool branch_taken_0x1a9a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9a88) {
            ctx->pc = 0x1A9A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9A88u;
            // 0x1a9a8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9AACu;
            goto label_1a9aac;
        }
    }
    ctx->pc = 0x1A9A90u;
    // 0x1a9a90: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a9a94: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a9a98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9A98u;
    {
        const bool branch_taken_0x1a9a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A98u;
        // 0x1a9a9c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a98) {
            ctx->pc = 0x1A9AA8u;
            goto label_1a9aa8;
        }
    }
    ctx->pc = 0x1A9AA0u;
    // 0x1a9aa0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9AA0u;
    {
        const bool branch_taken_0x1a9aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9aa0) {
            ctx->pc = 0x1A9AACu;
            goto label_1a9aac;
        }
    }
    ctx->pc = 0x1A9AA8u;
label_1a9aa8:
    // 0x1a9aa8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a9aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9aac:
    // 0x1a9aac: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9AACu;
    {
        const bool branch_taken_0x1a9aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9aac) {
            ctx->pc = 0x1A9ACCu;
            goto label_1a9acc;
        }
    }
    ctx->pc = 0x1A9AB4u;
    // 0x1a9ab4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1a9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a9ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9abc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a9ac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9ac4: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x1a9ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x1a9ac8: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x1a9ac8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a9acc:
    // 0x1a9acc: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9ACCu;
    {
        const bool branch_taken_0x1a9acc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ACCu;
        // 0x1a9ad0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9acc) {
            ctx->pc = 0x1A9B0Cu;
            goto label_1a9b0c;
        }
    }
    ctx->pc = 0x1A9AD4u;
    // 0x1a9ad4: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x1a9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1a9ad8: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9AD8u;
    {
        const bool branch_taken_0x1a9ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AD8u;
        // 0x1a9adc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ad8) {
            ctx->pc = 0x1A9B0Cu;
            goto label_1a9b0c;
        }
    }
    ctx->pc = 0x1A9AE0u;
    // 0x1a9ae0: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9AE0u;
    {
        const bool branch_taken_0x1a9ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AE0u;
        // 0x1a9ae4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ae0) {
            ctx->pc = 0x1A9B0Cu;
            goto label_1a9b0c;
        }
    }
    ctx->pc = 0x1A9AE8u;
    // 0x1a9ae8: 0x26836a00  addiu       $v1, $s4, 0x6A00
    ctx->pc = 0x1a9ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 27136));
    // 0x1a9aec: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1a9aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a9af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9af4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1a9af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a9af8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9AF8u;
    {
        const bool branch_taken_0x1a9af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9AF8u;
        // 0x1a9afc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9af8) {
            ctx->pc = 0x1A9B1Cu;
            goto label_1a9b1c;
        }
    }
    ctx->pc = 0x1A9B00u;
    // 0x1a9b00: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1a9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a9b04: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9B04u;
    {
        const bool branch_taken_0x1a9b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B04u;
        // 0x1a9b08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b04) {
            ctx->pc = 0x1A9B1Cu;
            goto label_1a9b1c;
        }
    }
    ctx->pc = 0x1A9B0Cu;
label_1a9b0c:
    // 0x1a9b0c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a9b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a9b10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a9b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a9b14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a9b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9b18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a9b1c:
    // 0x1a9b1c: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x1a9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9b20: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1a9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9b24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9b28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a9b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a9b2c: 0x0  nop
    ctx->pc = 0x1a9b2cu;
    // NOP
    // 0x1a9b30: 0x0  nop
    ctx->pc = 0x1a9b30u;
    // NOP
    // 0x1a9b34: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1a9b34u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1a9b38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a9b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a9b3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a9b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9b40: 0x0  nop
    ctx->pc = 0x1a9b40u;
    // NOP
    // 0x1a9b44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9B44u;
    {
        const bool branch_taken_0x1a9b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B44u;
        // 0x1a9b48: 0xe621018c  swc1        $f1, 0x18C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b44) {
            ctx->pc = 0x1A9B50u;
            goto label_1a9b50;
        }
    }
    ctx->pc = 0x1A9B4Cu;
    // 0x1a9b4c: 0xe622018c  swc1        $f2, 0x18C($s1)
    ctx->pc = 0x1a9b4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
label_1a9b50:
    // 0x1a9b50: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x1a9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1a9b54: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9b58: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9B58u;
    {
        const bool branch_taken_0x1a9b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B58u;
        // 0x1a9b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b58) {
            ctx->pc = 0x1A9B74u;
            goto label_1a9b74;
        }
    }
    ctx->pc = 0x1A9B60u;
    // 0x1a9b60: 0x922201dc  lbu         $v0, 0x1DC($s1)
    ctx->pc = 0x1a9b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1a9b64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9B64u;
    {
        const bool branch_taken_0x1a9b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B64u;
        // 0x1a9b68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b64) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9B6Cu;
    // 0x1a9b6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9B6Cu;
    {
        const bool branch_taken_0x1a9b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B6Cu;
        // 0x1a9b70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b6c) {
            ctx->pc = 0x1A9B80u;
            goto label_1a9b80;
        }
    }
    ctx->pc = 0x1A9B74u;
label_1a9b74:
    // 0x1a9b74: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x1a9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1a9b78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9B78u;
    {
        const bool branch_taken_0x1a9b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B78u;
        // 0x1a9b7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b78) {
            ctx->pc = 0x1A9B88u;
            goto label_1a9b88;
        }
    }
    ctx->pc = 0x1A9B80u;
label_1a9b80:
    // 0x1a9b80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9B80u;
    {
        const bool branch_taken_0x1a9b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B80u;
        // 0x1a9b84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b80) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9B88u;
label_1a9b88:
    // 0x1a9b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b8c:
    // 0x1a9b8c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9B8Cu;
    {
        const bool branch_taken_0x1a9b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b8c) {
            ctx->pc = 0x1A9BB4u;
            goto label_1a9bb4;
        }
    }
    ctx->pc = 0x1A9B94u;
    // 0x1a9b94: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x1a9b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9b98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9ba0: 0x0  nop
    ctx->pc = 0x1a9ba0u;
    // NOP
    // 0x1a9ba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9ba8: 0x0  nop
    ctx->pc = 0x1a9ba8u;
    // NOP
    // 0x1a9bac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A9BACu;
    {
        const bool branch_taken_0x1a9bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9bac) {
            ctx->pc = 0x1A9BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9BACu;
            // 0x1a9bb0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9BB4u;
            goto label_1a9bb4;
        }
    }
    ctx->pc = 0x1A9BB4u;
label_1a9bb4:
    // 0x1a9bb4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9BB4u;
    {
        const bool branch_taken_0x1a9bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9bb4) {
            ctx->pc = 0x1A9BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9BB4u;
            // 0x1a9bb8: 0xc620016c  lwc1        $f0, 0x16C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9BD8u;
            goto label_1a9bd8;
        }
    }
    ctx->pc = 0x1A9BBCu;
    // 0x1a9bbc: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x1a9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9bc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9bc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a9bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9bc8: 0x8e2401e8  lw          $a0, 0x1E8($s1)
    ctx->pc = 0x1a9bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1a9bcc: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1A9BCCu;
    SET_GPR_U32(ctx, 31, 0x1A9BD4u);
    ctx->pc = 0x1A9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BCCu;
    // 0x1a9bd0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1A9BCCu, 0x1A9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BD4u;
label_1a9bd4:
    // 0x1a9bd4: 0xc620016c  lwc1        $f0, 0x16C($s1)
    ctx->pc = 0x1a9bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9bd8:
    // 0x1a9bd8: 0x2630017c  addiu       $s0, $s1, 0x17C
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
    // 0x1a9bdc: 0xc6210170  lwc1        $f1, 0x170($s1)
    ctx->pc = 0x1a9bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9be0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a9be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9be4: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1a9be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x1a9be8: 0x16482b  sltu        $t1, $zero, $s6
    ctx->pc = 0x1a9be8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1a9bec: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a9becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a9bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bf8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1a9bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bfc: 0xc06a72e  jal         func_1A9CB8
    ctx->pc = 0x1A9BFCu;
    SET_GPR_U32(ctx, 31, 0x1A9C04u);
    ctx->pc = 0x1A9C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BFCu;
    // 0x1a9c00: 0x8e260150  lw          $a2, 0x150($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9CB8u, 0x1A9BFCu, 0x1A9C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C04u;
label_1a9c04:
    // 0x1a9c04: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9C04u;
    {
        const bool branch_taken_0x1a9c04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c04) {
            ctx->pc = 0x1A9C28u;
            goto label_1a9c28;
        }
    }
    ctx->pc = 0x1A9C0Cu;
    // 0x1a9c0c: 0x8e2301fc  lw          $v1, 0x1FC($s1)
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x1a9c10: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1a9c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1a9c14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a9c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a9c18: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9C18u;
    {
        const bool branch_taken_0x1a9c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c18) {
            ctx->pc = 0x1A9C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9C18u;
            // 0x1a9c1c: 0xc621018c  lwc1        $f1, 0x18C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9C58u;
            goto label_1a9c58;
        }
    }
    ctx->pc = 0x1A9C20u;
    // 0x1a9c20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A9C20u;
    {
        const bool branch_taken_0x1a9c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C20u;
        // 0x1a9c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c20) {
            ctx->pc = 0x1A9C50u;
            goto label_1a9c50;
        }
    }
    ctx->pc = 0x1A9C28u;
label_1a9c28:
    // 0x1a9c28: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9C28u;
    {
        const bool branch_taken_0x1a9c28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C28u;
        // 0x1a9c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c28) {
            ctx->pc = 0x1A9C50u;
            goto label_1a9c50;
        }
    }
    ctx->pc = 0x1A9C30u;
    // 0x1a9c30: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x1a9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9c3c: 0x0  nop
    ctx->pc = 0x1a9c3cu;
    // NOP
    // 0x1a9c40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a9c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9c44: 0x0  nop
    ctx->pc = 0x1a9c44u;
    // NOP
    // 0x1a9c48: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1A9C48u;
    {
        const bool branch_taken_0x1a9c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9c48) {
            ctx->pc = 0x1A9C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9C48u;
            // 0x1a9c4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9C88u;
            goto label_1a9c88;
        }
    }
    ctx->pc = 0x1A9C50u;
label_1a9c50:
    // 0x1a9c50: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1a9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x1a9c54: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x1a9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9c58:
    // 0x1a9c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9c60: 0x0  nop
    ctx->pc = 0x1a9c60u;
    // NOP
    // 0x1a9c64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a9c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9c68: 0x0  nop
    ctx->pc = 0x1a9c68u;
    // NOP
    // 0x1a9c6c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9C6Cu;
    {
        const bool branch_taken_0x1a9c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9c6c) {
            ctx->pc = 0x1A9C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9C6Cu;
            // 0x1a9c70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9C88u;
            goto label_1a9c88;
        }
    }
    ctx->pc = 0x1A9C74u;
    // 0x1a9c74: 0xc620017c  lwc1        $f0, 0x17C($s1)
    ctx->pc = 0x1a9c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c78: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1a9c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x1a9c7c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a9c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9c80: 0xe6210188  swc1        $f1, 0x188($s1)
    ctx->pc = 0x1a9c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x1a9c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9c88:
    // 0x1a9c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9c90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9c90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9c94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9c98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a9c98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9c9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a9c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9ca0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a9ca0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9ca4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a9ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9ca8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a9ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CACu;
        // 0x1a9cb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9CB4u;
    // 0x1a9cb4: 0x0  nop
    ctx->pc = 0x1a9cb4u;
    // NOP
    ctx->pc = 0x1a9cb8u;
}
