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

// Function: sub_002C0538
// Address: 0x2c0538 - 0x2c0840
void sub_002C0538_0x2c0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0538_0x2c0538");
#endif

    switch (ctx->pc) {
        case 0x2c0574u: goto label_2c0574;
        case 0x2c0608u: goto label_2c0608;
        case 0x2c0670u: goto label_2c0670;
        case 0x2c06d8u: goto label_2c06d8;
        default: break;
    }

    ctx->pc = 0x2c0538u;

    // 0x2c0538: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c0538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c053c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2c053cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c0540: 0x80c30004  lb          $v1, 0x4($a2)
    ctx->pc = 0x2c0540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c0544: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c0544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0548: 0x90c40004  lbu         $a0, 0x4($a2)
    ctx->pc = 0x2c0548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c054c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0550: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C0550u;
    {
        const bool branch_taken_0x2c0550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0550u;
        // 0x2c0554: 0x46003146  mov.s       $f5, $f6 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0550) {
            ctx->pc = 0x2C05CCu;
            goto label_2c05cc;
        }
    }
    ctx->pc = 0x2C0558u;
    // 0x2c0558: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2c0558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c055c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2c055cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c0560: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0568: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c0568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c056c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C056Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C056Cu;
        // 0x2c0570: 0x460d0002  mul.s       $f0, $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C056Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0574u;
label_2c0574:
    // 0x2c0574: 0x9484fffe  lhu         $a0, -0x2($a0)
    ctx->pc = 0x2c0574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x2c0578: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2c0578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c057c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2c057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c0580: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2c0580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c0584: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c0584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0588: 0x0  nop
    ctx->pc = 0x2c0588u;
    // NOP
    // 0x2c058c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c058cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0590: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0594: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c0594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c059c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c05a0: 0xc463fffc  lwc1        $f3, -0x4($v1)
    ctx->pc = 0x2c05a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c05a4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2c05a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2c05a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c05ac: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2c05acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c05b0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c05b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c05b4: 0x0  nop
    ctx->pc = 0x2c05b4u;
    // NOP
    // 0x2c05b8: 0x0  nop
    ctx->pc = 0x2c05b8u;
    // NOP
    // 0x2c05bc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c05bcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2c05c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c05c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c05c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C05C4u;
    {
        const bool branch_taken_0x2c05c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05C4u;
        // 0x2c05c8: 0x46011940  add.s       $f5, $f3, $f1 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05c4) {
            ctx->pc = 0x2C063Cu;
            goto label_2c063c;
        }
    }
    ctx->pc = 0x2C05CCu;
label_2c05cc:
    // 0x2c05cc: 0x460d6101  sub.s       $f4, $f12, $f13
    ctx->pc = 0x2c05ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x2c05d0: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x2c05d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c05d4: 0x0  nop
    ctx->pc = 0x2c05d4u;
    // NOP
    // 0x2c05d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C05D8u;
    {
        const bool branch_taken_0x2c05d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c05d8) {
            ctx->pc = 0x2C05DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C05D8u;
            // 0x2c05dc: 0x46003106  mov.s       $f4, $f6 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C05E0u;
            goto label_2c05e0;
        }
    }
    ctx->pc = 0x2C05E0u;
label_2c05e0:
    // 0x2c05e0: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2c05e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c05e4: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C05E4u;
    {
        const bool branch_taken_0x2c05e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05E4u;
        // 0x2c05e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05e4) {
            ctx->pc = 0x2C063Cu;
            goto label_2c063c;
        }
    }
    ctx->pc = 0x2C05ECu;
    // 0x2c05ec: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2c05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c05f0: 0xb1600  sll         $v0, $t3, 24
    ctx->pc = 0x2c05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x2c05f4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c05f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c05f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c05f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c05fc: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x2c05fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2c0600: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c0600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0604: 0x0  nop
    ctx->pc = 0x2c0604u;
    // NOP
