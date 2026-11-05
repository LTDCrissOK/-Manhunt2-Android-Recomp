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

// Function: sub_0023E748
// Address: 0x23e748 - 0x23e988
void sub_0023E748_0x23e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E748_0x23e748");
#endif

    switch (ctx->pc) {
        case 0x23e854u: goto label_23e854;
        case 0x23e870u: goto label_23e870;
        case 0x23e890u: goto label_23e890;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e950u: goto label_23e950;
        default: break;
    }

    ctx->pc = 0x23e748u;

    // 0x23e748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23e74c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x23e750: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x23e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x23e754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23e754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e758: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x23e758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x23e75c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x23e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x23e760: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x23e764: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23e768: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x23E768u;
    {
        const bool branch_taken_0x23e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E768u;
        // 0x23e76c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e768) {
            ctx->pc = 0x23E974u;
            goto label_23e974;
        }
    }
    ctx->pc = 0x23E770u;
    // 0x23e770: 0xc64100d0  lwc1        $f1, 0xD0($s2)
    ctx->pc = 0x23e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e778: 0x0  nop
    ctx->pc = 0x23e778u;
    // NOP
    // 0x23e77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e780: 0x0  nop
    ctx->pc = 0x23e780u;
    // NOP
    // 0x23e784: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x23E784u;
    {
        const bool branch_taken_0x23e784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E784u;
        // 0x23e788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e784) {
            ctx->pc = 0x23E974u;
            goto label_23e974;
        }
    }
    ctx->pc = 0x23E78Cu;
    // 0x23e78c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x23e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x23e790: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23e794: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x23e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x23e798: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E798u;
    {
        const bool branch_taken_0x23e798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E798u;
        // 0x23e79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e798) {
            ctx->pc = 0x23E7B4u;
            goto label_23e7b4;
        }
    }
    ctx->pc = 0x23E7A0u;
    // 0x23e7a0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23e7a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E7A4u;
    {
        const bool branch_taken_0x23e7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7A4u;
        // 0x23e7a8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7a4) {
            ctx->pc = 0x23E7B4u;
            goto label_23e7b4;
        }
    }
    ctx->pc = 0x23E7ACu;
    // 0x23e7ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E7ACu;
    {
        const bool branch_taken_0x23e7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e7ac) {
            ctx->pc = 0x23E7B8u;
            goto label_23e7b8;
        }
    }
    ctx->pc = 0x23E7B4u;
label_23e7b4:
    // 0x23e7b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e7b8:
    // 0x23e7b8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E7B8u;
    {
        const bool branch_taken_0x23e7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7b8) {
            ctx->pc = 0x23E7DCu;
            goto label_23e7dc;
        }
    }
    ctx->pc = 0x23E7C0u;
    // 0x23e7c0: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x23e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x23e7c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E7C4u;
    {
        const bool branch_taken_0x23e7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7c4) {
            ctx->pc = 0x23E7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E7C4u;
            // 0x23e7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E7DCu;
            goto label_23e7dc;
        }
    }
    ctx->pc = 0x23E7CCu;
    // 0x23e7cc: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x23e7ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x23e7d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x23e7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x23e7d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E7D4u;
    {
        const bool branch_taken_0x23e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7d4) {
            ctx->pc = 0x23E7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E7D4u;
            // 0x23e7d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E7DCu;
            goto label_23e7dc;
        }
    }
    ctx->pc = 0x23E7DCu;
label_23e7dc:
    // 0x23e7dc: 0x10c00065  beqz        $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x23E7DCu;
    {
        const bool branch_taken_0x23e7dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7DCu;
        // 0x23e7e0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7dc) {
            ctx->pc = 0x23E974u;
            goto label_23e974;
        }
    }
    ctx->pc = 0x23E7E4u;
    // 0x23e7e4: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x23e7e8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x23e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x23e7ec: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x23E7ECu;
    {
        const bool branch_taken_0x23e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7ECu;
        // 0x23e7f0: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7ec) {
            ctx->pc = 0x23E978u;
            goto label_23e978;
        }
    }
    ctx->pc = 0x23E7F4u;
    // 0x23e7f4: 0x8e4402b4  lw          $a0, 0x2B4($s2)
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x23e7f8: 0x50800060  beql        $a0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x23E7F8u;
    {
        const bool branch_taken_0x23e7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7f8) {
            ctx->pc = 0x23E7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E7F8u;
            // 0x23e7fc: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E97Cu;
            goto label_23e97c;
        }
    }
    ctx->pc = 0x23E800u;
    // 0x23e800: 0xc64102a4  lwc1        $f1, 0x2A4($s2)
    ctx->pc = 0x23e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e804: 0xc64002a8  lwc1        $f0, 0x2A8($s2)
    ctx->pc = 0x23e804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e80c: 0x0  nop
    ctx->pc = 0x23e80cu;
    // NOP
    // 0x23e810: 0x4502005a  bc1fl       . + 4 + (0x5A << 2)
    ctx->pc = 0x23E810u;
    {
        const bool branch_taken_0x23e810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e810) {
            ctx->pc = 0x23E814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E810u;
            // 0x23e814: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E97Cu;
            goto label_23e97c;
        }
    }
    ctx->pc = 0x23E818u;
    // 0x23e818: 0x8e43032c  lw          $v1, 0x32C($s2)
    ctx->pc = 0x23e818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x23e81c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E81Cu;
    {
        const bool branch_taken_0x23e81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E81Cu;
        // 0x23e820: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e81c) {
            ctx->pc = 0x23E83Cu;
            goto label_23e83c;
        }
    }
    ctx->pc = 0x23E824u;
    // 0x23e824: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x23e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x23e828: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E828u;
    {
        const bool branch_taken_0x23e828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e828) {
            ctx->pc = 0x23E82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E828u;
            // 0x23e82c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E840u;
            goto label_23e840;
        }
    }
    ctx->pc = 0x23E830u;
    // 0x23e830: 0x8c620228  lw          $v0, 0x228($v1)
    ctx->pc = 0x23e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x23e834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E834u;
    {
        const bool branch_taken_0x23e834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E834u;
        // 0x23e838: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e834) {
            ctx->pc = 0x23E844u;
            goto label_23e844;
        }
    }
    ctx->pc = 0x23E83Cu;
