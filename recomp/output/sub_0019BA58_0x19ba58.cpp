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

// Function: sub_0019BA58
// Address: 0x19ba58 - 0x19bd30
void sub_0019BA58_0x19ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BA58_0x19ba58");
#endif

    switch (ctx->pc) {
        case 0x19ba84u: goto label_19ba84;
        case 0x19baf4u: goto label_19baf4;
        case 0x19bb04u: goto label_19bb04;
        case 0x19bb14u: goto label_19bb14;
        case 0x19bb74u: goto label_19bb74;
        case 0x19bb7cu: goto label_19bb7c;
        case 0x19bb8cu: goto label_19bb8c;
        case 0x19bbf8u: goto label_19bbf8;
        case 0x19bc00u: goto label_19bc00;
        case 0x19bc10u: goto label_19bc10;
        case 0x19bc7cu: goto label_19bc7c;
        default: break;
    }

    ctx->pc = 0x19ba58u;

    // 0x19ba58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ba5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ba60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ba64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ba64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ba6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ba70: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x19ba74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BA74u;
    {
        const bool branch_taken_0x19ba74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA74u;
        // 0x19ba78: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba74) {
            ctx->pc = 0x19BA8Cu;
            goto label_19ba8c;
        }
    }
    ctx->pc = 0x19BA7Cu;
    // 0x19ba7c: 0xc067598  jal         func_19D660
    ctx->pc = 0x19BA7Cu;
    SET_GPR_U32(ctx, 31, 0x19BA84u);
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19BA7Cu, 0x19BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA84u;
label_19ba84:
    // 0x19ba84: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x19BA84u;
    {
        const bool branch_taken_0x19ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA84u;
        // 0x19ba88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba84) {
            ctx->pc = 0x19BD20u;
            goto label_19bd20;
        }
    }
    ctx->pc = 0x19BA8Cu;
label_19ba8c:
    // 0x19ba8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19ba8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba90: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x19ba94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BA94u;
    {
        const bool branch_taken_0x19ba94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA94u;
        // 0x19ba98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba94) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA9Cu;
    // 0x19ba9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ba9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19baa0: 0x0  nop
    ctx->pc = 0x19baa0u;
    // NOP
    // 0x19baa4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19baa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19baa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BAA8u;
    {
        const bool branch_taken_0x19baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19baa8) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BAB0u;
label_19bab0:
    // 0x19bab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19bab4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bab8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19bab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19babc: 0x0  nop
    ctx->pc = 0x19babcu;
    // NOP
    // 0x19bac0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19bac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19bac4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19bac4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19bac8:
    // 0x19bac8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19bacc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19baccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19bad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bad4: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x19bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bad8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19bad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19badc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19badcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bae0: 0x0  nop
    ctx->pc = 0x19bae0u;
    // NOP
    // 0x19bae4: 0x4503008e  bc1tl       . + 4 + (0x8E << 2)
    ctx->pc = 0x19BAE4u;
    {
        const bool branch_taken_0x19bae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bae4) {
            ctx->pc = 0x19BAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BAE4u;
            // 0x19bae8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD20u;
            goto label_19bd20;
        }
    }
    ctx->pc = 0x19BAECu;
    // 0x19baec: 0xc0676b8  jal         func_19DAE0
    ctx->pc = 0x19BAECu;
    SET_GPR_U32(ctx, 31, 0x19BAF4u);
    ctx->pc = 0x19BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAECu;
    // 0x19baf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19BAECu, 0x19BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAF4u;
label_19baf4:
    // 0x19baf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BAF4u;
    {
        const bool branch_taken_0x19baf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19baf4) {
            ctx->pc = 0x19BB0Cu;
            goto label_19bb0c;
        }
    }
    ctx->pc = 0x19BAFCu;
    // 0x19bafc: 0xc067178  jal         func_19C5E0
    ctx->pc = 0x19BAFCu;
    SET_GPR_U32(ctx, 31, 0x19BB04u);
    ctx->pc = 0x19BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAFCu;
    // 0x19bb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5E0u, 0x19BAFCu, 0x19BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB04u;
