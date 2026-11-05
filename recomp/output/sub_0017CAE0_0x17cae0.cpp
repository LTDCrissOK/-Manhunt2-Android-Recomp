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

// Function: sub_0017CAE0
// Address: 0x17cae0 - 0x17cbb8
void sub_0017CAE0_0x17cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CAE0_0x17cae0");
#endif

    switch (ctx->pc) {
        case 0x17cb14u: goto label_17cb14;
        case 0x17cb28u: goto label_17cb28;
        case 0x17cb38u: goto label_17cb38;
        case 0x17cb54u: goto label_17cb54;
        case 0x17cb70u: goto label_17cb70;
        default: break;
    }

    ctx->pc = 0x17cae0u;

    // 0x17cae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17cae4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17cae8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17caec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17caecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17caf0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x17caf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x17caf4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17caf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17caf8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x17caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17cafc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17cafcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17cb00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17cb08: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17cb0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17CB0Cu;
    SET_GPR_U32(ctx, 31, 0x17CB14u);
    ctx->pc = 0x17CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB0Cu;
    // 0x17cb10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17CB0Cu, 0x17CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB14u;
label_17cb14:
    // 0x17cb14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17cb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb20: 0xc05f2ee  jal         func_17CBB8
    ctx->pc = 0x17CB20u;
    SET_GPR_U32(ctx, 31, 0x17CB28u);
    ctx->pc = 0x17CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB20u;
    // 0x17cb24: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CBB8u, 0x17CB20u, 0x17CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB28u;
label_17cb28:
    // 0x17cb28: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17CB28u;
    {
        const bool branch_taken_0x17cb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB28u;
        // 0x17cb2c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb28) {
            ctx->pc = 0x17CB74u;
            goto label_17cb74;
        }
    }
    ctx->pc = 0x17CB30u;
    // 0x17cb30: 0xc040d5c  jal         func_103570
    ctx->pc = 0x17CB30u;
    SET_GPR_U32(ctx, 31, 0x17CB38u);
    ctx->pc = 0x17CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB30u;
    // 0x17cb34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x17CB30u, 0x17CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB38u;
label_17cb38:
    // 0x17cb38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x17cb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17cb3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17cb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17cb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb4c: 0xc05f25a  jal         func_17C968
    ctx->pc = 0x17CB4Cu;
    SET_GPR_U32(ctx, 31, 0x17CB54u);
    ctx->pc = 0x17CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB4Cu;
    // 0x17cb50: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C968u, 0x17CB4Cu, 0x17CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB54u;
label_17cb54:
    // 0x17cb54: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x17cb54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cb58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x17cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17cb5c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17cb60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb68: 0xc05f310  jal         func_17CC40
    ctx->pc = 0x17CB68u;
    SET_GPR_U32(ctx, 31, 0x17CB70u);
    ctx->pc = 0x17CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB68u;
    // 0x17cb6c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC40u, 0x17CB68u, 0x17CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB70u;
label_17cb70:
    // 0x17cb70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x17cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb74:
    // 0x17cb74: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cb78: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x17cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cb7c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x17cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17cb80: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17cb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x17cb84: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x17cb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x17cb88: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x17cb88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x17cb8c: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x17cb8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x17cb90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17cb90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17cb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17cb98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cb9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17cb9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cba0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x17cba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17cba4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x17cba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cba8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17cba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17cbac: 0x3e00008  jr          $ra
    ctx->pc = 0x17CBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBACu;
        // 0x17cbb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CBB4u;
    // 0x17cbb4: 0x0  nop
    ctx->pc = 0x17cbb4u;
    // NOP
    ctx->pc = 0x17cbb8u;
}
