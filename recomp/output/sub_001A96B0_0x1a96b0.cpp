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

// Function: sub_001A96B0
// Address: 0x1a96b0 - 0x1a9948
void sub_001A96B0_0x1a96b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A96B0_0x1a96b0");
#endif

    switch (ctx->pc) {
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97e8u: goto label_1a97e8;
        case 0x1a9888u: goto label_1a9888;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a98fcu: goto label_1a98fc;
        case 0x1a991cu: goto label_1a991c;
        default: break;
    }

    ctx->pc = 0x1a96b0u;

    // 0x1a96b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a96b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a96b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a96b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a96b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a96bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a96bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a96c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a96c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a96c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a96c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a96ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a96d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a96d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a96d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a96d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a96d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a96dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a96e0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1a96e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a96e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a96e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a96ec: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a96ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a96f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a96f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a96f4: 0x0  nop
    ctx->pc = 0x1a96f4u;
    // NOP
    // 0x1a96f8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A96F8u;
    {
        const bool branch_taken_0x1a96f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96F8u;
        // 0x1a96fc: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96f8) {
            ctx->pc = 0x1A9720u;
            goto label_1a9720;
        }
    }
    ctx->pc = 0x1A9700u;
    // 0x1a9700: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a9700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9704: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1a9704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9708: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a970c: 0x0  nop
    ctx->pc = 0x1a970cu;
    // NOP
    // 0x1a9710: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1A9710u;
    {
        const bool branch_taken_0x1a9710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9710u;
        // 0x1a9714: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9710) {
            ctx->pc = 0x1A973Cu;
            goto label_1a973c;
        }
    }
    ctx->pc = 0x1A9718u;
    // 0x1a9718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9718u;
    {
        const bool branch_taken_0x1a9718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9718u;
        // 0x1a971c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9718) {
            ctx->pc = 0x1A973Cu;
            goto label_1a973c;
        }
    }
    ctx->pc = 0x1A9720u;
label_1a9720:
    // 0x1a9720: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a9720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9724: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1a9724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a972c: 0x0  nop
    ctx->pc = 0x1a972cu;
    // NOP
    // 0x1a9730: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9730u;
    {
        const bool branch_taken_0x1a9730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9730u;
        // 0x1a9734: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9730) {
            ctx->pc = 0x1A973Cu;
            goto label_1a973c;
        }
    }
    ctx->pc = 0x1A9738u;
    // 0x1a9738: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a9738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a973c:
    // 0x1a973c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9740: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a9740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a9744: 0x0  nop
    ctx->pc = 0x1a9744u;
    // NOP
    // 0x1a9748: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x1a9748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a974c: 0x0  nop
    ctx->pc = 0x1a974cu;
    // NOP
    // 0x1a9750: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1A9750u;
    {
        const bool branch_taken_0x1a9750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9750u;
        // 0x1a9754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9750) {
            ctx->pc = 0x1A9840u;
            goto label_1a9840;
        }
    }
    ctx->pc = 0x1A9758u;
    // 0x1a9758: 0x46006845  abs.s       $f1, $f13
    ctx->pc = 0x1a9758u;
    ctx->f[1] = FPU_ABS_S(ctx->f[13]);
    // 0x1a975c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a9760: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a9760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a9764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9768: 0x0  nop
    ctx->pc = 0x1a9768u;
    // NOP
    // 0x1a976c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a976cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9770: 0x0  nop
    ctx->pc = 0x1a9770u;
    // NOP
    // 0x1a9774: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1A9774u;
    {
        const bool branch_taken_0x1a9774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9774) {
            ctx->pc = 0x1A9840u;
            goto label_1a9840;
        }
    }
    ctx->pc = 0x1A977Cu;
    // 0x1a977c: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x1a977cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9780: 0x0  nop
    ctx->pc = 0x1a9780u;
    // NOP
    // 0x1a9784: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9784u;
    {
        const bool branch_taken_0x1a9784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9784) {
            ctx->pc = 0x1A979Cu;
            goto label_1a979c;
        }
    }
    ctx->pc = 0x1A978Cu;
    // 0x1a978c: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x1a978cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9790: 0x0  nop
    ctx->pc = 0x1a9790u;
    // NOP
    // 0x1a9794: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9794u;
    {
        const bool branch_taken_0x1a9794 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9794u;
        // 0x1a9798: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9794) {
            ctx->pc = 0x1A97A8u;
            goto label_1a97a8;
        }
    }
    ctx->pc = 0x1A979Cu;