label_19bb04:
    // 0x19bb04: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x19BB04u;
    {
        const bool branch_taken_0x19bb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB04u;
        // 0x19bb08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb04) {
            ctx->pc = 0x19BD20u;
            goto label_19bd20;
        }
    }
    ctx->pc = 0x19BB0Cu;
label_19bb0c:
    // 0x19bb0c: 0xc06766e  jal         func_19D9B8
    ctx->pc = 0x19BB0Cu;
    SET_GPR_U32(ctx, 31, 0x19BB14u);
    ctx->pc = 0x19BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB0Cu;
    // 0x19bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19BB0Cu, 0x19BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB14u;
label_19bb14:
    // 0x19bb14: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19BB14u;
    {
        const bool branch_taken_0x19bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB14u;
        // 0x19bb18: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb14) {
            ctx->pc = 0x19BB94u;
            goto label_19bb94;
        }
    }
    ctx->pc = 0x19BB1Cu;
    // 0x19bb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb20: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x19bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19bb24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BB24u;
    {
        const bool branch_taken_0x19bb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19bb24) {
            ctx->pc = 0x19BB40u;
            goto label_19bb40;
        }
    }
    ctx->pc = 0x19BB2Cu;
    // 0x19bb2c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x19bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19bb30: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x19bb34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19bb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19bb38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19BB38u;
    {
        const bool branch_taken_0x19bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB38u;
        // 0x19bb3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb38) {
            ctx->pc = 0x19BB64u;
            goto label_19bb64;
        }
    }
    ctx->pc = 0x19BB40u;
label_19bb40:
    // 0x19bb40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BB40u;
    {
        const bool branch_taken_0x19bb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB40u;
        // 0x19bb44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb40) {
            ctx->pc = 0x19BB5Cu;
            goto label_19bb5c;
        }
    }
    ctx->pc = 0x19BB48u;
    // 0x19bb48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bb4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BB4Cu;
    {
        const bool branch_taken_0x19bb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB4Cu;
        // 0x19bb50: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb4c) {
            ctx->pc = 0x19BB5Cu;
            goto label_19bb5c;
        }
    }
    ctx->pc = 0x19BB54u;
    // 0x19bb54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BB54u;
    {
        const bool branch_taken_0x19bb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB54u;
        // 0x19bb58: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb54) {
            ctx->pc = 0x19BB64u;
            goto label_19bb64;
        }
    }
    ctx->pc = 0x19BB5Cu;
label_19bb5c:
    // 0x19bb5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19bb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bb64:
    // 0x19bb64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19BB64u;
    {
        const bool branch_taken_0x19bb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB64u;
        // 0x19bb68: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb64) {
            ctx->pc = 0x19BB98u;
            goto label_19bb98;
        }
    }
    ctx->pc = 0x19BB6Cu;
    // 0x19bb6c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19BB6Cu;
    SET_GPR_U32(ctx, 31, 0x19BB74u);
    ctx->pc = 0x19BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB6Cu;
    // 0x19bb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19BB6Cu, 0x19BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB74u;
label_19bb74:
    // 0x19bb74: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19BB74u;
    SET_GPR_U32(ctx, 31, 0x19BB7Cu);
    ctx->pc = 0x19BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB74u;
    // 0x19bb78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19BB74u, 0x19BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB7Cu;
label_19bb7c:
    // 0x19bb7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BB7Cu;
    {
        const bool branch_taken_0x19bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB7Cu;
        // 0x19bb80: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb7c) {
            ctx->pc = 0x19BB98u;
            goto label_19bb98;
        }
    }
    ctx->pc = 0x19BB84u;
    // 0x19bb84: 0xc067070  jal         func_19C1C0
    ctx->pc = 0x19BB84u;
    SET_GPR_U32(ctx, 31, 0x19BB8Cu);
    ctx->pc = 0x19BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BB84u;
    // 0x19bb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1C0u, 0x19BB84u, 0x19BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB8Cu;
