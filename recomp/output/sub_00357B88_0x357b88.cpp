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

// Function: sub_00357B88
// Address: 0x357b88 - 0x357ca0
void sub_00357B88_0x357b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357B88_0x357b88");
#endif

    switch (ctx->pc) {
        case 0x357bb8u: goto label_357bb8;
        case 0x357be4u: goto label_357be4;
        case 0x357c10u: goto label_357c10;
        case 0x357c2cu: goto label_357c2c;
        case 0x357c4cu: goto label_357c4c;
        case 0x357c64u: goto label_357c64;
        case 0x357c74u: goto label_357c74;
        default: break;
    }

    ctx->pc = 0x357b88u;

    // 0x357b88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x357b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x357b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357b90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x357b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x357b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x357b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357b9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357ba0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x357ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x357ba4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x357ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x357ba8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x357ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x357bac: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x357bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x357bb0: 0xc0d5c32  jal         func_3570C8
    ctx->pc = 0x357BB0u;
    SET_GPR_U32(ctx, 31, 0x357BB8u);
    ctx->pc = 0x357BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BB0u;
    // 0x357bb4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C8u, 0x357BB0u, 0x357BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BB8u;
label_357bb8:
    // 0x357bb8: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x357bbc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x357bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x357bc0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x357BC0u;
    {
        const bool branch_taken_0x357bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357BC0u;
        // 0x357bc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357bc0) {
            ctx->pc = 0x357C78u;
            goto label_357c78;
        }
    }
    ctx->pc = 0x357BC8u;
    // 0x357bc8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x357bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x357bcc: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x357BCCu;
    {
        const bool branch_taken_0x357bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x357BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357BCCu;
        // 0x357bd0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357bcc) {
            ctx->pc = 0x357C7Cu;
            goto label_357c7c;
        }
    }
    ctx->pc = 0x357BD4u;
    // 0x357bd4: 0x5280002a  beql        $s4, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x357BD4u;
    {
        const bool branch_taken_0x357bd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x357bd4) {
            ctx->pc = 0x357BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357BD4u;
            // 0x357bd8: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357C80u;
            goto label_357c80;
        }
    }
    ctx->pc = 0x357BDCu;
    // 0x357bdc: 0xc0d5eb8  jal         func_357AE0
    ctx->pc = 0x357BDCu;
    SET_GPR_U32(ctx, 31, 0x357BE4u);
    ctx->pc = 0x357BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BDCu;
    // 0x357be0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357AE0u, 0x357BDCu, 0x357BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BE4u;
label_357be4:
    // 0x357be4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x357be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x357be8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x357be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x357bec: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x357becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x357bf0: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x357bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x357bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357bf8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x357BF8u;
    {
        const bool branch_taken_0x357bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357BF8u;
        // 0x357bfc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357bf8) {
            ctx->pc = 0x357C3Cu;
            goto label_357c3c;
        }
    }
    ctx->pc = 0x357C00u;
    // 0x357c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x357c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x357c04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x357c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x357c08: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x357c08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357c0c: 0x0  nop
    ctx->pc = 0x357c0cu;
    // NOP
label_357c10:
    // 0x357c10: 0x12110006  beq         $s0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x357C10u;
    {
        const bool branch_taken_0x357c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x357C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C10u;
        // 0x357c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c10) {
            ctx->pc = 0x357C2Cu;
            goto label_357c2c;
        }
    }
    ctx->pc = 0x357C18u;
    // 0x357c18: 0xc6accaa0  lwc1        $f12, -0x3560($s5)
    ctx->pc = 0x357c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294953632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x357c1c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x357c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357c20: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x357c20u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x357c24: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x357C24u;
    SET_GPR_U32(ctx, 31, 0x357C2Cu);
    ctx->pc = 0x357C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C24u;
    // 0x357c28: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x357C24u, 0x357C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C2Cu;
label_357c2c:
    // 0x357c2c: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x357c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
    // 0x357c30: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x357c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x357c34: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x357C34u;
    {
        const bool branch_taken_0x357c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x357C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C34u;
        // 0x357c38: 0x2c2980a  movz        $s3, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c34) {
            ctx->pc = 0x357C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357c10;
        }
    }
    ctx->pc = 0x357C3Cu;
label_357c3c:
    // 0x357c3c: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x357C3Cu;
    {
        const bool branch_taken_0x357c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x357C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C3Cu;
        // 0x357c40: 0xc6accaa0  lwc1        $f12, -0x3560($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294953632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c3c) {
            ctx->pc = 0x357C6Cu;
            goto label_357c6c;
        }
    }
    ctx->pc = 0x357C44u;
    // 0x357c44: 0xc0d5e2a  jal         func_3578A8
    ctx->pc = 0x357C44u;
    SET_GPR_U32(ctx, 31, 0x357C4Cu);
    ctx->pc = 0x357C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C44u;
    // 0x357c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578A8u, 0x357C44u, 0x357C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C4Cu;
label_357c4c:
    // 0x357c4c: 0xc6adcaa0  lwc1        $f13, -0x3560($s5)
    ctx->pc = 0x357c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294953632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x357c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x357c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x357c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x357c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x357c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c5c: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x357C5Cu;
    SET_GPR_U32(ctx, 31, 0x357C64u);
    ctx->pc = 0x357C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C5Cu;
    // 0x357c60: 0x34460004  ori         $a2, $v0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x357C5Cu, 0x357C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C64u;
label_357c64:
    // 0x357c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357C64u;
    {
        const bool branch_taken_0x357c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C64u;
        // 0x357c68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c64) {
            ctx->pc = 0x357C78u;
            goto label_357c78;
        }
    }
    ctx->pc = 0x357C6Cu;
label_357c6c:
    // 0x357c6c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x357C6Cu;
    SET_GPR_U32(ctx, 31, 0x357C74u);
    ctx->pc = 0x357C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C6Cu;
    // 0x357c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x357C6Cu, 0x357C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C74u;
label_357c74:
    // 0x357c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357c78:
    // 0x357c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_357c7c:
    // 0x357c7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357c80:
    // 0x357c80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x357c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357c84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x357c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357c88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x357c88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357c8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x357c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357c90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x357c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357c94: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x357c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x357c98: 0x3e00008  jr          $ra
    ctx->pc = 0x357C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C98u;
        // 0x357c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357CA0u;
}
