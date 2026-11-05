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

// Function: sub_001E7E88
// Address: 0x1e7e88 - 0x1e7fb0
void sub_001E7E88_0x1e7e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7E88_0x1e7e88");
#endif

    switch (ctx->pc) {
        case 0x1e7ed0u: goto label_1e7ed0;
        case 0x1e7ee8u: goto label_1e7ee8;
        case 0x1e7f18u: goto label_1e7f18;
        case 0x1e7f34u: goto label_1e7f34;
        default: break;
    }

    ctx->pc = 0x1e7e88u;

    // 0x1e7e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e7e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7e90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7e9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e7e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ea0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e7ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e7ea4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e7ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ea8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e7eac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e7eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7eb0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e7eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e7eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7eb8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e7ebc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1e7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1e7ec0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1e7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1e7ec4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e7ec8: 0xc07a3b0  jal         func_1E8EC0
    ctx->pc = 0x1E7EC8u;
    SET_GPR_U32(ctx, 31, 0x1E7ED0u);
    ctx->pc = 0x1E7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7EC8u;
    // 0x1e7ecc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EC0u, 0x1E7EC8u, 0x1E7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7ED0u;
label_1e7ed0:
    // 0x1e7ed0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e7ed4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E7ED4u;
    {
        const bool branch_taken_0x1e7ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7ED4u;
        // 0x1e7ed8: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ed4) {
            ctx->pc = 0x1E7F78u;
            goto label_1e7f78;
        }
    }
    ctx->pc = 0x1E7EDCu;
    // 0x1e7edc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e7edcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ee0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e7ee0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ee4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ee8:
    // 0x1e7ee8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e7eec: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1e7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7ef0: 0xc44091f8  lwc1        $f0, -0x6E08($v0)
    ctx->pc = 0x1e7ef0u;
    { uint32_t bits = FAST_READ32(0x3F91F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e7ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7ef8: 0x0  nop
    ctx->pc = 0x1e7ef8u;
    // NOP
    // 0x1e7efc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7EFCu;
    {
        const bool branch_taken_0x1e7efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7EFCu;
        // 0x1e7f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7efc) {
            ctx->pc = 0x1E7F20u;
            goto label_1e7f20;
        }
    }
    ctx->pc = 0x1E7F04u;
    // 0x1e7f04: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e7f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f10: 0xc078106  jal         func_1E0418
    ctx->pc = 0x1E7F10u;
    SET_GPR_U32(ctx, 31, 0x1E7F18u);
    ctx->pc = 0x1E7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F10u;
    // 0x1e7f14: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0418u, 0x1E7F10u, 0x1E7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F18u;
label_1e7f18:
    // 0x1e7f18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7F18u;
    {
        const bool branch_taken_0x1e7f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f18) {
            ctx->pc = 0x1E7F34u;
            goto label_1e7f34;
        }
    }
    ctx->pc = 0x1E7F20u;
label_1e7f20:
    // 0x1e7f20: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7f24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f28: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e7f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f2c: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E7F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F34u);
    ctx->pc = 0x1E7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F2Cu;
    // 0x1e7f30: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E7F2Cu, 0x1E7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F34u;
label_1e7f34:
    // 0x1e7f34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7F34u;
    {
        const bool branch_taken_0x1e7f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F34u;
        // 0x1e7f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f34) {
            ctx->pc = 0x1E7F5Cu;
            goto label_1e7f5c;
        }
    }
    ctx->pc = 0x1E7F3Cu;
    // 0x1e7f3c: 0xae1e0030  sw          $fp, 0x30($s0)
    ctx->pc = 0x1e7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 30));
    // 0x1e7f40: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e7f44: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7f48: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x1e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1e7f4c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e7f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e7f50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7f54: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1e7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1e7f58: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1e7f5c:
    // 0x1e7f5c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e7f60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7f64: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x1e7f64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1e7f68: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1e7f6c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e7f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7f70: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1E7F70u;
    {
        const bool branch_taken_0x1e7f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F70u;
        // 0x1e7f74: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f70) {
            ctx->pc = 0x1E7EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7ee8;
        }
    }
    ctx->pc = 0x1E7F78u;
label_1e7f78:
    // 0x1e7f78: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e7f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7f80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7f84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e7f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7f88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7f8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e7f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e7f90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e7f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7f94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e7f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7f98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e7f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7f9c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1e7f9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e7fa0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1e7fa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7fa4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e7fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e7fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA8u;
        // 0x1e7fac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7FB0u;
}