label_19bb8c:
    // 0x19bb8c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x19BB8Cu;
    {
        const bool branch_taken_0x19bb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB8Cu;
        // 0x19bb90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb8c) {
            ctx->pc = 0x19BD20u;
            goto label_19bd20;
        }
    }
    ctx->pc = 0x19BB94u;
label_19bb94:
    // 0x19bb94: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_19bb98:
    // 0x19bb98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BB98u;
    {
        const bool branch_taken_0x19bb98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB98u;
        // 0x19bb9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb98) {
            ctx->pc = 0x19BBB4u;
            goto label_19bbb4;
        }
    }
    ctx->pc = 0x19BBA0u;
    // 0x19bba0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19bba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19bba4: 0x0  nop
    ctx->pc = 0x19bba4u;
    // NOP
    // 0x19bba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19bba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19bbac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BBACu;
    {
        const bool branch_taken_0x19bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bbac) {
            ctx->pc = 0x19BBCCu;
            goto label_19bbcc;
        }
    }
    ctx->pc = 0x19BBB4u;
label_19bbb4:
    // 0x19bbb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19bbb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bbbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19bbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19bbc0: 0x0  nop
    ctx->pc = 0x19bbc0u;
    // NOP
    // 0x19bbc4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19bbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19bbc8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19bbc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19bbcc:
    // 0x19bbcc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19bbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19bbd0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19bbd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19bbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bbd8: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x19bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bbdc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19bbdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19bbe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19bbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bbe4: 0x0  nop
    ctx->pc = 0x19bbe4u;
    // NOP
    // 0x19bbe8: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
    ctx->pc = 0x19BBE8u;
    {
        const bool branch_taken_0x19bbe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bbe8) {
            ctx->pc = 0x19BBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BBE8u;
            // 0x19bbec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD20u;
            goto label_19bd20;
        }
    }
    ctx->pc = 0x19BBF0u;
    // 0x19bbf0: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19BBF0u;
    SET_GPR_U32(ctx, 31, 0x19BBF8u);
    ctx->pc = 0x19BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBF0u;
    // 0x19bbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19BBF0u, 0x19BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBF8u;
label_19bbf8:
    // 0x19bbf8: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19BBF8u;
    SET_GPR_U32(ctx, 31, 0x19BC00u);
    ctx->pc = 0x19BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBF8u;
    // 0x19bbfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19BBF8u, 0x19BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC00u;
label_19bc00:
    // 0x19bc00: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19BC00u;
    {
        const bool branch_taken_0x19bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc00) {
            ctx->pc = 0x19BC74u;
            goto label_19bc74;
        }
    }
    ctx->pc = 0x19BC08u;
    // 0x19bc08: 0xc067258  jal         func_19C960
    ctx->pc = 0x19BC08u;
    SET_GPR_U32(ctx, 31, 0x19BC10u);
    ctx->pc = 0x19BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC08u;
    // 0x19bc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19BC08u, 0x19BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC10u;
label_19bc10:
    // 0x19bc10: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x19bc14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BC14u;
    {
        const bool branch_taken_0x19bc14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC14u;
        // 0x19bc18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc14) {
            ctx->pc = 0x19BC30u;
            goto label_19bc30;
        }
    }
    ctx->pc = 0x19BC1Cu;
    // 0x19bc1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bc20: 0x0  nop
    ctx->pc = 0x19bc20u;
    // NOP
    // 0x19bc24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bc28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BC28u;
    {
        const bool branch_taken_0x19bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc28) {
            ctx->pc = 0x19BC48u;
            goto label_19bc48;
        }
    }
    ctx->pc = 0x19BC30u;