label_2c0608:
    // 0x2c0608: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c060c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c060cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0610: 0x0  nop
    ctx->pc = 0x2c0610u;
    // NOP
    // 0x2c0614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0618: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c0618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c061c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2c061cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0620: 0x0  nop
    ctx->pc = 0x2c0620u;
    // NOP
    // 0x2c0624: 0x4501ffd3  bc1t        . + 4 + (-0x2D << 2)
    ctx->pc = 0x2C0624u;
    {
        const bool branch_taken_0x2c0624 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0624u;
        // 0x2c0628: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0624) {
            ctx->pc = 0x2C0574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0574;
        }
    }
    ctx->pc = 0x2C062Cu;
    // 0x2c062c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c062cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c0630: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2c0630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c0634: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C0634u;
    {
        const bool branch_taken_0x2c0634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0634u;
        // 0x2c0638: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0634) {
            ctx->pc = 0x2C0608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0608;
        }
    }
    ctx->pc = 0x2C063Cu;
label_2c063c:
    // 0x2c063c: 0xb1600  sll         $v0, $t3, 24
    ctx->pc = 0x2c063cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x2c0640: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2c0640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2c0644: 0x14e4001a  bne         $a3, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C0644u;
    {
        const bool branch_taken_0x2c0644 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0644u;
        // 0x2c0648: 0xe4102a  slt         $v0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0644) {
            ctx->pc = 0x2C06B0u;
            goto label_2c06b0;
        }
    }
    ctx->pc = 0x2C064Cu;
    // 0x2c064c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2c064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c0650: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2c0650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c0654: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2c0654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c0658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c065c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0664: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x2c0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0668: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0668u;
        // 0x2c066c: 0x460d0002  mul.s       $f0, $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0670u;
label_2c0670:
    // 0x2c0670: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2c0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c0674: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2c0674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2c0678: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2c0678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c067c: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2c067cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c0680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0684: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c0684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c0688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c068c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0690: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0694: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0698: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c0698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c069c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c069cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c06a0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2c06a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c06a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c06a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c06a8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2C06A8u;
    {
        const bool branch_taken_0x2c06a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06A8u;
        // 0x2c06ac: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06a8) {
            ctx->pc = 0x2C07C4u;
            goto label_2c07c4;
        }
    }
    ctx->pc = 0x2C06B0u;
