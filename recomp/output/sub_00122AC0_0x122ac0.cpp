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

// Function: sub_00122AC0
// Address: 0x122ac0 - 0x122b78
void sub_00122AC0_0x122ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122AC0_0x122ac0");
#endif

    switch (ctx->pc) {
        case 0x122b08u: goto label_122b08;
        case 0x122b18u: goto label_122b18;
        case 0x122b40u: goto label_122b40;
        default: break;
    }

    ctx->pc = 0x122ac0u;

    // 0x122ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122ac8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122acc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ad0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122ad4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ad8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122adc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x122adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ae0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x122ae4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x122ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ae8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x122ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122aec: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x122aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122af0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x122af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x122af4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x122af4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122af8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122afc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x122afcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x122b00: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122B00u;
    SET_GPR_U32(ctx, 31, 0x122B08u);
    ctx->pc = 0x122B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B00u;
    // 0x122b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122B00u, 0x122B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B08u;
label_122b08:
    // 0x122b08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x122B08u;
    {
        const bool branch_taken_0x122b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B08u;
        // 0x122b0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b08) {
            ctx->pc = 0x122B4Cu;
            goto label_122b4c;
        }
    }
    ctx->pc = 0x122B10u;
    // 0x122b10: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122B10u;
    SET_GPR_U32(ctx, 31, 0x122B18u);
    ctx->pc = 0x122B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B10u;
    // 0x122b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122B10u, 0x122B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B18u;
label_122b18:
    // 0x122b18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x122B18u;
    {
        const bool branch_taken_0x122b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B18u;
        // 0x122b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b18) {
            ctx->pc = 0x122B48u;
            goto label_122b48;
        }
    }
    ctx->pc = 0x122B20u;
    // 0x122b20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x122b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b2c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x122b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122b30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122b34: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x122b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b38: 0xc048b0c  jal         func_122C30
    ctx->pc = 0x122B38u;
    SET_GPR_U32(ctx, 31, 0x122B40u);
    ctx->pc = 0x122B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B38u;
    // 0x122b3c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C30u, 0x122B38u, 0x122B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B40u;
label_122b40:
    // 0x122b40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122B40u;
    {
        const bool branch_taken_0x122b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B40u;
        // 0x122b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b40) {
            ctx->pc = 0x122B50u;
            goto label_122b50;
        }
    }
    ctx->pc = 0x122B48u;
label_122b48:
    // 0x122b48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122b4c:
    // 0x122b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122b50:
    // 0x122b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122b54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122b58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122b5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122b60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122b60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122b64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x122b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122b68: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x122b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x122B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B6Cu;
        // 0x122b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122B74u;
    // 0x122b74: 0x0  nop
    ctx->pc = 0x122b74u;
    // NOP
    ctx->pc = 0x122b78u;
}