label_23e83c:
    // 0x23e83c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e840:
    // 0x23e840: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x23e840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_23e844:
    // 0x23e844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e848: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x23e848u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x23e84c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23E84Cu;
    SET_GPR_U32(ctx, 31, 0x23E854u);
    ctx->pc = 0x23E850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E84Cu;
    // 0x23e850: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23E84Cu, 0x23E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E854u;
label_23e854:
    // 0x23e854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e85c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e860: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23e860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x23e864: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x23e864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23e868: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23E868u;
    SET_GPR_U32(ctx, 31, 0x23E870u);
    ctx->pc = 0x23E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E868u;
    // 0x23e86c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23E868u, 0x23E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E870u;
label_23e870:
    // 0x23e870: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E870u;
    {
        const bool branch_taken_0x23e870 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e870) {
            ctx->pc = 0x23E888u;
            goto label_23e888;
        }
    }
    ctx->pc = 0x23E878u;
    // 0x23e878: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x23e87c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e880: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23E880u;
    {
        const bool branch_taken_0x23e880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E880u;
        // 0x23e884: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e880) {
            ctx->pc = 0x23E890u;
            goto label_23e890;
        }
    }
    ctx->pc = 0x23E888u;
label_23e888:
    // 0x23e888: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x23E888u;
    SET_GPR_U32(ctx, 31, 0x23E890u);
    ctx->pc = 0x23E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E888u;
    // 0x23e88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x23E888u, 0x23E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E890u;
label_23e890:
    // 0x23e890: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23e890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e894: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x23e894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23e898: 0x8e4302b0  lw          $v1, 0x2B0($s2)
    ctx->pc = 0x23e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x23e89c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e8a0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23E8A0u;
    {
        const bool branch_taken_0x23e8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8A0u;
        // 0x23e8a4: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8a0) {
            ctx->pc = 0x23E8FCu;
            goto label_23e8fc;
        }
    }
    ctx->pc = 0x23E8A8u;
    // 0x23e8a8: 0xc64c02a4  lwc1        $f12, 0x2A4($s2)
    ctx->pc = 0x23e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e8b0: 0xc64e02ac  lwc1        $f14, 0x2AC($s2)
    ctx->pc = 0x23e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x23e8b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e8b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23e8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23e8bc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x23e8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x23e8c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e8c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e8c8: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x23e8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x23e8cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23e8d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x23e8d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x23e8d8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x23e8d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x23e8dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x23e8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e8e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23e8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e8e4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x23e8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e8e8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e8ec: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x23E8ECu;
    SET_GPR_U32(ctx, 31, 0x23E8F4u);
    ctx->pc = 0x23E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8ECu;
    // 0x23e8f0: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x23E8ECu, 0x23E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8F4u;
label_23e8f4:
    // 0x23e8f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23E8F4u;
    {
        const bool branch_taken_0x23e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8F4u;
        // 0x23e8f8: 0xae4202b0  sw          $v0, 0x2B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8f4) {
            ctx->pc = 0x23E954u;
            goto label_23e954;
        }
    }
    ctx->pc = 0x23E8FCu;
label_23e8fc:
    // 0x23e8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e900: 0x8e112b98  lw          $s1, 0x2B98($s0)
    ctx->pc = 0x23e900u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11160)));
    // 0x23e904: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23e908: 0xae032b98  sw          $v1, 0x2B98($s0)
    ctx->pc = 0x23e908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 3));
    // 0x23e90c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23e910: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23e914: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x23e914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x23e918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e91c: 0xc64c02a4  lwc1        $f12, 0x2A4($s2)
    ctx->pc = 0x23e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e920: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x23e920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e924: 0xc64e02ac  lwc1        $f14, 0x2AC($s2)
    ctx->pc = 0x23e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x23e928: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e92c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23e930: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x23e930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x23e934: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x23e934u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x23e938: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23e93c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x23e93cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x23e940: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e944: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x23e944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e948: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x23E948u;
    SET_GPR_U32(ctx, 31, 0x23E950u);
    ctx->pc = 0x23E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E948u;
    // 0x23e94c: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x23E948u, 0x23E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E950u;
label_23e950:
    // 0x23e950: 0xae112b98  sw          $s1, 0x2B98($s0)
    ctx->pc = 0x23e950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 17));
label_23e954:
    // 0x23e954: 0xc64002a4  lwc1        $f0, 0x2A4($s2)
    ctx->pc = 0x23e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e958: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x23e958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x23e95c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23e95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x23e960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23e960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23e964: 0x0  nop
    ctx->pc = 0x23e964u;
    // NOP
    // 0x23e968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23e968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23e96c: 0xe64002a4  swc1        $f0, 0x2A4($s2)
    ctx->pc = 0x23e96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 676), bits); }
    // 0x23e970: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x23e970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23e974:
    // 0x23e974: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x23e974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23e978:
    // 0x23e978: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23e978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e97c:
    // 0x23e97c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x23e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23e980: 0x3e00008  jr          $ra
    ctx->pc = 0x23E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E980u;
        // 0x23e984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E988u;
}