label_2c06b0:
    // 0x2c06b0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C06B0u;
    {
        const bool branch_taken_0x2c06b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C06B0u;
        // 0x2c06b4: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06b0) {
            ctx->pc = 0x2C07C4u;
            goto label_2c07c4;
        }
    }
    ctx->pc = 0x2C06B8u;
    // 0x2c06b8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2c06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c06bc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c06bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c06c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c06c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c06c4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2c06c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c06c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c06cc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2c06ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c06d0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2c06d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c06d4: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x2c06d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2c06d8:
    // 0x2c06d8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2c06d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c06dc: 0x94a3fffe  lhu         $v1, -0x2($a1)
    ctx->pc = 0x2c06dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967294)));
    // 0x2c06e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c06e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c06e4: 0x0  nop
    ctx->pc = 0x2c06e4u;
    // NOP
    // 0x2c06e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c06e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c06ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c06ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c06f0: 0x0  nop
    ctx->pc = 0x2c06f0u;
    // NOP
    // 0x2c06f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c06f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c06f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c06f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c06fc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x2c06fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0700: 0x0  nop
    ctx->pc = 0x2c0700u;
    // NOP
    // 0x2c0704: 0x4501ffda  bc1t        . + 4 + (-0x26 << 2)
    ctx->pc = 0x2C0704u;
    {
        const bool branch_taken_0x2c0704 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0704u;
        // 0x2c0708: 0x46030842  mul.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0704) {
            ctx->pc = 0x2C0670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0670;
        }
    }
    ctx->pc = 0x2C070Cu;
    // 0x2c070c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2c070cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0710: 0x0  nop
    ctx->pc = 0x2c0710u;
    // NOP
    // 0x2c0714: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x2C0714u;
    {
        const bool branch_taken_0x2c0714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0714) {
            ctx->pc = 0x2C0718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0714u;
            // 0x2c0718: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0780u;
            goto label_2c0780;
        }
    }
    ctx->pc = 0x2C071Cu;
    // 0x2c071c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2c071cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0720: 0x0  nop
    ctx->pc = 0x2c0720u;
    // NOP
    // 0x2c0724: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2C0724u;
    {
        const bool branch_taken_0x2c0724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0724u;
        // 0x2c0728: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0724) {
            ctx->pc = 0x2C07B4u;
            goto label_2c07b4;
        }
    }
    ctx->pc = 0x2C072Cu;
    // 0x2c072c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2c072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c0730: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c0730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c0734: 0x46016081  sub.s       $f2, $f12, $f1
    ctx->pc = 0x2c0734u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2c0738: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2c0738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c073c: 0x460460c1  sub.s       $f3, $f12, $f4
    ctx->pc = 0x2c073cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x2c0740: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0744: 0x0  nop
    ctx->pc = 0x2c0744u;
    // NOP
    // 0x2c0748: 0x0  nop
    ctx->pc = 0x2c0748u;
    // NOP
    // 0x2c074c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2c074cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2c0750: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0754: 0xc441fffc  lwc1        $f1, -0x4($v0)
    ctx->pc = 0x2c0754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0758: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c0758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c075c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c075cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c0760: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c0760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0764: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c0764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c0768: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2c0768u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c076c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2c076cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2c0770: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x2c0770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2c0774: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c0774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c0778: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C0778u;
    {
        const bool branch_taken_0x2c0778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0778u;
        // 0x2c077c: 0x46013180  add.s       $f6, $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0778) {
            ctx->pc = 0x2C07C4u;
            goto label_2c07c4;
        }
    }
    ctx->pc = 0x2C0780u;
label_2c0780:
    // 0x2c0780: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2c0780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c0784: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2c0784u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c0788: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2c0788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2c078c: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2c078cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2c0790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0794: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c0794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0798: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c079c: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x2c079cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2c07a0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2c07a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2c07a4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2c07a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c07a8: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x2c07a8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x2c07ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c07acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c07b0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c07b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2c07b4:
    // 0x2c07b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c07b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c07b8: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x2c07b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2c07bc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2C07BCu;
    {
        const bool branch_taken_0x2c07bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07BCu;
        // 0x2c07c0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07bc) {
            ctx->pc = 0x2C06D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c06d8;
        }
    }
    ctx->pc = 0x2C07C4u;
label_2c07c4:
    // 0x2c07c4: 0xb1600  sll         $v0, $t3, 24
    ctx->pc = 0x2c07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x2c07c8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2c07c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2c07cc: 0x14e20019  bne         $a3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C07CCu;
    {
        const bool branch_taken_0x2c07cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07CCu;
        // 0x2c07d0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07cc) {
            ctx->pc = 0x2C0834u;
            goto label_2c0834;
        }
    }
    ctx->pc = 0x2C07D4u;
    // 0x2c07d4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2c07d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c07d8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x2c07d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c07dc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2c07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c07e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c07e4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2c07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c07e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c07e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c07ec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c07f0: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x2c07f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c07f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c07f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c07f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c07f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c07fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c07fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c0800: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x2c0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0808: 0x0  nop
    ctx->pc = 0x2c0808u;
    // NOP
    // 0x2c080c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c080cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c0810: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0814: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c0814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c0818: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c0818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c081c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c081cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c0820: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c0820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c0824: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c0824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c0828: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2c0828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2c082c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c082cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0830: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2c0830u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2c0834:
    // 0x2c0834: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0834u;
        // 0x2c0838: 0x46003006  mov.s       $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C083Cu;
    // 0x2c083c: 0x0  nop
    ctx->pc = 0x2c083cu;
    // NOP
    ctx->pc = 0x2c0840u;
}