label_19bc30:
    // 0x19bc30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19bc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bc38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bc3c: 0x0  nop
    ctx->pc = 0x19bc3cu;
    // NOP
    // 0x19bc40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bc40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bc44: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19bc44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19bc48:
    // 0x19bc48: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19bc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19bc4c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19bc4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19bc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bc54: 0x0  nop
    ctx->pc = 0x19bc54u;
    // NOP
    // 0x19bc58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19bc58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19bc5c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x19bc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x19bc60: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x19bc64: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19BC64u;
    {
        const bool branch_taken_0x19bc64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC64u;
        // 0x19bc68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc64) {
            ctx->pc = 0x19BCD8u;
            goto label_19bcd8;
        }
    }
    ctx->pc = 0x19BC6Cu;
    // 0x19bc6c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19BC6Cu;
    {
        const bool branch_taken_0x19bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC6Cu;
        // 0x19bc70: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc6c) {
            ctx->pc = 0x19BCF0u;
            goto label_19bcf0;
        }
    }
    ctx->pc = 0x19BC74u;
label_19bc74:
    // 0x19bc74: 0xc067598  jal         func_19D660
    ctx->pc = 0x19BC74u;
    SET_GPR_U32(ctx, 31, 0x19BC7Cu);
    ctx->pc = 0x19BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC74u;
    // 0x19bc78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19BC74u, 0x19BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC7Cu;
label_19bc7c:
    // 0x19bc7c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x19bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x19bc80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BC80u;
    {
        const bool branch_taken_0x19bc80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC80u;
        // 0x19bc84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc80) {
            ctx->pc = 0x19BC9Cu;
            goto label_19bc9c;
        }
    }
    ctx->pc = 0x19BC88u;
    // 0x19bc88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bc8c: 0x0  nop
    ctx->pc = 0x19bc8cu;
    // NOP
    // 0x19bc90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bc90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bc94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BC94u;
    {
        const bool branch_taken_0x19bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc94) {
            ctx->pc = 0x19BCB4u;
            goto label_19bcb4;
        }
    }
    ctx->pc = 0x19BC9Cu;
label_19bc9c:
    // 0x19bc9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19bca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bca8: 0x0  nop
    ctx->pc = 0x19bca8u;
    // NOP
    // 0x19bcac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bcb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19bcb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19bcb4:
    // 0x19bcb4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19bcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19bcb8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19bcb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19bcbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bcc0: 0x0  nop
    ctx->pc = 0x19bcc0u;
    // NOP
    // 0x19bcc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19bcc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19bcc8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19bcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x19bccc: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x19bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x19bcd0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BCD0u;
    {
        const bool branch_taken_0x19bcd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCD0u;
        // 0x19bcd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcd0) {
            ctx->pc = 0x19BCECu;
            goto label_19bcec;
        }
    }
    ctx->pc = 0x19BCD8u;
label_19bcd8:
    // 0x19bcd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bcdc: 0x0  nop
    ctx->pc = 0x19bcdcu;
    // NOP
    // 0x19bce0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bce4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BCE4u;
    {
        const bool branch_taken_0x19bce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bce4) {
            ctx->pc = 0x19BD04u;
            goto label_19bd04;
        }
    }
    ctx->pc = 0x19BCECu;
label_19bcec:
    // 0x19bcec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19bcf0:
    // 0x19bcf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bcf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bcf8: 0x0  nop
    ctx->pc = 0x19bcf8u;
    // NOP
    // 0x19bcfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bcfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19bd00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19bd00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19bd04:
    // 0x19bd04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19bd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19bd08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19bd08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19bd0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bd10: 0x0  nop
    ctx->pc = 0x19bd10u;
    // NOP
    // 0x19bd14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19bd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19bd18: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x19bd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x19bd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19bd20:
    // 0x19bd20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19bd20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bd24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bd28: 0x3e00008  jr          $ra
    ctx->pc = 0x19BD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BD30u;
}