label_1a979c:
    // 0x1a979c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1A979Cu;
    SET_GPR_U32(ctx, 31, 0x1A97A4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1A979Cu, 0x1A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97A4u;
label_1a97a4:
    // 0x1a97a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a97a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a97a8:
    // 0x1a97a8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1a97a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1a97ac: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x1a97acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x1a97b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a97b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a97b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a97b8: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x1a97b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x1a97bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a97bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a97c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a97c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a97c4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1a97c8: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x1a97c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x1a97cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a97ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a97d0: 0xc4410954  lwc1        $f1, 0x954($v0)
    ctx->pc = 0x1a97d0u;
    { uint32_t bits = FAST_READ32(0x3F0954u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a97d4: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1a97d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1a97d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a97d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a97dc: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1a97dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1a97e0: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x1A97E0u;
    SET_GPR_U32(ctx, 31, 0x1A97E8u);
    ctx->pc = 0x1A97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97E0u;
    // 0x1a97e4: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x1A97E0u, 0x1A97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97E8u;
label_1a97e8:
    // 0x1a97e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a97e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a97ec: 0x0  nop
    ctx->pc = 0x1a97ecu;
    // NOP
    // 0x1a97f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a97f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a97f4: 0x0  nop
    ctx->pc = 0x1a97f4u;
    // NOP
    // 0x1a97f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A97F8u;
    {
        const bool branch_taken_0x1a97f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97F8u;
        // 0x1a97fc: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97f8) {
            ctx->pc = 0x1A9804u;
            goto label_1a9804;
        }
    }
    ctx->pc = 0x1A9800u;
    // 0x1a9800: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1a9800u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1a9804:
    // 0x1a9804: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a980c: 0x0  nop
    ctx->pc = 0x1a980cu;
    // NOP
    // 0x1a9810: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9810u;
    {
        const bool branch_taken_0x1a9810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9810u;
        // 0x1a9814: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9810) {
            ctx->pc = 0x1A9828u;
            goto label_1a9828;
        }
    }
    ctx->pc = 0x1A9818u;
    // 0x1a9818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a981c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a981cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9820: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9820u;
    {
        const bool branch_taken_0x1a9820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9820u;
        // 0x1a9824: 0x46001000  add.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9820) {
            ctx->pc = 0x1A9838u;
            goto label_1a9838;
        }
    }
    ctx->pc = 0x1A9828u;
label_1a9828:
    // 0x1a9828: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a982c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a982cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9830: 0x0  nop
    ctx->pc = 0x1a9830u;
    // NOP
    // 0x1a9834: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a9834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a9838:
    // 0x1a9838: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a9838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a983c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9840:
    // 0x1a9840: 0x12820017  beq         $s4, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9840u;
    {
        const bool branch_taken_0x1a9840 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9840u;
        // 0x1a9844: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9840) {
            ctx->pc = 0x1A98A0u;
            goto label_1a98a0;
        }
    }
    ctx->pc = 0x1A9848u;
    // 0x1a9848: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9848u;
    {
        const bool branch_taken_0x1a9848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9848) {
            ctx->pc = 0x1A984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9848u;
            // 0x1a984c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9860u;
            goto label_1a9860;
        }
    }
    ctx->pc = 0x1A9850u;
    // 0x1a9850: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9850u;
    {
        const bool branch_taken_0x1a9850 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9850) {
            ctx->pc = 0x1A9854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9850u;
            // 0x1a9854: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9878u;
            goto label_1a9878;
        }
    }
    ctx->pc = 0x1A9858u;
    // 0x1a9858: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A9858u;
    {
        const bool branch_taken_0x1a9858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9858u;
        // 0x1a985c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9858) {
            ctx->pc = 0x1A9924u;
            goto label_1a9924;
        }
    }
    ctx->pc = 0x1A9860u;
