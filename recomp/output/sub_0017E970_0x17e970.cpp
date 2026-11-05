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

// Function: sub_0017E970
// Address: 0x17e970 - 0x17ea90
void sub_0017E970_0x17e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E970_0x17e970");
#endif

    switch (ctx->pc) {
        case 0x17e9ecu: goto label_17e9ec;
        case 0x17ea48u: goto label_17ea48;
        default: break;
    }

    ctx->pc = 0x17e970u;

    // 0x17e970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e974: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17e974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e978: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17e97c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e980: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17e984: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x17e984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17e988: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17e988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e98c: 0x8e1100bc  lw          $s1, 0xBC($s0)
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x17e990: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E990u;
    {
        const bool branch_taken_0x17e990 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E990u;
        // 0x17e994: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e990) {
            ctx->pc = 0x17E9A0u;
            goto label_17e9a0;
        }
    }
    ctx->pc = 0x17E998u;
    // 0x17e998: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17E998u;
    {
        const bool branch_taken_0x17e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E998u;
        // 0x17e99c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e998) {
            ctx->pc = 0x17EA74u;
            goto label_17ea74;
        }
    }
    ctx->pc = 0x17E9A0u;
label_17e9a0:
    // 0x17e9a0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x17e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17e9a4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x17e9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9a8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x17e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17e9ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e9b0: 0x8c85020c  lw          $a1, 0x20C($a0)
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x17e9b4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17e9b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e9bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e9c0: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17e9c4: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E9C4u;
    {
        const bool branch_taken_0x17e9c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9c4) {
            ctx->pc = 0x17E9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9C4u;
            // 0x17e9c8: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9D4u;
            goto label_17e9d4;
        }
    }
    ctx->pc = 0x17E9CCu;
    // 0x17e9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E9CCu;
    {
        const bool branch_taken_0x17e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9CCu;
        // 0x17e9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9cc) {
            ctx->pc = 0x17E9DCu;
            goto label_17e9dc;
        }
    }
    ctx->pc = 0x17E9D4u;
label_17e9d4:
    // 0x17e9d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e9d8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x17e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17e9dc:
    // 0x17e9dc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x17e9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17e9e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9e4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17E9E4u;
    SET_GPR_U32(ctx, 31, 0x17E9ECu);
    ctx->pc = 0x17E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9E4u;
    // 0x17e9e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17E9E4u, 0x17E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9ECu;
label_17e9ec:
    // 0x17e9ec: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17e9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e9f0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e9f4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e9f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17e9f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17e9fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17e9fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17ea00: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x17ea00u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17ea04: 0x26459a08  addiu       $a1, $s2, -0x65F8
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x17ea08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17ea0c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17ea10: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x17ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17ea14: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17ea18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ea1c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17ea20: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x17ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x17ea24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EA24u;
    {
        const bool branch_taken_0x17ea24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA24u;
        // 0x17ea28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea24) {
            ctx->pc = 0x17EA34u;
            goto label_17ea34;
        }
    }
    ctx->pc = 0x17EA2Cu;
    // 0x17ea2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17EA2Cu;
    {
        const bool branch_taken_0x17ea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA2Cu;
        // 0x17ea30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea2c) {
            ctx->pc = 0x17EA40u;
            goto label_17ea40;
        }
    }
    ctx->pc = 0x17EA34u;
label_17ea34:
    // 0x17ea34: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x17ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x17ea38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ea3c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x17ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17ea40:
    // 0x17ea40: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17EA40u;
    SET_GPR_U32(ctx, 31, 0x17EA48u);
    ctx->pc = 0x17EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA40u;
    // 0x17ea44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17EA40u, 0x17EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA48u;
label_17ea48:
    // 0x17ea48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ea4c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ea50: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17ea54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17ea54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17ea58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17ea58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17ea5c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x17ea5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17ea60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17ea60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ea64: 0x0  nop
    ctx->pc = 0x17ea64u;
    // NOP
    // 0x17ea68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17EA68u;
    {
        const bool branch_taken_0x17ea68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA68u;
        // 0x17ea6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea68) {
            ctx->pc = 0x17EA74u;
            goto label_17ea74;
        }
    }
    ctx->pc = 0x17EA70u;
    // 0x17ea70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ea70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ea74:
    // 0x17ea74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17ea74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ea78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17ea78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ea7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17ea7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ea80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17ea80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ea84: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x17ea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ea88: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA88u;
        // 0x17ea8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA90u;
}
