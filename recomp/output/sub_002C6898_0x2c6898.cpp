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

// Function: sub_002C6898
// Address: 0x2c6898 - 0x2c6a20
void sub_002C6898_0x2c6898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6898_0x2c6898");
#endif

    switch (ctx->pc) {
        case 0x2c6948u: goto label_2c6948;
        case 0x2c695cu: goto label_2c695c;
        case 0x2c6980u: goto label_2c6980;
        case 0x2c6990u: goto label_2c6990;
        case 0x2c69dcu: goto label_2c69dc;
        default: break;
    }

    ctx->pc = 0x2c6898u;

    // 0x2c6898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c6898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c689c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c689cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c68a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c68a4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c68a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c68a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2c68acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2c68b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c68b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68b4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2c68b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2c68b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c68b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68bc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2c68bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2c68c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c68c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c68c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c68c8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2c68c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2c68cc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2c68ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c68d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c68d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c68d4: 0x0  nop
    ctx->pc = 0x2c68d4u;
    // NOP
    // 0x2c68d8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2C68D8u;
    {
        const bool branch_taken_0x2c68d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68D8u;
        // 0x2c68dc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68d8) {
            ctx->pc = 0x2C6930u;
            goto label_2c6930;
        }
    }
    ctx->pc = 0x2C68E0u;
    // 0x2c68e0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2c68e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68e4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c68e8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2c68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c68ec: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2c68ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c68f0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2c68f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c68f4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2c68f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c68f8: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x2c68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c68fc: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x2c68fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c6900: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x2c6900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c6904: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C6904u;
    {
        const bool branch_taken_0x2c6904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6904) {
            ctx->pc = 0x2C6908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6904u;
            // 0x2c6908: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6A00u;
            goto label_2c6a00;
        }
    }
    ctx->pc = 0x2C690Cu;
    // 0x2c690c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c690cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6910: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c6910u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c6914: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2c6914u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c6918: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2c6918u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2c691c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c6920: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2c6920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c6924: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2c6924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c6928: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C6928u;
    {
        const bool branch_taken_0x2c6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6928u;
        // 0x2c692c: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6928) {
            ctx->pc = 0x2C69FCu;
            goto label_2c69fc;
        }
    }
    ctx->pc = 0x2C6930u;
label_2c6930:
    // 0x2c6930: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6938: 0x0  nop
    ctx->pc = 0x2c6938u;
    // NOP
    // 0x2c693c: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x2c693cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x2c6940: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C6940u;
    SET_GPR_U32(ctx, 31, 0x2C6948u);
    ctx->pc = 0x2C6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6940u;
    // 0x2c6944: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C6940u, 0x2C6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6948u;
label_2c6948:
    // 0x2c6948: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2c6948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c694c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6950: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2c6950u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2c6954: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C6954u;
    SET_GPR_U32(ctx, 31, 0x2C695Cu);
    ctx->pc = 0x2C6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6954u;
    // 0x2c6958: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C6954u, 0x2C695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C695Cu;
label_2c695c:
    // 0x2c695c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6960: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x2c6960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c6964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6964u;
    {
        const bool branch_taken_0x2c6964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6964u;
        // 0x2c6968: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6964) {
            ctx->pc = 0x2C6970u;
            goto label_2c6970;
        }
    }
    ctx->pc = 0x2C696Cu;
    // 0x2c696c: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2c696cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_2c6970:
    // 0x2c6970: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c6970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c6974: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c6974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c6978: 0xc0f757a  jal         func_3DD5E8
    ctx->pc = 0x2C6978u;
    SET_GPR_U32(ctx, 31, 0x2C6980u);
    ctx->pc = 0x2C697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6978u;
    // 0x2c697c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5E8u, 0x2C6978u, 0x2C6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6980u;
label_2c6980:
    // 0x2c6980: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6984: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6988: 0xc0f757a  jal         func_3DD5E8
    ctx->pc = 0x2C6988u;
    SET_GPR_U32(ctx, 31, 0x2C6990u);
    ctx->pc = 0x2C698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6988u;
    // 0x2c698c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD5E8u, 0x2C6988u, 0x2C6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6990u;
label_2c6990:
    // 0x2c6990: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c6990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6998: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2c6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c699c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c69a0: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2c69a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c69a4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c69a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c69a8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2c69a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2c69ac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69b0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2c69b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c69b4: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x2c69b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c69b8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2c69b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c69bc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c69bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69c0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2c69c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2c69c4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2c69c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c69c8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c69c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c69cc: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2c69ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c69d0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2c69d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c69d4: 0xc0f7598  jal         func_3DD660
    ctx->pc = 0x2C69D4u;
    SET_GPR_U32(ctx, 31, 0x2C69DCu);
    ctx->pc = 0x2C69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C69D4u;
    // 0x2c69d8: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD660u, 0x2C69D4u, 0x2C69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69DCu;
label_2c69dc:
    // 0x2c69dc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69e0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c69e4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2c69e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c69e8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2c69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69ec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2c69ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c69f0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2c69f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c69f4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2c69f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c69f8: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2c69f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2c69fc:
    // 0x2c69fc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c69fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6a00:
    // 0x2c6a00: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c6a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6a04: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2c6a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6a08: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2c6a08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c6a0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c6a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6a10: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2c6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c6a14: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2c6a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6a18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A18u;
        // 0x2c6a1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6A20u;
}