label_1a9860:
    // 0x1a9860: 0x1282001b  beq         $s4, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A9860u;
    {
        const bool branch_taken_0x1a9860 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9860u;
        // 0x1a9864: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9860) {
            ctx->pc = 0x1A98D0u;
            goto label_1a98d0;
        }
    }
    ctx->pc = 0x1A9868u;
    // 0x1a9868: 0x5282001f  beql        $s4, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9868u;
    {
        const bool branch_taken_0x1a9868 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9868) {
            ctx->pc = 0x1A986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9868u;
            // 0x1a986c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A98E8u;
            goto label_1a98e8;
        }
    }
    ctx->pc = 0x1A9870u;
    // 0x1a9870: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A9870u;
    {
        const bool branch_taken_0x1a9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9870u;
        // 0x1a9874: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9870) {
            ctx->pc = 0x1A9924u;
            goto label_1a9924;
        }
    }
    ctx->pc = 0x1A9878u;
label_1a9878:
    // 0x1a9878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a987c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a987cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9880: 0xc06a51e  jal         func_1A9478
    ctx->pc = 0x1A9880u;
    SET_GPR_U32(ctx, 31, 0x1A9888u);
    ctx->pc = 0x1A9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9880u;
    // 0x1a9884: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9478u, 0x1A9880u, 0x1A9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9888u;
label_1a9888:
    // 0x1a9888: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a9888u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a988c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a9890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9894: 0x26660003  addiu       $a2, $s3, 0x3
    ctx->pc = 0x1a9894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1a9898: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A9898u;
    {
        const bool branch_taken_0x1a9898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9898u;
        // 0x1a989c: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9898) {
            ctx->pc = 0x1A9914u;
            goto label_1a9914;
        }
    }
    ctx->pc = 0x1A98A0u;
label_1a98a0:
    // 0x1a98a0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a98a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a98a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a98a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98ac: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x1a98acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a98b0: 0xc06a51e  jal         func_1A9478
    ctx->pc = 0x1A98B0u;
    SET_GPR_U32(ctx, 31, 0x1A98B8u);
    ctx->pc = 0x1A98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98B0u;
    // 0x1a98b4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9478u, 0x1A98B0u, 0x1A98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98B8u;
label_1a98b8:
    // 0x1a98b8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a98bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a98bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a98c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98c4: 0x26660003  addiu       $a2, $s3, 0x3
    ctx->pc = 0x1a98c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1a98c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A98C8u;
    {
        const bool branch_taken_0x1a98c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98C8u;
        // 0x1a98cc: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98c8) {
            ctx->pc = 0x1A9914u;
            goto label_1a9914;
        }
    }
    ctx->pc = 0x1A98D0u;
label_1a98d0:
    // 0x1a98d0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a98d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a98d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a98d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98dc: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x1a98dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a98e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A98E0u;
    {
        const bool branch_taken_0x1a98e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E0u;
        // 0x1a98e4: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98e0) {
            ctx->pc = 0x1A98F4u;
            goto label_1a98f4;
        }
    }
    ctx->pc = 0x1A98E8u;
label_1a98e8:
    // 0x1a98e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a98e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a98ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a98f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a98f4:
    // 0x1a98f4: 0xc06a51e  jal         func_1A9478
    ctx->pc = 0x1A98F4u;
    SET_GPR_U32(ctx, 31, 0x1A98FCu);
    ctx->pc = 0x1A9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9478u, 0x1A98F4u, 0x1A98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98FCu;
label_1a98fc:
    // 0x1a98fc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1a9900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a9904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9908: 0x26660002  addiu       $a2, $s3, 0x2
    ctx->pc = 0x1a9908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1a990c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1a990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a9910: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1a9910u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1a9914:
    // 0x1a9914: 0xc06a51e  jal         func_1A9478
    ctx->pc = 0x1A9914u;
    SET_GPR_U32(ctx, 31, 0x1A991Cu);
    ctx->pc = 0x1A9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9478u, 0x1A9914u, 0x1A991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A991Cu;
label_1a991c:
    // 0x1a991c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1a991cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1a9920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9924:
    // 0x1a9924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a992c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a992cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9930: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9934: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a9934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9938: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a9938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a993c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a993cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9940: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9940u;
        // 0x1a9944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9948u;
}
